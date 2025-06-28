#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    int PivotIndex = s;
    int PivotElement = arr[s];

    int Count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= PivotElement)
        {
            Count++;
        }
    }
    // Pivot Element ki right Position mil gai
    int rightIndex = s + Count;

    swap(arr[PivotIndex], arr[rightIndex]);
    // PivotIndex =rightIndex;

    // pivot ko uski right position me pahucha diya
    PivotIndex = rightIndex;

    // Step 3 : Left me chhote aur Right me bade hone chahiye nhi hai to swap krrna hoga
    int i = s;
    int j = e;
    while (i < PivotIndex && j > PivotIndex)
    {
        while (arr[i] <= PivotElement)
        {
            i++;
        }
        while (arr[j] > PivotElement)
        {
            j--;
        }
    }
    if (i < PivotIndex && j > PivotIndex)
    {
        swap(arr[i], arr[j]);
    }
    return PivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }
    // Partition Logic (pivot)

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);

    // Right sort
    quickSort(arr, p + 1, e);

    // Left sort
    
}

int main()
{
    int arr[] = {8,1,3,4,20,50,30};
    int n = 7;
    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
