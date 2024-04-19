#ifndef ENGINEER_REPOSITORY_H
#define ENGINEER_REPOSITORY_H

#include "Engineer.h"
#include <vector>

class EngineerRepository
{
private:
    /* data */
    std::vector<Engineer> engineerList;
public:
    EngineerRepository();
    ~EngineerRepository();

    void addNewEngineer(Engineer engineer);

    void removeEngineer(int id);

    void changeSalary(int id, double newSalary);
    std::vector<Engineer> getEngineerList();
};

#endif