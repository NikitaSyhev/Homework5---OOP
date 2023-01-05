//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Class.h"

int main() {
	setlocale(LC_ALL, "Russian");
	


	Class person("Vova");
	Class person1("Andrey");
	std::cout << "Person name = " << person.getName() << std::endl;
	
	
	std::cout << "Результат работы оператора '+': " << person.getName() + person1.getName() << std::endl;


//std::cout << "Результат работы оператора '-': " << person.getName() - person1.getName()  << std::endl;

	std::cout << "Результат работы оператора '*': " << person * 2 << std::endl;

	std::cout << "Результат работы оператора '/': "<< person / 2 << std::endl;
	
	
	std::cout << "Результат работы оператора '==': " << (person == person1) << std::endl;

	std::cout << "Результат работы оператора '!=': " << (person != person1) << std::endl;
	std::string test;
	test = person += person1;

	std::cout << "Результат работы оператора '+=' " << test << std::endl;

	//std::cout << "Результат работы оператора '<<' " << person << std::endl;
















	return 0;
}