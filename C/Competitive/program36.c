#include<stdio.h>

double CircleArea(float  fRadius)
{   
    float PI = 3.14;
    float Area = 0;

    Area = PI * fRadius * fRadius;

    return Area;
    
}

int main()
{
    float fValue = 0.0f; 
    double dRet = 0.0;
   
    printf("Enter redius \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%f",dRet);

    return 0;
}