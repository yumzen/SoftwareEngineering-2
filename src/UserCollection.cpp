#include "UserCollection.h"

UserCollection::UserCollection() {
    if (this->findUserById("admin") == nullptr) {
        User* admin = new User("admin", "admin", User::ADMIN, "000-0000-0000", {});
        this->addNewUser(admin);
    }
}

UserCollection& UserCollection::getInstance() {
    static UserCollection instance;
    return instance;
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