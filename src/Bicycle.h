#pragma once

#include <iostream>
#include <string>

using namespace std;

class Bicycle {
protected:
    string id;
    string type;
    bool bicycleStatus;
public:
    Bicycle(string id, string type);
    void setBicycleStatus(bool status);
    string getBicycleDetails() const;
};