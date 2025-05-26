#include "RegisterBicycle.h"
#include "UserSession.h"
#include "Bicycle.h"
#include "BicycleCollection.h"
#include "User.h"

/**
 * @brief RegisterBicycle 클래스 생성자
 * 이 클래스는 UserSession과 BicycleCollection의 싱글턴 인스턴스를 초기화
 */
RegisterBicycle::RegisterBicycle() {
    this->userSession = &UserSession::getInstance();
    this->bicycleCollection = &BicycleCollection::getInstance();
}

/**
 * @brief 자전거를 등록하는 함수
 * @param id 자전거 ID
 * @param name 자전거 이름
 * @return 등록된 자전거의 ID와 이름을 포함한 문자열, 또는 오류 메시지
 */
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

    return id + " " + name + "\n";
}