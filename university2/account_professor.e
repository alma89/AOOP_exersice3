note
	description: "Summary description for {ACCOUNT_PROFESSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT_PROFESSOR

inherit
	ACCOUNT
		rename
			make as make_account
		redefine	-- redefine/overwrite functions/constants/variables
			owner,
			set_owner,
			max_semester_ects
		end

create
	make

feature -- initialize
	make (professor: PROFESSOR)
		-- constructor calls constructor of inherited class
		do
			make_account(professor)
		end

feature -- setter

	set_owner (new_owner: PROFESSOR)
		do
			owner := new_owner
		end

feature -- access
	owner: PROFESSOR

feature -- constants
	max_semester_ects: DOUBLE
		once
			Result := 60
		end

end
