 //             Assignment - 7      A Job Ready Bootcamp in C++, DSA and IOT     MySirG
                             //Iterative Control Statements (Part - 2)

//1. Write a program to find the Nth term of the Fibonnaci series.
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=-1,c=1,d,i;
    printf("Enter a number=");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    d=b+c;
    b=c;
    c=d;
    }
    printf("\n%d term is %dth position=",d,a);
    return 0;
}


//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=-1,c=1,d,i;
    printf("Enter a number=");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    d=b+c;
     printf("\n%d",d);
    b=c;
    c=d;
    }
    return 0;
}

//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b=-1,c=1,d,i,e;
	printf("Enter a number");
	scanf("%d",&a);
	e=a;
	if(a<=5)
	e=6;
	for(i=0;i<e;i++)
	{
		d=b+c;
		if(d==a)
		break;
		else
		b=c;
		c=d;
	}
	if(i==e)
	printf("\n NO %d is not in Fibonacci series",a);
	else
	printf("\n yes %d is in Fibonacci series",a);
	return 0;
}


//4. Write a program to calculate HCF of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,max;
	printf("Enter Two Numbers=");
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	while(max)
	{
		if(a%max || b%max)
		max--;
		else
	    break;

	}
		printf("%d",max);
	return 0;
}


//5. Write a program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,l,max;
	printf("Enter Two Numbers=");
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	for(l=2;l<max;l++)
	{
		if(a%l || b%l)
		continue;
		else
        break;
	}
	if(l==max)
	printf("\n%d and %d Are Co-Prime Numbers=",a,b);
	else
	printf("\n %d and %d  Are Not Co-Prime Numbers=",a,b);
	return 0;
}

//6. Write a program to print all Prime numbers under 100.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a=2,i;
	while(a<=100)
	{
		for(i=2;i<a;i++)
		{
			if(a%i)
		    continue;
			else
			break;
		}
		if(a==i)
		printf("\n%d",a);
		a++;
	}
	return 0;
}

//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	printf("Enter Two Numbers=");
	scanf("%d %d",&a,&b);
	while(a<=b)
	{
		for(i=2;i<a;i++)
		{
			if(a%i)
		    continue;
			else
			break;
		}
		if(a==i)
		printf("\n%d",a);
		a++;
	}
	return 0;
}

//8. Write a program to find next Prime number of a given number.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i=2;
	printf("Enter a Number=");
	scanf("%d",&a);
	a++;
	while(a)
	{
	    for(i=2;i<a;i++)
	    {
	    	if(a%i)
	    	continue;
	    	else
	    	break;
		}
		if(a==i)
		{
		printf("Next Prime Number is %d",a);
		break;
		}
		else
		a++;
	}
	return 0;
}

//9. Write a program to check whether a given number is an Armstrong number or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=0,d;
	printf("Enter a Number=");
	scanf("%d",&a);
	d=a;
	while(a)
	{
	b=a%10;
	c+=b*b*b;
	a/=10;
	}
	if(c==d)
	printf(" Yes %d is Armstrong Number",d);
	else
	printf(" No %d is Not Armstrong Number",d);
	return 0;
}


//10. Write a program to print all Armstrong numbers under 1000.


#include<stdio.h>
#include<conio.h>
int main()
{
	int i,c=0,d=0,a=0;
	for(i=0;i<=1000;i++)
	{
		c=i;
		while(c)
		{
			d=c%10;
			a+=d*d*d;
			c/=10;
		}
		if(i==a)
		printf("\n%d",a);
		d=0;
		c=0;
		a=0;

	}
	return 0;
}
*/

//completed





















