#include "Manager.h"

Manager::Manager(int id, std::string name, double salary) : Employee(id, name, salary) {}

Manager::~Manager() {}

void Manager::hireNewEngineer(Engineer engineer) {
    engineerRepository.addNewEngineer(engineer);
}

void Manager::fireEngineer(int id) {
    engineerRepository.removeEngineer(id);
}

std::vector<Engineer> Manager::giveManagerList() {
    return engineerRepository.getEngineerList();
}

void Manager::increaseSalaryForEngineer(int id, double newSalary) {
    engineerRepository.changeSalary(id, newSalary);
}

std::string Manager::working() {
    return "Manage Project and Engineers";
}