#include "Employee.h"

Employee::Employee(int id, std::string name, double salary) : id(id), name(name), salary(salary) {}

Employee::~Employee() {}

void Employee::setId(int id) {
    this->id = id;
}
int Employee::getId() {
    return id;
}

void Employee::setName(std::string name) {
    this->name = name;
}

std::string Employee::getName() {
    return name;
}

void Employee::setSalary(double salary) {
    this->salary=salary;
}
double Employee::getSalary() {
    return salary;
}

std::string Employee::working() {return "";}