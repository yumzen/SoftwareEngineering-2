#include "Signup.h"
#include "User.h"
#include "UserCollection.h"
#include "Bicycle.h"

using namespace std;

/**
 * @brief Signup 클래스 생성자
 * 이 클래스는 UserCollection 객체를 초기화
 */
Signup::Signup() {
    this->userCollection = &UserCollection::getInstance();
}

/**
 * @brief 사용자 회원가입 함수
 * 사용자가 입력한 ID, 비밀번호, 전화번호로 새로운 사용자를 생성하고, 사용자 컬렉션에 추가
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @param phoneNumber 사용자 전화번호
 * @return 생성된 사용자의 ID, 비밀번호, 전화번호를 포함하는 튜플
 */
tuple<string, string, string> Signup::signup(string id, string password, string phoneNumber) {
    vector<Bicycle*> rentalBicycleList;
    User* newUser = new User(id, password, User::GENERAL, phoneNumber, rentalBicycleList);
    userCollection->addNewUser(newUser);
    return make_tuple(id, password, phoneNumber);
}