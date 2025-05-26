#pragma once

#include <string>
#include <tuple>

class UserCollection;

/**
 * @brief Signup 클래스
 * 이 클래스는 사용자 회원가입 기능을 제공
 * 사용자가 입력한 ID, 비밀번호, 전화번호로 새로운 사용자를 생성하고, 사용자 컬렉션에 추가
 */
class Signup {
private:
    UserCollection* userCollection; /// 사용자 컬렉션을 저장하는 포인터

public:
    Signup(); /// 생성자
    /// @brief 사용자 회원가입 함수
    std::tuple<std::string, std::string, std::string> signup( 
        std::string id, std::string password, std::string phoneNumber);
};