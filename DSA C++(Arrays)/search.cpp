#include <iostream>
using namespace std;
// linear search in an array
// Time complexity: O(n)
// Space complexity: O(1)
// int main()
// {
//     int n;
//     cout << "Enter number of elements in the array:\n";
//     cin >> n;
//     int arr[100]; // Use a fixed size for safety
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//    int item;
//    cout<<"Enter the item to search in the array:\n";
//    cin>>item;
//    int pos=-1;
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if(arr[i]==item)
//        {
//           pos=i;
//           break;
//         }
//     }
//     if(pos==-1)
//     {
//         cout<<"Item not found in the array.\n";
//     }
//     else
//     {
//         cout<<"Item found at position "<<pos+1<<".\n";
//     }
   
//     return 0;
// }
int main()
{
    int n;
    cout << "Enter number of elements in the array:\n";
    cin >> n;
    int arr[100]; // Use a fixed size for safety
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int item;
   cout<<"Enter the item to search in the array:\n";
   cin>>item;
    int pos=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==item)
        {
            pos=mid;
            break;
        }
        else if(arr[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1; 
        }
    }
    if(pos==-1)
    {
        cout<<"Item not found in the array.\n";
    }
    else
    {
        cout<<"Item found at position "<<pos+1<<".\n";
    }
    return 0;
}
// Binary search in an array
// Time complexity: O(log n)
// Space complexity: O(1)