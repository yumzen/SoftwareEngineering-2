#pragma once
#include "User.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @brief 자전거 컬렉션 클래스
 * 이 클래스는 자전거 객체를 관리하는 싱글턴 패턴을 사용한 컬렉션 클래스
 */
class BicycleCollection {
private:
    vector<Bicycle*> bicycleList; /// 자전거 객체를 저장하는 벡터
    BicycleCollection(); /// 생성자 (private으로 설정하여 외부에서 인스턴스 생성 방지)
public:
    static BicycleCollection& getInstance(); /// 싱글턴 인스턴스를 반환하는 함수
    void addNewBicycle(Bicycle* bicycle); /// 새로운 자전거를 컬렉션에 추가하는 함수
    Bicycle* findBicycleById(const string& id); /// 자전거 ID로 자전거를 찾는 함수
};