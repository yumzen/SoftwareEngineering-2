#pragma once

#include <string>
#include "Signup.h"
#include <fstream>

/**
 * @brief SignupUI 클래스
 * 이 클래스는 Signup 객체를 사용하여 사용자 회원가입 인터페이스를 제공
 */
class SignupUI {
private:
    Signup signup; /// Signup 객체를 사용하여 사용자 회원가입 기능을 관리

public:
    SignupUI(); /// 생성자
    void startInterface(); /// 회원가입 인터페이스를 시작하는 함수
    void signupWithUserInfo(std::string userInfo); /// 사용자 정보를 입력받아 회원가입을 수행하는 함수
};