// insertion at different positions
// #include <stdio.h>
// void insertAtBeginning(int arr[], int *n, int item) 
// {
//     for (int i = *n; i > 0; i--) 
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = item;
//     (*n)++;
// }
// void insertAtEnd(int arr[], int *n, int item) 
// {
//     arr[*n] = item;
//     (*n)++;
// }
// void insertAtPosition(int arr[], int *n, int item, int pos) 
// {
//     for (int i = *n; i > pos; i--) 
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = item;
//     (*n)++;
// }
// int main() 
// {
//     int n, arr[100], item, pos;
//     printf("Enter number of elements in the array:\n");
//     scanf("%d", &n);
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter item to insert in the array:\n");
//     scanf("%d", &item);
//     printf("Enter position to insert the item in the array:\n");
//     scanf("%d", &pos);
//     if (pos < 0 || pos > n) 
//     {
//         printf("Invalid position.\n");
//         return 1;
//     }
//     if (pos == 0) 
//     {
//         insertAtBeginning(arr, &n, item);
//     } else if (pos == n) 
//     {
//         insertAtEnd(arr, &n, item);
//     } else 
//     {
//         insertAtPosition(arr, &n, item, pos);
//     }
//     printf("The final array after insertion is:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// deletion at different operations
// #include <stdio.h>
// void deleteAtBeginning(int arr[], int *n) 
// {
//     for (int i = 0; i < *n - 1; i++) 
//     {
//         arr[i] = arr[i + 1];
//     }
//     (*n)--;
// }
// void deleteAtEnd(int arr[], int *n) 
// {
//     (*n)--;
// }
// void deleteAtPosition(int arr[], int pos, int *n) 
// {
//     for (int i = pos; i < *n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     (*n)--;
// }
// int main() 
// {
//     int n, arr[100], pos;
//     printf("Enter number of elements in the array:\n");
//     scanf("%d", &n);
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) 
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter position to delete the item in the array:\n");
//     scanf("%d", &pos);

//     if (pos < 0 || pos >= n) 
//     {
//         printf("Invalid position.\n");
//         return 1;
//     }
//     if (pos == 0) 
//     {
//         deleteAtBeginning(arr, &n);
//     } else if (pos == n - 1) {
//         deleteAtEnd(arr, &n);
//     } else 
//     {
//         deleteAtPosition(arr, pos, &n);
//     }
//     printf("The final array after deletion is:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// linear search in array
// #include <stdio.h>
// int main() 
// {
//     int n, arr[100], item, pos = -1;
//     printf("Enter number of elements in the array:\n");
//     scanf("%d", &n);
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) 
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the item to search in the array:\n");
//     scanf("%d", &item);
//     for (int i = 0; i < n; i++) 
//     {
//         if (arr[i] == item) 
//         {
//             pos = i;
//             break;
//         }
//     }
//     if (pos == -1) 
//     {
//         printf("Item not found in the array.\n");
//     } 
//     else 
//     {
//         printf("Item found at position %d.\n", pos + 1);
//     }
//     return 0;
// }
// binary searach in array
#include <stdio.h>
int main() 
{
    int n, arr[100], item, pos = -1;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to search in the array:\n");
    scanf("%d", &item);
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (arr[mid] == item) 
        {
            pos = mid;
            break;
        } 
        else if (arr[mid] < item) 
        {
            
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }
    if (pos == -1) 
    {
        printf("Item not found in the array.\n");
    } 
    else 
    {
        printf("Item found at position %d.\n", pos + 1);
    }
    return 0;
}

