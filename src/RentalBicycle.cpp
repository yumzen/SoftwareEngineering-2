#include "RentalBicycle.h"
#include "UserSession.h"
#include "BicycleCollection.h"
#include "Bicycle.h"

string RentalBicycle::rentalBicycle(const string& bicycleId) {
    // 대여 가능 여부 확인, 사용자 세션 확인 등
    if (userSession == nullptr || userSession->getCurrentUser() == nullptr) {
        return "로그인한 사용자만 대여할 수 있습니다.";
    }

    Bicycle* bicycle= bicycleCollection->findBicycleById(bicycleId);
    if (bicycle == nullptr) {
        return "해당 ID의 자전거가 존재하지 않습니다.";
    }

    if (bicycle->getBicycleStatus() == true) {
        return "해당 자전거는 이미 대여 중입니다.";
    }

    // 자전거 대여 처리
    bicycle->setBicycleStatus(true);
    userSession->getCurrentUser()->rentalBicycle(bicycle);
    RentalBicycle* rentalBicycle = new RentalBicycle(userSession, bicycleCollection);

    return bicycle->getBicycleDetails();
}