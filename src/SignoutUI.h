#pragma once
#include <string>
#include <fstream>
#include "Signout.h"
using namespace std;

/**
 * @brief SignoutUI 클래스
 * 이 클래스는 Signout 객체를 사용하여 사용자 로그아웃 인터페이스를 제공
 */
class SignoutUI {
private:
    Signout signout; /// Signout 객체를 사용하여 사용자 로그아웃 기능을 관리

public:
    SignoutUI(); /// 생성자
    void startInterface(); /// 로그아웃 인터페이스를 시작하는 함수
    void signoutUI(); /// 로그아웃 기능을 수행하는 함수
};