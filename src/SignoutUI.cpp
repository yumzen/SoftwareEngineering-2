#include "SignoutUI.h"
#include "Signout.h"
#include "UserSession.h"
#include "WriteFile.h"

SignoutUI::SignoutUI(Signout& signout):signout(signout) {}

void SignoutUI::startInterface() {
    writeFile("2.2. 로그아웃");
}

void SignoutUI::signoutUI() {
    string result = signout.signout();
    writeFile("> " + result);
}