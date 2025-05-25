#include "Signout.h"
#include "UserSession.h"

Signout::Signout(UserSession* us) : userSession(us) {
    this->userSession = us;
}

string Signout::signout() {
    string userId = userSession->getCurrentUser()->getId();
    userSession->signout();

    return userId;
}