//      Assignment - 28       A Job Ready Bootcamp in C++,          DSA and IOT MySirG
//                Operator Overloading, friend operator and this pointers


//1. Define a class Complex with appropriate instance variables and member functions.
//Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include<iostream>
using namespace std;
/*
class Complex
{
public:
    int real,img;
public:
     friend  istream& operator>>(istream &input,Complex &c);
     friend  ostream& operator<<(ostream &out,Complex o);
};
 istream& operator>>(istream &input,Complex &c)
{
    input>>c.real>>c.img;
    return input;
}
 ostream& operator<<(ostream &out,Complex o)
{
    out<<o.real<<" "<<o.img<<endl;
    return out;
}
int main()
{
    Complex c1,c2;
    cout<<"Enter Real and imaginery part for complex class=";
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}
*/

/*
//2. Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object.
// Make sure the names of formal arguments are the same as names of instance variables.
class Complex
{
private :
    int real,imag;
public:
     void setData(int real,int imag)
     {
        this->real=real;
        this->imag=imag;
     }
     void showdata()
     {
         cout<<real<<" "<<imag;
     }
};
int main()
{
    Complex c1;
    c1.setData(5,10);
    c1.showdata();
    return 0;
}
*/

/*
//3.Overload subscript operator [] that will be useful when we want to check for an index out of bound.
class Array
{
private:
    int arr[100];
    const int size=100;
public:
    void setdata(int index,int value)
    {
        if(index>=size)
            cout<"Array index out of Bound";
        arr[index]=value;
    }
    int operator[](int index)
    {
        return arr[index];
    }

};
int main()
{
    Array a;
    a.setdata(23,29);
    cout<<a[3];
}
*/

//4.Create a student class and overload new and delete operators as a member function of the class.
//5. Create a student class and overload new and delete operators outside the class.

/*
//6. Create a complex class and overload assignment operator for that class.
class Complex
{
private:
    int real,imag;
public:
    void setdata(int real,int imag)
    {
        this->real=real,this->imag=imag;
    }
    friend ostream& operator<<(ostream &out,Complex &c)
    {
        cout<<"real:"<<c.real<<"  imag:"<<c.imag<<endl;
        return out;
    }
    void operator=(int a)
    {
        real=a,imag=a;

    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(12,25);
    c2=c1;
    c2=c3;
    c3=c1;
    cout<<c2<<c3;
    return 0;
}
*/

/*
//7. Create an Integer class and overload logical not operator for that class.
class integer
{
private:
    int a;
public:
    void setdata(int a)
    {
    this->a=a;
    }
    bool operator!()
    {
        return a?0:1;
    }

};
int main()
{
    integer int1;
    int1.setdata(0);
    int check;
    check=!int1;
    cout<<check;
    return 0;
}
*/

/*
//8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write
//c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are objects of 3D coordinate class.
class Coordinate
{
private:
    int x,y,z;
public:
    void setdata(int x,int y,int z)
    {
        this->x=x; this->y=y; this->z=z;
    }
    void display()
    {
        cout<<x<<"  "<<y<<"   "<<z<<endl;
    }
    Coordinate operator,(Coordinate c)
    {
        Coordinate t;
        t.x=c.z,t.y=c.y,t.z=c.x;
        return t;
    }
};
int main()
{
    Coordinate c1,c2,c3,c4;
    c1.setdata(3,5,3);
    c2.setdata(23,54,39);
    c3=(c1,c2);
    c3.display();
    c4.setdata(20,20,9);
    c3=(c1,c2,c4);
    c3.display();
    return 0;
}
*/

/*
//9. Create an Integer class that contains int x as an instance variable and overload casting
//int() operator that will type cast your Integer class object to int data type.
class integer
{
private:
    int x;
public:
    void setdata(int z){x=z;}
    void display(){cout<<x<<endl;}
    operator int(){return x;}
};
int main()
{
    integer i1;
    i1.setdata(20);
    int a;
    a=i1;
    cout<<a;
    return 0;
}
*/

//10.Create a Distance class having 2 instance variable feet and inches.
//Also create default constructor and parameterized constructor takes 2 variables .
// Now overload () function call operator that takes 3 arguments a , b and c and set
// feet = a + c + 5 and inches = a+b + 15.



//11. Create a class Marks that have one member variable marks and one member function
//that will print marks. We know that we can access member functions using (.) dot operator.
// Now you need to overload (->) arrow operator to access that function
/*
class Marks
{
private:
    int mark;
public:
    void setdata(int  set)
    {
        mark=set;
    }
    void display()
    {
        cout<<mark<<endl;
    }
    Marks* operator->()
    {
        return this;
    }
};

int main()
{
    Marks m1;
    m1.setdata(30);
    m1.display();
    m1->display();
    return 0;
}
*/


