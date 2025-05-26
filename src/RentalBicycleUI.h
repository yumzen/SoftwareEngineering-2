#pragma once
#include <iostream>
#include <string>
#include "RentalBicycle.h"
using namespace std;

class RentalBicycle;

class RentalBicycleUI {
private:
    RentalBicycle rentalBicycle; 

public:
    RentalBicycleUI();
    void startInterface();
    void rentalBicycleWithId(string bicycleId);
};