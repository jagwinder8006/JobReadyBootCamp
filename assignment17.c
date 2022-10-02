//                              Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT  MySirG
//                                           String Basics in C Language
/*
//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
   char t[50];
   int i;
   printf("Enter your Name=");
   fgets(t,50,stdin);
   for( i=0 ; t[i] ; i++)
   {
      if(t[i]==10)
        break;
   }
   if(i==4)
    printf("%d",i);
   else
    printf("%d",i);
return 0;
}

//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char s[50],u,i,ginti=0;
    printf("Enter string=");
    fgets(s,50,stdin);
    printf("\nEnter One Charater=");
    scanf("%c",&u);
    for(i=0 ; s[i] ; i++)
    {
        if(s[i]==u)
            ginti++;

    }
    printf("%c is %d Times in The String",u,ginti);

    return 0;
}

//3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char s[50],i,ginti=0;
    printf("Enter string=");
    fgets(s,50,stdin);
    for(i=0 ; s[i] ; i++)
    {
 if(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u's[i]=='A'||s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U' )
            ginti++;

    }
    printf("%d Vowels in The String",ginti);

    return 0;
}

//4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
   char t[50];
   int i;
   printf("Enter String=");
   fgets(t,50,stdin);
   for( i=0 ; t[i] ; i++)
   {
       if(t[i]==32 ||t[i]==10)
       {
           continue;
       }
     t[i]-=32;
   }
   printf("\n%s",t);

return 0;
}

//5. Write a program to convert a given string into lowercase

#include<stdio.h>
int main()
{
   char t[50];
   int i;
   printf("Enter String=");
   fgets(t,50,stdin);
   for( i=0 ; t[i] ; i++)
   {
       if(t[i]==32 || t[i]==10)
       {
           continue;
       }
     t[i]+=32;
   }
   printf("\n%s",t);

return 0;
}

//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char g[50],t;
    int a,b,c;
    printf("Enter String=");
    fgets(g,50,stdin);
    for(b=0 ; b<=49 ; b++)
    {
    if(g[b]==10)
    {
    b--;
    break;
    }
    }
    for(a=0,c=b; a<=b,c>=0;a++,c--)
    {
       if(a==c || a==c-1)
       {
           t=g[a];
           g[a]=g[c];
           g[c]=t;
           break;
       }
       else
       {
           t=g[a];
           g[a]=g[c];
           g[c]=t;
       }
    }
    printf("%s",g);
   return 0;
}

//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char j[50];
    int alpha=0,i,digit=0,special=0,k;
    fgets(j,50,stdin);
    for(i=0 ;  i<=49 ; i++)
    {
     if(j[i]==10)
        break;
     else if(j[i]>='0' && j[i]<='9')
        digit++;
     else if((j[i]>='a' && j[i]<='z')|| (j[i]>='A' &&j[i]<='Z'))
     alpha++;
     else
        special++;

    }
    printf("%d",i);
    printf("\nDIGITS=%d",digit);
    printf("\nCharacters=%d",alpha);
    printf("\nSpecial characters=%d",special);
    return 0;
}

//8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char j[50],k[50];
    int b,c;
    printf("Enter String=");
    fgets(j,50,stdin);
    for(b=0 ; b<=49 ;b++)
    {
        if(j[b]==10)
            break;
        else
            k[b]=j[b];
    }
    printf("%s",k);
    return 0;
}

//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()

{
    char k[50];
    char c='a',temp;
    int i,j;
    printf("Enter String=");
    fgets(k,50,stdin);
    for(i=0 ; i<=49 ; i++)
    {
        if(k[i]==10)
            break;
        c='z';
       for(j=i ; j<=49 ; j++)
       {
           if(k[j]==10)
            break;
           else
           if(k[j]<=c)
           {
               c=k[j];
               temp=k[i];
               k[i]=c;
               k[j]=temp;
           }
       }

    }
    printf("%s",k);
    return 0;
}

//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{

    char t[50],k;
    int count=0,i,p,h;
    printf("Enter String=");
    fgets(t,50,stdin);
    for(i=0 ; i<=49 ; i++)
    {
    	if(t[i]==10)
    	break;
    	k=t[i];
    	count=0;
    	for(h=i-1 ; h>=0 ; h--)
    	{
    		if(k==t[h])
    		break;
		}
		if(h<0)
		{
			for(h=i ; h<=49 ; h++)
         	{
    		if(t[h]==10)
    	    break;
    	    else if(t[h]==k)
    	    count++;
	     	}
	     	printf("\n%c is %d time",k,count);
		}
	
    
    }
    return 0;

}
*/

//completed






























