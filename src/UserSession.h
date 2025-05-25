#include "User.h"

class UserSession 
{
private: 
    User* currentUser;

public: 
    UserSession();
    User signin(User* user);
    void signout();
    User* getCurrentUser() const;
};