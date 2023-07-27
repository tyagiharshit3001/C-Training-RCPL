#include<stdio.h>
#include<math.h>


// Assignment 6 Part 1
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015


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
void swap(int, int);
void sirQue(void);



int main()
{

    //qn1();
    //qn2();
    //qn3();
    //qn4();
    //qn5();            //Problem
    //qn6();
    //qn7();
    //qn8();
    //qn9();
    //qn10();
    //qn11();
    //qn12();
    qn13();
    //qn14();
    //qn15();
    //sirQue();

}

// Q001. Write a C program to print all natural numbers from 1 to n. - using while loop.

void qn1()
{
    int arr[50];
    int i;
    printf("Enter 10 numbers (Space Separated): ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements of array are: ");
    for (i=0;i<10;i++)
    {
        printf("%d, ",arr[i]);
    }

}


//Q02. Write a C program to print all negative elements in an array.

void qn2()
{
    int arr[50];
    int i,n;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements of array are: ");
    for (i=0;i<n;i++)
    {
        if(arr[i]<0)
            printf("%d, ",arr[i]);
    }
 }


//Q03. Write a C program to find sum of all array elements.

 void qn3()
 {
     int arr[50];
    int i,n;
    int sum=0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        sum += arr[i];
    }

    printf("\n Sum of elements: %d", sum);
 }


 //Q04. Write a C program to find maximum and minimum element in an array.

 void qn4()
 {
    int arr[50];
    int i,n;
    int sum=0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }

    printf("\n Maximum elements: %d", arr[0]);
 }


//Q05. Write a C program to find second largest element in an array.

void swap(int a, int b)
{
    a  = a^b;
    b  = a^b;
    a  = a^b;
}

void qn5()
{
    int arr[50];
    int i,n;
    int sum=0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }



    for (i=2;i<n;i++)
    {
        arr[1] = (arr[1]>arr[i] && arr[i] < arr[0])?arr[1]:arr[i];
    }



    printf("\n Maximum elements: %d", arr[1]);
}


//Q06. Write a C program to count total number of even and odd elements in an array.

void qn6()
{
    int arr[50];
    short int i,n;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    short int eveCount = 0, oddCount = 0;
    for (i = 0; i<n;i++)
    {
        if (arr[i]&1)
            oddCount++;
        else
            eveCount++;
    }

    printf("\n Even No's: %d \n Odd No's: %d",eveCount, oddCount);
}


//Q07. Write a C program to count total number of negative elements in an array.

void qn7()
 {
     int arr[50];
    short int i,n;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    short int negCount = 0;
    for (i = 0; i<n;i++)
    {
        if (arr[i]<0)
            negCount++;
    }

    printf("\n Negative No's: %d",negCount);
 }


//Q08. Write a C program to copy all elements from an array to another array.

void qn8()
 {
     int arr[50],brr[50];
    short int i,n;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i=0;i<n;i++)
    {
        *(brr+i) = *(arr+i);
    }
    for (i=0;i<n;i++)
        printf("%d, ",*(brr+i));
 }


 //Q09. Write a C program to insert an element in an array.

void qn9()
{
    int arr[50],brr[50];
    short int i,n;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to be inserted: ");
    scanf("%d",&arr[i]);
      for (i=0;i<n+1;i++)
        printf("%d, ",*(arr+i));

}


//Q10. Write a C program to delete an element from an array at specified position.
//1 2 3 4 5 6


void qn10()
{
    int arr[50],brr[50];
    short int i,n,d;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter position of deletion: ");
    scanf("%d",&d);

    for (i=d;d<n;i++)
        *(arr+i -1) = *(arr +i);

    for (i=0;i<n-1;i++)
        printf("%d, ",*(arr+i));

}


//Q11. Write a C program to count frequency of each element in an array.

void qn11()
{
    int arr[50],brr[50]={0};
    short int i,n,d;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        brr[arr[i]]+=1;
    }
    for (i=0;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }
    for (i=0;i<arr[0]+1;i++)
    {
        if (brr[i]>0)
            printf("%d---->%d\n",i,brr[i]);
    }
}


// Q12. Write a C program to print all unique elements in the array.


void qn12()
{
    int arr[50],brr[50]={0};
    short int i,n,d;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        brr[arr[i]]+=1;
    }
    for (i=0;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }
    for (i=0;i<arr[0]+1;i++)
    {
        if (brr[i]>0)
            printf("%d\n",i);
    }
}


//Q13. Write a C program to count total number of duplicate elements in an array.

void qn13()
{
    int arr[50],brr[50]={0};
    short int i,n,d;
    int sum = 0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        brr[arr[i]]+=1;
    }
    for (i=0;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }
    for (i=0;i<arr[0]+1;i++)
    {
        if (brr[i]>1)
            sum += brr[i]-1;
    }
    printf("\n Count(Duplicate): %d", sum);

}


//Q14. Write a C program to delete all duplicate elements from an array.


void qn14()
{
    int arr[50],brr[50]={0};
    short int i,n,d;
    int sum = 0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter numbers (Space Separated): ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        brr[arr[i]]+=1;
    }
    for (i=0;i<n;i++)
    {
        arr[0] = arr[0]>arr[i]?arr[0]:arr[i];
    }
    for (i=0;i<arr[0]+1;i++)
    {
        if (brr[i]>1)
            sum += brr[i]-1;
    }
    printf("\n Count(Duplicate): %d", sum);
}


//Q14. Write a C program to delete all duplicate elements from an array.



void qn15()
{
    int n;
    short int a;
    short int prod=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        prod *= n%10;
        n/=10;
    }
    printf("\nProduct of digits: %d",prod);
}

void sirQue()
{
    double a[] = {9,8,7,6,5};
    int i;
    int n = sizeof(a)/sizeof(*a);

    for (i=0;i<n;i++)
    {
        *(a+i) +=2;
    }

    for (i=0;i<n;i++)
    {
        printf("%lf, ",*(a+i));
    }

//    while(n--)
//    {
//        *a+=2;
//        a+=1;
//    }
//    n = sizeof(a)/(*a);
//    while(n--)
//    {
//        printf("%lf, ",*a);
//        a+=1;
//    }

}






