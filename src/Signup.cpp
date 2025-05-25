#include "Signup.h"
#include "User.h"
#include "UserCollection.h"
#include "Bicycle.h"

using namespace std;

Signup::Signup(UserCollection* userCollection) {
    this->userCollection = userCollection;
}

tuple<string, string, string> Signup::signup(string id, string password, string phoneNumber) {
    vector<Bicycle*> rentalBicycleList;
    User* newUser = new User(id, password, User::GENERAL, phoneNumber, rentalBicycleList);
    userCollection->addNewUser(newUser);
    return make_tuple(id, password, phoneNumber);
}