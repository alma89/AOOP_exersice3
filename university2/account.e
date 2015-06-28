note
	description: "Summary description for {ACCOUNT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT

inherit
	ANY
		redefine
			out
		end

create
	make

feature -- initialize
	make (new_owner: PERSON)
		-- constructor
		do
			set_owner (new_owner)
			create subjects.make_empty
		end



feature -- setter
	set_owner (new_owner: PERSON)
		do
			owner := new_owner
		end

	set_ectsnumber (new_ectsnumber: DOUBLE)
		do
			ectsnumber := new_ectsnumber
		end

	add_subject (new_subject: SUBJECT)
		do
			subjects.force(new_subject,subjects.upper+1)
			ectsnumber:=ectsnumber+new_subject.ects
			ensure
				add_subject_ok: ectsnumber <= max_semester_ects
		end


feature -- accesss
	owner: PERSON
	ectsnumber: DOUBLE
	subjects: ARRAY[SUBJECT]
	newSubjects: ARRAY[SUBJECT]



feature -- element change
	unsubscribeSubject (new_subject: SUBJECT)
		require
			subject_ok: new_subject.ects >= min_subject_ects
		do
			ectsnumber := ectsnumber - new_subject.ects
			-- remove element from subjects array
			create newSubjects.make_empty
			across subjects as s_subject
						loop
							if not s_subject.item.name.is_equal (new_subject.name) then
								newSubjects.force(s_subject.item,newSubjects.upper+1)
							end
			   			end
			subjects.clear_all
			subjects.copy (newSubjects)
			ensure
				unsubscribe_ok: ectsnumber >= min_semester_ects
		end

	subscribeSubject (new_subject: SUBJECT)
		require
				subject_ok: new_subject.ects >= min_subject_ects
		do
			ectsnumber := ectsnumber + new_subject.ects
			subjects.force(new_subject,subjects.upper+1)
			ensure
				subscribe_ok: ectsnumber <= max_semester_ects
		end



feature -- constants
	min_subject_ects: DOUBLE
		once
			Result := 3.0
		end
	min_semester_ects: DOUBLE
		once
			Result := 8.0
		end
	max_semester_ects: DOUBLE
		once
			Result := 70.0
		end

feature --output
	out: STRING
		-- return the whole information of the account in a printable string
		do
			Result :=  "%N%NOwner: " + owner.name + "%N%NNumber of actual ECTS points: " + ectsnumber.out

			Result:= Result + "%N%NCURRENT SUBJECTS: %N"
					across subjects as s_subject
							loop
								Result := Result + s_subject.item.name + " ECTS:  " + s_subject.item.ects.out
								if not s_subject.is_last then
									Result := Result + "%N"
								end
				   			end
				   	Result := Result + "%N---------------------------------------------------------%N"
	   	end


invariant
	owner_ok: owner /= Void

end
