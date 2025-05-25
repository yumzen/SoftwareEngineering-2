#include "UserSession.h"

UserSession::UserSession() : currentUser(nullptr) { }

void UserSession::signin(User* user) 
{
    currentUser = user;
}

void UserSession::signout() 
{
    currentUser = nullptr;
}

User* UserSession::getCurrentUser() const
{
    return currentUser;
}