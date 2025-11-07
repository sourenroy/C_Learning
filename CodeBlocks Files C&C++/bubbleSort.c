#include <stdio.h>
void bubbleSort(int arr[], int size)
{
int i, j, temp;
for (i = 0; i < size - 1; i++)
{ for (j = 0; j < size - i - 1; j++)
{ if (arr[j] > arr[j + 1])
{ temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}

void displayArray(int arr[], int size) {
int i;
for (i = 0; i < size; i++)
{
    printf("%d ", arr[i]);
}
    printf("\n");
}

int main()
{
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

bubbleSort(arr, size);
printf("Sorted array in ascending order:\n");
displayArray(arr, size);
return 0;
}
