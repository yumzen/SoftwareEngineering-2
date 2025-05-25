#pragma once
#include <string>
#include <fstream>
#include "Signout.h"
using namespace std;

class SignoutUI {
private:
    Signout& signout;  
public:
    SignoutUI(Signout &signout);
    void startInterface();
    void signoutUI(); 
};