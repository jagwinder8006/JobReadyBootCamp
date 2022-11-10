//                   Assignment - 21        A Job Ready Bootcamp in C++, DSA and IOT           MySirG
//
//
  //                                                Structure
//Define a Structure employee with menmber Variable Id,Name,Salary.
#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee);
 struct employee
    {
        int id;
        char name[30];
        double salary;
    };
  struct time
  {
      int hrs;
      int min;
      int sec;
  };
  struct student
  {
      int roll;
      char name[30];
      char contact[11];
  };
/*
int main()
{
  struct  employee emp;
  emp=input();
  display(emp);
  return 0;
}
//2.Write a function  to take  input employee data from the user.[refer structure from question no.1].
struct employee input()
{
    struct employee emp1;
    printf("Enter Id,name,salary=");
    scanf("%d",&emp1.id);
    fflush(stdin);
    fgets(emp1.name,30,stdin);
 emp1.name[strlen(emp1.name)-1]=NULL;
    scanf("%lf",&emp1.salary);
    return emp1;

}
//3.write a function to display employee data[refer structure from quetion no.1].
void display(struct employee emp)
{
    printf("\n%d\n%s\n%0.2lf",emp.id,emp.name,emp.salary);
}
*/


/*
//4. Write a function to find the highest salary employee
//from a given array of 10 employees. [ Refer structure from question 1]
void highsalary();
int main()
{
    highsalary();
}

void highsalary()
{
    struct employee emp1[10];
    int i,j;
    struct employee high=emp1[0];
    for(i=0 ; i<=9 ; i++)
    {
        scanf("%d",&emp1[i].id);
        fflush(stdin);
        fgets(emp1[i].name,30,stdin);
        emp1[i].name[strlen(emp1[i].name)-1]='\0';
        scanf("%lf",&emp1[i].salary);
    }
    for(i=0 ; i<=9 ; i++)
    {
        if(emp1[i].salary>=high.salary)
        {
            high=emp1[i];
        }
    }
    printf("%d %s %lf",high.id,high.name,high.salary);

}

*/

/*
//5. Write a function to sort employees according to their salaries [ refer structure from question 1]
void sort(struct employee[],int);
int main()
{
    struct employee emp[10];
    int i,j;
    printf("Enter 10 Employess id,name,salary=");
    for(i=0 ; i<=9 ; i++)
    {
        printf("\n\nEnter %d Employe id,name,salary=",i+1);
        scanf("%d",&emp[i].id);
        fflush(stdin);
        fgets(emp[i].name,30,stdin);
        emp[i].name[strlen(emp[i].name)-1]='\0';
        scanf("%lf",&emp[i].salary);
    }
    sort(emp,10);
    return 0;
}
void sort(struct employee empsort[],int size)
{
    int a,b;
    struct employee temp=empsort[0];
    for(a=0 ; a<=size-1 ; a++)
    {
        for(b=a ; b<=size ; b++)
        {
            if(empsort[b].salary>=empsort[a].salary)
            {
                temp=empsort[a];
                empsort[a]=empsort[b];
                empsort[b]=temp;
            }
        }
    }
    for(a=0 ; a<size ; a++)
    {
        printf("\n%d %s %lf",empsort[a].id,empsort[a].name,empsort[a].salary);
    }
}


//6. Write a function to sort employees according to their names [refer structure from question 1]
void sortbyname(struct employee[],int);
int main()
{
    struct employee emp[10];
    int i;
    printf("Enter 10 Employess id,name,salary=");
    for(i=0 ; i<=9 ; i++)
    {
        printf("\n\nEnter %d Employe id,name,salary=",i+1);
        scanf("%d",&emp[i].id);
        fflush(stdin);
        fgets(emp[i].name,30,stdin);
        emp[i].name[strlen(emp[i].name)-1]='\0';
        scanf("%lf",&emp[i].salary);
    }
    sortbyname(emp,10);
    return 0;
}

void sortbyname(struct employee emp2[],int size)
{

     int check=-1;
     int j,k,a;
     struct employee temp=emp2[0];
     for(j=0 ; j<size-1 ; j++ )
     {
         for(k=j ; k<size ; k++)
         {
             if(check==strcmp(emp2[k].name,emp2[j].name))
                {
                    temp=emp2[j];
                    emp2[j]=emp2[k];
                    emp2[k]=temp;
                }
         }
     }
      for(a=0 ; a<size ; a++)
    {
        printf("\n%d %s %lf",emp2[a].id,emp2[a].name,emp2[a].salary);
    }

}
*/

/*
//7. Write a program to calculate the difference between two time periods.
void time_diff(struct time,struct time);
int main()
{
      struct time start={0,0,0};
      struct time end={0,0,0};
      printf("Enter Start Time hrs min or sec=");
      scanf("%d %d %d",&start.hrs,&start.min,&start.sec);
      printf("\nEnter Stop Time hrs  min or sec=");
      scanf("%d %d %d",&end.hrs,&end.min,&end.sec);
      time_diff(start,end);

}
void time_diff(struct time starttime,struct time stoptime)
{

    struct time time_diff;
    while(stoptime.sec>starttime.sec)
    {
        starttime.min--;
        starttime.sec+=60;
    }
    time_diff.sec=starttime.sec-stoptime.sec;
    while(stoptime.min>starttime.min)
    {
        starttime.hrs--;
        starttime.min+=60;
    }
    time_diff.min=starttime.min-stoptime.min;
    if(starttime.hrs<stoptime.hrs)
        time_diff.hrs=0;
    else
    {
      time_diff.hrs=starttime.hrs-stoptime.hrs;
    }

    printf("\n difference is = %d:%d:%d",time_diff.hrs,time_diff.min,time_diff.sec);
}
*/

/*
//8. Write a program to store information of 10 students and display them using structure.
struct student inputstudent();
void dis(struct student[],int);
int main()
{
    int i;
    struct student studata1[10];
    for(i=0 ; i<=9 ; i++)
    {
         studata1[i]=inputstudent();
    }

    dis(studata1,10);
    return 0;
}

struct student inputstudent()
{
    struct student studata;
        scanf("%d",&studata.roll);
        fflush(stdin);
        fgets(studata.name,30,stdin);
        studata.name[strlen(studata.name)-1]='\0';
        fflush(stdin);
        fgets(studata.contact,11,stdin);
        studata.contact[strlen(studata.contact)-1]='\0';
       return studata;
}

void  dis(struct student displaystu[],int size)
{
    int i;
    for(i=0 ; i<size ; i++)
        printf("\n%d %s %s",displaystu[i].roll,displaystu[i].name,displaystu[i].contact);

}
*/

//completed






