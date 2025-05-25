#pragma once
#include "User.h"
#include <vector>
#include <string>

using namespace std;

class BicycleCollection {
private:
    vector<Bicycle*> bicycleList;

public:
    BicycleCollection();
    void addNewBicycle(Bicycle* bicycle);
    Bicycle* findBicycleById(const string& id);
};