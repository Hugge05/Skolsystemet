#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		std::cout << "V�lkommen till detta SkolSystem!, v�lj vad du vill g�ra!" << "\n";
		std::cout << "1. L�gg till en elev" << "\n";
		std::cout << "2. Ta bort elev" << "\n";
		std::cout << "3. Flytta Student" << "\n";
		std::cout << "4. Avsluta Programmet" << "\n";
	

		


	}
}

void SchoolSystem::AddStudent(std::string name)
{
	Student student;

	student.name = name;

	std::cout << "Skriv in elevens namn" << "\n";
	std::getline(std::cin, name);




	
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}