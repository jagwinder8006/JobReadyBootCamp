//                           Assignment - 8 A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                           Pattern Problems.

//pattern No.1
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
	{
		if(b<=a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}


//pattern No.2;

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
	{
		if(b>=6-a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}


//Pattern No.3


#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
	{
		if(b<=6-a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}


//Pattern No.4.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
	{
		if(b>=a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}
//Pattern No.5.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=9;b++)
	{
		if(b>=6-a && b<=4+a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern No.6.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=9;b++)
	{
		if(b<=10-a && b>=a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern NO.7
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=10;b++)
	{
		if(a==1)
			printf("*");
		else if(b<=6-a || b>=5+a)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}


//Pattern No.8

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=1;
	for(a=1;a<=4;a++)
	{
		c=1;
		for(b=1;b<=7;b++)
	{
		if(b>=5-a && b<=3+a)
		{
		printf("%d",c);
		if(b>=4)
		c--;
		else
		c++;
		}
	
		else
		{
		printf(" ");
		}
	
	}
	printf("\n");
	}
	
	return 0;
}

// Pattern No.9

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=4;a++)
	{
		c=1;
		for(b=1;b<=7;b++)
	{
		if(b<=8-a && b>=a)
		{
			 printf("%d",c);
			 b>=4?c--:c++;
		}
		  
		else
		   printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}


//Pattern No 10.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=4;a++)
	{
		c=1;
		for(b=1;b<=7;b++)
	{
		if(b<=5-a || b>=3+a )
		{
			printf("%d",c);
		b>=4?c--:c++;
		}
		else
		{
			printf(" ");
		   b>=4?c--:c++;
		}
		
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern No. 11

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char v='A';
	for(a=1;a<=5;a++)
	{
		v='A';
		for(b=1;b<=9;b++)
	{
		if(b>=6-a && b<=4+a)
		{
		    printf("%c",v);
		    b>=5?v--:v++;
		}
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern No.12

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char v='A';
	for(a=1;a<=4;a++)
	{
		v='A';
		for(b=1;b<=7;b++)
	{
		if(b<=8-a && b>=a)
		{
		    printf("%c",v);
		    b>=4?v--:v++;
		}
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern NO 13

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char v='A';
	for(a=1;a<=7;a++)
	{
		v='A';
		for(b=1;b<=13;b++)
	{
		if(b<=8-a || b>=6+a)
		{
		    printf("%c",v);
		    b>=7?v--:v++;
		}
		else
		{
		printf(" ");
		 b>=7?v--:v++;
		}
	
	}
	printf("\n");
	}
	
	return 0;
}


//Pattern NO.14

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{  
	   c=a==5?5:1;
		for(b=1;b<=5;b++)
	{   if(b<=c || b==a)
		{
		 printf("*");
		}
		
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern NO.15

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{  
	   c=a==5?1:5;
		for(b=1;b<=5;b++)
	{   if(b>=c || b==6-a)
		{
		 printf("*");
		}
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

//Pattern NO.16
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{  
	
		for(b=1;b<=9;b++) 
	{   if(b==6-a || b==4+a)
		{
			
		 printf("*");
		}
		else if(a==5)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	
	return 0;
}

// Pattern No.17

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1; a<=5 ;a++)
	{
		for(b=1 ; b<=9 ; b++)
		{
			if(a==1)
			printf("*");
			 else if(b==a || b==10-a)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

//Pattern No.18

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	for(a=1; a<=9 ;a++)
	{
	    if(a>=6)
	    {
	    c=a-4;
	    d=14-a;
		}
	    else
	    {
	    c=6-a;
	    d=4+a;
		}
		for(b=1 ; b<=9 ; b++)
		{
		   if(b>=c && b<=d)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
*/

//Pattern No.19 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=4,d=6,e=14,f=16;
	for(a=1;a<=13;a++)
	{
		if(a>=4)
		{
			if(a==4)
			{
			c=1;
			d=6;
			e=8;
			f=14;
			}
			else if (a==5)
			{
			f=18;
			c+=1;
			d=10;
			e=10;
			}
			
			else
			{
			c+=1;
			d=10;
			e=10;
			f-=1;
			}
		
		}
		else
		{
		c-=1;
		d+=1;
		e-=1;
		f+=1;
		}
		for(b=1;b<=19;b++)
	{
		if(b>=c && b<=d || b>=e && b<=f )
		{
		printf("*");
		}
		else if (a==4 && b==7)
		{
			printf("MySirG");
			if(b==8)
			{
				printf("");
			}
		}
		else
		printf(" ");
	}
	
	printf("\n");

	}
	
	return 0;
}

//                 completed-------------------
















