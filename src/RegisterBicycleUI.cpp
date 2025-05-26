#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <sstream>
#include <fstream>
#include "WriteFile.h"

RegisterBicycleUI::RegisterBicycleUI() : registerBicycle() {}

void RegisterBicycleUI::startInterface() {
    writeFile("3.1. 자전거 등록\n");
}

void RegisterBicycleUI::registerWithBicycleInfo(const string& input) {
    istringstream iss(input);
    string id, manufacturer;
    iss >> id >> manufacturer;

    string result = registerBicycle.registerBicycle(id, manufacturer);

    writeFile("> " + result);
}