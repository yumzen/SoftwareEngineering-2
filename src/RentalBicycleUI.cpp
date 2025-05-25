#include "RentalBicycleUI.h"
#include "RentalBicycle.h"

void RentalBicycleUI::startInterface() {
    cout << "4.1 자전거 대여" << endl;
}

void RentalBicycleUI::rentalBicycleUI(string bicycleId) {
    stringstream ss(bicycleId);
    string id;
    ss >> id;
    string result = rentalBicycle.rentalBicycle(id);
    cout << result << endl;
}