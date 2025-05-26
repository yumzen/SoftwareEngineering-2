#pragma once
#include <string>
using namespace std;

class UserSession;
class BicycleCollection;

class RegisterBicycle {
private:
    UserSession* userSession;
    BicycleCollection* bicycleCollection;

public:
    RegisterBicycle();
    string registerBicycle(const string& id, const string& name);
};