#include<stdio.h>
#include<string.h>
#include<math.h>


// Assignment 5 Part 2
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015


void qn16(void);
void qn17(void);
void qn18(void);
void qn19(void);
void qn20(void);
void qn21(void);
void qn22(void);
void qn23(void);
void qn24(void);
void qn25(void);
void qn26(void);
void qn27(void);
void qn28(void);
void qn29(void);
void qn30(void);



int main()
{

    //qn16();
    //qn17();
    //qn18();
    //qn19();
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
    qn30();

}

// Q16. Write a C program to enter a number and print its reverse.

void qn16()
{
    int n;
    int rev=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    printf("Reverse number: %d",rev);
}


//Q17. Write a C program to check whether a number is palindrome or not.
void qn17()
{
    int n;
    int rev=0;
    int n_copy;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    n_copy = n;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    if (rev == n_copy)
        {
            printf("Palindrome");
        }
    else
        printf("Not a Palindrome");
 }


//Q18. Write a C program to find frequency of each digit in a given integer.

 void qn18()
 {
     long long int n;
     int n_copy;
     int temp;

     short int i=0;

     printf("Enter the value of n: ");
     scanf("%lli",&n);

     n_copy = n;
     while(i<=9)
     {
         short int count = 0;
         while(n>0)
         {
             if (i == n%10)
                count ++;
             n/=10;
         }
         n= n_copy;
         if(count >0)
             printf("\n Count of %d = %d",i, count);
         i++;
     }
 }


 //Q19. Write a C program to enter a number and print it in words.

 void qn19()
 {
     char ones[]={'Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine'};
     char teens[]={'Zero','Eleven','Twelve','Thirteen','Fourteen','Fifteen','Sixteen','Seventeen','Eighteen','Nineteen'};
     char tyes[]={'Zero','Ten','Twenty','Thirty','Fourty','Fifty','Sixty','Seventy','Eighty','Ninety'};
     char ds[]={'Zero','Hundred','Thousand','Lakhe'};
     int n;
     int n_copy;
     short int count=0;
     printf("Enter the value of n: ");
    scanf("%d",&n);

    n_copy = n;
    while(n>0)
    {
        count++;
        n /= 10;
    }

    n = n_copy;

    if (n>=0 && n <=9)
        printf("\n%s",ones[n]);
    if (n>=10 && n <20)
    {
        printf("\n%s",teens[n%10]);
    }




 }


//Q20. Write a C program to print all ASCII character with their values.

void qn20()
{
    char i=0;
     while(i<=127)
     {
         printf("\n %d - %c",i,i);
         i++;
     }
}


//Q21. Write a C program to find power of a number using for loop.

void qn21()
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


//Q22. Write a C program to find all factors of a number.

void qn22()
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


//Q23. Write a C program to calculate factorial of a number.

void qn23()
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


 //Q24. Write a C program to find HCF (GCD) of two numbers.

void qn24()
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


//Q25. Write a C program to find LCM of two numbers.

void qn25()
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




//Q26. Write a C program to check whether a number is Prime number or not.

void qn26()
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


// Q27. Write a C program to print all Prime numbers between 1 to n.

void qn27()
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



//Q28. Write a C program to find sum of all prime numbers between 1 to n.

void qn28()
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


//Q29. Write a C program to find all prime factors of a number.

void qn29()
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



//Q30. Write a C program to check whether a number is Armstrong number or not.


void qn30()
{
    int n;
    short int a;
    short int prod=1;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d",&n);
    int n_copy= n;
    while(n>0)
    {
        sum = sum + (n%10)*(n%10)*(n%10);
        n/=10;
    }

    if (sum == n_copy)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");
}






