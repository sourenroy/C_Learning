#include <stdio.h>
void selectionSort(int arr[], int size) {
int i, j, minIndex, temp;

for (i = 0; i < size - 1; i++) {
    minIndex = i;
for (j = i + 1; j < size; j++) {
if (arr[j] < arr[minIndex]) {
    minIndex = j;
}
}
if (minIndex != i) {
    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}
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
    printf("Enter the number of elements (max 100): ");

    scanf("%d", &size);
if (size <= 0 || size > 100) {
    printf("Invalid array size.\n");
return 1;
}
    printf("Enter %d elements:\n", size);
for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
}

selectionSort(arr, size);
printf("Sorted array:\n");
displayArray(arr, size);

return 0;
}
