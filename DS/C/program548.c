#include<stdio.h>
//STRING

int CountCapital(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of Capital letters are : %d\n",iRet);  //with space count krta

    return 0;
}