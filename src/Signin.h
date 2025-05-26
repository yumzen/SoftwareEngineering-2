#pragma once

#include <string>
#include <tuple>
using namespace std;

class UserCollection;
class UserSession;

/**
 * @brief Signin 클래스
 * 이 클래스는 사용자 로그인 기능을 제공
 * 사용자가 로그인할 때 ID와 비밀번호를 확인하고, 성공 시 사용자 세션에 로그인 정보를 저장
 */
class Signin {
private:
    UserCollection* userCollection; /// 사용자 컬렉션을 저장하는 포인터
    UserSession* userSession; /// 현재 사용자 세션을 저장하는 포인터

public:
    Signin(); /// 생성자
    tuple<string, string> signin(const string& id, const string& password); /// 사용자 로그인 함수
};