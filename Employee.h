#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
private:
    /* data */
    int id; 
    std::string name;
    double salary;

public:
    Employee(int id, std::string name, double salary);
    ~Employee();

    void setId(int id);
    int getId();

    void setName(std::string name);
    std::string getName();

    void setSalary(double salary);
    double getSalary();

    virtual std::string working();
};

#endif