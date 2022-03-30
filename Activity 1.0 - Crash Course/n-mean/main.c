#include <stdio.h>


int main()
{
    int number, i=0,sum=0, ave=0;

        while(number != 0)
        { 
         i++;
        printf("[%d] Input number:", i);
        scanf("%d",&number);
        if (number<0)
        {printf("[%d] Input number:", i);
        scanf("%d",&number);i--;i++;
        }
        
        sum+=number;
        
        }
        ave=sum/(i-1);
        printf("Average: %d", ave);
        
return 0;
}

