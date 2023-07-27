#include<stdio.h>

struct STD  {
    int x;
    int y;
};

void display(int a, int b);
void display1(struct STD mad);
void display2(struct STD *stupid);

int main()
{
    struct Student {
        int rollNo;
        char name[25];
        float fee;
    };

    struct Student *std = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter student Roll No.: ");
    scanf("%d", &std ->rollNo );
    printf("Enter student name: ");
    scanf("%s", std ->name );
    printf("Enter student fees: ");
    scanf("%f", &std -> fee );

    printf("\n Roll No.: %d",std->rollNo);
    printf("\n Name : %s",std->name);
    printf("\n Float : %.2f",std->fee);


       //huihuihuihui

//
//        struct dob
//        {
//            short int day;
//            short int month;
//            short int year;
//        };
//
//
//    struct Student
//    {
//        struct dob DOB;
//        int rollNo;
//        float fee;
//        char name[25];
//
//    }std[50];
//
//    char ch;
//    int opt, count=0;
//    int i,roll;
//do
//    {
//        //system("cls");
//    printf("\n*************************Menu*************************");
//    printf("\n  [1]---------------------------> Enter student record");
//    printf("\n  [2]---------------------------> Edit student record");
//    printf("\n  [3]---------------------------> Display student record");
//    printf("\n  [4]---------------------------> Exit");
//    printf("\n  Enter Option: ");
//    scanf("%d",&opt);
//
//        switch(opt)
//    {
//    case 1:
//        printf("\n*************************Enter Student Record*************************");
//        printf("\nEnter student Roll No.: ");
//        scanf("%d", &std[count].rollNo );
//        printf("\nEnter student name: ");
//        scanf("%s", std[count].name );
//        printf("\nEnter student fees: ");
//        scanf("%.2f", &std[count].fee );
//        printf("\nEnter date of birth(DD MM YYYY): ");
//        scanf("%d %d %d",&std[count].DOB.day,&std[count].DOB.month,&std[count].DOB.year);
//        count++;
//        break;
//    case 2:
//        printf("\n**************************Edit Student Record**************************");
//        printf("\Enter Roll no. of student to edit record: ");
//        scanf("%d",&roll);
//        for (i = 0;i<count;i++)
//        {
//            if (std[i].rollNo == roll )
//            {
//                break;
//            }
//        }
//        printf("\n***********************************************************************");
//        printf("\nEnter student's new Roll No.: ");
//        scanf("%d", &std[i].rollNo );
//        printf("\nEnter student's new name: ");
//        scanf("%s", std[i].name );
//        printf("\nEnter student's new fees: ");
//        scanf("%.2f", &std[i].fee );
//        printf("\nEnter new date of birth(DD MM YYYY): ");
//        scanf("%d %d %d",&std[i].DOB.day,&std[i].DOB.month,&std[i].DOB.year);
//        break;
//
//    case 3:
//
//        for (i=0;i<count;i++)
//        {
//            printf("\n***********************************************************************");
//            printf("\n \t\t Roll No.: %d",std[i].rollNo);
//            printf("\n \t\t Name : %s",std[i].name);
//            printf("\n \t\t Fee : %.2f",std[i].fee);
//            printf("\n \t\t Date of Birth : %d-%d-%d",std[i].DOB.day,std[i].DOB.month,std[i].DOB.year);
//            printf("\n***********************************************************************");
//
//        }
//        getc(ch);
//        break;
//    case 4:
//        exit(0);
//        break;
//        }
//
//    }while(1);




    struct STD stc = {5,9};

    display(stc.x, stc.y);
    display1(stc);
    display2(&stc);

    return 0;

}

void display(int a, int b)
{
    printf("\n Hello Sir!!, This program shows accessing values by passing structure members.");
    printf("\n Member 1: %d \n Member 2: %d\n",a,b);
}

void display1(struct STD mad)
{
    printf("\n Hello Sir!!, This program shows accessing values by passing structure.");
    printf("\n Member 1: %d \n Member 2: %d\n",mad.x,mad.y);
}

void display2(struct STD *stupid)
{
    printf("\n Hello Sir!!, This program shows accessing values by passing structure pointer.");
    printf("\n Member 1: %d \n Member 2: %d\n",stupid->x,stupid->y);
}

