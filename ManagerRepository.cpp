#include "ManagerRepository.h"

ManagerRepository::ManagerRepository(/* args */)
{}

ManagerRepository::~ManagerRepository()
{}


void ManagerRepository::addNewManager(Manager manager) {
    managerList.push_back(manager);
}
std::vector<Manager> ManagerRepository::getManagerList() {
    return managerList;
}