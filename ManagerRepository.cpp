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

void ManagerRepository::removeManager(int id) {
    for (int i = 0; i < managerList.size(); i++) {
        if (managerList[i].getId() == id) {
            managerList.erase(managerList.begin() + i);
        }
    }
}