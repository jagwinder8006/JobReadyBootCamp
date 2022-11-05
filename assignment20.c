//           Assignment - 20        A Job Ready Bootcamp in C++, DSA and IOT      MySirG
//                                        Pointers
/*
//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter Two Numbers=");
    scanf("%d%d",&a,&b);
    printf("a is=%d b is=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swaping=");
    printf("\na is=%d and b is=%d ",a,b);
}
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//2. Write a function to swap strings of two char arrays of calling functions.(TSRS)
#include<stdio.h>
#include<string.h>
void swap(char **,char **);
int main()
{
    char *a[20],*b[20];
    printf("Enter Two Strings=");
    printf("\n\nEnter First String=");
    gets(a);
    printf("\n\nEnter Second String=");
    gets(b);
    swap(&a,&b);
    printf("a is =%s",a);
    printf("\n\nb is=%s",b);
    return 0;
}
void swap(char **x,char **y)
{
      char *temp=*x;
      *x=*y;
      *y=temp;
}

//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int);
int main()
{
    int a[10]={34,47,55,8,450,23,3,89,65,1},l;
    sort(a,10);
    for(l=0 ; l<=9 ; l++)
    {
        printf("\n%d",a[l]);
    }
    return 0;
}

void sort(int *p,int size)
{
    int i,min=2147483647,temp=0,k;
    for(i=0 ; i<size ; i++)
    {
        min=2147483647,temp=0;
     for(k=i ; k<size ; k++)
     {
         if(p[k]<=min)
         {
           min=p[k];
           temp=p[i];
           p[i]=p[k];
           p[k]=temp;
         }

     }
    }

}

//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x=10,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d\n",&p,q,*r);
    printf("%d %d\n",&q,r);
    printf("%d",&r);

    return 0;
}

//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int max(int *,int *);
int main()
{
    int a,b,maxi;
    printf("Enter Two Numbers=");
    printf("\n\nEnter First Number=");
    scanf("%d",&a);
    printf("\n\nEnter Second Number=");
    scanf("%d",&b);
    maxi=max(&a,&b);
    printf("Maximum Number is=%d",maxi);
    return 0;
}

int max(int *j,int *k)
{
    return *j>=*k?*j:*k;
}

//6. Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
#include<string.h>
int lnth(char *);
int main()
{
    char a[50];
    int f=0;
    printf("Enter String=");
    gets(a);
    f=lnth(a);
    printf("Length of The String is=%d",f);
    return 0;
}
int  lnth(char *k)
{
    int r;
    for(r=0 ; r[k] ; r++);
    return r;

}

//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<string.h>
 void check(char *);
int main()
{
    char a[50];
    printf("Enter String =");
    gets(a);
    check(a);
    return 0;
}

void check(char *p)
{
    int i,digit=0,vowel=0,conso=0;
    for(i=0 ; i[p] ; i++)
    {
        if(i[p]>='0' && i[p]<='9')
            digit++;
        else if(i[p]=='A' || i[p]=='E' || i[p]=='I' || i[p]=='O' || i[p]=='U')
            vowel++;
        else if(i[p]=='a' || i[p]=='e' || i[p]=='i' || i[p]=='o' || i[p]=='u')
            vowel++;
        else
         conso++;
    }
    printf("Vowels are %d \n Consonant Are %d \n and digits are %d",vowel,conso,digit);
}

//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sum(int *,int);
int main()
{
    int a[10]={12,34,23,12,12,34,56,78,65,2},su;
    su=sum(a,10);
    printf("Sum of Elements Are=%d",su);
    return 0;
}

int sum(int *x,int size)
{
    int n,j=0;
    for(n=0 ; n<size ; n++)
    j+=x[n];
    return j;
}

//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void reverse(int *,int);
int main()
{
    int b[10]={1,2,3,4,5,6,7,8,5,6};
    reverse(b,10);
    return 0;
}

void reverse(int *v,int size)
{


    for( size--; size>=0 ; size--)
     printf("\n%d",size[v]);

}
//10.Write a program to print a string in reverse using a pointer
#include<stdio.h>
void rstring(char *);
int main()
{
    int b[50];
    printf("Enter String=");
    gets(b);
    rstring(b);
    return 0;
}

void rstring(char *v)
{
    int a;
    for(a=0 ; v[a] ; a++);
    for(a-- ; a>=0 ; a--)
    printf("%c",v[a]);
}

*/

//                        compeleted





