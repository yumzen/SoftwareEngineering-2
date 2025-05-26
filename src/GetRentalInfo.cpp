#include "GetRentalInfo.h"
#include "UserSession.h"
#include "User.h"
#include "Bicycle.h"

GetRentalInfo::GetRentalInfo() {
    this->userSession = &UserSession::getInstance();
}

vector<Bicycle*> GetRentalInfo::getRentalBicycleList() {
    if (userSession == nullptr || userSession->getCurrentUser() == nullptr) {
        return {};
    }

    return userSession->getCurrentUser()->getRentalBicycleList();
}