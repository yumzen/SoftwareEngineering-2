#include "RentalBicycle.h"
#include "UserSession.h"
#include "BicycleCollection.h"
#include "Bicycle.h"
#include "User.h"

RentalBicycle::RentalBicycle() {
    this->userSession = &UserSession::getInstance();
    this->bicycleCollection = &BicycleCollection::getInstance();
}

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