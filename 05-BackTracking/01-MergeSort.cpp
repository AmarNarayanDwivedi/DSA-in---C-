// Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm.

// Examples:

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: We get the sorted array after using merge sort
// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// Explanation: We get the sorted array after using merge sort 
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 105





class Solution
{
public:
    void mergeSort(vector<int> &arr, int l, int r)
    {
        if (l >= r)
            return; // base case

        int mid = l + (r - l) / 2;

        // correct order
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, r, mid);
    }

    void merge(vector<int> &arr, int l, int r, int mid)
    {
        int leftLength = mid - l + 1;
        int rightLength = r - mid;

        int *leftArr = new int[leftLength];
        int *rightArr = new int[rightLength];

        // copy left
        for (int i = 0; i < leftLength; i++)
        {
            leftArr[i] = arr[l + i];
        }

        // copy right
        for (int j = 0; j < rightLength; j++)
        {
            rightArr[j] = arr[mid + 1 + j];
        }

        // merge
        int i = 0, j = 0, k = l;
        while (i < leftLength && j < rightLength)
        {
            if (leftArr[i] <= rightArr[j])
            {
                arr[k++] = leftArr[i++];
            }
            else
            {
                arr[k++] = rightArr[j++];
            }
        }

        // remaining elements
        while (i < leftLength)
            arr[k++] = leftArr[i++];
        while (j < rightLength)
            arr[k++] = rightArr[j++];

        delete[] leftArr;
        delete[] rightArr;
    }
};
