#pragma once
#include <string>
using namespace std;

class UserSession;
class BicycleCollection;

class RentalBicycle {
private:
    UserSession* userSession;
    BicycleCollection* bicycleCollection;

public:
    RentalBicycle();
    string rentalBicycle(const string& bicycleId);
};