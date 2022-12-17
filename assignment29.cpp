//        Assignment – 29           A Job Ready Bootcamp in C++, DSA and IOT               MySirG
//                                Type Casting and Conversion

//1.Write a C++ program to convert Primitive type to Complex type.
// Example - int main() {Complex c1;   int x=5;   c1=x;  return 0;}

#include<iostream>
using namespace std;

/*
class Complex
{
private:
    int real,imag;
public:
    Complex(){}
    Complex(int t)
    { real=t,imag=t;}
    void setdata(int real,int imag)
    {
        this->real=real,this->imag=imag;
    }
    void display()
    {
        cout<<"\t"<<"real:"<<real<<"      imaginary:"<<imag<<endl;
    }

};
  int main()
  {
      Complex c1;
      c1.setdata(29,38);
      int x=5;
      c1=x;
      c1.display();
      return 0;
}

*/

/*
//2. Write a C++ program to convert Complex type to Primitive type.
//Example -  int main() { Complex c1;  c1.setData(3,4); int x;  x=c1; return 0; }
class Complex
{
private:
    int real,imag;
public:
    void setdata(int x,int y)
    {
        real=x,imag=y;
    }
    void display()
    {
        cout<<"\t"<<"real:"<<real<<"      imaginary:"<<imag<<endl;
    }
    operator int()
    {
        return real+imag;
    }
};

int main()
{
    Complex c1;
    c1.setdata(23,9);
    int s;
    s=c1;
    cout<<s<<endl;
    return 0;
}
*/

/*
//3. Create a Product class and convert Product type to Item type using constructor
//int main() { Item i1;  Product p1; p1.setData(3,4); i1=p1; return 0; }

class product
{
private:
    int x,y;
public:
    product(){}
    void setdata(int a,int b)
    {
        x=a,y=b;
    }
    void display()
    {
        cout<<"x:"<<x<<"  "<<"y:"<<y;
    }
     int getx(){return x;}
     int gety(){return y;}

};

class item
{
 private:
     int a,b;
 public:
     item(){}
    void setdata(int x,int y)
    {
        a=x,b=y;

    }
    void display()
    {
        cout<<"a:"<<a<<"  "<<"b:"<<b;
    }
    item(product p)
    {
        a=p.getx(),b=p.gety();
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(15,40);
    i1=p1;
    cout<<"\t"<<"item class:  ";
    i1.display();
    return 0;
}
*/


/*
//4. Create Product class and convert Product type to Item type using casting operator
//int main() { Item i1;    Product p1;  p1.setData(3,4);        i1=p1;        return 0; }
class item
{
 private:
     int a,b;
 public:
    void setdata(int x,int y)
    {
        a=x,b=y;

    }
    item(){}
    item(int j,int k)
    {
        a=j,b=k;
    }
    void display()
    {
        cout<<"item class:"<<"a:"<<a<<"  "<<"b:"<<b;
    }
    int getA(){return a;}
    int getB(){return b;}

};
class product
{
private:
    int x,y;
public:

    void setdata(int a,int b)
    {
        x=a,y=b;
    }
    void display()
    {
        cout<<"x:"<<x<<"  "<<"y:"<<y;
    }
   operator item()
   {
       item temp(x,y);
       return temp;
   }


};


int main()
{
    item i1;
    product p1;
    p1.setdata(50,40);
    i1=p1;
    i1.display();
    return 0;

}
*/


/*
//5. Create two classes Invent1 and Invent2 and also add necessary constructors in it.
//Now add functions to support Invent1 to float and Invent1 to Invent2 type.
//Example -  int main() {  Invent1 s1(4,5); Invent2 d1; float tv;   tv=s1;   d1=s1;  return 0; }

class Invent2
{
private:
    int a,b;
public:
    void setdata(int i,int j)
    {
        a=i,b=j;
    }
    void display()
    {
        cout<<"Invent2:     "<<a<<"  "<<b;
    }
    Invent2(){}
    Invent2(int u,int v)
    {
        a=u,b=v;
    }
};
class Invent1
{
private:
    int x,y;
public:
    void setdata(int j,int k)
    {
        x=j,y=k;
    }
    void display()
    {
        cout<<"Invent1:    "<<x<<"        "<<y<<endl;
    }
    Invent1(){}
    Invent1(int g,int h)
    {
        x=g,y=h;
    }
    operator float()
    {
        return x+y;
    }
    operator Invent2()
    {
      Invent2 temp(x,y);
      return temp;
    }


} ;



int main()
{
    Invent1 s1(48,55);
    Invent2 s2;
    float tv;
    tv=s1;
    cout<<"float variable:"<<tv<<endl;
    s2=s1;
    s2.display();
    return 0;
}
*/

/*
//6.  Create a Time class and take Duration in seconds.
// Now you need to convert seconds(i.e in int ) to Time class.
//Example- int main() { int duration;   cout<<”Enter time duration in minutes”;   cin>>duration;
//Time t1 = duration;   t1.display();  return 0; }
class time
{
private:
    int hour,min,sec;
public:
   time(){}
   time(int t)
   {
       hour=t/3600;
       t=t%3600;
       min=t/60;
       t=t%160;
       sec=t;
   }
   void display()
   {
       cout<<"hour="<<hour<<"  "<<"Min="<<min<<"  "<<"sec="<<sec;
   }

};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes=";
    cin>>duration;
    time t1 = duration;
    t1.display();
    return 0;
    return 0;
}
*/

/*
//7. Create two class Time and Minute and add required getter and setter including constructors.
//Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
//Example -   int main() {        Time t1(2,30);        t1.display();
// Minute m1;  m1.display();  m1=t1 // Fetch minute from time   t1.display();  m1.display(); return 0; }
class Minute
{
private:
    int min;
public:
   Minute(){min=0;}
   Minute(int h){min=h;}
   void display(){cout<<"     Minute class Minute= "<<min<<"  Fetch from time class";}
};


class Time
{
private:
    int hour,min,sec;
public:
    Time(){}
    Time(int h,int m,int s)
    {
        hour=h,min=m,sec=s;
    }
    void display()
    {
        cout<<"Hour:"<<hour<<"     Minute:"<<min<<"     seconds:"<<sec;
    }
    operator Minute()
    {
     Minute temp(min);
     return temp;
    }

};
int main()
{
    Time t1(3,54,34);
    Minute m1;
    m1=t1;        //// Fetch minute from time
    m1.display();
    return 0;
}
*/

/*
//  8. Create a Rupee class and convert it into int. And Display it.
//Example- int main() {Rupee r = 10;   int x = r;  cout<<x;   return 0; }
class Rupee
{
    int paisa;
public:
    Rupee(){}
    Rupee(int x){paisa=x;}
    void display(){cout<<paisa<<endl;}
    operator int(){return paisa;}
};
int main()
{
    Rupee r = 10;
    int x = r;
    r.display();
    cout<<x;
    return 0;
}
*/

/*
//9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
//Example-  int main() { int x = 50;  Dollar d;  d =  x;  d.display();  return 0; }
class Dollar
{
private:
    int  dol;
public:
    Dollar(){}
    Dollar(int d){dol=d;}
    void display(){cout<<"Dollar:   "<<dol<<endl;}
} ;
 int main()
 {
     int x = 50;
     Dollar d;
     d =  x;
     d.display();
     return 0;
}
*/

/*
//10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.
class Rupee
{
private:
    float rupee;
public:
      Rupee(){}
      Rupee(float t){rupee=t;}
      void display(){cout<<"          Rupees  :"<<rupee<<endl;}
      float getrupee(){return rupee;}


};
class Dollar
{
private:
    float dollar;
public:
    Dollar(){}
    Dollar(Rupee r){dollar=r.getrupee()/82.73;}

    void display(){cout<<"          Dollar :"<<dollar<<endl; }
    operator Rupee()
    {

        Rupee temp(dollar*82.73);
        return temp;
    }


};
int main()
{
    Rupee r = 597;
    Dollar d = r;   // Rupee to Dollar conversion
    d.display();
    r.display();
    cout<<endl;
    r = d;        // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
*/


         //Completed





