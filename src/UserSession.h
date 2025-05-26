#include "User.h"

class UserSession 
{
private: 
    User* currentUser;
    UserSession();
public: 
    static UserSession& getInstance();
    User signin(User* user);
    void signout();
    User* getCurrentUser() const;
};