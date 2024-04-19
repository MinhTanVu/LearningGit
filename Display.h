#include <iostream>
#include <string>

#include "Manager.h"

class Display
{
private:
    /* data */
public:
    Display();
    ~Display();

    void showManagerInfo(Manager manager);

    void showEngineerInfo(std::vector<Engineer> engineerList);
};


