#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		std::cout << "Välkommen till detta SkolSystem!, välj vad du vill göra!" << "\n";
		std::cout << "1.Add a student to the class" << "\n";
		std::cout << "2. Remove a student" << "\n";
		std::cout << "3. Create a School Class" << "\n";
		std::cout << "3. Move a student" << "\n";
		std::cout << "4. Exit the program" << "\n";
	    
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
			RemoveStudent();

			break;

		case 3:
			std::cin.get();
			AddClass();
			break;

		case 4:
			return;
			break;



		}
		
		
		

		
	}
}

void SchoolSystem::AddStudent( )
{
	std::string SchoolClass = "";
	Student student;
	int age;
	std::string name = "";
	student.name = name;
	std::string schoolClass = "";
	std::cout << "Write the student's name" << "\n";
	std::getline(std::cin, name);
	std::cout << "Write the student's age" << "\n";
	std::cin >> age;
	std::cout << "What Class do you want to add " + name + " to?" << "\n";
	std::cin >> SchoolClass;
 for (auto& classes : schoolClasses)
	{
		if (classes != SchoolClass) return;
	}

	for (auto& student : students)
	{
		if (student.name == name)
		{
			student.SchoolClass = SchoolClass;
			std::cout << "You have added " + name + " to the Class " + SchoolClass << "\n";
		}




		student.age = age;
		students.push_back(student);
	}
}

void SchoolSystem::RemoveStudent()
{
	std::string deleteStudent = "";
		std::cout << "Which Student do you want to remove? " << "\n";
		std::cin >> deleteStudent;
		for (auto i : students)
		{
			if (deleteStudent == i.name)
			{
				
				
			}
		}
	

}

void SchoolSystem::AddClass()
{

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

void SchoolSystem::InfoStudent(std::string name, int age, std::string Class)
{

}

void SchoolSystem::infoClass(int students)
{

}
