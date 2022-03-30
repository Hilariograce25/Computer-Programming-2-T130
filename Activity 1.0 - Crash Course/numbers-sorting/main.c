#include <stdio.h>
 
int main ()
 
{
     int i,j,a,n=10,number[11];
 
    for (i=1; i<=n; ++i)
    { 
        printf("[%d]Enter number:", i);
        scanf("%d", &number[i]);
        if (number[i]<=0)
        {
            printf("This is an invalid input. Please try again!\n");
            i--;
        }
        
    }
        for (i=1; i<=n; ++i)
        {

        for (j=i+1; j<=n; ++j)
        {
            if (number[i] < number[j])

                {
                    a= number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
        }
        }

printf("\n\nSorted List:");
printf(" %d,",number[1]);
printf(" %d,",number[2]);
printf(" %d,",number[3]);
printf(" %d,",number[4]);
printf(" %d,",number[5]);
printf(" %d,",number[6]);
printf(" %d,",number[7]);
printf(" %d,",number[8]);
printf(" %d,",number[9]);
printf(" %d",number[10]);

    return 0;
}


