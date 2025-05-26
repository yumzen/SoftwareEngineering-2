#pragma once

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief 자전거 클래스
 * 이 클래스는 자전거의 ID, 상태, 제품 이름을 관리
 */
class Bicycle {
protected:
    string id; /// 자전거 ID
    bool bicycleStatus; /// 자전거 상태 (true: 사용 가능, false: 사용 불가)
    string productName; /// 제품 이름
public:
    Bicycle(string id, string productName); /// 생성자
    void setBicycleStatus(bool status); /// 자전거 상태 설정 함수
    bool getBicycleStatus(); /// 자전거 상태 반환 함수
    string getBicycleDetails() const; /// 자전거 상세 정보 반환 함수
};