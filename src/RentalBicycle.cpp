#include "RentalBicycle.h"
#include "UserSession.h"
#include "BicycleCollection.h"
#include "Bicycle.h"
#include "User.h"

/**
 * @brief RentalBicycle 클래스 생성자
 * 이 클래스는 UserSession과 BicycleCollection의 싱글턴 인스턴스를 초기화
 */
RentalBicycle::RentalBicycle() {
    this->userSession = &UserSession::getInstance();
    this->bicycleCollection = &BicycleCollection::getInstance();
}

/**
 * @brief 자전거를 대여하는 함수
 * @param bicycleId 대여할 자전거의 ID
 * @return 대여 성공 시 자전거의 상세 정보, 실패 시 오류 메시지
 */
string RentalBicycle::rentalBicycle(const string& bicycleId) {
    if (userSession == nullptr || userSession->getCurrentUser() == nullptr) {
        return "로그인한 사용자만 대여할 수 있습니다.";
    }

    Bicycle* bicycle = bicycleCollection->findBicycleById(bicycleId);
    if (bicycle == nullptr) {
        return "해당 ID의 자전거가 존재하지 않습니다.";
    }

    if (bicycle->getBicycleStatus()) {
        return "해당 자전거는 이미 대여 중입니다.";
    }

    bicycle->setBicycleStatus(true);
    userSession->getCurrentUser()->rentalBicycle(bicycle);

    return bicycle->getBicycleDetails();
}