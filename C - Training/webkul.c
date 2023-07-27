#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter odd number >=3: ");
    scanf("%d",&n);

    int i,j,k,l,m,o;
    /* @@@@@ */
    if (n%2 ==0 || n <=0)
    {
        printf("Enter positive odd numbers only!!");
        return 0;
    }


    for(i=0;i<n+2;i++)
    {
        printf("@");
    }
    printf("\n");
    /*

    */
    for(j = 0;j<(n/2 +1);j++)
    {
        for (k=(n/2 -j) +1;k>0;k--)
            printf(" ");
        for (l=0;l<2*j+1;l++)
            printf("*");
        printf("\n");
    }
    for (i=0;i<n/2;i++)
    {
        for (j=0;j<=i+1;j++)
            printf(" ");
        for (k=0;k<n-2-2*i;k++)
            printf("*");
        printf("\n");
    }
    for (o = 0; o<n;o++)
    {
        for(m = 0; m<(n/2)+1;m++)
            printf(" ");
        printf("@\n");

    }

    return 0;

}
