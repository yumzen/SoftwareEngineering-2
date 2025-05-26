#pragma once
#include <string>
using namespace std;

class UserSession;

/**
 * @brief Signout 클래스
 * 이 클래스는 사용자 로그아웃 기능을 제공
 * 현재 로그인된 사용자의 세션을 종료하고, 로그아웃한 사용자의 ID를 반환
 */
class Signout {
private:
    UserSession* userSession; /// 현재 사용자 세션을 저장하는 포인터

public:
    Signout(); /// 생성자
    string signout(); /// 사용자 로그아웃 함수
};