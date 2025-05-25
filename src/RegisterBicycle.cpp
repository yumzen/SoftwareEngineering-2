#include "RegisterBicycle.h"
#include "UserSession.h"
#include "Bicycle.h"
#include "BicycleCollection.h"
#include "User.h"

RegisterBicycle::RegisterBicycle(UserSession* us, BicycleCollection* bc)
    : userSession(us), bicycleCollection(bc) {}

string RegisterBicycle::registerBicycle(const string& id, const string& name) {
    if (userSession == nullptr || userSession->getCurrentUser() == nullptr) {
        return "로그인된 사용자가 없습니다.";
    }

    User* currentUser = userSession->getCurrentUser();

    if (currentUser->getRole() != "admin") {
        return "권한이 없습니다.";
    }

    Bicycle* bicycle = new Bicycle(id, name);
    bicycleCollection->addNewBicycle(bicycle);

    return id + " " + name;
}