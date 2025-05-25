#include "UserCollection.h"

UserCollection::UserCollection() {
}

void UserCollection::addNewUser(User* user) {
    userList.push_back(user);
}

User* UserCollection::findUserById(const string& id) {
    for (User* user : userList) {
        if (user->getId() == id) {
            return user;
        }
    }
    return nullptr;
}

const vector<User*>& UserCollection::getAllUsers() const {
    return userList;
}