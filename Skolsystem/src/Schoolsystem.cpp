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

		std::string classname = "";
		switch (input)
		{
		case 1:
			std::cin.get();
			AddStudent (name, age);
			
			break;

		case 2:
			std::cin.get();
			RemoveStudent();

			break;

		case 3:
			std::cin.get();
			AddClass(classname);
		}
		
		

		
	}
}

void SchoolSystem::AddStudent(std::string name, int age)
{
	Student student;

	student.name = name;

	std::cout << "Skriv in elevens namn" << "\n";
	std::getline(std::cin, name);
	std::cout << "Skriv in elevens ålder" << "\n";
	std::cin >> age;





	
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

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
		
      
}

void SchoolSystem::InfoStudent(std::string name, int age, std::string Class)
{

}
