#include "Signup.h"
#include "Bicycle.h"
#include "User.h"
#include "UserCollection.h"

tuple<string, string, string> Signup::signup(string id, string password, string phoneNumber) {
    vector<Bicycle*> rentalBicycleList; // 비어있는 벡터로 초기화
    UserCollection userCollection;

    User* newUser = new User(id, password, static_cast<User::Role>(1), phoneNumber, rentalBicycleList);
    userCollection.addNewUser(newUser);

    cout << userCollection.getAllUsers().size() << " user(s) registered." << endl;
    return make_tuple(id, password, phoneNumber);
}