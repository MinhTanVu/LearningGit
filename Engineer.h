#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include <string>

class Engineer : public Employee 
{
private:
    /* data */

public:

    Engineer(int id, std::string name, double salary);

    ~Engineer();

    std::string working() override;
};




#endif