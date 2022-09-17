//                     Assignment - 10 A Job Ready Bootcamp in C++, DSA and IOT  MySirG
//                                      Functions in C Language.

//1. Write a function to calculate the area of a circle. (TSRS)
/*
#include<stdio.h>
float area(int);
int main()
{
int r;
float a;
printf("Enter Radius=");
scanf("%d",&r);
a=area(r);
printf("area of circle is=%0.2f",a);
}

float area(int t)
{
	int t1=3.14*t*t;
	return t1;
}

//2. Write a function to calculate simple interest. (TSRS).
#include<stdio.h>
#include<conio.h>
int interest( int,int,int);
int main()
{
    int p,t,r,j;
    printf("Enter Principle , time ,and rate=");
    scanf("%d%d%d",&p,&t,&r);
    j=interest(p,t,r);
    printf("Simple interest is=%d",j);
    return 0;
}

int interest(int a,int b,int c)
{
    int g;
    g=a*b*c/100;
    return g;
}


//3. Write a function to check whether a given number is even or odd.
//Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
    int z,m;
    printf("Enter a Number=");
    scanf("%d",&z);
    m=prime(z);
    printf("result %d",m);
    return 0;
}

int prime(int k)
{
   return k%2?0:1;
}

//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void Nnatural(int );
int main()
{
    int t;
    printf("Enter a Number=");
    scanf("%d",&t);
    Nnatural(t);
    return 0;
}
void Nnatural(int b)
{   int y;
    for( y=1 ; y<=b ; y++)
    {
        printf(" \n %d",y);
    }
}

//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void Noddnatural(int);
int main()
{
	int d;
	printf("Enter a Number=");
	scanf("%d",&d);
	Noddnatural(d);
	return 0;
}
void Noddnatural(int u)
{
	int g;
	for(g=1 ; g<=u ; g++)
	{
		printf("\n%d",g*2-1);
	}
}

//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int Factorial(int);
int main()
{
	int g,j;
	printf("Enter a Number=");
	scanf("%d",&g);
	j=Factorial(g);
	printf("Factorial is=%d",j);
	return 0;
}
int Factorial(int d)
{
	int v=1;
	while(d)
	{
		v*=d;
		d--;

	}
	return v;
}

//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int combi(int,int);
int main()
{
	int n,r,y;
	printf("Enter n and r=");
	scanf("%d%d",&n,&r);
	y=combi(n,r);
	printf("combinations are =%d",y);
	return 0;
}
int combi(int n, int r)
{
	int t;
	t=fact(n)/(fact(r)*fact(n-r));
	return t;
}

int fact(int c)
{
	int a=1,b;
	for(b=1 ; b<=c ; b++)
	{
		a*=b;
	}
	return a;
}

//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int arrange(int,int);
int main()
{
    int n,r,y;
	printf("Enter n and r=");
	scanf("%d%d",&n,&r);
	y=arrange(n,r);
	printf("arrangments are =%d",y);
	return 0;
}
int arrange(int n,int r)
{
 int g=1;
 for( n ;n>=r ; n--)
 {
 g*=n;
 }
 return g;
}

//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int checkdigit(int,int);
int main ()
{
	int j,k,l;
	printf("Enter a Number and Enter an digit=");
	scanf("%d%d",&j,&k);
	l=checkdigit(j,k);
	l==1?printf("\nyes given number contains given digit"):printf("\nNO given digit does not exist in given Number=");
	return 0;
}

int checkdigit(int g,int h)
{
	int k;
	while(g)
	{
		k=g%10;
		g/=10;
		if(k==h)
		return 1;
	}
	return 0;
}

//10. Write a function to print all prime factors of a given number.
//For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void primefactor(int);
int main()
{
	int r;
	printf("Enter a Number=");
	scanf("%d",&r);
	primefactor(r);
	return 0;
}

void primefactor(int t)
{
	int h=2;
	printf("prime factors are ");
	while(t)
	{
		if(t%h==0)
		{
		  t=t/h;
		  printf(" %d ",h);
		}
		else
		h++;


	}
}
*/

//   completed

















































