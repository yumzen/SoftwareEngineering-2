#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class RentalBicycle;

class RentalBicycleUI {
private:
    RentalBicycle& rentalBicycle;
public:
    RentalBicycleUI(RentalBicycle& rb) : rentalBicycle(rb) {}
    void startInterface();
    void rentalBicycleUI(std::string bicycleId);
};