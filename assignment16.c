//            Assignment - 16             A Job Ready Bootcamp in C++, DSA and IOT                           MySirG
//                                        Multi-Dimensional Array in C Language
/*
//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],j,k;
    printf("Enter First Matrix=");
    for(j=0 ; j<=2 ; j++)
    {
         for(k=0 ; k<=2 ; k++)
            scanf("%d",&a[j][k]);
    }

    printf("Enter Second Matrix=");
    for(j=0 ; j<=2 ; j++)
    {
         for(k=0 ; k<=2 ; k++)
            scanf("%d",&b[j][k]);
    }

     for(j=0 ; j<=2 ; j++)
     {
         for(k=0 ; k<=2 ; k++)
         {
              c[j][k]=a[j][k]+b[j][k];
              printf(" %4d ",c[j][k]);
         }
          printf("\n");
     }


    return 0;
}

//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],j,k,i,sum=0;
    printf("Enter Elements of fist matrix=");
    for(j=0 ; j<=2 ; j++)
    {
        for(k=0 ; k<=2 ; k++)
        {
            scanf("%d",&a[j][k]);

        }

    }
    printf("Enter Elements of Second matrix=");
    for(j=0 ; j<=2 ; j++)
    {
        for(k=0 ; k<=2 ; k++)
        {
            scanf("%d",&b[j][k]);
        }
    }

   for(i=0 ; i<=2 ; i++)
   {
       for(j=0 ; j<=2 ;j++)
       {
           for(k=0 ; k<=2 ;k++)
           {
               sum+=a[i][k]*b[k][j];
           }
           c[i][j]=sum;
           printf(" %d ",sum);
           sum=0;
       }
       printf("\n");
   }

    return 0;
}

//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],j,k;
    printf("Enter 9 Elements for Matrix=");
    for(j=0 ; j<=2 ; j++)
    {
        for(k=0 ; k<=2 ; k++)
        {
            scanf("%d",&a[j][k]);
        }
    }
     for(j=0 ; j<=2 ; j++)
    {
        for(k=0 ; k<=2 ; k++)
        {
            printf("%d",a[k][j]);
        }
        printf("\n");
    }

    return 0;
}

//4. Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>
int main()
{
    int n[3][3],i,j,sum=0;
    printf("Enter 9 Elements for Matrix=");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0 ; i<=2 ; i++)
    {
    sum+=n[i][i];
    }
    printf("Sum of right diagonals=%d",sum);
    return 0;
}

//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int n[3][3],i,j,sum=0;
    printf("Enter 9 Elements for Matrix=");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0,j=2 ; i<=2,j>=0 ; i++,j--)
    {
    sum+=n[i][j];
    }
    printf("Sum of left Diagonals of Matrix is=%d",sum);
return 0;
}

//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumC=0,sumR=0;
    printf("Enter 9 Elements for Matrix=");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            sumC+=a[i][j];
            sumR+=a[j][i];
        }
        printf("Sum of Column No %d is=%d",i+1,sumC);
        printf("\t\tSum of Row No %d is =%d",i+1,sumR);
        printf("\n");
        sumR=0;
        sumC=0;
    }
    return 0;
}

//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter 9 Elements for Matrix=");

    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            if(j<=i)
            continue;
            else
            a[i][j]=0;
        }
    }
    printf("\n\n");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            printf(" %3d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter 9 Elements for Matrix=");

    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            if(j>=i)
            continue;
            else
            a[i][j]=0;
        }
    }
    printf("\n\n");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            printf(" %3d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include<stdio.h>
int main()
{
    int n[3][3],i,j,ch=0;
    float h;
    printf("Enter 9 Elements for Matrix=");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ;j++)
        {
            if(n[i][j]==0)
                ch++;
        }
    }
    if(ch>9/2)
        printf("\nSparx Matrix");
    else
        printf("\n Dense Matrix");

    return;
}

//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int n[3][3],i,j,ch=0,m=0,index=0;
    float h;
    printf("Enter 9 Elements for Matrix=");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ;j++)
        {
            if(n[j][i]==1)
                ch++;
        }
        if(ch>=m)
        {
        m=ch;
        index++;
        ch=0;
        }
    }
    printf("Row number %d is maximum number of 1's",index);


    return 0;
}
*/
//    completed

























































