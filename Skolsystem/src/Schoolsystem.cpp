#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		// Start meny
		std::cout << "Welcome to the SchoolSystem Navigate via the numbers!" << "\n";
		std::cout << "1.Add a student to the class" << "\n";
		std::cout << "2. Remove a student" << "\n";
		std::cout << "3. Add a student to a class" << "\n";
		std::cout << "4. Create a School Class" << "\n";
		std::cout << "5. Information about students." << "\n";
		std::cout << "5. Move a student" << "\n";
		std::cout << "6. Exit the program" << "\n";
	    // Tar input för menyn
		int input;
		std::cin >> input;
		std::string name = "";
		int age{};
		std::string SchoolClass = "";
		std::string classname = "";
		switch (input)
		{
		case 1:
			std::cin.get();
			AddStudent ();
			
			break;

		case 2:
			std::cin.get();
			RemoveStudentFromClass();

			break;

		case 3: 

			std::cin.get();
			AddStudentToClass();
			break;

			
		case 4:
			std::cin.get();
			AddClass();
			break;
		case 5: 
			std::cin.get();
			InfoStudent();
			break;




		case 6:
			return;
			break;



		}
		
		
		

		
	}
}

void SchoolSystem::AddStudent()
{
	// Registrera en elev
	std::string SchoolClass = "";
	Student student;
	int age;
	std::string name = "";
	
	std::string schoolClass = "";
	std::cout << "Write the student's name" << "\n";
	std::getline(std::cin, name);
	student.name = name;
	
	std::cout << "Write the student's age" << "\n";
	std::cin >> age;
	std::cout << "You have registered " + name  << "\n";
	






		student.age = age;
		students.push_back(student);
	}


void SchoolSystem::RemoveStudentFromClass()
{
	std::string name = "";
	int age = 0;

	// Ta bort en elev från klassen
	
		std::cout << "Which Student do you want to remove? " << "\n";
		
		std::cin >> name;
		for (auto& i : students)
		{
			if (i.name == name)
			{
				
				if (i.SchoolClass == "")
				{
					std::cout << name << " Doesn't have a class " << "\n";
					return;
				}
				std::cout << name << " was removed from " << i.SchoolClass << "\n";
				i.SchoolClass = "";
				return;
			}
		}
	

}

void SchoolSystem::AddClass()
{
	// Skapa en SkolKlass
	std::string ClassName = "";
	std::cout << "What is the name of the School Class? " << "\n";
	std::getline(std::cin, ClassName);
		for (auto i : schoolClasses)
		{
			if (ClassName == i)
			{
				std::cout << "This Class already exists" << "\n";
				break;
				
			}
			else schoolClasses.push_back(ClassName);
		}
		std::cout << "You have added the class: " + ClassName + " You can now add students to the Class!" << "\n";

      
}
void SchoolSystem::AddStudentToClass()
{
	// Lägga till elev i en skolklass
	std::string name = "";
	std::string SchoolClass = "";
	std::cout << "Who do you want to add to the Class?" << "\n";
	std::cin >> name;

	std::cout << "What schoolClass do you want to add a student to?" << "\n";
	std::cin >> SchoolClass;
	for (auto classes : schoolClasses)
	{
		if (classes != SchoolClass)
			std::cout << "This Class does not exist." << "\n";
		break;
	}

	for (auto& student : students)
	{
		if (student.name == name)
		{
			student.SchoolClass = SchoolClass;
			std::cout << "You have added " + name + " to the Class " + SchoolClass << "\n";
			return;

		}
	}
}
void SchoolSystem::InfoStudent()
{
	
	
	
	std::cout << "Which student are you looking for ?" << "\n";
std::string name = "";
	std::cin >> name;
	std::cout << "print 1" << "\n";
	for (auto& i : students)
	{
		std::cout << "print 2 " << "\n";
		if (i.name == name)
		{
			if (i.name != name)
			{
				std::cout << "print 5" << "\n";
				std::cout << "This student does not exist." << "\n";

			}
			std::cout << "Student name: " + i.name << "\n";
			std::cout << "Print 3 " << "\n";
			std::cout << "Students age: " + i.age << "\n";
			std::cout << "Class: " + i.SchoolClass << "\n";
			return;
			
		}
		
		 
	     
	}
}

void SchoolSystem::infoClass(int students)
{

}


