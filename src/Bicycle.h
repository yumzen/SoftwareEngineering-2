#pragma once

#include <iostream>
#include <string>

using namespace std;

class Bicycle {
protected:
    string id;
    bool bicycleStatus;
    string productName;
public:
    Bicycle(string id, string productName);
    void setBicycleStatus(bool status);
    string getBicycleDetails() const;
};