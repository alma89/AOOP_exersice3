note
	description: "Summary description for {ACCOUNT_STUDENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT_STUDENT

inherit
	ACCOUNT
		rename
			make as make_account
		redefine	-- redefine/overwrite functions/constants/variables
			owner,
			set_owner,
			min_subject_ects
		end

create
	make

feature -- initialize
	make (student: STUDENT)
		-- constructor calls constructor of inherited class
		do
			make_account(student)
		end

feature -- setter

	set_owner (new_owner: STUDENT)
		do
			owner := new_owner
		end

feature -- access
	owner: STUDENT


feature -- constants
	min_subject_ects: DOUBLE
		once
			Result := 4
		end

end
