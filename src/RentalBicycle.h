#pragma once
#include <string>
using namespace std;

class UserSession;
class BicycleCollection;

/**
 * @brief RentalBicycle 클래스
 * 이 클래스는 자전거를 대여하는 기능을 제공
 * 사용자가 로그인되어 있고, 해당 자전거가 대여 가능한 상태일 때 대여할 수 있음
 */
class RentalBicycle {
private:
    UserSession* userSession; /// 현재 사용자 세션을 저장하는 포인터
    BicycleCollection* bicycleCollection; /// 자전거 컬렉션을 저장하는 포인터

public:
    RentalBicycle(); /// 생성자
    string rentalBicycle(const string& bicycleId); /// 자전거를 대여하는 함수
};