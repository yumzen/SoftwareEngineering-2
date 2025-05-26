#include "SignupUI.h"
#include "WriteFile.h"
#include <sstream>
#include <iostream>

using namespace std;

/**
 * @brief SignupUI 클래스 생성자
 * 이 클래스는 Signup 객체를 초기화
 */
SignupUI::SignupUI() : signup() {}
void SignupUI::startInterface() {
    writeFile("1.1. 회원가입\n");
}

/**
 * @brief 사용자 정보를 입력받아 회원가입을 수행하는 함수
 * @param userInfo 사용자 ID, 비밀번호, 전화번호를 포함하는 문자열
 */
void SignupUI::signupWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password, phoneNumber;
    ss >> id >> password >> phoneNumber;

    auto result = signup.signup(id, password, phoneNumber);
    writeFile("> " + get<0>(result) + " " + get<1>(result) + " " + get<2>(result) + "\n");
}