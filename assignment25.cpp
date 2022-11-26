//           Assignment - 25            A Job Ready Bootcamp in C++, DSA and IOT                   MySirG
//                                            Classes and Objects

//1. Define a class Complex to represent a complex number. Declare instance member variables to store real
//and imaginary part of a complex number, also define instance member functions to set values of
// complex number and print values of complex number.


#include<iostream>
using namespace std;
/*
   class complex
    {
    private :
        int real;
        int img;
    public :
        void set()
        {
           cout<<"Enter Real part and imginary part of a complex number";
           cin>>real>>img;
        }
        void showdata()
        {
            cout<<real<<"+"<<img<<"i";
        }
    };
int main()
{
    complex c1;
    c1.set();
    c1.showdata();
    return 0;
}
*/

/*
//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec).Declare appropriate number of instance member variables and also define instance member
//functions to set values for time and display values of time.
class Time
{
private:
      int hr=0,min=0,sec=0;
public:
        void setTime()
        {
            cout<<"Enter hours minute and seconds:";
            cout<<endl<<"Enter hours:";
            cin>>hr;
            while(hr>12 || hr<1)
            {
                cout<<"plz Enter valid hours:";
                cin>>hr;
            }
            cout<<endl<<"Enter Minutes:";
            cin>>min;
            while(min>60 || min<1)
            {
            cout<<"Enter valid Mintues:";
            cin>>min;
            }
            cout<<endl<<"Enter seconds:";
            cin>>sec;
            while(sec>60 || sec<1)
            {
                cout<<"Enter valid seconds:";
                cin>>sec;
            }
        }
        void ShowTime()
        {
            cout<<hr<<" hr: "<<min<<" min : "<<sec<<" sec ";
        }


};
int main()
{
    Time time;
    time.setTime();
    time.ShowTime();
    return 0;
}
*/

/*
//3. Define a class Factorial and define an instance member
// function to find the Factorial of a number using class.
class factorial
{
private:
    unsigned int fact,Ansfact=1;
public:
    void setFactorial()
    {
        cout<<"Enter Number to calculate Factorial of a number:";
        cin>>fact;
        while(fact<1)
        {
            cout<<"Enter positive Number";
            cin>>fact;
        }
    }
    void getfact()
    {

        while(fact--)
            Ansfact*=fact+1;
        cout<<Ansfact;
    }
};

int main()
{
    factorial f1;
    f1.setFactorial();
    f1.getfact();
    return 0;
}
*/

/*
//4. Define a class LargestNumber and define an instance member function to find the Largest
// of three Numbers using the class.
class LargestNumber
{
private:
   int x,y,z,max;
public:
    void getNumbers()
    {
        cout<<"Enter Three Numbers:";
        cin>>x>>y>>z;
    }
    void displayLarg()
    {
        max=x>=y?x:y;
        max=z>=max?z:max;
        cout<<"Largest Number is:"<<max;
    }
};
int main()
{
    LargestNumber L1;
    L1.getNumbers();
    cout<<endl;
    L1.displayLarg();
    return 0;
}
*/

/*
//5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
class ReverseNumber
{
private:
    int num,Rnum=0;
public:
    void getnum()
    {
        cout<<"Enter Number:";
        cin>>num;
    }
    void ReverseNum()
    {
        while(num)
         {
          int remain;
          remain=num%10;
          Rnum*=10;
          Rnum+=remain;
          num/=10;
         }
         cout<<Rnum;

    }
};

int main()
{
    ReverseNumber R1;
    R1.getnum();
    R1.ReverseNum();
    return 0;
}
*/

/*
//6. Define a class Square to find the square of a number and write a C++
//program to Count number of times a function is called.
class square
{
public:
    int s;
    int sqr;
public:
   void setsquare(int r)
   {s=r;}
   void getsquare()
   {sqr=s*s;
    cout<<sqr;}
};
int main()
{
    square s1;
    cout<<"Enter Number to calculate square:";
    cin>>s1.s;
    s1.getsquare();
    return 0;
}
*/

/*
//7. Define a class Greatest and define instance member function to
//find Largest among 3 numbers using classes.
class Greatest
{
public:
    int x,y,z,bigger;
public:
    int CheckGreatest()
    {
       bigger=x>=y?x:y;
       bigger=bigger>=z?bigger:z;
       return bigger;
    }
};
int main()
{
    Greatest g1;
    cout<<"Enter Three Numbers:";
    cin>>g1.x>>g1.y>>g1.z;
    cout<<"Greatest Number is:"<<g1.CheckGreatest();
    return 0;
}
*/

/*
//8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
class Rectangle
{
public :
    int length,breadth;
     float area;
public :
    float checkArea()
    {
        return area=length*breadth;
    }

};
int main()
{
    Rectangle R1;
    cout<<"Enter Height and Breadth of a Rectangle:";
    cin>>R1.length>>R1.breadth;
    cout<<"Area of Rectangle is:"<<R1.checkArea();
    return 0;
}
*/

/*
//9. Define a class circle and define an instance member function to find the area of the circle.
class circle
{
public :
    int Radius;
    float area;
public :
    float CheckArea()
    {
        area=3.14*Radius*Radius;
        return area;
    }


};

int main()
{
    cout<<"Enter  Radius  for Calculate Area of circle:";
    circle C1;
    cin>>C1.Radius;
    while(C1.Radius<1)
    {
        cout<<"Enter positive Number";
        cin>>C1.Radius;
    }
    cout<<"Area of circle is:"<<C1.CheckArea();
    return 0;
}

*/

/*
//10.Define a class area and define instance member functions to find the area of the different
//shapes like square, rectangle , circle etc.
class area
{
public:
    int length,breadth,Radius;
    float Area;
public:
  inline int SqrArea()
  {
      return Area=length*length;
  }
  inline float RecArea()
  {
      return Area=length*breadth;
  }
  inline float CircleArea()
  {
      return Area=3.14*Radius*Radius;
  }
};
int main()
{
    area square,rectangle,circle;
    cout<<"Enter length of one side to calculate area of square:";
    cin>>square.length;
    cout<<"Area of Square is:"<<square.SqrArea();
    cout<<endl<<"Enter length and breadth to calculate area of rectangle:";
    cin>>rectangle.length>>rectangle.breadth;
    cout<<"Area of rectangle is:"<<rectangle.RecArea();
    cout<<endl<<"Enter Radius To calculate Area of circle:";
    cin>>circle.Radius;
    cout<<endl<<"Area of Circle is:"<<circle.CircleArea();
    return 0;
}
*/


//Completed











