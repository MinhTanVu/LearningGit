#include "EngineerRepository.h"

EngineerRepository::EngineerRepository() {}

EngineerRepository::~EngineerRepository() {}

void EngineerRepository::addNewEngineer(Engineer engineer) {
    engineerList.push_back(engineer);
}

void EngineerRepository::removeEngineer(int id) {
    for (int i = 0; i < engineerList.size(); i++) {
        if(engineerList[i].getId() == id) {
            engineerList.erase(engineerList.begin() + i);
        }
    }
}

std::vector<Engineer> EngineerRepository::getEngineerList() {
    return engineerList;
}

void EngineerRepository::changeSalary(int id, double newSalary) {
    for (int i = 0; i < engineerList.size(); i++) {
        if(engineerList[i].getId() == id) {
            engineerList[i].setSalary(newSalary);
        }
    } 
}

