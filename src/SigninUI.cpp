#include "SigninUI.h"
#include <sstream>
#include <iostream>
#include <sstream>
using namespace std;
#include "WriteFile.h"

SigninUI::SigninUI(Signin& signin) : signin(signin) {}

void SigninUI::startInterface() {
    writeFile("2.1. 로그인");
}

void SigninUI::signinWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password;
    ss >> id >> password;

    auto result = signin.signin(id, password);
    writeFile("> " + get<0>(result) + " " + get<1>(result));
}