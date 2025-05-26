#include "GetRentalInfoUI.h"
#include "Bicycle.h"
#include "WriteFile.h"
#include <iostream>

/**
 * @brief GetRentalInfoUI 클래스 생성자
 * 이 클래스는 GetRentalInfo 객체를 초기화
 */
GetRentalInfoUI::GetRentalInfoUI() : getRentalInfo() {}


/**
 * @brief 대여 자전거 정보를 출력하는 인터페이스를 시작하는 함수
 * 현재 사용자의 대여 자전거 목록을 가져와서 출력
 */
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