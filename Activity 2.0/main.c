#include <stdio.h>
float addGrades(float a,float b,float c, float d,float e)
{
    float result;
    result=a+b+c+d+e;
    return result;
}
float main(float averageGrade) 
{
    float n1,n2,n3,n4,n5,sum;
    printf("Enter Five Numbers:\n");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
    sum=addGrades(n1,n2,n3,n4,n5);
    averageGrade=sum/5;
    printf("Average= %f", averageGrade);
    return 0;
    
}



