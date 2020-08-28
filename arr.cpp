#include <iostream>

using namespace std;
void tranverse(int b[]);
int search(int b[],int);
void insert(int b[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    tranverse(arr);
    int element;int index;
    cout<<"Enter the element to be searched";
    cin>>element;
    index=search(arr,element);
    if(index==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"element at"<<index<<"position"<<index+1;
    }
    insert(arr);
    return 0;
}
void tranverse(int b[5])
{
    cout<<"Enter array elements";
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
    cout<<"entered elements are";
    for(int j=0;j<5;j++)
    {
        cout<<b[j];
    }
}
int search(int b[],int item)
{

    for(int k=0;k<5;k++)
    {
        if(b[k]==item) return k;
    }
}
void insert(int b[])
{
    int a,x,pos,n=5;
    cout<<"Enter the element to be inserted";
    cin>>x;
    cout<<"enter the position where to be inserted";
    cin>>pos;
    for(a=n;a>=pos;a--)
    {
        b[a+1]=b[a];
    }
    b[pos]=x;
    n=n+1;
    for(a=0;a<n;a++)
    {
        cout<<b[a];
    }
}
