
#include <stdio.h>

int main()
{
    int grade;
    printf("Enter Grade: ");
    scanf("%d",&grade);
 if (grade<=0)
    printf("Invalid input. Try again.");
 else if (grade<50)
    printf("Your letter grade is F.\n");

 else if (grade<=59)
    printf("Your letter grade is D.\n");
 
 else if (grade<=67)
    printf("Your letter grade is C.\n");
 
 else if(grade<=75)
    printf("Your letter grade is B-.\n");
 
 else if(grade<=83)
    printf("Your letter grade is B.\n");
 
 else if(grade<=91)
    printf("Your letter grade is A-.\n");
    
 else if(grade<=100)
    printf("Your letter grade is A.\n");
    
 else if (grade>100)
    printf("Invalid input. Try again.");
    return 0;
}