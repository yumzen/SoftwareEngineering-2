#include "User.h"

User::User(string id, string password, Role role, string phoneNumber, vector<Bicycle*> rentalBicycleList)
    : id(id), password(password), role(role), phoneNumber(phoneNumber), rentalBicycleList(rentalBicycleList) {}

string User::getId() const {
    return id;
}

string User::getRole() const {
    return role == ADMIN ? "admin" : "general";
}

void User::rentalBicycle(Bicycle* bicycle) {
    if (bicycle != nullptr) {
        rentalBicycleList.push_back(bicycle);
    }
}

vector<Bicycle*> User::getRentalBicycleList() const {
    return rentalBicycleList;
}

User User::createAdminUser() {
    return User("admin", "admin", ADMIN, "010-0000-0000");
}