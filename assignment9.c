//                        Assignment - 9 A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                            Switch Case Problems

//1. Write a program which takes the month number as an input and display number of days in that month.
/*
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Month Number=");
	scanf("%d",&a);
	switch(a)
	{
		case 1 :
			printf("%d Month is january it has 31 Days",a);
			break;
		case 2 :
			printf("%d Month is February it has 28 Days",a);
			break;
		case 3 :
			printf("%d Month is March it has 31 Days",a);
			break;
		case 4 :
			printf("%d Month is April it has 30 Days",a);
			break;
		case 5 :
			printf("%d Month is May it has 31 Days",a);
		case 6 :
			printf("%d Month is june it has 30 Days",a);
			break;
	    case 7 :
			printf("%d Month is july it has 31 Days",a);
			break;
		case 8 :
			printf("%d Month is August it has 31 Days",a);
			break;
		case 9 :
			printf("%d Month is September it has 30 Days",a);
			break;
		case 10 :
			printf("%d Month is October it has 31 Days",a);
			break;
		case 11 :
			printf("%d Month is November it has 30 Days",a);
			break;
		case 12 :
			printf("%d Month is December it has 31 Days",a);
			break;
		default :
			printf("Enter Valid Input");

	}
	return 0;
}

//2. Write a menu driven program with the following options:
// a. Addition b. Subtraction c. Multiplication d. Division e. Exit
#include<stdio.h>

main()
{
	char r;
	int a,b;
	while(1)
	{
	printf("\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n\n");
	printf("Enter your Choice=");
	scanf("%c",&r);
    switch(r)
      {
    	case 'a': printf("Enter Two numbers=");
    	          scanf("%d%d",&a,&b);
    	          printf("Sum is %d",a+b);
    	          break;
    	case 'b': printf("Enter Two numbers=");
    	          scanf("%d%d",&a,&b);
    	          printf(" difference is %d",a-b);
    			  break;
    	case 'c': printf("Enter Two numbers=");
    	          scanf("%d%d",&a,&b);
    	          printf("Multiple is %d",a*b);
    			  break;
    	case 'd': printf("Enter Two numbers=");
    	          scanf("%d%d",&a,&b);
    	          printf("quationt  is %d",a/b);
    	          break;
    	case 'e': exit(0);
    		
	  }
	}

	return 0;
	
}

//3. Write a program which takes the day number of a week and displays a unique greeting message for the day. 
#include<stdio.h>
#include<conio.h>
int main()
{
	int k;
	printf("Enter Day number of a Week=");
	scanf("%d",&k);
	switch(k)
	{
		case 1:printf(" Today is \"Monday\" Wishing You a Great Day ;");break;
		case 2:printf(" Today is \"Tuesday\" Have a nice Day");break;
		case 3:printf(" Today is \"wednesday\" Happy Wednesday");break;
		case 4:printf(" Today is \"Thursday Have a nice Day");break;
		case 5:printf(" Today is \"Friday\" Happy Friday");break;
		case 6:printf("Today is \"Saturday\" Happy Saturday");break;
		case 7:printf("Wow Today is \"Sunday Happy Sunday");break;	
	}
	return 0;
}

//4. Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles triangle or not 
//b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not 
//c. Check whether a given set of three numbers are equilateral triangle or not 
//d. Exit
#include<stdio.h>
int main()
{
	int c;
    int x,y,z;
    printf("Enter Three lenghts=");
	scanf("%d%d%d",&x,&y,&z);
    while(1)
    {
	printf("\n \n 1. three numbers are lengths of an isosceles triangle or not\n\n ");
	printf("\n 2.  three numbers are lengths of sides of a right angled triangle or not\n\n ");
	printf("\n 3.three numbers are equilateral triangle or not\n\n ");
	printf("\n 4.Exit");
	printf("\nEnter Your choice=");
	scanf("%d",&c);
	switch(c)
	{
		case 1: 
		        if(x==y || y==z || x==z)
		        printf("This is Isoscelses Triangle");
	        	else 
	        	printf("This is not Isoscdlses Triangle");
	        	break;
		case 2:
			     if(x==90 || y==90 || x==90)
		        printf("This is right angle Triangle");
	        	else 
	        	printf("This is not right angled Triangle");
	        	break;
		case 3: if(x==y && y==z && x==z)
		        printf("This is equilateral Triangle");
	        	else 
	        	printf("This is not equilateral Triangle");
	        	break;
		case 4: exit(0);
	}
}
	
	return 0;
}


//5. Convert the following if-else-if construct into switch case:
//if(var == 1) 
//System.out.println("good");
// else if(var == 2) 
//System.out.println("better");
// else if(var == 3) 
//System.out.println("best"); 
//else 
//System.out.println("invalid");

#include<stdio.h>
#include<conio.h>
int main()
{
	int k;
	printf("Enter number 1 to 3=");
	scanf("%d",&k);
	switch(k)
     {
     	case 1 : printf("good");
     	        break;
        case 2 : printf("better");
               break;
        case 3 : printf("best");
          break;
        default : printf("Invaild");
	 }
	return 0;
}

//6. Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a Year=");
    scanf("%d",&year);
	switch(year%4==0  && year%100!=0 || year%100==0 && year%400==0)
    {
    	case 1 : printf("leap year");
    	break;
    	case 0 : printf("NOt a leap year");
    
	}
	return 0;
}

//7. Program to take the value from the user as input electricity unit charges and calculate
// total electricity bill according to the given condition . Using the switch statement.
//For the first 50 units Rs. 0.50/unit 
//For the next 100 units Rs. 0.75/unit 
//For the next 100 units Rs. 1.20/unit 
//For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill. 
#include<stdio.h>
#include<conio.h>
int main()
{
	int r,a=1;
	double c,d,e,f,total;
	printf("Enter electricity units=");
	scanf("%d",&r);
    while(a<=r)
    {
      switch(a)
	  {
	  	case 1 ... 50 : c=a*0.50;
	  	break;
	  	case 51 ... 150 : d=100*0.75;
	  	break;
	  	case 151 ... 250 : e=100*1.20;
	  	break;
		default : r=r-250;
		f=r*1.50;		
	  }   
	  a++;
	}
	total=c+d+e+f;
	total+=total/100*20;
	printf("Total Bill= %.2lf",total);
	return 0;
}

//8. Program to convert a positive number into a negative number and 
//negative number into a positive number using a switch  statement. 

#include<stdio.h>
#include<conio.h>
int main ()
{
	int j,r;
	printf("Enter Number Positive or Nagative=  ");
	scanf("%d",&j);
	switch(j<0)
	{
		case 1 :  printf("Befor= %d After= %d",j,r=j*-1);
		        break;
	    case 0 : printf("Before= %d After= %d",j,r=j*-1);
	}
	
	return 0;
}

//9. Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
#include<conio.h>
int main()
{
	int o;
	printf("Enter Even Number=");
	scanf("%d",&o);
	switch(o>0)
	{
		case 1:
			printf("upper nearest odd number is=%d",o+1);
		
			break;
		case 0 : printf("Enter valid input");
	}
	return 0;
}
*/

//completed























