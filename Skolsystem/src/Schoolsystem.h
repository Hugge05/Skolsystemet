#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();


	void AddStudent(std::string name);
	void RemoveStudent();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};