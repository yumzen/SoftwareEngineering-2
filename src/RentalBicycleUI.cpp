#include "RentalBicycleUI.h"
#include "RentalBicycle.h"
#include "WriteFile.h"

void RentalBicycleUI::startInterface() {
    writeFile("4.1. 자전거 대여");
}

void RentalBicycleUI::rentalBicycleUI(string bicycleId) {
    stringstream ss(bicycleId);
    string id;
    ss >> id;
    string result = rentalBicycle.rentalBicycle(id);
    writeFile("> " + result);
}