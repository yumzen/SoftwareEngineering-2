#pragma once
#include <iostream>
using namespace std;

class RegisterBicycle;

class RegisterBicycleUI {
private:
    RegisterBicycle& registerBicycle;

public:
    RegisterBicycleUI(RegisterBicycle& rb);
    void startInterface();
    void registerBicycleUI(const string& input);
};