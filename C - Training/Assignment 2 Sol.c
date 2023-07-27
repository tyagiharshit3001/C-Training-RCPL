#include<stdio.h>
#include<conio.h>

// Assignment 2
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015

/*
1. Write a C program to find maximum between two numbers using conditional operator.
*/

int main()
{
    int a,b;
    printf("Enter two numbers separated with comma no: ");
    scanf("%d,%d",&a,&b);
    printf("\nGreatest Number : %d", (a>b)?a:b);
}


/*
2. Write a C program to find maximum between three numbers using conditional operator.


int main()
{
    int a,b,c;
    printf("Enter three numbers separated with comma no: ");
    scanf("%d,%d,%d",&a,&b,&c);
    a = (a>b)?a:b;
    a = (a>c)?a:c;
    printf("\nGreatest number: %d",a);

    return 0;
}

*/

/*
3. Write a C program to check whether a number is even or odd using conditional operator.


int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    (a%2==0)?printf("Even"):printf("Odd");
    return 0;
}
*/

/*
4. Write a C program to check whether year is leap year or not using conditional operator.


int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    year%400==0?printf("Leap Year"):(year%100==0?printf("Not a leap year"):((year%4==0)?printf("Leap year"):printf("Not a leap year")));
    return 0;

}

*/


/*
5. Write a C program to check whether character is an alphabet or not using conditional operator.


int main()
{
    int num_c;
    char alp;
    printf("Enter character: ");
    scanf("%c",&alp);
    alp >=65 ? printf("Alphabet"):printf("Not a Alphabet");
    return 0;

}

*/

/*
6. Write a C program to swap two numbers using bitwise operator.



int main()
{
    int a,b;
    printf("Enter two comma separated numbers: ");
    scanf("%d,%d",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\n 1st Number: %d",a);
    printf("\n 2nd Number: %d",b);
}

*/

/*

7. Write a C program to performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

  Operator    Meaning of Operator
     +        addition or unary plus
     -        subtraction or unary minus
     *        multiplication
     /        division
     %        remainder after division (modulo division)


  Output:- if a=9 and b = 4 then
    a+b = 13
    a-b = 5
    a*b = 36
    a/b = 2
    Remainder when a divided by b=1


int main()
{
    int a,b;

    printf("Enter Two comma separated numbers: ");
    scanf("%d,%d", &a,&b);
    printf("\na+b = %d",a+b);
    printf("\na-b = %d",a-b);
    printf("\na*b = %d",a*b);
    printf("\na/b = %d",a/b);
    printf("\nRemainder(a/b) = %d",a%b);

    return 0;
}

*/

/*

8.  Write a C program A relational operator checks the relationship between two operands.
If the relation is true, it returns 1; if the relation is false, it returns value 0.
Operator    Meaning of Operator    Example
==    Equal to                  5 == 3 is evaluated to 0
>    Greater than                  5 > 3 is evaluated to 1
<    Less than                  5 < 3 is evaluated to 0
!=    Not equal to                  5 != 3 is evaluated to 1
>=    Greater than or equal to      5 >= 3 is evaluated to 1
<=    Less than or equal to           5 <= 3 is evaluated to 0



int main()
{
    int a,b;

    printf("Enter Two comma separated numbers: ");
    scanf("%d,%d", &a,&b);

    printf("\na==b = %d", a==b);
    printf("\n a>b = %d", a>b);
    printf("\n a<b = %d", a<b);
    printf("\n a!=b = %d", a!=b);
    printf("\n a>=b = %d", a>=b);
    printf("\n a<=b = %d", a<=b);

    return 0;

}
*/

/*
9. An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

  Operator
  &&
  ||
  !



int main()
{
    int a,b;

    printf("Enter Two comma separated numbers: ");
    scanf("%d,%d", &a,&b);

    (a&&b)?printf("\nTrue"):printf("\nFalse");
    (a||b)?printf("\nTrue"):printf("\nFalse");
    (!a)?printf("\nTrue"):printf("\nFalse");

    return 0;
}

*/

/*
10. Write a C program to enter a four digit number and print all digit.


int main()
{
    int n;
    printf("Enter 4 digit number: ");
    scanf("%d",&n);

    int d1,d2,d3,d4;

    d1= n%10;
    n=n/10;
    d2= n%10;
    n=n/10;
    d3= n%10;
    n=n/10;
    d4= n%10;
    n=n/10;

    printf("%d %d %d %d",d4,d3,d2,d1);

    return 0;
}
*/

/*

11. Write a C program to enter a five digit number and find sum and difference of all digit.



int main()
{
    int n;
    printf("Enter 5 digit number: ");
    scanf("%d",&n);

    int d1,d2,d3,d4,d5;

    d1= n%10;
    n=n/10;
    d2= n%10;
    n=n/10;
    d3= n%10;
    n=n/10;
    d4= n%10;
    n=n/10;
    d5= n%10;
    n=n/10;

    printf("Sum: %d",d1+d2+d3+d4+d5);
    printf("\nDifference: %d",d1-d2-d3-d4-d5);

    return 0;
}

*/

/*
12. Write a C program to enter a five digit number and find sum and difference of 1st , 3rd , 5th digit number.



int main()
{
    int n;
    printf("Enter 5 digit number: ");
    scanf("%d",&n);

    int d1,d2,d3,d4,d5;

    d1= n%10;
    n=n/10;
    d2= n%10;
    n=n/10;
    d3= n%10;
    n=n/10;
    d4= n%10;
    n=n/10;
    d5= n%10;
    n=n/10;

    printf("Sum: %d",d1+d3+d5);
    printf("\nDifference: %d",d1-d3-d5);

    return 0;
}

*/

