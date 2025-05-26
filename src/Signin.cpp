#include "Signin.h"
#include "UserCollection.h"
#include "UserSession.h"

Signin::Signin() {
    this->userCollection = &UserCollection::getInstance();
    this->userSession = &UserSession::getInstance();
}

tuple<string, string> Signin::signin(const string& id, const string& password) {
    User* user = userCollection->findUserById(id);

    if (id == "admin" && password == "admin") {
        userSession->signin(user);
        return make_tuple("admin", "admin");
    }

    if (User::GENERAL) {
        userSession->signin(user);
        return make_tuple(id, password);
    }

    return make_tuple("", "");
}