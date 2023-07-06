#include<iostream>
#include<map>
#include<string>
using namespace std;
class Authenticate{
    map<string, string>mymap = { {"aman","1234" },{"parisha", "123"},{"shashank", "123456"},{"manish","4567" }};
    string username,password;
    public:
    void getUsername();
    void getPassword();
    void authenticate();
};