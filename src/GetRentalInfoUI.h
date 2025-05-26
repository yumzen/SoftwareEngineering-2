#pragma once
#include "GetRentalInfo.h"

/**
 * @brief GetRentalInfoUI 클래스
 * 이 클래스는 GetRentalInfo 객체를 사용하여 대여 자전거 정보를 출력하는 인터페이스를 제공
 */
class GetRentalInfoUI {
private:
    GetRentalInfo getRentalInfo; /// GetRentalInfo 객체를 사용하여 대여 자전거 정보를 관리

public:
    GetRentalInfoUI(); /// 생성자
    void startInterface(); /// 대여 자전거 정보를 출력하는 인터페이스를 시작하는 함수
};