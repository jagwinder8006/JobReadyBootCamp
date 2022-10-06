//                 Assignment - 18     A Job Ready Bootcamp in C++,DSA and IOT        MySirG
//
/*                                String and Functions in C Language
//1. Write a function to calculate length of the string.
#include<stdio.h>
int checklen(char[]);
int main()
{
    char d[50];
    int len;
    printf("Enter String=");
    fgets(d,50,stdin);
    len=checklen(d);
    printf("Length of String is=%d",len);
    return 0;
}

int checklen(char j[])
{
    int a;
    for(a=0 ; j[a]!=10 ; a++);
    return a;
}

//2. Write a function to reverse a string.
#include<stdio.h>
void reverse(char []);
int main()
{
    char d[50];
    printf("Enter String=");
    fgets(d,50,stdin);
    reverse(d);
    return 0;
}

void reverse(char b[])
{
    int a,c,k=0,temp=0;
    for(a=0 ; b[a]!=10 ; a++);
    for(c=a-1 ; c>=0 ; c--)
    {
        if(k==c || k==c-1)
            break;
        else
        {
            temp=b[k];
            b[k]=b[c];
            b[c]=temp;
            k++;
        }

    }
    printf("%s",b);
}

//3. Write a function to compare two strings.
#include<stdio.h>
void compare(char[],char[]);
int main()
{
    char a[50],b[50];
    printf("Enter String=");
    fgets(a,50,stdin);
    printf("Enter Second String=");
    fgets(b,50,stdin);
    compare(a,b);
    return 0;

}

void compare(char x[],char y[])
{
    int a=0,b=0;
    while(x[a]!=10 || y[b]!=10)
    {
    	if(x[a]==32 || y[b]==32)
    	{if(x[a]==32)
    	a++;
    	else
    	b++;
		}
		else if(x[a]==y[b])
		a++,b++;
		else
		break;
	}
	if(x[a]==10)
	printf("String is same kaka ji");
	else
	printf("String is Not same kaka ji");
}

//4. Write a function to transform string into uppercase
#include<stdio.h>
void upper(char []);
int main()
{
    char s[50];
    printf("Enter String=");
    fgets(s,50,stdin);
    upper(s);
    return 0;
}

void upper(char b[])
{
    int i;
    for(i=0 ; b[i]!=10 ; i++)
    {
        if(b[i]==32)
            continue;
        else
        b[i]-=32;
    }
    printf("%s",b);
}

//5. Write a function to transform a string into lowercase.
#include<stdio.h>
void lower(char []);
int main()
{
    char s[50];
    printf("Enter String=");
    fgets(s,50,stdin);
    lower(s);
    return 0;
}

void lower(char b[])
{
    int i;
    for(i=0 ; b[i]!=10 ; i++)
    {
        if(b[i]==32)
            continue;
        else
        b[i]+=32;
    }
    printf("%s",b);
}

//6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
int alphanumeric(char []);
int main()
{
    char s[50];
    int a;
    printf("Enter String=");
    fgets(s,50,stdin);
    a=alphanumeric(s);
    if(a==1)
        printf("String is Alphanumberic");
    else
        printf("String is Not Alphanumberic");
    return 0;
}

int alphanumeric(char b[])
{
    int i,a=0,c=0;
    for(i=0 ; b[i]!=10 ; i++)
    {
         if(c>=1 && a>=1)
        break;
        else if(b[i]>='0' && b[i]<='9')
            a++;
        else if(b[i]>='a' && b[i]<='z' || b[i]>='A' && b[i]<='Z')
            c++;

    }
    if(b[i]!=10)
        return 1;
    else
        return 0;
}


//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
int palindrome(char []);
int main()
{
    char s[50];
    int a;
    printf("Enter String=");
    fgets(s,50,stdin);
    a=palindrome(s);
    if(a==1)
    printf("This String is Palindrome String=");
    else
    printf("This Sring is Not Palindrome String=");
    return 0;
}

int palindrome(char d[])
{
    int i,a,b;
    for(i=0 ; d[i]!=10 ; i++);
    i=i-1;
    for(a=i,b=0; a>=0,b<=i; b++,a--)
    {
        if(a==b || a==b+1)
            break;
        else if(d[a]!=d[b])
            break;
    }
    if(a==b || a==b+1)
        return 1;
    else
        return 0;
}

//8. Write a function to count words in a given string.
#include<stdio.h>
int wordcount(char []);
int main ()
{
    char s[100];
    int count;
    printf("Enter String=");
    fgets(s,100,stdin);
    printf(" %d words in the String",wordcount(s));
    return 0;
}

int wordcount(char n[])
{
    int i,count=1;
    for(i=0 ; n[i]!=10 ; i++)
    {
        if(n[i]==32)
            count++;
    }
    return count;
}

//9. Write a function to reverse a string word wise.
 //(For example if the given string is “Mysirg Education Services”
 // then the resulting string should be “Services Education Mysirg” )
#include<stdio.h>
void wordwise(char []);
int main()
{
    char j[100];
    printf("Enter String=");
    fgets(j,100,stdin);
    wordwise(j);
    return 0;
}

void wordwise(char s[])
{
    int a=0,b=0,c=0,d=0,temp=0;
    for(a=0 ; s[a]!=10 ;a++);
    for(b=0,c=0,d=0 ; b<=a ; b++)
    {
       if(s[b]==' ' || s[b]==10)
       {
        for(d=b-1 ; d>=0 ; d--)
        {
            if(c==d || c==d-1)
            {
                temp=s[c];
                s[c]=s[d];
                s[d]=temp;
                c=b+1;
                 break;

            }
            else
            {
                temp=s[c];
                s[c]=s[d];
                s[d]=temp;
                c++;
            }

        }
       }

    }
    for(b=a-1,c=0 ;b>=0; b--)
    {
        if(c==b || c==b-1)
        {
             temp=s[c];
             s[c]=s[b];
             s[b]=temp;
             break;
        }
        else
        {
            temp=s[c];
             s[c]=s[b];
             s[b]=temp;
             c++;
        }
    }

   printf("%s",s);
}

//10.Write a function to find the repeated character in a given string.
#include<stdio.h>
void checkrepeated(char []);
int main()
{
    char t[100];
    printf("Enter String=");
    fgets(t,100,stdin);
    checkrepeated(t);
    return 0;
}
void checkrepeated(char s[])
{
    int j=0,a=0,b=0;
    for(j=0 ; s[j]!=10 ; j++)
    {
        for(a=j-1 ; a>=0 ; a--)
        {
            if(s[j]==s[a])
                break;
        }
        if(a==-1)
        {
            for(b=j+1 ; s[b]!=10 ; b++)
                {
                    if(s[j]==s[b])
                    {
                        printf(" %c ",s[j]);
                        break;
                    }
                }
        }
    }
}
*/
//completed













































