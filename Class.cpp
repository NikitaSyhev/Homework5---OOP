#include "Class.h"
#include <iostream>
#include <fstream>

Class::Class(const std::string& name): _name(name){}  // �����������
Class::Class() :_name("NoName"){}

std::string& Class::getName() {    // ������
    return _name;
}

void Class::setName(std::string name) {
    _name = name;
}





const Class& Class::operator+( Class& other) // ���������� ��������� +
{
    std::string str;
    str = _name + other.getName();
    return str;
}

const std::string& Class::operator-(Class& other) // ���������� ��������� -
{
    std::string str = other.getName();;
    return _name.substr(_name.size() - str.size());
}

/*const Class& Class::operator-(Class& other) // ���������� ��������� -, �� ����������
{
    // // O: insert return statement here
}*/

int Class::operator*(int num) // �������� * 
{
    int res;
    res = _name.size() * num;
    return res;
}

bool Class::operator==(Class& other) {
    return this->_name == other.getName();
}

bool Class::operator!=(Class& other)
{
    return!(this->_name == other.getName());
}



std::string Class::operator+=(Class& other) { // ���������� ��������� +=
    std::string str;
    str = _name += other.getName();
    return str;
}


int Class::operator/(int number) {
    int res = _name.size() / number;
    return res;
}

std::ostream& operator<<(std::ostream& out, const Class& point)
{
    out << point._name;
    return out;
}

