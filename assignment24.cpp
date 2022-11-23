//Assignment - 24             Job Ready Bootcamp in C++, DSA and IOT               MySirG
//                                     Functions in C++



#include<iostream>
using namespace std;
void prime(int);
int highdigit(int);
int raisedpower(int ,int);
int comb(int ,int );
int fact(int);
void pascal();
void swaping(int &,int &);
int fibocheck(int x);
float area(int);
float area(int,int);
float area(float,float);
int maximum(int ,int);
float maximum(float,float);
int add(int,int,int=0);
/*
//1. Define a function to check whether a given number is a Prime number or not.
int main()
{
    int x;
    cout<<"Enter Number for number is prime or not:";
    cin>>x;
    prime(x);
    return 0;
}
void prime(int x)
{
    int i;
    for(i=2; i<x ; i++)
    {
    if(x%i==0)
    {cout<<x<<" is a Not a prime Number";break;}
    }
    if(x==i)
    cout<<x<<" is prime number";
}
*/

/*
//2. Define a function to find the highest value digit in a given number.
int main()
{
    int x,high;
    cout<<"Enter Number for check highest digit:";
    cin>>x;
    high=highdigit(x);
    cout<<"Highest digit is: "<<high;
    return 0;
}
int highdigit(int x)
{
    int Max=1;
    while(x)
    {
        if(x%10>Max)
        Max=x%10;
        x/=10;
    }
    return Max;

}
*/

/*
//3. Define a function to calculate x raised to the power y.
int main()
{
    cout<<"Enter number:";
    int x,y,sum=1;
    cin>>x;
    cout<<endl<<"Enter power value:";
    cin>>y;
    cout<<endl<<"Answer is:"<<raisedpower(x,y);
    return 0;
}
int raisedpower(int x,int y)
{
    int sum=1;
     while(y--)
        sum*=x;
     return sum;
}
*/

/*
//4.Define a function to print Pascal Triangle up to N lines.
int main()
{
    pascal();
    return 0;
}

void pascal()
{
    int lines,j,i,k;
    cout<<"Enter lines:";
    cin>>lines;
    for(i=0 ; i<lines ; i++)
    {
        for(j=0 ; j<=i; j++)
        {
          if(j==0)
          for(k=0 ; k<(lines-1)-i ; k++)
            cout<<" ";
          cout<<comb(i,j);
          if(lines<=5)
          cout<<" ";
          if(lines>5)
          cout<<"  ";
        }
        cout<<endl;
    }
}
int comb(int n,int r)
{
return fact(n)/(fact(r)*fact(n-r));
}

int fact(int x)
{
    int sum=1;
    while(x--)
    sum*=x+1;
    return sum;
}
*/

/*
//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
int main()
{
    int n,i;
    cout<<"Enter a Number to check fibonacci term or not:";
    cin>>n;
    i=fibocheck(n);
    if(i==0)
    cout<<endl<<"This Term is Not Fibonacci Term";
    else
    cout<<endl<<"This Term is Fibonacci Term";
    return 0;
}

int fibocheck(int x)
{
    int a=-1,b=1,s=0;
    while(1)
    {
        s=a+b;
        if(s>=x)
        {
            if(s==x)
                return 1;
            else
                return 0;
        }
        a=b,b=s;
    }

}
*/

/*
//6. Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Two Numbers:";
    int j,k;
    cin>>j>>k;
    cout<<endl<<"Before Swaping:"<<endl<<"  j:"<<j<<"  k:"<<k;
    swaping(j,k);
    cout<<endl<<"After Swaping:"<<endl<<"  j:"<<j<<"  k:"<<k;
    return 0;

}

void swaping(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
*/

/*
//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int x=5,y=5,z=5;
     cout<<add(x,y);
     cout<<endl<<add(x,y,z);
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
*/

/*
//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter radius:";
    int r;
    cin>>r;
    cout<<endl<<"Area of circle is:"<<area(r);
    cout<<endl<<"Enter length and breadth:";
    int l,b;
    cin>>l>>b;
    cout<<"Area of Rectangle is:"<<area(l,b);
    cout<<endl<<"Enter height and base of triangle:";
    float h,base;
    cin>>h>>base;
    cout<<"Area of Triangle is:"<<area(h,base);
    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}
float area(int l,int b)
{
    return l*b;
}
float area(float b,float h)
{
    return (b*h)/2;
}
*/

/*
//9. Write functions using function overloading to
//find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Two integer Numbers:";
    cin>>x>>y;
    cout<<endl<<"Max Number Between Two integer is:"<<maximum(x,y);
    float a,b;
    cout<<endl<<"Enter Two Real Number";
    cin>>a>>b;
    cout<<endl<<"Max Number Between Two Real Numbers is:"<<maximum(a,b);
    return 0;
}

int maximum(int x,int y)
{
    return x>=y?x:y;
}
float maximum(float x,float y)
{
    return x>=y?x:y;
}
*/

/*
//10.Write functions using function overloading to add two numbers having different data types.
void add(int,int);
void add(float,float);
void add(int,float);
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two numbers:";
    cin>>a>>b;
    add(a,b);
    float x,y;
    cout<<"Enter Two Real Numbers:";
    cin>>x>>y;
    add(x,y);
    int s;
    float n;
    cout<<"Enter one integr and one Real constent:";
    cin>>s>>n;
    add(s,n);
    return 0;
}
void add(int a,int b)
{
    cout<<"Sum of Two int variables is:"<<a+b;
}
void add(float a,float b)
{
    cout<<endl<<"Sum of Two Real contstent is:"<<a+b;
}
void add(int a,float b)
{
    cout<<endl<<"Sum of integer value and Real contstent is:"<<a+b;
}
*/





// completed




















