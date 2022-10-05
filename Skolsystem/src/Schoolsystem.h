#pragma once
#include "Student.h"
#include "SchoolClasses.h"
#include <vector>
#include <iostream>




class SchoolSystem
{
    public:
	void Run();
	void AddStudent();
	void RemoveStudentFromClass();
	void RemoveStudent();
	void AddClass();
	void InfoStudent();
	void AddStudentToClass();
	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
	
};