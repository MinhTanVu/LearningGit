#include "Manager.h"
#include "Display.h"

int main() {
    Display display;
    Manager manager(1,"Khanh",3500.5);
    display.showManagerInfo(manager);
    Engineer engineer1(1,"Tan",1000.5);
    Engineer engineer2(2,"Toan",1500.3);
    Engineer engineer3(3,"Tuan",1450.8);
    manager.hireNewEngineer(engineer1);
    manager.hireNewEngineer(engineer2);
    manager.hireNewEngineer(engineer3);
    display.showEngineerInfo(manager.giveManagerList());
    //
    manager.fireEngineer(2);
    display.showEngineerInfo(manager.giveManagerList());
    //
    manager.increaseSalaryForEngineer(1,1500);
    display.showEngineerInfo(manager.giveManagerList());

    
}