#include "Signout.h"
#include "UserSession.h"

/**
 * @brief Signout 클래스 생성자
 * 이 클래스는 UserSession의 싱글턴 인스턴스를 초기화
 */
Signout::Signout() {
    this->userSession = &UserSession::getInstance();
}

/**
 * @brief 사용자 로그아웃 함수
 * 현재 로그인된 사용자의 ID를 반환하고, 세션을 종료
 * @return 로그아웃한 사용자의 ID
 */
string Signout::signout() {
    string userId = userSession->getCurrentUser()->getId();
    userSession->signout();

    return userId;
}