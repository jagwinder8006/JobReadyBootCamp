//                          Assignment - 11 A Job Ready Bootcamp in C++, DSA and IOT  MySirG
//                                More on functions in C Language
/*
//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcmwala(int,int);
int main()
{
    int o,p,h;
    printf("Enter two Numbers=");
    scanf("%d%d",&o,&p);
    h=lcmwala(o,p);
    printf("LCM is=%d",h);
    return 0;
}
int lcmwala(int g, int h)
{
    int k;
    k=g>=h?g:h;
    for(k ; k<=g*h ; k++)
    {
        if(k%g==0 && k%h==0)
            break;
    }

    return k;
}

//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcfwala(int,int);
int main()
{
    int a,b,j;
    printf("Enter two Numbers=");
    scanf("%d%d",&a,&b);
    j=hcfwala(a,b);
    printf("HCF is=%d",j);
    return 0;
}
int hcfwala(int g,int h)
{
    int max;
    max=g>=h?g:h;
    for(max ; max>=1 ; max--)
    {
        if(g%max==0 && h%max==0)
            break;
    }
    return max;
}

//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int primecheck(int);
int main()
{
    int k,h;
    printf("Enter a Number=");
    scanf("%d",&k);
    h=primecheck(k);
    h==0?printf("Number is Not Prime"):printf("Number is Prime");
    return 0;
}

int primecheck(int j)
{
    int o;
    for(o=2; o<j ; o++ )
    {
        if(j%o)
        continue;
        else
        break;
    }
    return j==o?1:0;
}


//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextprime(int);
int main()
{
    int j,m;
    printf("Enter a Number=");
    scanf("%d",&j);
    m=nextprime(j);
    printf("Next Prime Number is=%d",m);
    return 0;
}

int nextprime(int u)
{
    int g;
    u++;
   while(u)
   {
       for(g=2 ; g<u ; g++)
       {
           if(u%g)
            continue;
           else
           break;
       }
      if(g==u)
        break;
      else
        u++;
   }
   return u;
}

//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void Nprime(int);
int main()
{
    int d;
    printf("Enter a Number=");
    scanf("%d",&d);
    Nprime(d);
    return  0;
}

void Nprime(int h)
{
    int u=2,g;
    while(h)
    {

        for(g=2 ; g<u ; g++)
        {
            if(u%g)
            continue;
            else
            break;
        }
        if(g==u)
        {
        printf("\n%d",u);
        h--;
        u++;
        }
        else
        u++;

    }
}

//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void betweenprime(int,int);
int main()
{
    int r,g;
    printf("Enter Two Numbers=");
    scanf("%d%d",&r,&g);
    betweenprime(r,g);
    return 0;
}

void betweenprime(int t,int y)
{
    int g;
    while(t<=y)
    {

        for(g=2 ; g<t ; g++)
        {
            if(t%g)
            continue;
            else
            break;
        }
        if(g==t)
        {
           printf("\n%d",t);
        }
        t++;


    }
}

//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
    int f;
    printf("Enter a Number=");
    scanf("%d",&f);
    fibonacci(f);
    return 0;
}

void fibonacci(int b)
{
    int j=1,k=-1,t;
    while(b)
    {
        t=j+k;
        printf(" %d ",t);
        k=j;
        j=t;
        b--;
    }
}

//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
int main()
{
	pascal(10);
	return 0;
}



int fact(int s)
{
	int j=1,d;
	for(d=1 ; d<=s ;d++)
	{
		j*=d;
	}
	return j;
}

int comb(int n,int r)
{
	int t;
	return fact(n)/(fact(r)*fact(n-r));
}

void pascal(int n)
{
	int d,s;
	for(s=0 ; s<n ; s++)
	{
		for(d=0 ; d<=s; d++)
		{
		
		printf("%5d",comb(s,d));
		
		}
		printf("\n");
	}

}



//9. Write a program in C to find the square of any number using the function. 
#include<stdio.h>
int square(int);
int main()
{
	int h,g;
	printf("Enter a Number=");
	scanf("%d",&h);
	g=square(h);
	printf("square of %d is =%d",h,g);
	return 0;
}

int square(int k)
{
	return k*k;
}

//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fact(int);
int sumfact();

int main()
{
	int d=0;
	d=sumfact();
	printf("sum of series is=%d",d);
}

int sumfact()
{
	int n,d=0;
	for(n=1 ; n<=5 ; n++)
	{
		d+=fact(n)/n;
	}
	return d;
}

int fact(int s)
{
	int j=1,d;
	for(d=1 ; d<=s ;d++)
	{
		j*=d;
	}
	return j;
}
*/

































