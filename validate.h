#include<iostream>
#include<string>
#include<regex>
using namespace std;
class validation{
    long long aad,contact;
    int dd,mm,yy;
    long isbn;
    string emailid;
    public:
    void setAad();
    void validateAad();
    void setContact();
    void validateContact();
    void setIssueDate();
    void validateIssueDate();
    void setISBN();
    void validateISBN();
    void setDOB();
    void validateDOB();
    void setEmail();
    void validateEmail();
};