#include "GetRentalInfoUI.h"
#include "Bicycle.h"
#include "WriteFile.h"
#include <iostream>

GetRentalInfoUI::GetRentalInfoUI() : getRentalInfo() {}

void GetRentalInfoUI::startInterface() {
    writeFile("5.1. 자전거 대여 리스트\n");

    vector<Bicycle*> list = getRentalInfo.getRentalBicycleList();
    if (list.empty()) {
        writeFile("> 현재 대여 중인 자전거가 없습니다.");
        return;
    }

    for (Bicycle* b : list) {
        writeFile("> " + b->getBicycleDetails() + "\n");
    }
}