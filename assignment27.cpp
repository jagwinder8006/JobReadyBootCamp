//           Assignment - 27         A Job Ready Bootcamp in C++, DSA and IOT          MySirG
//                             Operator overloading and friend function

//1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
//a. +
//b. -
//c. *
//d. ==
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/*
class Complex
{
private:
    int a,b;
public:

    void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.a=a+x.a;
        temp.b=b+x.b;
        return temp;
    }
    Complex operator-(Complex x)
    {
        Complex temp;
        temp.a=a-x.a;
        temp.b=b-x.b;
        return temp;
    }
    Complex operator*(Complex x)
    {
        Complex temp;
        temp.a=a*x.a;
        temp.b=b*x.b;
        return temp;
    }
    bool operator==(Complex x)
    {
       bool check;
       check=(a==x.a && b==x.b);
       return check;

    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,10);
    c2.setdata(2,10);
    if(c1==c2)
        cout<<"True";
    else
        cout<<"False";

}
*/

/*
//2. Write a C++ program to overload unary operators that is increment and decrement.
class Time
{
private:
   int hh,mm,ss;
public:
    void setdata(int h,int m,int s)
    {
    hh=h,mm=m,ss=s;
    }
    void showdata()
    {
    cout<<hh<<" "<<mm<<" "<<ss<<endl;
    }
    Time operator++(int marji)
    {
         Time x;
         x.hh=++hh;
         x.mm=++mm;
         x.ss=++ss;
         return x;

    }

};
int main()
{
    Time t1,t2;
    t1.setdata(12,4,40);
    t1++;
    t1.showdata();
    return 0;
}
*/

/*
//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
    friend complex operator+(complex p,complex q);
};
complex operator+(complex p,complex q)
  {
     complex temp;
     temp.a=p.a+q.a;
     temp.b=p.b+q.b;
     return temp;
  }
int main()
{
    complex c1,c2,c3;
    c1.setdata(10,20);
    c2.setdata(10,20);
    c1.showdata();
    cout<<endl;
    c2.showdata();
    c3=c1+c2;
    cout<<endl<<"sum is:";
    c3.showdata();
    return 0;
}
*/

/*
//4. Create a class Time which contains: - Hours - Minutes - Seconds
//Write a C++ program using operator overloading for the following:
//1.  = = : To check whether two Times are the same or not.
//2.  >>  : To accept the time.
//3.  <<  : To display the time.
class Time
{
private:
    int hours,minutes,seconds;
public:
    friend istream& operator>>(istream &put,Time &st)
    {
        cout<<"________________";
        cout<<endl<<endl<<"Enter hours:  ";
        put>>st.hours;
        cout<<endl<<"Enter Minutes:  ";
        put>>st.minutes;
        cout<<endl<<"Enter Seconds:  ";
        put>>st.seconds;
        return put;
    }
    friend ostream& operator<<(ostream &out,Time t)
    {
        out<<"hours:"<<t.hours;
        out<<endl<<"minutes:"<<t.minutes;
        out<<endl<<"seconds:"<<t.seconds;
        return out;

    }
    friend unsigned int operator==(Time x,Time y)
    {
        unsigned int a,b;
        a=(x.hours*3600)+(x.minutes*60)+x.seconds;
        b=(x.hours*3600)+(y.minutes*60)+y.seconds;
        if(a==b)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1,t2;
    cout<<"Enter First Time:"<<endl;
    cin>>t1;
    cout<<t1;
    cout<<endl<<endl<<endl<<"Enter second Time:"<<endl;
    cin>>t2;
    cout<<t2<<t1;
    if(t1==t2)
        cout<<endl<<endl<<"Times Are Same";
   else
    cout<<endl<<endl<<"Times are Not Same";
    return 0;
}
*/

/*
//5. Consider following class Numbers
//class Numbers
//{int x,y,z; public: //methods};
//Overload the operator unary minus (-) to negate the numbers.
class Numbers
{
private:
    int a=10,b=20,c=30;
public:
     Numbers operator-()
    {
        Numbers temp;
        temp.a=a-a*2;
        temp.b=b-b*2;
        temp.c=c-c*2;
        return temp;
    }
    void showdata()
    {
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c;
    }
};
int main()
{
    Numbers n1,n2;
    n1=-n1;
    n1.showdata();
    return 0;
}
*/

/*
//6. Create a class CString to represent a string.
//a) Overload the + operator to concatenate two strings.
//b) == to compare 2 strings.
class Cstring
{
private:
    char str[30];
public:
    void inputstring()
    {
        fflush(stdin);
       fgets(str,30,stdin);
       str[strlen(str)-1]='\0';
    }
    void showstring()
    {

        cout<<endl<<str<<endl;
    }
    Cstring operator+(Cstring t)
    {
        Cstring temp;
        strcpy(temp.str,str);
        strcat(temp.str,t.str);
        return temp;
    }
    bool operator==(Cstring check)
    {
        bool a;
        a=strcmp(str,check.str);
        return a;
    }
};
int main()
{
    Cstring s1,s2,s3;
    cout<<"Enter First String:";
    s1.inputstring();
    cout<<endl<<"Enter Second String:";
    s2.inputstring();
    s3=s1+s2;
    s3.showstring();
    if(s1==s2)
        cout<<endl<<"string are Not equal";
    else
        cout<<endl<<"stings are Equal:";
}
*/

/*
//7. Define a C++ class fraction
//class fraction
//{ long numerator; long denominator;
//Public: fraction (long n=0, long d=0); }
//Overload the following operators as member or friend:
//a) Unary ++ (pre and post both)
//b) Overload as friend functions: operators << and >>.
class fraction
{
private:
    long num;
    long deno;
public:
    fraction()
    {

    num=0,deno=0;
    }

     friend  ostream& operator<<(ostream &out,fraction d)
    {
      out<<d.num<<"/"<<d.deno;
      return out;
    }
    friend istream& operator>>(istream &in ,fraction &i)
    {
        cout<<"Numerator :";
        in>>i.num;
        cout<<endl<<"denumerator :";
        in>>i.deno;
        return in;
    }
    fraction operator++(int y)
    {
    fraction temp1;
    temp1.num=num++;
    temp1.deno=deno++;
    return temp1;
    }
    fraction operator++()
    {
    fraction temp;
    temp.num=++num;
    temp.deno=++deno;
    return temp;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;
    cout<<endl<<"f2 : ";
    cout<<f2;
    cout<<endl<<endl<<"Enter First fraction value:"<<endl<<endl;
    cin>>f1;
    f1++;
    cout<<endl<<endl<<"f1++  :  ";
    cout<<f1;
    ++f1;
    cout<<endl<<endl<<"++f1  :  ";
    cout<<f1;
    cout<<endl<<endl<<"Enter second fraction value:"<<endl<<endl;
    cin>>f2;
    cout<<"f2=++f1";
    f2=++f1;
    cout<<endl<<endl<<"f1  :  ";
    cout<<f1;
     cout<<endl<<"f2  :  ";
    cout<<f2;
    f1++;
    cout<<endl<<endl<<"f2=f1++";
    cout<<endl<<endl<<"f1  : ";
     cout<<f1;
     cout<<endl;
    cout<<"f2  : ";
     cout<<f2;
    return 0;
}
*/


/*
//8. Consider a class Matrix
//Overload the - (Unary) should negate the numbers stored in the object.
class Matrix
{
private:
    int mat[3][3];
public:
  Matrix operator-()
  {
      int x,y;
        for(x=0 ; x<=2 ; x++)
        {
        for(y=0 ; y<=2 ; y++)
        mat[x][y]=-mat[x][y];
        }
  }
 friend istream& operator>>(istream &input,Matrix  &matrix);
  friend ostream& operator<<(ostream &output,Matrix matrix);
};

  istream& operator>>(istream &input,Matrix  &matrix)
    {
        int x,y;
        for(x=0 ; x<=2 ; x++)
        {
            for(y=0 ; y<=2 ; y++)
            {
                input>>matrix.mat[x][y];
            }
        }
        return input;

    }
     ostream& operator<<(ostream &output,Matrix matrix)
   {
    int x,y;
    for(x=0 ; x<=2 ;x++)
    {
        for(y=0 ; y<=2 ; y++)
        {
            output<<matrix.mat[x][y];
            cout<<"     ";
        }
        cout<<endl<<endl;
    }
    return output;
    }
int main()
{
    Matrix M1;
    cout<<"Enter 9 Elements of Matrix:"<<endl<<endl;
    cin>>M1;
    cout<<endl<<endl<<"Before Negate:"<<endl;
    cout<<M1;
    -M1;
    cout<<"After Negate:"<<endl<<endl;
    cout<<M1;
    return 0;
}
*/

/*
//9. Consider the following class mystring
//Class mystring { char str [100]; Public: // methods };
//Overload operator “!” to reverse the case of each alphabet in the string
//(Uppercase to Lowercase and vice versa).
class Mystring
{
    private:
    char str[100];
    public:
       void inputstr()
       {
           fflush(stdin);
           fgets(str,100,stdin);
           str[strlen(str)-1]='\0';
       }
      void operator!()
       {
           int a=0;
           while(str[a]!='\0')
           {
               if(str[a]>=65 && str[a]<=90)
                str[a]=str[a]+32;
               if(str[a]>=97 && str[a]<=122)
                str[a]=str[a]-32;
               a++;
           }
       }
       void display()
       {
           cout<<str;
       }

};

int main()
{
    Mystring m1;
    m1.inputstr();
    !m1;
    m1.display();
    return 0;
}
*/

/*
//10.Class Matrix { int a[3][3]; Public: //methods; };
//Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
class Matrix
{
private:
    int a[3][3];
public:
    void input()
    {
        int x,y;
        for(x=0 ; x<=2 ; x++)
        {
        for(y=0 ; y<=2 ; y++)
        cin>>a[x][y];
        }
    }
    void display()
    {
        cout<<endl;
        int x,y;
        for(x=0 ; x<=2 ; x++)
        {
            for(y=0 ; y<=2 ; y++)
            cout<<"  "<<a[x][y]<<"    ";
            cout<<endl<<endl;
        }

    }
    Matrix  operator+(Matrix mat)
    {
        int x,y;
        Matrix temp;
        for(x=0 ; x<=2 ; x++)
        {
            for(y=0 ; y<=2 ; y++)
            {
                temp.a[x][y]=a[x][y]+mat.a[x][y];
            }
        }
        return temp;
    }
};

int main()
{

    Matrix m1,m2,m3;
    cout<<"Enter Elements for (3 X 3) Matrix:"<<endl;
    m1.input();
    cout<<endl<<endl;
    m1.display();
    cout<<endl<<"Enter Elements for second Matrix:"<<endl;
    m2.input();
    cout<<endl<<endl;
    m2.display();
    m3=m1+m2;
    cout<<endl<<"Addition of  Matrixies is:";
    m3.display();
    return 0;

}
*/



//Completed














