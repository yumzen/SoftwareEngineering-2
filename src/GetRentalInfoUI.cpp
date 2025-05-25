#include "GetRentalInfoUI.h"
#include "Bicycle.h"

void GetRentalInfoUI::startInterface() {
    cout << "4.2 대여한 자전거 목록 조회" << endl;

    vector<Bicycle*> list = getRentalInfo.getRentalBicycleList();
    if (list.empty()) {
        cout << "현재 대여 중인 자전거가 없습니다." << endl;
        return;
    }

    for (Bicycle* b : list) {
        cout << "> " << b->getBicycleDetails() << endl;
    }
}