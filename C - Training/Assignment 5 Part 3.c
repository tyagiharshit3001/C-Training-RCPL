#include<stdio.h>
#include<string.h>
#include<math.h>


// Assignment 5 Part 2
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015


void qn31(void);
void qn32(void);
void qn33(void);
void qn34(void);
void qn35(void);
void qn36(void);
void qn37(void);
void qn38(void);
void qn39(void);
void qn40(void);
void qn41(void);
void qn42(void);
void qn43(void);
void qn44(void);
void qn45(void);



int main()
{

    //qn31();
    //qn32();
    //qn33();
    //qn34();
    //qn20();
    //qn21();
    //qn22();
    //qn23();
    //qn24();
    //qn25();
    //qn26();
    //qn27();
    //qn28();
    //qn29();
    //qn30();
    qn35();

}

// Q31. Write a C program to print all Armstrong numbers between 1 to n.

void qn31()
{
    int n;
    int j;

    printf("Enter a number: ");
    scanf("%d",&n);


    for (j=1;j<=n;j++)
    {
        int sum = 0;
        int j_copy= j;
        while(j>0)
        {
        sum = sum + (j%10)*(j%10)*(j%10);
        j/=10;
        }

    if (sum == j_copy)
        printf("%d, ",sum);
        j= j_copy;
    }


}


//Q32. Write a C program to check whether a number is Perfect number or not.
void qn32()
{
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int n_cpy = n;
    int i;
     for (i = 1;i<n;i++)
     {
         if (n%i==0)
         {
             sum = sum + i;
         }
     }
     if (sum == n_cpy)
     {
         printf("\nPerfect number");
     }else
        printf("\nNot a perfect number");
 }


//Q33. Write a C program to print all Perfect numbers between 1 to n

 void qn33()
 {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i,j;
    for (j = 1;j<n;j++)
    {
        int n_cpy = n;
        int sum = 0;
        for (i = 1;i<j;i++)
     {
         if (j%i==0)
         {
             sum = sum + i;
         }
     }
     if (sum == n_cpy)
     {
         printf("%d", sum);
    }

}
 }


 //Q34. Write a C program to check whether a number is Strong number or not.
 // 145 = 1! + 4! + 5!

 void qn34()
 {
     int n;
     int sum = 0;
     printf("Enter number: ");
     scanf("%d",&n);
    int n_cpy = n;
    while(n)
     {
         int i = n%10;
         int j = 1;
         while(j<n%10)
         {
             i *=j;
             j++;
         }


         sum += i;
         n/=10;
     }

     if(sum == n_cpy)
        printf("Strong Number");
     else
        printf("Not a strong");
 }


//Q20. Write a C program to print all ASCII character with their values.

void qn35()
{
    char i=0;
     while(i<127)
     {
         printf("\n %d - %c",i,i);
         i++;
     }
}


//Q34. Write a C program to check whether a number is Strong number or not.

void qn36()
{
    int n;
    int p;
    printf("Enter number and power: ");
    scanf("%d,%d",&n, &p);

    int i=0;
    while(i<p)
    {
        n= n*n;
        i++;
    }
    printf("\n%d",n);
}

//Q36. Write a C program to print Fibonacci series up to n terms.

void qn37()
 {
     int n;
     printf("Enter value of n: ");
     scanf("%d",&n);
     int i = 1;

     while(i<=n/2)
     {
         if(n%i==0)
            printf("%d, ",i);
        i++;
     }

 }


//Q37. Write a C program to find one's complement of a binary number.

void qn38()
 {
     int n;                                     //5*1
        printf("Enter value of n: ");
     scanf("%d",&n);
    int i = 1;
     while(n)
     {
         i*=n;
        n--;
     }
     printf("Factorial: %d",n);
 }


 //Q38. Write a C program to find two's complement of a binary number.


void qn39()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);
    int i=2;
    int g = 1;
    int m = (n1>n2?n1:n2);
    while(i<m)
    {
        if (n1%i==0 && n2%i==0)
        {
            g*=i;
            n1/=i;
            n2/=i;
        }
        else
            i++;
    }
    printf("%d",g);
}


//Q40. Write a C program to convert Binary to Decimal number system.

void qn40()
{
     int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);
    int i=2;
    int g = 1;
    int m = (n1>n2?n1:n2);
    int n1_copy = n1;
    int n2_copy = n2;

    while(i<m)
    {
        if (n1%i==0 && n2%i==0)
        {
            g*=i;
            n1/=i;
            n2/=i;
        }
        else
            i++;
    }
    printf("%d",n1_copy*n2_copy/g);
}




//Q41. Write a C program to convert Binary to Hexadecimal number system.

void qn41()
{
    int n;
    short int a,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    a = 0;
    for (i = 2; i < n/2;i++)
    {
        if (n%i==0)
        {
            a++;
        }
    }
    if (a>1)
        printf("Not prime number.");
    else
        printf("Prime Number");


}


// Q42. Write a C program to convert Octal to Binary number system.

void qn42()
{
    int n;
    short int a,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (j=2;j<=n;j++)
    {
        a = 0;
        for (i = 2; i <= sqrt(j);i++)
        {
            if (j%i==0)
            {
                a++;
            }
        }
        if (a<1)
            printf("\n%d",j);
    }
}



//Q43. Write a C program to convert Octal to Decimal number system.

void qn43()
{
    int n;
    short int a,i,j;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (j=2;j<=n;j++)
    {
        a = 0;
        for (i = 2; i <= sqrt(j);i++)
        {
            if (j%i==0)
            {
                a++;
            }
        }
        if (a<1)
            sum = sum+j;
    }
    printf("\nSum: %d",sum);
}


//Q44. Write a C program to convert Octal to Hexadecimal number system.

void qn44()
{
    int n;
    short int a,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\n Prime factors: ");
    for (j=2;j<=n;j++)
    {
        a = 0;
        for (i = 2; i <= sqrt(j);i++)
        {
            if (j%i==0)
            {
                a++;
            }
        }
        if (a<1)
        {
            if (n%j==0)
            {
                printf("%d, ",j);
            }
        }

    }
}



//Q45. Write a C program to convert Decimal to Binary number system.

void qn45()
{
    ;
}







