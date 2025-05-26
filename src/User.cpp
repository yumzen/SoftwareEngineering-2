#include "User.h"

/**
 * @brief User 클래스 생성자
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @param role 사용자 역할 (일반 사용자 또는 관리자)
 * @param phoneNumber 사용자 전화번호
 * @param rentalBicycleList 대여 중인 자전거 목록
 * @note 대여 중인 자전거 목록은 기본적으로 빈 벡터로 초기화
 */
User::User(string id, string password, Role role, string phoneNumber, vector<Bicycle*> rentalBicycleList)
    : id(id), password(password), role(role), phoneNumber(phoneNumber), rentalBicycleList(rentalBicycleList) {}

/**
 * @brief 사용자 ID를 반환하는 함수
 * @return 사용자 ID
 */
string User::getId() const {
    return id;
}

/**
 * @brief 사용자 역할을 반환하는 함수
 * @return 사용자 역할 (문자열 형태로 "admin" 또는 "general")
 */
string User::getRole() const {
    return role == ADMIN ? "admin" : "general";
}

/**
 * @brief 대여 중인 자전거를 추가하는 함수
 * @param bicycle 대여할 자전거 포인터
 * @note nullptr 체크를 통해 유효한 자전거만 추가
 */
void User::rentalBicycle(Bicycle* bicycle) {
    if (bicycle != nullptr) {
        rentalBicycleList.push_back(bicycle);
    }
}

/**
 * @brief 대여 중인 자전거 목록을 반환하는 함수
 * @return 대여 중인 자전거 목록 (정렬된 벡터 형태)
 * @note 자전거 목록은 자전거의 상세 정보에 따라 정렬됨
 */
vector<Bicycle*> User::getRentalBicycleList() const {
    vector<Bicycle*> sortedList = rentalBicycleList;
    sort(sortedList.begin(), sortedList.end(), [](Bicycle* a, Bicycle* b) {
        return a->getBicycleDetails() < b->getBicycleDetails();
    });
    return sortedList;
}

/**
 * @brief 관리자 사용자 생성 함수
 * @return 관리자 역할을 가진 User 객체
 * @note ID와 비밀번호는 "admin"으로 고정, 전화번호는 "010-0000-0000"
 */
User User::createAdminUser() {
    return User("admin", "admin", ADMIN, "010-0000-0000");
}