#ifndef MANAGER_REPOSITORY_H
#define MANAGER_REPOSITORY_H

#include "Manager.h"

class ManagerRepository
{
private:
    /* data */
    std::vector<Manager> managerList;
public:
    ManagerRepository(/* args */);
    ~ManagerRepository();

    void addNewManager(Manager manager);
    std::vector<Manager> getManagerList();
};






#endif