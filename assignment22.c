//                    Assignment - 22            A Job Ready Bootcamp in C++, DSA and IOT               MySirG
//                                                       DMA

//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void inputstring();
void datavalues();
void userenter();
void printstr();
void sumarr();
void mleak();
void danlingptr();
void allocationfaild();
void MinMax();
int main()
{
   /*inputstring();*/
   /*datavalues();*/
   /*userenter();*/
   /*printstr();*/
   /*sumarr();*/
   /*lrgElement();*/
   /*mleak();*/
   /*danlingptr();*/
   /*allocationfaild();*/
   /*MinMax();*/
    return 0;
}

/*
void inputstring()
{

    char *p,*str;
    int i=0;
    printf("Enter your name=");
    while(str[i-1]!='\n')
    {
    p=(char*)malloc(sizeof(char));
    *p=getc(stdin);
    str[i]=*p;
    free(p);
    i++;
    }

    printf("%s",str);
}
*/

/*
//2. Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values.
//Now take the input from the user and display the average of data values.
void datavalues()
{
    int Nvalues,sum=0,avg;
    printf("Enter Number of Element you would like to store=");
    scanf("%d",&Nvalues);
    int *arr,i;
    arr=(int*)malloc(Nvalues);
    for(i=0 ; i<Nvalues ; i++)
        scanf("%d",arr+i);
    for(i=0 ; i<Nvalues ; i++)
       sum+=arr[i];
    printf("Average is= %d",sum/Nvalues);

}
*/

/*
//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
void userenter()
{
    int Nvalues,sum=0,avg;
    printf("Enter Number of Element you would like to store=");
    scanf("%d",&Nvalues);
    int *arr,i;
    arr=(int*)malloc(Nvalues);
    for(i=0 ; i<Nvalues ; i++)
        scanf("%d",arr+i);
    for(i=0 ; i<Nvalues ; i++)
       sum+=arr[i];
    printf("sum is= %d",sum);
}
*/

/*
//4. Write a program to input and print text using dynamic memory allocation.
void printstr()
{
    char *p,*str;
    int i=0;
    printf("Enter your name=");
    while(str[i-1]!='\n')
    {
    p=(char*)malloc(sizeof(char));
    *p=getc(stdin);
    str[i]=*p;
    free(p);
    i++;
    }
    printf("%s",str);
}

*/

/*
//5. Write a program to read a one dimensional array,
// print sum of all elements along with inputted array elements using dynamic memory allocation.
void sumarr()
{
    int Nvalues,sum=0,avg;
    printf("Enter Number of Element you would like to store=");
    scanf("%d",&Nvalues);
    int *arr,i;
    arr=(int*)malloc(Nvalues);
    for(i=0 ; i<Nvalues ; i++)
        scanf("%d",arr+i);
    for(i=0 ; i<Nvalues ; i++)
       sum+=arr[i];
    printf("sum is= %d",sum);
}

*/

/*
//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
void lrgElement()
{
    int *arr,i,num,lrg=0;
    printf("Number of values do you want to store=");
    scanf("%d",&num);
    arr=(int*)calloc(num,sizeof(int));
    if(arr == NULL)
        printf("memory allocation failed");
    printf("\nEnter %d values=",num);
    for(i=0 ; i<num ; i++)
        scanf("%d",arr+i);
    lrg=arr[0];
    for(i=0 ; i<num ; i++)
    {
        if(arr[i]>lrg)
            lrg=arr[i];
    }
    printf("Largest value is=%d",lrg);

}
*/

/*
//7. Write a program to demonstrate memory leak in C.
void mleak()
{
     int *ptr;
     ptr=(int*)malloc(sizeof(int));
     ptr=5;
}
*/

/*
//8. Write a program to demonstrate dangling pointers in C.
void danlingptr()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    free(ptr);
    *ptr=50;
    printf("%d",*ptr);
    printf("\nNow ptr pointer is danling pointer variable");

}
*/

/*
//9. Write a program to allocate memory dynamically of the size in bytes entered by the user.
// Also handle the case when memory allocation is failed.
void allocationfaild()
{
    int *ptr;
    ptr=(int*)calloc(1,sizeof(int));
    if(ptr == NULL)
        printf("Memory allocation failed");
    else
        printf("\nMemory is allocated Now you can use");

}
*/

/*
//10.Find out the maximum and minimum from an array using dynamic memory allocation in C.
void MinMax()
{
    int *arr,i,value,Max=0,Min=0;
    printf("Enter number of values you want to store=");
    scanf("%d",&value);
    arr=(int*)calloc(value,sizeof(int));
    for(i=0 ; i<value ; i++)
      scanf("%d",arr+i);
    Max=arr[0];
    Min=arr[0];
    for(i=0 ; i<value ; i++)
    {
        if(arr[i]>Max)
            Max=arr[i];
        if(arr[i]<Min)
            Min=arr[i];
    }
    printf("Maximum is=%d",Max);
    printf("\nMinimum is=%d",Min);
}
*/



     //                       COMPLETED













