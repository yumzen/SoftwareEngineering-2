#pragma once

#include <string>
#include "Signup.h"  // Signup 선언 필요

class SignupUI {
private:
    Signup& signup;

public:
    SignupUI(Signup& signup);  // 참조로 받기
    void startInterface();
    void signupWithUserInfo(std::string userInfo);
};