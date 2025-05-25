#include "SignupUI.h"
#include <sstream>
#include <iostream>

using namespace std;

SignupUI::SignupUI(Signup& signup) : signup(signup) {}

void SignupUI::startInterface() {
    cout << "1.1. 회원가입" << endl;
}

void SignupUI::signupWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password, phoneNumber;
    ss >> id >> password >> phoneNumber;

    auto result = signup.signup(id, password, phoneNumber);
    cout << "> " << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;
}