//                                 Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT  MySi
//                                          Array and Functions in C Language
/*
//1. Write a function to find the greatest number from the given array of any size. (TSRS).
#include<stdio.h>
int greatest(int[]);
int main()
{
    int s[10],i,t;
    printf("Enter Array Elements=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&s[i]);
    }
    t=greatest(s);
    printf("Greatest Number is =%d",t);
    return 0;
}

int greatest(int b[])
{
    int d,sm=-2147483648;
    for(d=0 ; d<=9 ; d++)
    {
        if(b[d]>=sm)
            sm=b[d];
    }
    return sm;
}

//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int []);
int main()
{
    int d[10],t,e;
    printf("Enter 10 Numbers=");
    for(t=0 ; t<=9 ;t++)
    {
        scanf("%d",&d[t]);
    }
    e=smallest(d);
    printf("Smallest Number=%d",e);
    return 0;

}

int smallest(int n[])
{
    int d,sm=2147483647;
    for(d=0 ; d<=9  ; d++)
    {
        if(n[d]<=sm)
            sm=n[d];
    }
    return sm;
}

//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int[]);
int main()
{
    int b[10],i;
    printf("Enter Array Elements=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(b);
    return 0;
}

void sort(int v[])
{
    int a,b,big;
    for(a=0 ; a<=9 ; a++)
    {
        big=2147483647;
        for(b=a ; b<=9 ; b++)
        {
            if(v[b]<=big)
            {
                big=v[b];
                v[b]=v[a];
                v[a]=big;
            }
        }
    }
    for(a=0 ; a<=9 ; a++)
    {
        printf(" %d ",v[a]);
    }
}

//4. Write a function to rotate an array by n position in d direction.
//The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70];
// n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>
void rotate(int[]);
int main()
{
    int a[5],i;
    printf("Enter 5 Numbers=");
    for(i=0 ; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
    }
    rotate(a);
    return 0;
}
void rotate( int b[])
{
    int n=2,temp=0,j,k,h;
    while(n)
    {
       temp=b[0];
       for(j=0,k=1 ; j<=3,k<=4 ; j++,k++)
       {
        b[j]=b[k];
       }
       b[j]=temp;
       n--;
    }
    for(h=0 ; h<=4 ; h++)
    {
        printf(" %d ",b[h]);
    }


}

//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include<stdio.h>
int duplicate(int []);
int main()
{
	int d[10],i,j;
	printf("Enter 10 Elements for Array=");
	for(i=0 ; i<=9 ; i++)
	{
		scanf("%d",&d[i]);
	}
	j=duplicate(d);
	printf("first occurrence of adhacent duplicate value is=%d",j);
	return 0;
}

int duplicate(int b[])
{
	int i;
	for(i=0 ; i<=8 ; i++)
	{
		if(b[i]==b[i+1])
		return b[i];

	}
}

//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void displayreverse(int []);
int main()
{
    int d[10],i;
    printf("Enter 10 Numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&d[i]);
    }
    displayreverse(d);
    return 0;
}

void displayreverse(int k[])
{
    int i;
    for(i=9 ; i>=0 ; i--)
    {
        printf(" %d ",k[i]);
    }
}

//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int countdupli(int []);
int main()
{
    int d[10],n,s=0;
    printf("Enter 10 Elements of Array=");
    for(n=0 ; n<=9 ; n++)
    {
        scanf("%d",&d[n]);
    }
    s=countdupli(d);
    printf("Duplicate Elements are=%d",s);
    return 0;
}

int countdupli(int u[])
{
    int v,w,count=0;
    for(v=0 ; v<=8 ; v++)
    {
        for(w=v+1 ; w<=9 ; w++)
        {
           	if(u[v]==u[w])
           	   {
           		count++;
			   }


        }
    }
    return count;
}

//8. Write a function in C to print all unique elements in an array.

#include<stdio.h>
void uni(int []);
int main()
{
    int d[10],n;
    printf("Enter 10 Elements of Array=");
    for(n=0 ; n<=9 ; n++)
    {
        scanf("%d",&d[n]);
    }
    uni(d);
    return 0;
}

void uni(int u[])
{
    int v,w;
    for(v=0 ; v<=9 ; v++)
    {
        for(w=0 ; w<=9 ; w++)
        {
           	if(v!=w)
           	   {
           		if(u[v]==u[w])
                    break;
			   }

        }
        if(w==10)
        printf(" %d ",u[v] );
    }

}

//9. Write a function in C to merge two arrays of the same size sorted in descending order.
 #include<stdio.h>
 int main()
 {
     int a[5]={90,4,3,12,2};
     int b[5]={50,8,11,6,5};
     int c[10],i,k,hold;
     for(i=0 ; i<=4 ; i++)
     {
         c[i]=a[i];
     }
     for(i=0 ; i<=4 ; i++)
     {
         c[i+5]=b[i];
     }
    for(i=0 ; i<=9 ; i++)
    {
     for(k=i+1 ; k<=9 ; k++)
    {
        if(c[k]<=c[i])
           {
               hold=c[i];
               c[i]=c[k];
               c[k]=hold;           }
    }

    }
    for(i=0 ;i<=9 ; i++)
    {
        printf(" %d ",c[i]);
    }

     return 0;
 }



//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void fre(int []);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&a[i]);
    }
    fre(a);
    return 0;
}

void fre(int c[])
{
    int d,e,r=0,m,i;
    for(d=0 ; d<=9 ; d++)
    {
        r=0;
        for(e=0  ; e<=9 ;  e++)
        {
            if(c[d]==c[e])
            r++;

        }
        m=c[d];
        if(d==0)
        {
          printf("\n %d frequency is =%d",c[d],r);
        }
        else
        {
            for(i=0 ; i<d ; i++)
            {
                if(m==c[i])
                   break;
            }
                if(i==d)
                {
                      printf("\n %d frequecy is %d",c[d],r);
                }
        }

    }
}
*/


//completec











