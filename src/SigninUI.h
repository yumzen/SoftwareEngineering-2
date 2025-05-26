#pragma once

#include <string>
#include <fstream>
#include "Signin.h"

/**
 * @brief SigninUI 클래스
 * 이 클래스는 Signin 객체를 사용하여 사용자 로그인 인터페이스를 제공
 */
class SigninUI {
private:
    Signin signin;  /// Signin 객체를 사용하여 사용자 로그인 기능을 관리

public:
    SigninUI(); /// 생성자
    void startInterface(); /// 로그인 인터페이스를 시작하는 함수
    void signinWithUserInfo(std::string userInfo); /// 사용자 정보를 입력받아 로그인하는 함수
};