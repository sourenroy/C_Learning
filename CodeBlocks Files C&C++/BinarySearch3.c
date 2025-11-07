#include <stdio.h>
int main()
{
int arr[100], size, i, key;
int low, high, mid;
    printf("Enter the number of elements (max 100): ");

    scanf("%d", &size);
if (size <= 0 || size > 100)
{
    printf("Invalid size.\n");
return 1;
}
    printf("Enter %d elements in ascending order:\n", size);
for (i = 0; i < size; i++)
{
    scanf("%d", &arr[i]);
}
    printf("Enter element to search: ");
    scanf("%d", &key);
low = 0;
high = size - 1;
while (low <= high)
{
mid = (low + high) / 2;
if (arr[mid] == key)
{
    printf("Element %d found at position %d (index %d).\n", key, mid + 1, mid);
return 0;
}
else if (arr[mid] < key)
{
low = mid + 1;
} else {
high = mid - 1;
}
}

printf("Element %d not found in the array.\n", key);
return 0;
}
