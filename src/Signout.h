#pragma once
#include <string>
using namespace std;

class UserSession;

class Signout {
private:
    UserSession* userSession;

public:
    Signout(UserSession* us);
    string signout();
};