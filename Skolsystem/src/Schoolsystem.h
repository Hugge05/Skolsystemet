#pragma once
#include "Student.h"
#include <vector>
#include <iostream>
#include "SchoolClasses.h"



class SchoolSystem
{
public:
	void Run();


	void AddStudent();
	void RemoveStudentFromClass();
	void AddClass();
	void InfoStudent();
	void infoClass(int students);
	void AddStudentToClass();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
	
};