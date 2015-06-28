note
	description: "Summary description for {SUBJECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUBJECT

create
	make

feature --initialization
	make (new_name: STRING new_ects: DOUBLE)
		do
			set_name(new_name)
			set_ects(new_ects)
		end

feature -- setter
	set_name(new_name:STRING)
		do
			name := new_name
		end
	set_ects(new_ects:DOUBLE)
		do
			ects := new_ects
		end

feature --access
	name: STRING
	ects: DOUBLE
end
