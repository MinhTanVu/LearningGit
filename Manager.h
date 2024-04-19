#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "EngineerRepository.h"
class Manager : public Employee
{
private:
    /* data */
    EngineerRepository engineerRepository;

public:

    Manager(int id, std::string name, double salary);

    ~Manager();

    void hireNewEngineer(Engineer engineer);

    void fireEngineer(int id);

    void increaseSalaryForEngineer(int id, double newSalary);
    std::vector<Engineer> giveManagerList();

    std::string working() override;
};





#endif