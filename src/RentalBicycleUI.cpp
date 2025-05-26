#include "RentalBicycleUI.h"
#include "RentalBicycle.h"
#include "WriteFile.h"
#include <sstream>

/**
 * @brief RentalBicycleUI 클래스 생성자
 * 이 클래스는 RentalBicycle 객체를 초기화
 */
RentalBicycleUI::RentalBicycleUI() : rentalBicycle() {}


/**
 * @brief 자전거 대여 인터페이스를 시작하는 함수
 * 사용자에게 자전거 대여를 안내하는 메시지를 출력
 */
void RentalBicycleUI::startInterface() {
    writeFile("4.1. 자전거 대여\n");
}

/**
 * @brief 자전거 ID를 입력받아 대여하는 함수
 * @param bicycleId 사용자로부터 입력받은 자전거 ID
 */
void RentalBicycleUI::rentalBicycleWithId(string bicycleId) {
    stringstream ss(bicycleId);
    string id;
    ss >> id;
    string result = rentalBicycle.rentalBicycle(id);
    writeFile("> " + result+ "\n");
}