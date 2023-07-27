#include<stdio.h>
#include<conio.h>
#include<math.h>

// Assignment 3
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015

/*
15. Write a C program to check even or odd using bitwise operator.
    Ex:    Input        output
            12        12  is Even
            17        17 is Odd
*/

int main()
{
    int a, b=2;
    printf("Enter number: ");
    scanf("%d",&a);
    a&1?printf("Odd"):printf("Even");
}


/*
14. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics        and Computer.
Calculate percentage and grade according to following:

    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F

    Ex:
    Input
    Input marks of five subjects: 95
    95
    97
    98
    90
    o/p:   Percentage = 95.00
               Grade A


int main()
{
    int a,b,c,d,e,p;
    printf("Enter the marks of 5 subjects (Comma Separated): ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    p = (a+b+c+d+e)/5;
    printf("Percentage: %d",p);
    if (p>=90)
        printf("\nGrade A");
    else if (p>=80)
        printf("\nGrade B");
    else if (p>=70)
        printf("\nGrade C");
    else if (p>=60)
        printf("\nGrade D");
    else if (p>=50)
        printf("\nGrade E");
    else if (p>=40)
        printf("\nGrade F");
}

*/

/*

13. Write a C program to input electricity unit charges and calculate total electricity bill according to the given     condition:
    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill

    Ex:
        Unit    Bill
    1.    50    30.00
    2.    120    93.00
    3.    256    274.80
    4.    12    7.20




int main()
{
    int u;

    printf("Enter Units consumed: ");
    scanf("%d",&u);

    if (u<=50)
        printf("Amount: Rs. %.2f", u*(0.50)+0.20*(u*0.50));
    else if (u<=150)
        printf("Amount: Rs. %.2f", 50*(0.50)+(u-50)*0.75 + 0.2*(50*(0.50)+(u-50)*0.75));
    else if (u<=250)
        printf("Amount: Rs. %.2f", 50*(0.50)+100*0.75+ (u-150)*1.20 + 0.20*(50*(0.50)+100*0.75+ (u-150)*1.20));
    else if (u>=250)
        printf("Amount: Rs. %.2f", 50*(0.50)+100*0.75+ 100*1.20 + (u-250)*1.50 + 0.20*(50*(0.50)+100*0.75+ (100)*1.20 + (u-250)*(1.50)));

}

*/

/*
12. Write a C program to check whether triangle is equilateral, scalene or isosceles
    Input: all side's Length

    Ex:    side1         side2        side3        Triangle
    1.     30             30            30          Equilateral
    2.     12              6            8           Scalene
    3.      8              8            10          Isosceles


int main()
{
    int a,b,c;
    printf("Enter three sides of triangle (Comma Separated): ");
    scanf("%d,%d,%d",&a,&b,&c);

    if (a==b && b==c)
        printf("Equilateral Triangle");
    else if (a==b || a==c)
        printf("Isoscales Triangle");
    else
        printf("Scalen Triangle");

}
*/

/*

11.Write a C program to find all roots of a quadratic equation.
    Ex:    Input
        Input a: 8
        Input b: -4
        Input c: -2
    o/p:    Root1: 0.80    Root2: -0.30


int main()
{
    int a,b,c;
    printf("Enter three coefficients of quadratic equation (Comma Separated): ");
    scanf("%d,%d,%d",&a,&b,&c);
    if ((b*b - 4*a*c)>=0)
    {
        printf("\nRoot 1: %.2f", (-b + sqrt(b*b-4*a*c))/(2.0*a));
        printf("\nRoot 2: %.2f", (-b - sqrt(b*b-4*a*c))/(2.0*a));
    }
    else
    {
        printf("\nRoot 1: %.2f + %.2f i", (-b/(2.0*a)), (sqrt(4*a*c - b*b))/(2.0*a));
        printf("\nRoot 2: %.2f - %.2f i", (-b/(2.0*a)), (sqrt(4*a*c - b*b))/(2.0*a));
    }
}

*/

/*
10. Write a C program to calculate the Area of two rectangles and print the length and breadth of the rectangle whose
Area is greater.
    Input format: length and breadth of two rectangles respectively.
    output: length and breadth of rectangle whose area is greater.



int main()
{
    float l1,b1,l2,b2;

    printf("Input length and breadth of 1st rectangle (comma separated): ");
    scanf("%f,%f",&l1,&b1);
    printf("Input length and breadth of 1st rectangle (comma separated): ");
    scanf("%f,%f",&l2,&b2);

    if (l1*b1 > l2*b2)
        printf("Length and breadth of rectangle with greater area %.2f, %.2f:",l1,b1);
    else if (l1*b1 < l2*b2)
        printf("Length and breadth of rectangle with greater area %.2f, %.2f:",l2,b2);
    else
        printf("Both rectangle have same area.");

    return 0;
}

*/

/*
8. Write a C program to input angles of a triangle and check whether triangle is valid or not.
    Ex:
    Input:    30,  60,  90            45, 45,  100
    o/p:          Valid                 Invalid



int main()
{
    int a,b,c;
    printf("Enter three angles of triangle(Comma Separated): ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b+c==180)
        printf("Valid");
    else
        printf("Invalid");
}
*/

/*

7. Write a C program to enter month number and print total number of days in month. (Excluding Leap Year)
    Ex:
    Input:    6            7
    o/p:    30 Days      31 Days


int main()
{
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, mno;
    printf("Enter month no: ");
    scanf("%d",&mno);
    printf("Days: %d", a[mno]);
}

*/

/*

6. Write a C program to print the English word of a digit like (One, Two,Three,......,Nine) if Digit is between 1 to 9,      Otherwise tell whether it's Even or Odd if Digit is greater than 9.
    Ex:
    Input:    8         16          11          -4
    o/p:    Eight       Even        Odd        Negative

Note: output should be negative if input is less than Zero



int main()
{
    int n;

    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            if (n<0)
                printf("Negative");
            else if (n>9 && n%2==0)
                printf("Even");
            else if (n>9 && n%2!=0)
                printf("Odd");
    }
}

*/

/*
5. Write a C program to check whether a character is uppercase or lowercase alphabet.
    Ex:
    Input:      M           k
    o/p:    Uppercase    Lowercase



int main()
{
    char c;
    scanf("%c",&c);

    if (c>= 65 && c<=90)
        printf("UpperCase");
    else if (c>= 97 && c<=122)
        printf("LowerCase");
    else
        printf("Invalid Character");
}

*/

/*
4. Write a C program to input any character and check whether it is alphabet, digit or special character.
    Ex:
    Input:    A                 m               9               @
    o/p:    Alphabet         Alphabet         Digit        Special character



int main()
{
    char c;
    scanf("%c",&c);

    if ((c>= 65 && c<=90)||(c>= 97 && c<=122))
        printf("Alphabet");
    else if (c>= 48 && c<=57)
        printf("Digit");
    else
        printf("Special Character");
}

*/

/*
3. Write a C program to check whether a number is even or odd.
    Ex:
    Input:      128            171
    o/p:        Even           Odd


int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
        printf("Even");
    else
        printf("Odd");

    return 0;

}

*/

/*
2. Write a C program to check whether a number is divisible by 5 and 11 or not.
    Ex:
    Input:       45                 55
    o/p:    Not Divisible        Divisible


int main()
{
    int n;
    scanf("%d",&n);
    if (n%11==0 && n%5==0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}

*/

/*
1. Write a C program to check whether a number is negative, positive or zero.
    Ex:
    Input:          -45           0              12
    o/p:         Negative        Zero         Positive



int main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
        printf("Negative");
    else if (n==0)
        printf("Zero");
    else
        printf("Positive");

    return 0;
}

*/




















