#pragma once
#include <iostream>
#include <string>
#include "RentalBicycle.h"
using namespace std;

class RentalBicycle;

/**
 * @brief RentalBicycleUI 클래스
 * 이 클래스는 RentalBicycle 객체를 사용하여 자전거 대여 인터페이스를 제공
 */
class RentalBicycleUI {
private:
    RentalBicycle rentalBicycle; /// RentalBicycle 객체를 사용하여 자전거 대여 기능을 관리

public:
    RentalBicycleUI(); /// 생성자
    void startInterface(); /// 자전거 대여 인터페이스를 시작하는 함수
    void rentalBicycleWithId(string bicycleId); /// 자전거 ID를 입력받아 대여하는 함수
};