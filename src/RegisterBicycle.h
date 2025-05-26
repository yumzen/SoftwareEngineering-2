#pragma once
#include <string>
using namespace std;

class UserSession;
class BicycleCollection;

/**
 * @brief RegisterBicycle 클래스
 * 이 클래스는 자전거를 등록하는 기능을 제공
 * 사용자가 로그인되어 있고, 관리자 권한이 있는 경우에만 자전거를 등록할 수 있음
 */
class RegisterBicycle {
private:
    UserSession* userSession; /// 현재 사용자 세션을 저장하는 포인터
    BicycleCollection* bicycleCollection; /// 자전거 컬렉션을 저장하는 포인터

public:
    RegisterBicycle(); /// 생성자
    string registerBicycle(const string& id, const string& name); /// 자전거를 등록하는 함수
};