#include "UserCollection.h"

/**
 * @brief UserCollection 클래스 생성자
 * 이 클래스는 사용자 컬렉션을 초기화하고, 기본 관리자 계정을 생성
 */
UserCollection::UserCollection() {
    if (this->findUserById("admin") == nullptr) {
        User* admin = new User("admin", "admin", User::ADMIN, "000-0000-0000", {});
        this->addNewUser(admin);
    }
}

/**
 * @brief UserCollection 클래스의 싱글턴 인스턴스를 반환하는 함수
 * @return UserCollection의 인스턴스
 */
UserCollection& UserCollection::getInstance() {
    static UserCollection instance;
    return instance;
}

/**
 * @brief 새로운 사용자를 컬렉션에 추가하는 함수
 * @param user 추가할 사용자 포인터
 */
void UserCollection::addNewUser(User* user) {
    userList.push_back(user);
}

/**
 * @brief 사용자 ID로 사용자를 찾는 함수
 * @param id 찾을 사용자 ID
 * @return 해당 ID의 사용자 포인터, 없으면 nullptr
 */
User* UserCollection::findUserById(const string& id) {
    for (User* user : userList) {
        if (user->getId() == id) {
            return user;
        }
    }
    return nullptr;
}

/**
 * @brief 모든 사용자를 반환하는 함수
 * @return 사용자 목록을 포함하는 벡터
 */
const vector<User*>& UserCollection::getAllUsers() const {
    return userList;
}