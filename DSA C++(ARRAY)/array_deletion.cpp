#include <iostream>
using namespace std;
void deleteatbeginning(int arr[],int& n)
{
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
    n--;
}
void deleteateend(int arr[],int& n)
{
    arr[n-1]=0;
    n--;
}
void deleteatposition(int arr[],int pos,int& n)
{
    for(int i=pos;i<n-1;i++)
    {
    arr[i]=arr[i+1];
    }
    arr[n-1]=0;
    n--;
}
int main()
{
    int n;
    cout<<"enter number of elements in the array:\n";
    cin>>n;
    int arr[100]; // Use a fixed size for safety
    cout<<"enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos=-1;
    cout<<"enter position to delete the item in the array:\n";
    cin>>pos;

    if(pos<0||pos>=n)
    {
        cout<<"Invalid position.\n";
        return 1;
    }
    if(pos==0)
    {
        deleteatbeginning(arr,n);
    }
    else if(pos==n-1)
    {
        deleteateend(arr,n);
    }
    else
    {
        deleteatposition(arr,pos,n);
    }

    cout<<"the final array after deletion is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}