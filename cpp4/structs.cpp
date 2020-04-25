// Structures are basically a light version of a class which allows to define more complex data structure that properties on (student with name, age, etc.)
#include <iostream>



int main() {
	struct student {
		//char name[15];
		std::string name;
		float age;
		float height;		
	};

	//char name[15]; // different than "name" variable in "students" struct

	student s1;
	std::cout << "Please input your name: ";
	std::cin >> s1.name;

	//student s1;
	//strcpy(s1.name, name); // char arrays are not assignable
	s1.age = 26;
	s1.height = 160;

	std::cout << "\n" << std::endl;
	std::cout << "Output" << std::endl;
	std::cout << "\tName: " << s1.name << std::endl;
	std::cout << "\tAge: " << s1.age << std::endl;
	std::cout << "\tHeight: " << s1.height << std::endl;
}