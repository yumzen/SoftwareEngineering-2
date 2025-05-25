#pragma once

#include <string>
#include "Signin.h"

class SigninUI {
private:
    Signin& signin;  // 참조로 받아서 포인터 안 써도 됨

public:
    SigninUI(Signin& signin);
    void startInterface();
    void signinWithUserInfo(std::string userInfo);
};