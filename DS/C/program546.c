#include<stdio.h>
//STRING Recursion

int strlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("String length is : %d\n",iRet);  //with space count krta

    return 0;
}