#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Bicycle.h"

using namespace std;

/**
 * @brief User 클래스
 * 이 클래스는 사용자 정보를 관리하며, 자전거 대여 기능을 제공합니다.
 */
class User {
public:
    enum Role { GENERAL = 1, ADMIN = 2 }; /// 사용자 역할을 나타내는 열거형

private:
    string id; /// 사용자 ID
    string password; /// 사용자 비밀번호
    Role role; /// 사용자 역할 (일반 사용자 또는 관리자)
    string phoneNumber; /// 사용자 전화번호
    vector<Bicycle*> rentalBicycleList; /// 대여 중인 자전거 목록

public:
    User(string id, string password, Role role, string phoneNumber, vector<Bicycle*> rentalBicycleList = {}); /// 생성자
    string getId() const; /// 사용자 ID를 반환하는 함수
    string getRole() const; /// 사용자 역할을 반환하는 함수 (문자열 형태로 "admin" 또는 "general")
    void rentalBicycle(Bicycle* bicycle); /// 대여 중인 자전거를 추가하는 함수
    vector<Bicycle*> getRentalBicycleList() const; /// 대여 중인 자전거 목록을 반환하는 함수 (정렬된 벡터 형태)
    User createAdminUser(); /// 관리자 사용자 생성 함수
};