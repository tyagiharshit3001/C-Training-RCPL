#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,l,m,o;
    int n ;
    printf("Enter even number >=2 : ");
    scanf("%d", &n);

    //Condition to make sure program will run only for even positive numbers
    if (n%2 != 0 || n <=0)
        return 0;
    /*

    @
    @@
    @@@
    @@@@
    @@@
    @@
    @

    */

    for (i = 0; i<n+1;i++)
    {
        for (l = 0;l<(2*n +n/2);l++)
            printf(" ");
        if (i < n/2+1)
        {
            for (j = 0;j<(n/2+1) && j<= i;j++)
                printf("@");
        }
        else{
            static int count = 0;
            for (k = n/2-count;k>0;k--)
                printf("@");
            count ++;
        }
        printf("\n");
    }


    /*

    ************
    ************
    ************
    ************
    ************
    ************

    */

    for (i=0;i<n;i++)
    {
        for (l = 0;l<(n/2+1);l++)
            printf(" ");
        for(j=0;j<(2*n);j++)
            printf("*");
        printf("\n");
    }


    /*
       @
      @@@
     @@@@@
    @@@@@@@
    */

    for (i=0;i<(n/2+1);i++)
    {
        for (l = 0;l<(n/2+1)-i;l++)
            printf(" ");
        for (j =0; j< (2*i+1);j++)
            printf("*");
        printf("\n");
    }

    printf("\n\n Total number of loops used = 7 \n\n");
}
