#pragma once
#include <vector>
#include <string>
using namespace std;

class UserSession;
class Bicycle;

class GetRentalInfo {
private:
    UserSession* userSession;
public:
    GetRentalInfo(UserSession* us);
    vector<Bicycle*> getRentalBicycleList();  // 대여 목록 반환
};