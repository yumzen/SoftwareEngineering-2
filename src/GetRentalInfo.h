#pragma once
#include <vector>
using namespace std;

class Bicycle;
class UserSession;

/**
 * @brief GetRentalInfo 클래스
 * 이 클래스는 현재 사용자 세션을 가져와서 대여 자전거 목록을 관리
 */
class GetRentalInfo {
private:
    UserSession* userSession; /// 현재 사용자 세션을 저장하는 포인터

public:
    GetRentalInfo(); /// 생성자
    vector<Bicycle*> getRentalBicycleList(); /// 현재 사용자의 대여 자전거 목록을 반환하는 함수
};