#include "authentication.h"

void Authenticate::getUsername(){
    cout<<"Enter Username:";
    cin>>username;
}
void Authenticate::getPassword(){
    cout<<"Enter Password:";
    cin>>password;
}
void Authenticate::authenticate(){
    if(mymap.find(username) != mymap.end() && mymap[username] == password) 
    {
        cout<<"Login Successfully!\n";
    } 
    else 
    {
        cout<<"Invalid Credentials\n";
        cout<<"Register Yourself\n";
        cout<<"Enter username:";
        cin>>username;
        cout<<"Enter password:";
        cin>>password;
        mymap[username]=password;           //mymap.insert(pair<string,string>(username,password));
        cout<<"You are registered successfully\n";
    }
}