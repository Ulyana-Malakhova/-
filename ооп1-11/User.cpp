#include "User.h"
#include <iostream>
#include <string.h>

using namespace std;
void User::login() {
    cout << username << " logged in." << endl;
}

void User::logout() {
    cout << username << " logged out." << endl;
}