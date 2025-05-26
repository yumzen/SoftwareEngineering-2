#include "Signout.h"
#include "UserSession.h"

Signout::Signout() {
    this->userSession = &UserSession::getInstance();
}

string Signout::signout() {
    string userId = userSession->getCurrentUser()->getId();
    userSession->signout();

    return userId;
}