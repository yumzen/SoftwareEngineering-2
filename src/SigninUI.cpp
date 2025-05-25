#include "SigninUI.h"
#include <sstream>
#include <iostream>
#include <sstream>
using namespace std;

SigninUI::SigninUI(Signin& signin) : signin(signin) {}

void SigninUI::startInterface() {
    cout << "2.1. 로그인" << endl;
}

void SigninUI::signinWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password;
    ss >> id >> password;

    auto result = signin.signin(id, password);
    cout << "> " << get<0>(result) << " " << get<1>(result) << endl;
}