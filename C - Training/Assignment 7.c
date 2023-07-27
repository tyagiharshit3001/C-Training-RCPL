#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void qn1(void);
void qn2(void);
void qn3(void);
void qn4(void);
void qn5(void);
void qn6(void);
void qn7(void);
void qn8(void);
void qn9(void);
void qn10(void);
void qn11(void);
void qn12(void);
void qn13(void);
void qn14(void);
void qn15(void);
void qn16(void);









int main()
{
    //qn1();
    qn2();
}

/*
10. Write a program using structure to check if the
date enterd by user belongs to leap year or not.
Use the following data to store the date as follows:-
struct date
{  int day;
   int month;
   int year;
};

*/

//
//qn3()
//{
//    struct Date
//    {
//        int day;
//        int month;
//        int year;
//    };
//
//    struct Date date;
//
//
//    printf("Enter Date of Birth (DD MM YYYY): ");
//    scanf("%d %d %d", &date.day,&date.month,&date.year );
//
//    if (date.year%100 == 0)
//    {
//        if (date.year%400 == 0)
//        {
//            if (date.year%4 == 0)
//        }
//    }
//}
//
/*
2. Declare a structure that represents the following hierarchical information.
    (a) LoginId
    (b) Roll Number
    (c) Name
         (i) First name
         (ii) Middle Name
         (iii) Last Name
    (d) Sex
    (e) Date of Birth
         (i)   Day
        (ii)  Month
        (iii) Year
    (f) Marks
        (i)   English
        (ii)  Mathematics
        (iii) Computer Science

    Use the structure defnition as mentioned above to make an array of students.
     Create nested structures for Name, Date of Birth and Marks
     Create a menu driven program as follows:-
     1. Add Student Details
     2. View All Students Details.
     3. View Students who have secured less than given percentage of the aggregate.
          eg. View Students who have secured less than 40% of the aggregate.
*/


qn2()
{
    struct DOB
    {
        int day;
        int month;
        int year;
    };

    struct Name
        {
        char fName[25];
        char mName[25];
        char lName[25];
    };

    struct Marks
    {
        int eng;
        int math;
        int comp_sci;
    };

     struct Student {
        int loginId;
        struct Name name;
        char sex;
        struct DOB dob;
        struct Marks marks;
        float percent;
    }std[100];


    short int war;
    short int opt;
    int count = 0,i;
    short d,m,y;

    do{
    printf("Enter student Log In ID: ");
    scanf("%d", &std[count].loginId );
    printf("Enter student Name (First, Middle and Last name): ");
    scanf("%s %s %s", std[count].name.fName, std[count].name.mName, std[count].name.lName );
    printf("Enter sex (M/F): ");
    scanf("\n%c", &std[count].sex );
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &std[count].dob.day,&std[count].dob.month,&std[count].dob.year );
    printf("Enter marks of subject 3: ");
    scanf("%d %d %d", &std[count].marks.eng, &std[count].marks.math, &std[count].marks.comp_sci );
    std[count].percent = (std[count].marks.eng+std[count].marks.math+std[count].marks.comp_sci)/3.0;
    count++;

    printf("Enter more records (0/1): ");
    scanf("%d",&war);
    system("cls");

    }while(war);

    printf("\n [1]----> Display records");
    printf("\n [2]----> Display students less than 40 percent of the aggregate marks");
    printf("\n [3]----> Display records by D.O.B.");
    printf("\n Enter Option: ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        for (i=0;i<count;i++)
            {
                printf("\n************************************************************************");
                printf("\n Name: %s %s %s", std[i].name.fName,std[i].name.mName,std[i].name.lName);
                printf("\n Log In ID: %d",std[i].loginId);
                printf("\n Sex: %c", std[i].sex);
                printf("\n Date of Birth: %d-%d-%d", std[i].dob.day,std[i].dob.month,std[i].dob.year);
                printf("\n Marks (English, Maths, Comp. Sci.): %d %d %d", std[i].marks.eng, std[i].marks.math, std[i].marks.comp_sci);
            }
            break;
    case 2:
        for (i=0;i<count;i++)
            {
                if (std[i].percent <40)
                {
                    printf("\n************************************************************************");
                    printf("\n Name: %s %s %s", std[i].name.fName,std[i].name.mName,std[i].name.lName);
                    printf("\n Log In ID: %d",std[i].loginId);
                    printf("\n Sex: %c", std[i].sex);
                    printf("\n Date of Birth: %d-%d-%d", std[i].dob.day,std[i].dob.month,std[i].dob.year);
                    printf("\n Marks (English, Maths, Comp. Sci.): %d %d %d", std[i].marks.eng,std[i].marks.math,std[i].marks.comp_sci);
                }
            }
            break;

    case 3:
        printf("\n Enter DOB (DD MM YYYY): ");
        scanf("%d %d %d", &d,&m,&y);
        for (i=0;i<count;i++)
            {
                if ((std[i].dob.day == d) && (std[i].dob.month == m) && (std[i].dob.year == y) )
                {
                    printf("\n************************************************************************");
                    printf("\n Name: %s %s %s", std[i].name.fName,std[i].name.mName,std[i].name.lName);
                    printf("\n Log In ID: %d",std[i].loginId);
                    printf("\n Sex: %c", std[i].sex);
                    printf("\n Date of Birth: %d-%d-%d", std[i].dob.day,std[i].dob.month,std[i].dob.year);
                    printf("\n Marks (English, Maths, Comp. Sci.): %d %d %d", std[i].marks.eng,std[i].marks.math,std[i].marks.comp_sci);
                }
            }
            break;
    default :
        printf("\n Invalid Input, Bai Bai...");

    }




}



/*
1. Defne a structure to store the name, an array
    marks[] which stores the marks of three different
    subjects, and a character grade. Write a program
    to display the details of the student whose name
    is entered by the user.

   Note: Data should be stored in Heap memory.
*/

qn1()
{
    struct Student {
        int rollNo;
        char name[25];
        int s1,s2,s3;
    };

    struct Student *std = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter student Roll No.: ");
    scanf("%d", &std ->rollNo );
    printf("Enter student name: ");
    scanf("%s", std ->name );
    printf("Enter marks of subject 1: ");
    scanf("%d", &std -> s1 );
    printf("Enter marks of subject 2: ");
    scanf("%d", &std -> s2 );
    printf("Enter marks of subject 3: ");
    scanf("%d", &std -> s3 );

    printf("\n Roll No.: %d",std->rollNo);
    printf("\n Name : %s",std->name);
    printf("\n Marks of Subject 1 : %d",std->s1);
    printf("\n Marks of Subject 2 : %d",std->s2);
    printf("\n Marks of Subject 3 : %d",std->s3);
}
