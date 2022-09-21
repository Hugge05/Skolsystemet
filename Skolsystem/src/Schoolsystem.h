#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();


	void AddStudent();
	void RemoveStudent();
	void AddClass();
	void InfoStudent(std::string name, int age, std::string Class);
	void infoClass(int students);

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
	
};