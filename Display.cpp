#include "Display.h"

Display::Display(/* args */)
{}

Display::~Display()
{}

void Display::showManagerInfo(Manager manager) {
    std::cout << "========= MANAGER ==========" << std::endl;
    std::cout << manager.getId() << "_" << manager.getName() << "_" << manager.getSalary() << "_" << manager.working() << std::endl;
}

void Display::showEngineerInfo(std::vector<Engineer> engineerList) {
    std::cout << "========= ENGINEER ==========" << std::endl;
    for (auto e : engineerList) {
        std::cout << e.getId() << "_" << e.getName() << "_" << e.getSalary() << "_" << e.working() << std::endl;
    }
}