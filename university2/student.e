note
	description: "Summary description for {STUDENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT

inherit
	PERSON

create
	make

feature -- setter
	set_matriculation_number (new_number: STRING)
		do
			matriculation_number := new_number
		end

feature -- access
	matriculation_number: STRING

end
