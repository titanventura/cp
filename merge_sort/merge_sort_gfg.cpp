/*
Merge Sort is a Divide and Conquer algorithm. It repeatedly divides the array into two halves and combines them in sorted manner. 

Given an array arr[], its starting position l and its ending position r. Merge Sort is achieved using the following algorithm. 

MergeSort(arr[], l,  r)
    If r > l
         1. Find the middle point to divide 
            the array into two halves:  
                 middle m = (l+r)/2
         2. Call mergeSort for first half:   
                 Call mergeSort(arr, l, m)
         3. Call mergeSort for second half:
                 Call mergeSort(arr, m+1, r)
         4. Merge the two halves sorted in 
            step 2 and 3:
                 Call merge(arr, l, m, r)
Implement the merge() function used in MergeSort().


Example 1:

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 10
arr[] = {10 9 8 7 6 5 4 3 2 1}
Output:
1 2 3 4 5 6 7 8 9 10

Your Task:
You don't need to take the input or print anything. Your task is to complete the function merge() which takes arr[], l, m, r as its input parameters and modifies arr[] in-place such that it is sorted from position l to position r. 
Assume that the range [l,m] and [m+1,r] are already sorted.


Expected Auxiliary Space: O(n)
Expected Time Complexity: O(n) for the merge() function only.


*/

void merge(int arr[], int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1];
  int R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  int i = 0;
  int j = 0;
  int cur = l;
  while (i < n1 && j < n2)
  {
    if (L[i] < R[j])
    {
      arr[cur++] = L[i++];
    }
    else
    {
      arr[cur++] = R[j++];
    }
  }

  if (i < n1)
  {
    while (i != n1)
    {
      arr[cur++] = L[i++];
    }
  }
  else if (j < n2)
  {
    while (j != n2)
    {
      arr[cur++] = R[j++];
    }
  }
}