#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
int low = 0, high = size - 1, mid;
while (low <= high) {
mid = (low + high) / 2;
if (arr[mid] == key)
return mid; // Found at index mid
else if (arr[mid] < key)
low = mid + 1;
else
high = mid - 1;
}
return -1; // Not found
}

int main()
{
int arr[100], size, i, key, result;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);
if (size <= 0 || size > 100) {
    printf("Invalid array size.\n");
return 1;
}
    printf("Enter %d elements in ascending order:\n", size);
for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
}
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, size, key);

if (result != -1)
    printf("Element %d found at position %d (index %d).\n", key, result + 1, result);
else
    printf("Element %d not found in the array.\n", key);
return 0;
}
