#include "Engineer.h"

Engineer::Engineer(int id, std::string name, double salary) : Employee(id, name, salary) {}

Engineer::~Engineer() {}

std::string Engineer::working() {
    return "Develope new functions";
}