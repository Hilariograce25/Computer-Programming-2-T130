#include<stdio.h>
int solution(int acc[3][2], int x, int y)
{
    int result=0,i;
    for (i= 0; i<3; i++)
    {
        if(x==acc[i][0] && y== acc[i][1])
        {result =1;}
    }
    return result;
}

int main()
{
    int acc[3][2]= {{123,321},{456,654},{789,987}};
    int ID, PIN;
    
    printf("Enter Account Number: ");
    scanf("%d", &ID);
    printf("Enter PIN: ");
    scanf("%d", &PIN);
    
    if(solution(acc,ID,PIN))
    {
        printf("You have SUCESSFULLY Logged In!\nID#: %d", ID);
    }
    else
    {
        printf("Invalid ID/PIN!");
    }
   return 0;
}