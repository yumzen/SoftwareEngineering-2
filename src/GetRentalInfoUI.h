#pragma once
#include <iostream>
#include <fstream>
#include "GetRentalInfo.h"
using namespace std;

class GetRentalInfoUI {
private:
    GetRentalInfo& getRentalInfo;
public:
    GetRentalInfoUI(GetRentalInfo& gri) : getRentalInfo(gri) {}
    void startInterface();
};