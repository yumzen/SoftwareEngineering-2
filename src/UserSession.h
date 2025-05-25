#include "User.h"

class UserSession 
{
private: 
    User* currentUser;

public: 
    UserSession();
    void signin(User* user);
    void signout();
    User* getCurrentUser() const;
};