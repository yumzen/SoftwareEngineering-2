#pragma once

#include <string>
#include <tuple>

class UserCollection;

class Signup {
private:
    UserCollection* userCollection;

public:
    Signup();
    std::tuple<std::string, std::string, std::string> signup(
        std::string id, std::string password, std::string phoneNumber);
};