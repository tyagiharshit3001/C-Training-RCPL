#include<stdio.h>
#include<conio.h>
#include<math.h>

// Assignment 1
// Name : Harshit Tyagi
// Roll no: 1902160130021
// B. Tech (IT)
// Email: tyagiharshit988@gmail.com
// Contact: 7078179015



/*
1. Write a C program to print your name, date of birth. and mobile number.
    Expected Output:

        Name   : John
        DOB      : August 15, 1947
        Mobile : 91-9999999999
*/

int main()
{
    printf("\n Name: Harshit");
    printf("\n Date of Birth: 30th January 2001");
    printf("\n Contact: 7078179015");
}




/*
2. Write a C program to read and display all type of variables.

Expected Output:
    123
    34.67
    A

int main(){
    int a;
    float b;
    char c;
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("\n%c", &c);
    printf("\n %d",a);
    printf("\n %f",b);
    printf("\n %c",c);
    return 0;


}

*/


/*
3. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
    Test Data :
        Input the Employees ID(Max. 10 chars): 0342
        Input the working hrs: 8
        Salary amount/hr: 15000
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00


int main(){
  int id;
  float w_hrs;
  float sal_per_hr;

  scanf("%d",&id);
  scanf("%f",&w_hrs);
  scanf("%f",&sal_per_hr);

  printf("Employee's ID = %d",id);
  printf("\nSalary = U$ %.2f",w_hrs*sal_per_hr);

}

*/

/*
4.  Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
    Expected Output :
        Input the radius of the sphere : 2.56
        The volume of sphere is 70.276237.


#define PI 3.14159265359
int main(){
    float r;
    printf("Input the radius of the sphere : ");
    scanf("%f", &r);
    printf("\nThe volume of sphere is %6f", (4/3)*PI*r*r*r);
    return 0;
}

*/

/*
5. Write a C program that converts kilometers per hour to miles per hour. (1 KM = 0.621371 M)
    Expected Output :
        Input kilometers per hour: 15
        9.320568 miles per hour


int main(){
    float kmph;
    printf("Input kilometers per hour: ");
    scanf("%f",&kmph);
    printf("%6f miles per hr.", 0.621371*kmph);
    return 0;

}
*/

/*
6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
    Expected Output :
        Input minutes: 546
        9 Hours, 6 Minutes


int main(){
    int min;
    printf("Input minutes: ");
    scanf("%d",&min);
    printf("\n%d hr %d mins",min/60,min%60);

}
*/

/*
7.  Write a C program to find the third angle of a triangle if two angles are given.
    Expected Output :
        Input two angles of triangle separated by comma : 50,70
        Third angle of the triangle : 60



int main(){
    float ang1, ang12;
    printf("Input two angles of triangle separated by comma : ");
    scanf("%f,%f",&ang1,&ang12);
    printf("\nThird angle of the triangle : %2f",180-(ang1+ang12));
    return 0;
}
*/

/*
8. Write a C program to convert specified days into years, weeks and days.
   Note: Ignore leap year.

    Test Data :
        Number of days : 1329
    Expected Output :
        Years: 3
        Weeks: 33
        Days: 3

int main(){
    int days;
    scanf("%d",&days);
    printf("Years: %d", days/365);
    printf("\nWeeks: %d",(days%365)/7);
    printf("\nDays: %d", (days%365)%7);
    return 0;
}

*/

/*
9. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
    Test Data :
        Input the amount: 375
    Expected Output:
    There are:
    3 Note(s) of 100.00
    1 Note(s) of 50.00
    1 Note(s) of 20.00
    0 Note(s) of 10.00
    1 Note(s) of 5.00
    0 Note(s) of 2.00
    0 Note(s) of 1.00



int main(){
    int amt;
    printf("Input the amount: ");
    scanf("%d",&amt);

    printf("\n %d Note(s) of 100.00",(amt/100));
    printf("\n %d Note(s) of 50.00",(amt%100)/50);
    printf("\n %d Note(s) of 20.00",((amt%100)%50)/20);
    printf("\n %d Note(s) of 10.00",(((amt%100)%50)%20)/10);
    printf("\n %d Note(s) of 5.00",((((amt%100)%50)%20)%10)/5);
    printf("\n %d Note(s) of 2.00",(((((amt%100)%50)%20)%10)%5)/2);
    printf("\n %d Note(s) of 1.00",((((((amt%100)%50)%20)%10)%5)%2)/1);

}
*/

/*
10. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
    Input seconds: 25300
Expected Output:
    There are:
    H:M:S - 7:1:40



int main()
{
    int sec;
    scanf("%d", &sec);
    printf("There are: ");
    printf("\n %d H : %d M : %d S", sec/3600, (sec/60)%60 , sec%60 );
}

*/

/*
11. C program to calculate Compound Interest

    Example Input
    Enter principle (amount): 1200
    Enter time: 2
    Enter rate: 5.4
    Output

    Compound Interest = 1333.099243

    Compound Interest formula
    Formula to calculate compound interest annually is given by.

    CI = P(1 + R/100)^T



int main()
{
    float ci, p, r, t;
    printf("Enter principle : ");
    scanf("%f",&p);
    printf("Enter time : ");
    scanf("%f",&t);
    printf("Enter rate : ");
    scanf("%f",&r);
    ci = p*(pow((1 + r/100),t));
    printf("Compound Interest: %.2f", ci);

    return 0;

}
*/

/*
12. C program to calculate total average and percentage of five subjects

    Example Input
    Enter marks of five subjects: 95 76 85 90 89
    Output

    Total = 435
    Average = 87
    Percentage = 87.00


int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter marks: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    printf("\nTotal: %d", s1+s2+s3+s4+s5);
    printf("\nAverage: %d",(s1+s2+s3+s4+s5)/5);
    printf("\nPercent: %.2f %",(s1+s2+s3+s4+s5)/5);
}

*/

/*
 C program to find area of an equilateral triangle
    Example Input

 Enter side of the equilateral triangle: 10
 Output

 Area of equilateral triangle = 43.3 sq. units

 C equivalent expression to find area of equilateral triangle -  (sqrt(3) / 4) * (side * side)


int main()
{
    float side;
    printf("Enter side of the equilateral triangle: ");
    scanf("%f",&side);
    printf("Area of equilateral triangle = %.2f", (sqrt(3) / 4) * (side * side));
    return 0;
}

*/

/*
 Write a C program to print the following characters in a reverse     way.
    Test Characters: 'X', 'M', 'L'

    Expected Output:
    The reverse of XML is LMX


int main()
{
    char a,b,c;
    printf("Enter characters: ");
    scanf("%c %c %c",&a,&b,&c);
    printf("Reverse string: %c%c%c", c,b,a);

    return 0;
}

*/

/*
 1. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

    Test Data :
    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4
    Expected Output:
    Average Value = 19.444444



int main()
{
    float wt1, n1, wt2, n2;
    printf("Weight of item 1: ");
    scanf("%f",&wt1);
    printf("No. of item 1: ");
    scanf("%f",&n1);
    printf("Weight of item 2: ");
    scanf("%f",&wt2);
    printf("No. of item 1: ");
    scanf("%f",&n2);

    printf("Average: %.2f", (wt1* n1 + wt2*n2)/(n1+n2));
    return 0;

}

*/

/*
16. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

    Test Data :
    Input total distance in km: 350
    Input total fuel spent in liters: 5
    Expected Output:
    Average consumption (km/lt) 70.000


int main()
{
    float dist, f;
    printf("Input total distance in km: ");
    scanf("%f",&dist);
    printf("Input total fuel spent in liters: ");
    scanf("%f",&f);
    printf("Average: %.2f Km/L",dist/f);
    return 0;
}

*/

/*
17. Write a C program to calculate the distance between the two points.

    Test Data :
    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10
    Expected Output:
    Distance between the said points: 11.1803


int main()
{
    int x1,y1,x2,y2;
    float dist;
    printf("Input x1: ");
    scanf("%d",&x1);
    printf("Input y1: ");
    scanf("%d",&y1);
    printf("Input x2: ");
    scanf("%d",&x2);
    printf("Input y2: ");
    scanf("%d",&y2);

    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance b/w (%d,%d) and (%d,%d) is %f units", x1,y1,x2,y2, dist);

}
*/

/*
18. Write a C program to Swap two Numbers Without Using Temporary     Variables.


int main()
{
    int a,b;
    printf("Enter 1st No: ");
    scanf("%d", &a);
    printf("\nEnter 2nd No: :");
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("\n1st no: %d",a);
    printf("\n2nd no: %d",b);

    return 0;

}
*/

/*
19. C program to convert temperature from Fahrenheit to Celsius.


int main()
{
    float f,c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("\n Temperature in Celsius: %.2f C ",c);
    return 0;
}

*/


/*

20. Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
How to calculate simple interest in C programming.


int main()
{
    float si, p, r, t;
    printf("Enter principle : ");
    scanf("%f",&p);
    printf("Enter time : ");
    scanf("%f",&t);
    printf("Enter rate : ");
    scanf("%f",&r);
    si = p*r*t/100;
    printf("Simple Interest: %.2f", si);

    return 0;
}

*/

