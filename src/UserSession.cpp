#include "UserSession.h"

UserSession::UserSession() : currentUser(nullptr) {}

UserSession& UserSession::getInstance() {
    static UserSession instance;
    return instance;
}

User UserSession::signin(User* user) 
{
    currentUser = user;
    return *currentUser;
}

void UserSession::signout() 
{
    currentUser = nullptr;
}

User* UserSession::getCurrentUser() const
{
    return currentUser;
}