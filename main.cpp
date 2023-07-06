#include"validate.h"
#include"authentication.h"
int main()
{   
    Authenticate person;
    person.getUsername();
    person.getPassword();
    person.authenticate();
    validation obj;
    obj.setAad();
    obj.validateAad();
    obj.setContact();
    obj.validateContact();
    obj.setIssueDate();
    obj.validateIssueDate();
    obj.setISBN();
    obj.validateISBN();
    obj.setDOB();
    obj.validateDOB();
    obj.setEmail();
    obj.validateEmail();
    return 0;
}