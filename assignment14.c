//                                   Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                                  Array in C Language
/*
//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int t[10],i,sum=0;
    printf("Enter 10 Numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=0 ; i<=9 ; i++)
    {
        sum+=t[i];
    }
    printf("Sum of array is= %d",sum);
    return 0;

}


//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{

    int t[10],y,avg,sum=0;
    printf("Enter 10 numbers=");
    for(y=0 ; y<=9 ; y++)
    {
        scanf("%d",&t[y]);
        sum+=t[y];
    }
    avg=sum/10;
    printf("Average is =%d",avg);
    return 0;
}

//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers,
// which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int t[10],i,en=0,od=0;
    printf("Enter 10 Numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&t[i]);
        if(t[i]%2==0)
            en+=t[i];
        else
            od+=t[i];

    }
    printf("Sum of Odd Numbers is=%d\n\n",od);
    printf("Sum of Even Numbers is=%d",en);
    return 0;
}

//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int r[10],e,big=-2147483648;
    printf("Enter 10 Numbers=");
    for(e=0 ; e<=9 ; e++)
    {
        scanf("%d",&r[e]);
        if(r[e]>=big)
            big=r[e];
    }
    printf("Greatest Number in Array is=%d",big);
    return 0;

}

//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int r[10],e,sm=2147483647;
    printf("Enter 10 Numbers=");
    for(e=0 ; e<=9 ; e++)
    {
        scanf("%d",&r[e]);
        if(r[e]<=sm)
            sm=r[e];
    }
    printf("Smallest Number in Array is=%d",sm);
    return 0;

}

//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int h[10],k,i,sm=2147483647,temp;
    printf("Enter 10 Numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&h[i]);
    }
    for(k=0 ; k<=9 ; k++)
        {
            sm=2147483647;
            for(i=k ; i<=9 ; i++)
            {
                if(h[i]<=sm)
                {
                sm=h[i];
                temp=h[k];
                h[i]=temp;
                h[k]=sm;
                }

            }

        }
    for(i=0 ; i<=9; i++)
    {
        printf(" %d ",h[i]);
    }

    return 0;
}


// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int  main()
{
    int t[10],i,first,second;
    printf("Enter 10 values=");
    for(i=0 ; i<=9; i++)
    {
        scanf("%d",&t[i]);
    }
    first=t[0];
    second=0;
    for(i=1 ; i<=9 ; i++)
    {
        if(t[i]>=first)
        {
            second=first;
            first=t[i];
        }
        else if(t[i]>=second)
        {
            second=t[i];
        }

    }
     printf("second largest number is=%d",second);
    return 0;
}



//8. Write a program to find the second smallest number in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int t[10],i,first,second;
    printf("Enter 10 Array Elements=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&t[i]);
    }
    first=t[0];
    second=2147483647;
    for(i=1 ; i<=9 ; i++)
    {
        if(t[i]<=first)
        {
         second=first;
         first=t[i];
        }
        else if(t[i]<=second)
            second=t[i];
    }
    printf("Second smallest Element is=%d",second);
    return 0;
}

//9. Write a program in C to read n number of values in an array and display it in reverse order.
// Take array values from the user.
#include<stdio.h>
int main()
{
    int h[10],j;
    printf("Enter 10 Number=");
    for(j=10-1 ; j>=0 ; j--)
    {
    scanf("%d",&h[j]);
    }

    for(j=0 ; j<=9 ; j++)
    {
        printf(" %d ",h[j]);
    }
    return 0;
}



//10.Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int s[10],i,j[10];
    printf("Enter 10 Numbers=");
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&s[i]);
         j[i]=s[i];

    }
    for(i=0 ; i<=9 ; i++)
    {
         printf(" %d ",j[i]);
    }

    return 0;
}
*/

//compeleted




























