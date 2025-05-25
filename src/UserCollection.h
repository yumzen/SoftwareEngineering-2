#pragma once
#include "User.h"
#include <vector>
#include <string>

using namespace std;

class UserCollection {
private:
    vector<User*> userList;

public:
    UserCollection();
    void addNewUser(User* user);
    User* findUserById(const string& id);
    const vector<User*>& getAllUsers() const;
};