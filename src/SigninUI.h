#pragma once

#include <string>
#include <fstream>
#include "Signin.h"

class SigninUI {
private:
    Signin signin; 

public:
    SigninUI();
    void startInterface();
    void signinWithUserInfo(std::string userInfo);
};