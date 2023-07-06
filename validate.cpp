#include "validate.h"

void validation:: setAad(){
    cout<<"Enter (12 digits)Aadhar Number:";
    cin>>aad;
}
void validation:: validateAad(){
    if(aad>100000000000 && aad<=999999999999)
    {
        cout<<"Valid Aadhar number\n";
    }
    else
    {
        cout<<"Invalid Aadhar number\n";
    }
}
void validation:: setContact(){
    cout<<"Enter (10 digit) Contact Number:";
    cin>>contact;
}
void validation:: validateContact(){
    if(contact>1000000000 && contact<=9999999999)
    {
        cout<<"Valid Contact Number\n";
    }
    else
    {
        cout<<"Invalid Contact Number\n";
    }
}
void validation:: setIssueDate(){
    cout<<"Enter Issue Date (in dd/mm/yy):";
    cin>>dd>>mm>>yy;
}
void validation:: validateIssueDate(){
    if(yy>=1900 && yy<=9999)        //check year
    {
        if(mm>=1 && mm<=12)         //check month
        {   //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                cout<<"Date is valid.\n";
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                cout<<"Date is valid.\n";
            else if((dd>=1 && dd<=28) && (mm==2))
                cout<<"Date is valid.\n";
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                cout<<"Date is valid.\n";
            else
                cout<<"Day is invalid.\n";
        }
        else
        {
            cout<<"Month is not valid.\n";
        }
    }
    else
    {
        cout<<"Year is not valid.\n";
    }
}
void validation::setISBN(){
    cout<<"Enter BOOK Number(5 digits):";
    cin>>isbn;
}
void validation::validateISBN(){
    if(isbn>=00001 && isbn<=99999)
    {
        cout<<"Valid Book Number\n";
    }
    else
    {
        cout<<"Invalid Book Number\n";
    }
}
void validation::setDOB(){
    cout<<"Enter DOB (in dd/mm/yy):";
    cin>>dd>>mm>>yy;
}
void validation::validateDOB(){
    if(yy>=1980 && yy<=2015)        //check year
    {
        if(mm>=1 && mm<=12)         //check month
        {   //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                cout<<"Date is valid.\n";
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                cout<<"Date is valid.\n";
            else if((dd>=1 && dd<=28) && (mm==2))
                cout<<"Date is valid.\n";
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                cout<<"Date is valid.\n";
            else
                cout<<"Day is invalid.\n";
        }
        else
        {
            cout<<"Month is not valid.\n";
        }
    }
    else
    {
        cout<<"Year is not valid.\n";
    }
}
void validation::setEmail(){
    cout<<"Enter Email Id:";
    cin>>emailid;
}
bool Email_check(string email)
{
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);          //checks for the pattern of entered email id
}
void validation::validateEmail(){
    if(Email_check(emailid))
    {    
        cout<<"Valid Email-Id\n";
    }
    else
    {    
        cout<<"Invalid Email-Id\n";
    }
}