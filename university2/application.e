note
	description: "Summary description for {UNIVERSITY APPLICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			person: PERSON

			student: STUDENT
			student1: STUDENT

			professor: PROFESSOR

			account: ACCOUNT
			account_student: ACCOUNT_STUDENT
			account_professor: ACCOUNT_PROFESSOR

			account_cat_call: ACCOUNT

			subject1: SUBJECT
			subject2: SUBJECT
			subject3: SUBJECT
			subject4: SUBJECT
			subject5: SUBJECT
			subject6: SUBJECT
		do
			print ("%N%N******************      UNIVERSITY APPLICATION      ******************%N")

			-- create persons
			create person.make ("Philipp Skala")

			create student.make ("Thomas Muller")
			student.set_matriculation_number("075431")

			create professor.make ("Max Seebacher")
			professor.set_employee_number("0847568")

			-- create subjects
			create subject1.make ("Advanced Object Orineted Programming", 10)
			create subject2.make ("Advanced Software Engineering", 11)
			create subject3.make ("Statistics", 13)
			create subject4.make ("Discrete Mathematics", 17)
			create subject5.make ("Adanced Internet Computing", 4)
			create subject5.make ("Formal Methods", 18)

			-- person subscribes & ubsubscribes subjects
			create account.make (person)
			account.add_subject (subject1)
			account.add_subject (subject2)
			account.add_subject (subject3)
			account.unsubscribesubject (subject1)

			-- precondition of the subtype student gets stronger for min_subject_ects = 4
			create account_student.make (student)
			account_student.subscribesubject (subject2)
			account_student.subscribesubject (subject3)
			account_student.subscribesubject (subject4)


			-- postcondition of the subtype professor gets weaker for max_semester_ects = 60
			create account_professor.make (professor)
			account_professor.subscribesubject (subject1)
			account_professor.subscribesubject (subject2)
			account_professor.subscribesubject (subject3)
			account_professor.subscribesubject (subject5)

			-- print
			print(account.out)
			print(account_student.out)
			print(account_professor.out)

			-- create cat call
			print ("%N%N%NCat Call Exception: %N---------------------------------------------------------%N")
			account_cat_call := account_professor
			account_cat_call.set_owner (student)

			print(account_cat_call.out)

		end

end
