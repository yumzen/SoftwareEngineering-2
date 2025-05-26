#pragma once
#include <iostream>
#include "RegisterBicycle.h"
using namespace std;

class RegisterBicycle;

/**
 * @brief RegisterBicycleUI 클래스
 * 이 클래스는 RegisterBicycle 객체를 사용하여 자전거 등록 인터페이스를 제공
 */
class RegisterBicycleUI {
private:
    RegisterBicycle registerBicycle; /// RegisterBicycle 객체를 사용하여 자전거 등록 기능을 관리

public:
    RegisterBicycleUI(); /// 생성자
    void startInterface(); /// 자전거 등록 인터페이스를 시작하는 함수
    void registerWithBicycleInfo(const string& input); /// 자전거 정보를 입력받아 등록하는 함수
};