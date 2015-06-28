note
	description: "Summary description for {PROFESSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PROFESSOR

inherit
	PERSON

create
	make

feature -- setter
	set_employee_number (new_number: STRING)
		do
			employee_number := new_number
		end

feature -- access
	employee_number: STRING


end

