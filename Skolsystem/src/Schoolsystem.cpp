#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		std::cout << "Välkommen till detta SkolSystem!, välj vad du vill göra!" << "\n";
		std::cout << "1. Lägg till en elev" << "\n";
		std::cout << "2. Ta bort elev" << "\n";
		std::cout << "3. Skapa en klass" << "\n";
		std::cout << "3. Flytta Student" << "\n";
		std::cout << "4. Avsluta Programmet" << "\n";
	    
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
			AddStudent (name, age, SchoolClass);
			
			break;

		case 2:
			std::cin.get();
			RemoveStudent();

			break;

		case 3:
			std::cin.get();
			AddClass(classname);
			break;

		case 4:
			return;
			break;



		}
		
		
		

		
	}
}

void SchoolSystem::AddStudent(std::string name, int age, std::string SchoolClass)
{
	Student student;

	student.name = name;

	std::cout << "Skriv in elevens namn" << "\n";
	std::getline(std::cin, name);
	std::cout << "Skriv in elevens ålder" << "\n";
	std::cin >> age;
	std::cout << "What Class do you want to add " + name + " to?";
	std::cin >> SchoolClass;

	for (auto j : schoolClasses)
	{
		if (SchoolClass == j)
		{

		}
	}




	
	student.age = age;
	students.push_back(student);
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

void SchoolSystem::AddClass(std::string ClassName)
{


	std::cout << "Vad ska klassen heta ? " << "\n";
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
