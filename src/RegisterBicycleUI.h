#pragma once
#include <iostream>
#include "RegisterBicycle.h"
using namespace std;

class RegisterBicycle;

class RegisterBicycleUI {
private:
    RegisterBicycle registerBicycle;

public:
    RegisterBicycleUI();
    void startInterface();
    void registerBicycleUI(const string& input);
};