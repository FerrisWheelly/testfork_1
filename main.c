#include <stdio.h>
int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
int n,m,i;
int arr1:
for(i=1;i<n;i++)
  scanf(%d,m);
  arr1[i]=m;
binary_search(arr1,)
}
