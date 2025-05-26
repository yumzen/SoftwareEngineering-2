#pragma once
#include "User.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @brief UserCollection 클래스
 * 이 클래스는 사용자 객체를 관리하는 싱글턴 패턴을 사용한 컬렉션 클래스
 */
class UserCollection {
private:
    vector<User*> userList; /// 사용자 객체를 저장하는 벡터
    UserCollection(); /// 생성자 (private으로 설정하여 외부에서 인스턴스 생성 방지)

public:
    static UserCollection& getInstance(); /// 싱글턴 인스턴스를 반환하는 함수
    void addNewUser(User* user); /// 새로운 사용자를 컬렉션에 추가하는 함수
    User* findUserById(const string& id); /// 사용자 ID로 사용자를 찾는 함수
    const vector<User*>& getAllUsers() const; /// 모든 사용자를 반환하는 함수
};