//                           Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT  MySirG
//                                            More on Recursion in C Language
/*
//1. Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sum(int);
int main()
{
    int a,n;
    printf("Enter a Number=");
    scanf("%d",&a);
    n=sum(a);
    printf("sum is=%d",n);
    return 0;

}

int sum(int r)
{
    int s=0;
    if(r==0)
        return 0;
    else
    {
       s= r+sum(r-1);
        return s;
    }
}

//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int a,n;
    printf("Enter a Number=");
    scanf("%d",&a);
    n=sum(a);
    printf("sum is=%d",n);
    return 0;

}

int sum(int r)
{
    int s=0;
    if(r==1)
        return 1;
    else
    {
       s=(r*2-1)+sum(r-1);
       return s;
    }
}


//3. Write a recursive function to calculate sum of first N even natural numbers.
#include<stdio.h>
int sumNeven(int);
int main()
{
	int h,c;
	printf("Enter a Number=");
	scanf("%d",&h);
	c=sumNeven(h);
	printf("Sum of N even natural is=%d",c);
	return 0;
}

int sumNeven(int g)
{
	int sum=0;
	if(g==1)
	  return 2;
	else
	{
		sum=g*2+sumNeven(g-1);
		return sum;
	}
}

//4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
int sumNsquares(int);
int main()
{
	int t,e;
	printf("Enter a Number=");
	scanf("%d",&t);
	e=sumNsquares(t);
	printf("Sum of Squares of N natural numbers=%d",e);
	return 0;
}

int sumNsquares(int d)
{
	int s=1;
	if(d==1)
	return 1;
	else
	s=d*d+sumNsquares(d-1);
	return s;
}

//5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int sumOfdigits(int);
int main()
{
	int t,d;
	printf("Enter a Number=");
	scanf("%d",&t);
	d=sumOfdigits(t);
	printf("Given number's sum is =%d",d);
	return 0;
}

int sumOfdigits(int k)
{
	int sum=0;
	if(k==1)
	   return 1;
	else
	 {
	 	sum=k%10+sumOfdigits(k/10);
	 	return sum;
	 }
}

//6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int fact(int);
int main()
{
	int t,d;
	printf("Enter number to calculate factorial=");
	scanf("%d",&t);
	d=fact(t);
	printf("Factorial of Number is=%d",d);
	return 0;
}

int fact(int k)
{
	int d=1;
	if(k==1)
	return 1;
	else
	{
		d=k*fact(k-1);
		return d;
	}
}


//7. Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
int HCF(int,int,int);
int main()
{
	int f,g,r,max;
	printf("Enter a Number=");
	scanf("%d%d",&f,&g);
	max=f>=g?f:g;
	r=HCF(f,g,max);
	printf("HCF is=%d",r);
	return 0;
}
int HCF(int d,int s,int max)
{

	if(d%max==0 && s%max==0)
	 return max;
	else
       HCF(d,s,max-1);
}

//8. Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
void fibo(int);
int main()
{
	fibo(10);
}
void fibo(int a)
{
	static int b=-1,c=1;
	int d;
	if(a==0);
	else
	{
	d=b+c;
	printf("\n%d",d);
	b=c;
	c=d;
	fibo(a-1);
	}
	
}

//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int u,m;
    printf("Enter a Number=");
    scanf("%d",&u);
    m=count(u);
    printf("%d",m);
    return 0;
}

int count(int d)
{

   int incre=0;
   if(d>0)
  {
  	incre=1+count(d/10);
  	return incre;
  }
   
}

//10. Write a program in C to calculate the power of any number using recursion.  
#include<stdio.h>
int power(int);
int main()
{
	printf("%d",power(15));
}
 
int power(int a)
{
    int j;
	if(a==0);
	else
	{
	j=a*a*a+power(a%a);
	return j;
	}	
}
*/










































