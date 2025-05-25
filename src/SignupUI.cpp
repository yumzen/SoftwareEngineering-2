#include "SignupUI.h"
#include "WriteFile.h"
#include <sstream>
#include <iostream>

using namespace std;

SignupUI::SignupUI(Signup& signup) : signup(signup) {}

void SignupUI::startInterface() {
    writeFile("1.1. 회원가입");
}

void SignupUI::signupWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password, phoneNumber;
    ss >> id >> password >> phoneNumber;

    auto result = signup.signup(id, password, phoneNumber);
    writeFile("> " + get<0>(result) + " " + get<1>(result) + " " + get<2>(result));
}