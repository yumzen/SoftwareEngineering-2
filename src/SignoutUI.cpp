#include "SignoutUI.h"
#include "UserSession.h"
#include "WriteFile.h"

SignoutUI::SignoutUI() : signout() {}

void SignoutUI::startInterface() {
    writeFile("2.2. 로그아웃\n");
}

void SignoutUI::signoutUI() {
    string result = signout.signout();
    writeFile("> " + result + "\n");
}