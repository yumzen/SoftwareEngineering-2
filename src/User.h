#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Bicycle.h"

using namespace std;

class User {
public:
    enum Role { GENERAL = 1, ADMIN = 2 };

private:
    string id;
    string password;
    Role role;
    string phoneNumber;
    vector<Bicycle*> rentalBicycleList;

public:
    User(string id, string password, Role role, string phoneNumber, vector<Bicycle*> rentalBicycleList = {});
    string getId() const;
    string getRole() const;
    void rentalBicycle(Bicycle* bicycle);
    vector<Bicycle*> getRentalBicycleList() const;
    User createAdminUser();
};