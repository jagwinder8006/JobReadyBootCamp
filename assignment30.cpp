 //               Assignment – 30            A Job Ready Bootcamp in C++, DSA and IOT               MySirG
 //                                             Exception Handling


 //1. Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks
 #include<iostream>
 using namespace std;
 #include<stdio.h>
 #include<string.h>
 /*
 int main()
 {
    cout<<"Enter Number";
    int a;
    cin>>a;
    try
    {
        if(a==1)
            throw 1;
        if(a==0)
            throw "something went wrong";
        cout<<"Ok ji";

    }
    catch(int b){cout<<"value of a is="<<b;}
    catch(const char *ptr){cout<<ptr;}
 }
*/

/*
//2. Write a C++ program to demonstrate try, throw and catch statements.
#include<iostream>
 using namespace std;
 int main()
 {
    cout<<"Enter Number";
    int a;
    cin>>a;
    try
    {
        if(a==1)
            throw 1;
        if(a==0)
            throw "something went wrong";
        cout<<"Ok ji";

    }
    catch(int b){cout<<"value of a is="<<b;}
    catch(const char *ptr){cout<<ptr;}
 }
*/

/*
//3. Write a C++ program to perform arithmetic operations on two numbers and throw an exception
// if the dividend is zero or does not contain an operator.

int main()
{
    int a,b;
    cout<<"Enter Two Numbers";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw "divident can not be zero";
        if(b<0)
            throw"something went wrong";
        int c=a/b;
        cout<<"answer is="<<c;
    }catch(const char *p){cout<<p;}
    return 0;

}
*/

/*
//4. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
int main()
{
    char str[50];
    cout<<"Enter your Email Address=";
    gets(str);
    try
    {
    int a;
    for(a=0 ; str[a] !='\0' ; a++)
    {
      if(str[a]=='@')
      {
      break;
      }
    }
    if(str[a]=='\0')
        throw "This is not valid Email address";
    cout<<" valid Email address Next proceed";
    }
    catch(const  char *g){cout<<g;}



    return 0;
}
*/
/*
//5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.
int main()
{
    char mob[11];
    cout<<"Enter your Mobile number=";
    gets(mob);
    try{
    int a;
    a=strlen(mob);
    if(a!=10)
        throw "Invalid Mobile Number:";
    cout<<"proceed Next:";
    }
    catch(const char *j){cout<<j;}

    return 0;
}
*/


/*
//6. Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits
int main()
{
    char pin[7];
    cout<<"      Enter your area PIN number=";
    gets(pin);
    try{
    int a;
    a=strlen(pin);
    if(a!=6)
        throw "  Invalid area PIN Number:";
    cout<<"      proceed Next:";
    }
    catch(const char *j){cout<<j;}

    return 0;
}
*/

/*
//7. Write a C++ program to accept a password if the username has less than 6 characters or does
//contain any digit or special symbol.
int main()
{
    char username[50];
    cout<<"Enter username:";
    gets(username);
    int a,b=-1,c=-1;

    for(a=0 ; username[a]!='\0' ; a++)
    {
        if(username[a]>='0' && username[a]<='9')
         b++;
        else if(username[a]>=0 && username[a]<=47 || username[a]>=58 && username[a]<=64 ||
                username[a]>=91 && username[a]<=96 || username[a]>=123 && username[a]<=127)
        {
          c++;
        }
    }
    int check;
        check=strlen(username);
        try
        {
            if(check>=6 && c!=-1 && b!=-1)
                 throw "Valid username";
            else
                throw "Invalid username";
        }
        catch(const char *ptr){cout<<ptr<<endl;}

    return 0;
}
*/

/*
//8. Write a C++ program to accept a password and throw an exception if the password has less than 6 characters
//or does not contain a digit or does not contain any special character or does not
//contain any capital letter.
int main()
{
    char password[50];
    cout<<"Enter password:";
    gets(password);
    int a,b=-1,c=-1,d=-1;

    for(a=0 ; password[a]!='\0' ; a++)
    {
        if(password[a]>='0' && password[a]<='9')
         b++;
        else if(password[a]>=0 && password[a]<=47 || password[a]>=58 && password[a]<=64 ||
                password[a]>=91 && password[a]<=96 || password[a]>=123 && password[a]<=127)
        {
          c++;
        }
        else if(password[a]>=65 && password[a]<=90)
            d++;
    }
    int check;
        check=strlen(password);
        try
        {
            if(check>=6 && c!=-1 && b!=-1 && d!=-1)
                 throw "Valid password";
            else
                throw "Invalid password;
        }
        catch(const char *ptr){cout<<ptr<<endl;}

    return 0;
}
*/

/*
//9.Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.
int main()
{
    char Gmail[50];
    cout<<"Enter your Gmail Address=";
    gets(Gmail);
    try
    {
    int a;
    for(a=0 ; Gmail[a] !='\0' ; a++)
    {
      if(Gmail[a]=='@')
      {
      break;
      }
    }
    if(Gmail[a]=='\0')
        throw "This is not valid Gmail address";
        cout<<endl<<"you can proceed next";
    }
    catch(const  char *g){cout<<g;}
    return 0;
}
*/

/*
//10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8 characters or does
//contain a digit or special symbol or space.
int main()
{
    char name[20];
    cout<<"Enter Your Nickname=";
    gets(name);
    int a,b;
    try
    {a=strlen(name); if(a>8) throw "Invalid Nickname";}catch(const char *ptr){cout<<ptr;}
    try
    {

        for(b=0 ; name[b]!='\0' ; b++)
            if(name[b]>=65 && name[b]<=90  || name[b]>=97 && name[b]<=122);
            else
                throw "Invalid NickName";
    }
    catch(const char *h){ cout<<h;}
    if(b==a && a<=8){cout<<"valid Nickname";}
    return 0;
}
*/



