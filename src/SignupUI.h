#pragma once

#include <string>
#include "Signup.h"
#include <fstream>

class SignupUI {
private:
    Signup signup;

public:
    SignupUI();
    void startInterface();
    void signupWithUserInfo(std::string userInfo);
};