#include <stdio.h>
void createArray(int arr[], int size) {
int i;
    printf("Enter %d sorted elements (ascending order):\n", size);
for(i = 0; i < size; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
}
}

void displayArray(int arr[], int size) {
int i;
    printf("Array elements: ");
for(i = 0; i < size; i++) {
    printf("%d ", arr[i]);
}
    printf("\n");
}

int binarySearch(int arr[], int size, int key) {
int low = 0, high = size - 1, mid;
while(low <= high) {
mid = (low + high) / 2;
if(arr[mid] == key)
return mid;

else if(arr[mid] < key)
    low = mid + 1;
else
    high = mid - 1;
}
return -1; // Element not found
}

int main() {
int arr[100], size, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
createArray(arr, size);
displayArray(arr, size);
    printf("Enter the element to search using binary search: ");
    scanf("%d", &key);
result = binarySearch(arr, size, key);
if(result == -1)
    printf("Element %d not found in the array.\n", key);
else
    printf("Element %d found at position %d (index %d).\n", key, result + 1, result);
return 0;
}
