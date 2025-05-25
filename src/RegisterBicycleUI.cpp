#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <sstream>
#include <fstream>

extern ofstream outputFile;

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& rb) : registerBicycle(rb) {}

void RegisterBicycleUI::startInterface() {
    cout << "3.1. 자전거 등록" << endl;
}

void RegisterBicycleUI::registerBicycleUI(const string& input) {
    istringstream iss(input);
    string id, manufacturer;
    iss >> id >> manufacturer;

    string result = registerBicycle.registerBicycle(id, manufacturer);

    cout << "> " << result << endl;
}