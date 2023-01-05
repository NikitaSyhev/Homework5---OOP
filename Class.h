#pragma once
#include <string>
#include <iostream>
class Class
{public:
	Class(const std::string& name);
	Class();
	
	friend std::ostream& operator<< (std::ostream& out, const Class& point);


	std::string& getName();
	void setName(std::string name);

	const Class& operator+ ( Class& other);
	const std::string& operator-(Class& other);

	int operator*(int mum);

	int operator/(int num); // не реализовал

	bool operator==(Class& other);

	bool operator!=(Class& other);
	
	std::string operator+=(Class& other);


private:
	std::string _name;

};

