#pragma once

#include <string>
#include <tuple>
using namespace std;

class UserCollection;
class UserSession;


class Signin {
private:
    UserCollection* userCollection;
    UserSession* userSession;

public:
    Signin(UserCollection* uc, UserSession* us);
    tuple<string, string> signin(const string& id, const string& password);
};