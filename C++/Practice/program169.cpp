#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private :
        int *Arr; 
        int iSize;  

    public :
        ArrayX(int X = 5)  
        { 
            iSize = X;  
            Arr = new int[iSize];   
        }

        ~ArrayX()   
        {
            delete[]Arr;   
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Dsiplay()
        {
            int iCnt = 0;
            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()   //ithe changes kru shkto functions veg-vegle
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

};

int main()
{  
    ArrayX *aobj = NULL;
    int iLength = 0,iRet = 0;
    cout<<"Enter the no. of elements : \n";

    cin>>iLength;
    
    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Dsiplay();

    iRet = aobj->Summation();
    cout<<"Summation is :"<<iRet<<"\n";

    delete aobj;

    return 0;
}