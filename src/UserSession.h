#include "User.h"

/**
 * @brief UserSession 클래스
 */
class UserSession 
{
private: 
    User* currentUser; /// 현재 로그인된 사용자 포인터
    UserSession(); /// 생성자 (private으로 설정하여 외부에서 인스턴스 생성 방지)
public: 
    static UserSession& getInstance(); /// 싱글턴 인스턴스를 반환하는 함수
    User signin(User* user); /// 현재 사용자를 로그인하는 함수
    void signout(); /// 현재 사용자를 로그아웃하는 함수
    User* getCurrentUser() const; /// 현재 로그인된 사용자를 반환하는 함수
};