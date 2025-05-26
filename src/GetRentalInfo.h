#pragma once
#include <vector>
using namespace std;

class Bicycle;
class UserSession;

class GetRentalInfo {
private:
    UserSession* userSession;

public:
    GetRentalInfo();
    vector<Bicycle*> getRentalBicycleList();
};