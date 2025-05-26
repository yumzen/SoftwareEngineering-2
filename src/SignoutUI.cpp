#include "SignoutUI.h"
#include "UserSession.h"
#include "WriteFile.h"

/**
 * @brief SignoutUI 클래스 생성자
 * 이 클래스는 Signout 객체를 초기화
 */
SignoutUI::SignoutUI() : signout() {}

/**
 * @brief 로그아웃 인터페이스를 시작하는 함수
 * 사용자에게 로그아웃 안내 메시지를 출력
 */
void SignoutUI::startInterface() {
    writeFile("2.2. 로그아웃\n");
}

/**
 * @brief 로그아웃 기능을 수행하는 함수
 * 현재 로그인된 사용자를 로그아웃하고 결과 메시지를 출력
 */
void SignoutUI::signoutRequest() {
    string result = signout.signout();
    writeFile("> " + result + "\n");
}