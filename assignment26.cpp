
//        Assignment - 26        A Job Ready Bootcamp in C++, DSA and IOT              MySirG
//                                  Member function, static, constructor

//1. Define a class complex to represent a complex number with instance variables a and b to
//store real and imaginary parts. also define following member functions.
//a. void setData(int,int).
//b. void showData().
//c. Complex addComplex().


#include<iostream>
using namespace std;
#include<string.h>
/*
class complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"real part is:"<<a<<"  imaginary part is:"<<b;
    }
     complex addcomplex(complex k)
    {
        complex temp;
        temp.a=a+k.a;
        temp.b=b+k.b;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(5,8);
    c2.setData(4,3);
    c3=c1.addcomplex(c2);
    c3.showData();
    cout<<endl<<endl;
    return 0;
}
*/

//2. Define a class Time to represent a time with instance variables h,m and s to store hour,
//minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
//  d. Time add(Time)

/*
class Time
{
private:
    int hh,mm,ss;
public:
    void setTime(int x,int y,int z)
    {
     hh=x,mm=y,ss=z;
    }
    void showTime()
    {
    cout<<"hour="<<hh<<": minute="<<mm<<": second="<<ss;
    }
    void normalize()
    {
     while(ss>60)
     {
         ss-=60,mm++;
     }
     while(mm>60)
     {
         mm-=60,hh++;
     }

    }
    Time add(Time time)
    {
        Time addtime;
        addtime.hh=hh+time.hh;
        addtime.mm=mm+time.mm;
        addtime.ss=ss+time.ss;
        return addtime;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(16,75,85);
    t2.setTime(3,70,80);
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    return 0;
}

*/

/*
//3. Define a class Cube and calculate Volume of Cube and initialize it using constructor.
class Cube
{
   public:
    float width,length,height,calculateVolume;
    Cube(float l,float w,float h)
    {
       length=l,height=h,width=w;
    }
    Cube()
    {

    }
    float volume()
    {
     return calculateVolume=width*length*height;
    }

};
int main()
{
    Cube c1(5,5,5);
    cout<<"volume is:"<<c1.volume();
    return 0;
}
*/

/*
//4. Define a class Counter and Write a program to Show Counter using Constructor.
class Counter
{
public:
    static int count;
public:
    Counter()
    {
       count++;
    }
    int getcount();

};
int Counter::count;
int Counter::getcount()
    {
        return count;
    }
int main()
{
    Counter c1,c2,c3,c4,c5,c6;
    cout<<"Numbers of Objects:"<<c1.count;
    count<<endl;
    return 0;
}
*/

/*
//5. Define a class Date and write a program to Display Date and initialize date object using Constructors.
class Date
{
private:
    int hh,mm,ss;
public:
    Date(int x,int y,int z)
    {
        hh=x,mm=y,ss=z;
        while(ss>60)
        {
            ss-=60;
            mm++;
        }
        while(mm>60)
        {
            mm-=60;
            hh++;
        }
        cout<<"hours "<<hh<<": Minutes "<<mm<<" seconds:"<<ss;
    }
    Date()
    {
     hh=0,mm=0,ss=0;
    }
};

int main()
{
    Date D1(13,70,40),D2;

    return 0;
}

*/

/*
//6. Define a class student and write a program to enter student details using
//constructor and define member function to display all the details.
class Student
{
private:
    char name[30];
    int Roll;
    char className[20];
    char section[20];
    char fathername[30];
    char Mobileno[11];
public:
    Student(char n[],int R,char c[],char sec[],char father[],char mobile[])
    {
        strcpy(name,n);
        Roll=R;
        strcpy(className,c);
        strcpy(section,sec);
        strcpy(fathername,father);
        strcpy(Mobileno,mobile);
    }
    Student()
    {
        strcpy(name,"No name");
        Roll=0;
        strcpy(className,"Empty data");
        strcpy(section,"Empty data");
        strcpy(fathername,"Empty dat");
        strcpy(Mobileno,"Empty data");

    }
    void displayData()
    {
        cout<<endl<<"Name:"<<name<<endl<<"Roll No:"<<Roll<<endl<<"Class Name:"<<className<<endl<<"section:"<<section
        <<endl<<"Father Name:"<<fathername<<endl<<"Mobile No:"<<Mobileno;
    }
};
int main()
{
    Student S1("Dimple",8,"L.k.G","pansy","prem pal","98888-36209"),S2;
    S1.displayData();
    cout<<endl;
    S2.displayData();
}
*/

/*
//7. Define a class Box and write a program to enter length, breadth and height and initialize
//objects using constructor also define member functions to calculate volume of the box.
class Box
{
private:
    float length,breadth,height,volume;
public:
    Box(float l,float b,float h)
    {
        length=l,breadth=b,height=h;
    }
    Box()
    {
        length=0,breadth=0,height=0;
    }
    float volumedata();
};
float Box::volumedata()
{
    return volume=length*breadth*height;
}

int main()
{
    Box B1(5.7,5.6,5);
    cout<<"Volume is:"<<B1.volumedata();
}
*/

/*
//8. Define a class Bank and define member functions to read principal , rate of interest and year.
// Another member functions to calculate simple interest and display it.
//Initialize all details using constructor.
 class Bank
 {
 private:
    float principal,rate,year,totalinterest;
 public:
    Bank(){};
    Bank(float pp,float rr,float yy)
    {
        principal=pp,rate=rr,year=yy;
    }
    float interestIs()
    {
        return totalinterest=(principal*rate*year)/100;
    }
 };
int main()
{
    Bank b1(1000,2,2);
    cout<<"total interest is:"b1.interestIs();
}
*/

//9. Define a class Bill and define its member function get()
//to take detail of customer, calculateBill() function to calculate electricity bill
// using below tariff:
//upto 100 unit Rs. 1.20 per unit
//From 100 to 200 unit Rs.2 per unit
//Above 200 units Rs.3 per unit.

/*
class Bill
{
private:
    char name[30];
    unsigned int accountNum;
    int units;
    double bill;
public:
    Bill(){}
    Bill(char n[],unsigned int acc,int unit)
    {
        strcpy(name,n);
        accountNum=acc;
        units=unit;
        bill=0;
    }
    customerdetail()
    {

       cout<<"customer Name:"<<name<<endl<<"accound No:"<<accountNum<<endl<<"units: "<<units<<endl;
    }
   double calculateBill()
    {
    int a=1;
    float j,k,l;
    while(a<=units)
    {
        if(a<=100)
            j=a*1.20;
        if(a>100 && a<=200)
            k=(a-100)*2;
        if(a>200)
            l=3*(a-200);
        a++;
    }
        bill=j+k+l;
        return bill;
    }

};

int main()
{
   Bill b1("kaptan",15120301639,299);
   b1.customerdetail();
   cout<<"Total Bill: "<<b1.calculateBill();

}
*/

/*
//10.Define a class StaticCount and create a static variable.
// Increment this variable in a function and call this 3 times and display the result.
class staticCount
{
public:
    static int a;
     static count()
    {
        a++;
    }
};

int staticCount::a;
int main()
{
staticCount::count();
staticCount::count();
staticCount::count();
cout<<staticCount::a;
}
*/



            //Complete







