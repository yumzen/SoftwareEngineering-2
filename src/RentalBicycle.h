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
    RentalBicycle(UserSession* us, BicycleCollection* bc)
        : userSession(us), bicycleCollection(bc) {}

    string rentalBicycle(const string& bicycleId);
};