#include<iostream>
using namespace std;
int Lsearch(int [],int);
int main()
{
    int arr[5]={1,2,3,4,5};
    int item=5;
    int index;
    index=Lsearch(arr,5);
    if(index==-1)

        cout<<"no element found";

    else

        cout<<"element found at index"<<index<<"position"<<index+1<<endl;
        return 0;
}
    int Lsearch(int arr[],int po)
    {
        for(int i=0;i<=4;i++)
        {
            if((arr[i]==po))  return i;

        }
    }
