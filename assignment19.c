//                        Assignment - 19 A Job Ready Bootcamp in C++, DSA and IOT  MySirG
//                                        Handling multiple Strings in C Language
/*
//1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays,
// taken from the user.
#include<stdio.h>
int main()
{
    char t[5][100];
    int i,k,count=0,j;
    printf("Enter Five strings=");
    for(i=0 ; i<=4 ;i++)
    fgets(t[i],100,stdin);
    for(j=0; j<=4 ; j++)
    {
        for(k=0 ; t[j][k]!=10 ; k++)
        {
            if(t[j][k]=='a' || t[j][k]=='e' ||t[j][k]=='i' ||t[j][k]=='o' ||t[j][k]=='u' ||
               t[j][k]=='A' ||t[j][k]=='E' ||t[j][k]=='I' ||t[j][k]=='O' ||t[j][k]=='U' )
                count++;
        }
        printf("\nString No.%d has %d Vowels",j+1,count);
        count=0;

    }

    return 0;
}

//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char t[10][50],j[50];
    int s,r,v;
    printf("Enter 10 Strings type maximum 50 characters=");
    for(s=0 ; s<=9 ; s++)
    gets(t[s]);
    for(s=0 ; s<=8 ; s++)
    {
       for(v=s+1 ; v<=9 ; v++)
       {
        r=strcmp(t[s],t[v]);
        if(r==1)
        {
            strcpy(j,t[s]);
            strcpy(t[s],t[v]);
            strcpy(t[v],j);
        }

       }
    }
    for(s=0 ; s<=9 ; s++)
    {
        printf("\n%s",t[s]);
    }

    return 0;
}

//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
    char s[5][30];
    int i;
    printf("Enter 5 Strings=");
    for(i=0 ; i<=4 ; i++)
        fgets(s[i],30,stdin);
    for(i=0 ; i<=4 ; i++)
    printf("%s",s[i]);
    return 0;
}

//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char h[10][50]={"jagwinder","kaptan","prem pal",
    "ashutosh","dimple","krishan","prince","harman","ansur","vidhya vati"},j[30];
    int a,b;
    printf("Enter Name=");
    gets(j);
    for(a=0 ; a<=9 ; a++ )
    {
        b=strcmp(h[a],j);
        if(b==0)
        {
            printf("yes It is Match");
            break;
        }
    }
    if(a==10)
        printf("Not match");

    return 0;
}

//5. Suppose we have a list of email addresses,
// check whether all email addresses have ‘@’ in it. Print the odd email out
#include<stdio.h>
int main()
{
    char a[5][30];
    int i,j;
    printf("Enter String=");
    for(i=0; i<=4 ; i++)
        gets(a[i]);
    for(i=0 ; i<=4 ; i++)
    {
        for(j=0 ; a[i][j]!='\0' ; j++)
        {
            if(a[i][j]=='@')
            {
                printf("\n%s",a[i]);
                break;
            }
        }

    }
    return 0;
}
//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
int main()
{
    char a[5][40];
    int k,i,j,l,v=0;
    printf("Enter 5 Strings=");
    for(k=0 ; k<=4 ; k++)
        gets(a[k]);
    for(i=0 ; i<=4 ; i++)
    {
       for(j=0 ; a[i][j]!='\0' ; j++);
       for(k=0,l=j-1 ; k<=j-1,l>=0 ; k++,l--)
       {
           if(k==l || k==l-1)
           {
               if(k==l)
               {    printf("\n%s",a[i]);
                    break;
               }
               else
               {
                   if(a[i][k]==a[i][l])
                   {
                    printf("\n%s",a[i]);
                    break;
                   }
                   v++;
               }

           }
           if(a[i][k]!=a[i][l])
           {
               v++;
                break;
           }

       }
        if(v==5)
            printf("NOT FOUND PALINDROME STRING");
    }
    return 0;
}
//7. From the list of IP addresses, check whether all IP addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
   char a[40],m[10];
   int i,j=0,k,l,f,n=0,g=0;
   printf("Enter IP Address=");
   fgets(a,40,stdin);
   for(i=0 ; a[i] ; i++)
   {

   	if(a[i]=='.' ||  a[i]=='\n')
   	   {
   	    n++;
   	    for(f=0,j;f<=i-1,j<=i-1 ;j++,f++)
   	       {
   	       	m[f]=a[j];
		   }
		    k=atoi(m);
		    if(k>=0 && k<=255)
            {
            printf(" %d ",k);
            g++;
            }
            for(l=0 ; l<=9 ; l++)
            m[l]='\0';
            j++;
	   }
   }
   if(n==4 && g==4)
    printf("\nvalid IP address");
   else
   printf("\nInvalid IP address");
}

//8. Given a list of words followed by two words, the task is to find
//the minimum distance between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include<stdio.h>
int main()
{
    printf("Enter two words from these words");
    printf("\n\n\"the\",\"quick\",\"brown\",\"fox\",\"quick\"");
    char a[5][40]={"the","quick","brown","test","quick"};
    char b[10],c[10];
    int w1=-1,w2=-1,i,temp=0,min=500;
    printf("\n\nEnter first word=");
    gets(b);
    printf("\nEnter Second word=");
    gets(c);
    for(i=0; i<=4 ;i++)
    {
        if(strcmp(a[i],b)==0)
            w1=i;
        if(strcmp(a[i],c)==0)
            w2=i;
        if(w1!=-1 && w2!=-1)
        {
            temp=abs(w2-w1);
            if(temp<min)
                min=temp;
        }

    }
    if(w1==w2)
        printf("Plz Enter different word");
    else
        printf("Difference is %d",min-1);

    return 0;
}

//9. Write a program that asks the user to enter a username. If the username entered is one of the names in the
// list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed
#include<stdio.h>
int factorial();
int main ()
{

    char a[5][20]={"jagwinder","kaptan","prempal","krishan","dimple"};
    char b[20];
    int i;
    printf("Enter username=");
    gets(b);
    for(i=0 ; i<=4 ;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            printf("You are valid user Now you can proceed Next ,\nEnter number to calulate factorial=");
            long int n;
            n=factorial();
            printf("Factorial of Number is= %d",n);
        }
    }

}

int factorial()
{
    int a;
    long int sum=1;
    scanf("%d",&a);
    for(a; a>=1 ; a--)
        sum*=a;
    return sum;

}

//10. Create an authentication system. It should be menu driven.
 #include<stdio.h>
 int main()
 {
     char a[3][2][20]=
     {{"jagwinder","9041541894"},{"kaptan","9781757795"},{"prempal","9888836209"}};
     int i,check=0;
     char b[20];
     printf("Enter Name=");
     gets(b);
     char c[20];
     printf("\nEnter Mobile No=");
     gets(c);
     for(i=0 ; i<=2 ; i++)
     {
          if(strcmp(b,a[i][0])==0 && strcmp(c,a[i][1])==0)
          {
              printf("Welcome Your details are Matched");
              check++;
          }

     }
     if(check==0)
     printf("\nDetails Does Not Matched");


     return 0;
 }
*/






















