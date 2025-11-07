#include<stdio.h>
int linearSearch(int arr[], int size, int key) {
int i;
for(i = 0; i < size; i++) {
if(arr[i] == key) {
return i; // Return the index if found
}
}
return -1; // Return -1 if not found
}

int main() {
int arr[100], size, i, key, result;

// Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

// Input array elements
    printf("Enter %d elements:\n", size);
for(i = 0; i < size; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
}
printf(" The array elements are: ");
for(i = 0; i < size; i++) {
    printf(" %d, ",arr[i]);

}
// Input element to search
    printf("\nEnter the element to search: ");

    scanf("%d", &key);

// Call search function
result = linearSearch(arr, size, key);

// Display result
if(result == -1) {
    printf("Element %d not found in the array.\n", key);
} else {
    printf("Element %d found at position %d (index %d).\n", key, result + 1, result);
}

return 0;
}
