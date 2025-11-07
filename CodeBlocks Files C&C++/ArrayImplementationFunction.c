#include <stdio.h>
// Function declarations
void createArray(int arr[], int size);
void printArray(int arr[], int size);
void reverseArray(int arr[], int size);
int sumArray(int arr[], int size);
void findAndReplace(int arr[], int size, int oldVal, int newVal);
int findMin(int arr[], int size);
int findMax(int arr[], int size);

int main() {
int arr[100], size, choice;
int oldVal, newVal;
printf("Enter the number of elements in the array: ");
scanf("%d", &size);
createArray(arr, size);
do {
printf("\nMenu:\n");
printf("1. Print Array\n");
printf("2. Reverse Array\n");
printf("3. Sum of Elements\n");
printf("4. Find and Replace Element\n");
printf("5. Find Minimum\n");
printf("6. Find Maximum\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printArray(arr, size);
break;
case 2:
reverseArray(arr, size);
printf("Array reversed successfully.\n");
//printArray(arr, size);
break;
case 3:
printf("Sum of array elements = %d\n", sumArray(arr, size));
break;
case 4:
printf("Enter element to find: ");

scanf("%d", &oldVal);
printf("Enter new value to replace with: ");
scanf("%d", &newVal);
findAndReplace(arr, size, oldVal, newVal);
break;
case 5:
printf("Minimum element = %d\n", findMin(arr, size));
break;
case 6:
printf("Maximum element = %d\n", findMax(arr, size));
break;
case 7:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Try again.\n");
}
} while(choice != 7);
return 0;
}
// Function to create array
void createArray(int arr[], int size) {
printf("Enter %d elements:\n", size);
for(int i = 0; i < size; i++) {
printf("Element %d: ", i+1);
scanf("%d", &arr[i]);
}
}
// Function to print array
void printArray(int arr[], int size) {
printf("Array elements: ");
for(int i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}
// Function to reverse array
void reverseArray(int arr[], int size) {
int i;
printf("reverse of the array is :");
for(i=size-1;i>=0;i--)
{
printf("%d ,",arr[i]);
}
/*int temp;

for(int i = 0; i < size / 2; i++) {
temp = arr[i];
arr[i] = arr[size - 1 - i];
arr[size - 1 - i] = temp;
}*/
}
// Function to sum array elements
int sumArray(int arr[], int size) {
int sum = 0;
for(int i = 0; i < size; i++)
sum += arr[i];
return sum;
}
// Function to find and replace element
void findAndReplace(int arr[], int size, int oldVal, int newVal) {
int found = 0;
for(int i = 0; i < size; i++) {
if(arr[i] == oldVal) {
arr[i] = newVal;
found = 1;
}
}
if(found)
printf("Element replaced successfully.\n");
else
printf("Element not found in array.\n");
}
// Function to find minimum element
int findMin(int arr[], int size) {
int min = arr[0];
for(int i = 1; i < size; i++) {
if(arr[i] < min)
min = arr[i];
}
return min;
}
// Function to find maximum element
int findMax(int arr[], int size) {
int max = arr[0];
for(int i = 1; i < size; i++) {
if(arr[i] > max)
max = arr[i];
}
return max;

}
