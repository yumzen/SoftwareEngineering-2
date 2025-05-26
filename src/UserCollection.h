#pragma once
#include "User.h"
#include <vector>
#include <string>

using namespace std;

class UserCollection {
private:
    vector<User*> userList;
    UserCollection();

public:
    static UserCollection& getInstance();
    void addNewUser(User* user);
    User* findUserById(const string& id);
    const vector<User*>& getAllUsers() const;
};