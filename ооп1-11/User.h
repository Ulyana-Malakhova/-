#pragma once
#include <string>

using namespace std;
class User {
private:
    string userID;
    string username;
    string role;
public:
    User(const string& id, const string& un, const string& r)
        : userID(id), username(un), role(r) {}
    void login();
    void logout();
};