#include "UserSession.h"

/**
 * @brief UserSession 클래스 생성자
 * 이 클래스는 현재 사용자 세션을 관리하며, 싱글턴 패턴을 사용하여 인스턴스를 생성
 */
UserSession::UserSession() : currentUser(nullptr) {}

/**
 * @brief UserSession 클래스의 싱글턴 인스턴스를 반환하는 함수
 * @return UserSession의 인스턴스
 */
UserSession& UserSession::getInstance() {
    static UserSession instance;
    return instance;
}

/**
 * @brief 현재 사용자를 로그인하는 함수
 * @param user 로그인할 사용자 포인터
 * @return 로그인한 사용자 객체
 */
User UserSession::signin(User* user) 
{
    currentUser = user;
    return *currentUser;
}

/**
 * @brief 현재 사용자를 로그아웃하는 함수
 */
void UserSession::signout() 
{
    currentUser = nullptr;
}

/**
 * @brief 현재 로그인된 사용자를 반환하는 함수
 * @return 현재 사용자 포인터
 */
User* UserSession::getCurrentUser() const
{
    return currentUser;
}