#include "SigninUI.h"
#include <sstream>
#include <iostream>
using namespace std;
#include "WriteFile.h"

/**
 * @brief SigninUI 클래스 생성자
 * 이 클래스는 Signin 객체를 초기화
 */
SigninUI::SigninUI() : signin() {} 

/**
 * @brief 로그인 인터페이스를 시작하는 함수
 * 사용자에게 로그인 안내 메시지를 출력
 */
void SigninUI::startInterface() {
    writeFile("2.1. 로그인\n");
}

/**
 * @brief 사용자 정보를 입력받아 로그인하는 함수
 * @param userInfo 사용자 ID와 비밀번호를 포함한 문자열
 */
void SigninUI::signinWithUserInfo(string userInfo) {
    stringstream ss(userInfo);
    string id, password;
    ss >> id >> password;

    auto result = signin.signin(id, password);
    writeFile("> " + get<0>(result) + " " + get<1>(result) + "\n");
}