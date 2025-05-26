#include "GetRentalInfo.h"
#include "UserSession.h"
#include "User.h"
#include "Bicycle.h"

/**
 * @brief GetRentalInfo 클래스 생성자
 * 이 클래스는 현재 사용자 세션을 가져와서 대여 자전거 목록을 관리
 */
GetRentalInfo::GetRentalInfo() {
    this->userSession = &UserSession::getInstance();
}

/**
 * @brief 현재 사용자의 대여 자전거 목록을 반환하는 함수
 * @return 대여 자전거 목록을 포함하는 벡터
 */
vector<Bicycle*> GetRentalInfo::getRentalBicycleList() {
    if (userSession == nullptr || userSession->getCurrentUser() == nullptr) {
        return {};
    }

    return userSession->getCurrentUser()->getRentalBicycleList();
}