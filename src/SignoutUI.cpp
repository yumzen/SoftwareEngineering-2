#include "SignoutUI.h"
#include "Signout.h"
#include "UserSession.h"

SignoutUI::SignoutUI(Signout& signout):signout(signout) {}

void SignoutUI::startInterface() {
    cout << "2.2. 로그아웃" << endl;
}

void SignoutUI::signoutUI() {
    string result = signout.signout();
    cout << "> " << result << endl;
}