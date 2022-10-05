#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
	// Start meny
	std::cout << "Welcome to the SchoolSystem Navigate via the numbers!" << "\n";
    std::cout << "1.Add a student to the system" << "\n";
	std::cout << "2. Remove a student from a class" << "\n";
	std::cout << "3. Remove a student from the system" << "\n";
	std::cout << "4. Add a student to a class" << "\n";
	std::cout << "5. Create a School Class" << "\n";
	std::cout << "6. Information about students." << "\n";
    std::cout << "7. Exit the program" << "\n";
	// Tar input för menyn
	int input;
	std::cin >> input;
	std::string name = "";
	
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
		RemoveStudent();
	break;
	case 4: 
	std::cin.get();
	AddStudentToClass();
	break;
	case 5:
		std::cin.get();
		AddClass();
		break;
	case 6: 
		std::cin.get();
		InfoStudent();
	break;
	case 7:
		return;
	break;
		}
	}
}

void SchoolSystem::AddStudent()
{
	// Register a student
	Student student;
	int age = 0;
	std::string name = "";
	std::string schoolClass = "";
	// asking what the name of the student is.
	std::cout << "Write the student's name" << "\n";
	std::getline(std::cin, name);
	student.name = name;
	// asking what the students age is.
	std::cout << "Write the student's age" << "\n";
	std::cin >> age;
	// telling the user that they have registered the student.
	std::cout << "You have registered " + name  << "\n";
	student.age = age;
	students.push_back(student);
	}

void SchoolSystem::RemoveStudentFromClass()
{
	std::string name = "";
	int age = 0;
	// removing a student from a class.
	// asking which student the user wants to remove.
	std::cout << "Which Student do you want to remove? " << "\n";
	std::cin >> name;
	// looking for existing users.
	for (auto& i : students)
		{
		if (i.name == name)
	{
			// if the student does not have a class
		 if (i.SchoolClass == "")
	{ 
			// this will print out.
			std::cout << name << " Doesn't have a class " << "\n";
			return;
	}
	// printing this out if the student exist and making the student removed from the class.
	std::cout << name << " was removed from " << i.SchoolClass << "\n";
	i.SchoolClass = "";
	return;
	}
 }
}

void SchoolSystem::RemoveStudent()
{
	// remove a student from the systsem.
	std::cout << "Which student do you want to remove from the system?" << "\n";
	std::string name = "";
	std::cin >> name;
	// checking for existing student.
    for (auto& i : students)
	{
	// if the input 
		if (name == i.name)
	{
			i.name = "[Removed]";
			i.age = 0;
			i.SchoolClass = "Deleted user.";
	}
    }
}

void SchoolSystem::AddClass()
{
	// create a schoolclass
	std::string ClassName = "";
	// what should be the name of the schoolclas.
	std::cout << "What is the name of the School Class? " << "\n";
	std::getline(std::cin, ClassName);
	for (auto i : schoolClasses)
	{
		if (ClassName == i)
	{
			//checks if the schoolclass already exists and prints this out if 
			std::cout << "This Class already exists" << "\n";
			break;	
	}
		else 
		{
			schoolClasses.push_back(ClassName);
			std::cout << "You have added the class: " + ClassName + " You can now add students to the Class!" << "\n";
		}
	}
			std::cout << "You have added the class: " + ClassName + " You can now add students to the Class!" << "\n";

}
void SchoolSystem::AddStudentToClass()
{
	// add a student to a class
	std::string name = "";
	std::string SchoolClass = "";
	// asking who the user wants to add to the class.
	std::cout << "Who do you want to add to the Class?" << "\n";
	std::cin >> name;
	// asking the user what class the user wants to add the student to
	std::cout << "What schoolClass do you want to add a student to?" << "\n";
	std::cin >> SchoolClass;
	//check if input is the same as an existing class.
	for (auto classes : schoolClasses)
	{
	// if the class does not exist this will print out 
		if (classes != SchoolClass)
	{
			std::cout << "This Class does not exist." << "\n";
	}
		break;
	}
	for (auto& student : students)
	{
	// check if the name the user is wanting to add to the class exists.
		if (student.name == name)
	{
			student.SchoolClass = SchoolClass;
			std::cout << "You have added " + name + " to the Class " + SchoolClass << "\n";
			return;
	}
	else if  (student.name != name)
	{
		// if the student does not exist this will print out.
		std::cout << "This student does not exist." << "\n";
	}
	}
}
void SchoolSystem::InfoStudent()
{
	// check information about student
	// Asking which student the user wants to check.
	std::cout << "Which student are you looking for ?" << "\n";
    std::string name = "";
	std::cin >> name;

	for (auto& i : students)
	{
	   if (i.name == name)
	{
			// print out their name age and schoolclass
			std::cout << "Student name: " + i.name << "\n";
			std::cout <<"Students age: " + i.age << "\n";
			std::cout << "Class: " + i.SchoolClass << "\n";
			break;
	} 
	else if (i.name != name)
	{
		// if the student doesn not exist this will print out to the user.
		std::cout << "This student does not exist." << "\n";
	}   
	}
}