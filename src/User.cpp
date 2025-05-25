#include "User.h"

User::User(string id, string password, Role role, string phoneNumber, vector<Bicycle*> rentalBicycleList)
    : id(id), password(password), role(role), phoneNumber(phoneNumber), rentalBicycleList(rentalBicycleList) {}

string User::getId() {
    return id;
}

string User::getPassword() {
    return password;
}

User::Role User::getRole() {
    return role;
}

string User::getPhoneNumber() {
    return phoneNumber;
}

vector<Bicycle*> User::getRentalBicycleList() {
    return rentalBicycleList;
}