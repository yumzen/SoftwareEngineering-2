#include "SignupUI.h"
#include "Signup.h"

using namespace std;

void SignupUI::signupWithUserInfo(string userInfo) {
    stringstream ss(userInfo);

    string id, password, phoneNumber;
    // 입력 문자열에서 ID, 비밀번호, 전화번호 추출
    ss >> id >> password >> phoneNumber;

    Signup signup;
    tuple<string, string, string> result = signup.signup(id, password, phoneNumber);

    string message = get<0>(result);

    // 결과 출력 예시
    cout << id << " " << password << " " << phoneNumber << endl;
}