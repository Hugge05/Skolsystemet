#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();


	void AddStudent(std::string name, int age);
	void RemoveStudent();
	void AddClass(std::string ClassName);
	void InfoStudent(std::string name, int age, std::string Class);

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
	
};