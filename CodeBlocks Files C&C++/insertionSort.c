#include <stdio.h>
void insertionSort(int arr[], int size) {
int i, j, key;
for (i = 1; i < size; i++) {
    key = arr[i]; // Current element to be inserted
    j = i - 1;
while (j >= 0 && arr[j] > key) {
    arr[j + 1] = arr[j]; // Move element to the right
    j--;
}
arr[j + 1] = key;
}
}

void displayArray(int arr[], int size) {
int i;
for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
}
    printf("\n");
}

int main() {
int arr[100], size, i;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);
if (size <= 0 || size > 100) {
    printf("Invalid size.\n");
return 1;
}
    printf("Enter %d elements:\n", size);
for (i = 0; i < size; i++) {

    scanf("%d", &arr[i]);
}

insertionSort(arr, size);
printf("Sorted array in ascending order:\n");
displayArray(arr, size);

return 0;
}
