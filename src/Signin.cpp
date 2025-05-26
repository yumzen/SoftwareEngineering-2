#include "Signin.h"
#include "UserCollection.h"
#include "UserSession.h"

/**
 * @brief Signin 클래스 생성자
 * 이 클래스는 UserCollection과 UserSession의 싱글턴 인스턴스를 초기화
 */
Signin::Signin() {
    this->userCollection = &UserCollection::getInstance();
    this->userSession = &UserSession::getInstance();
}

/**
 * @brief 사용자 로그인 함수
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @return 로그인 성공 시 사용자 ID와 비밀번호의 튜플, 실패 시 빈 튜플
 */
tuple<string, string> Signin::signin(const string& id, const string& password) {
    User* user = userCollection->findUserById(id);

    if (id == "admin" && password == "admin") {
        userSession->signin(user);
        return make_tuple("admin", "admin");
    }

    if (User::GENERAL) {
        userSession->signin(user);
        return make_tuple(id, password);
    }

    return make_tuple("", "");
}