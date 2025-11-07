#include <stdio.h>
// Function declarations
void createArray(int arr[], int *size);
void printArray(int arr[], int size);
void insertElement(int arr[], int *size);
void deleteElement(int arr[], int *size);

int main() {
int arr[100]; // maximum array size
int size = 0, choice;

// Create array
createArray(arr, &size);

do {
// Menu
printf("\nMenu:\n");
printf("1. Print Array\n");
printf("2. Insert Element\n");
printf("3. Delete Element\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice) {
case 1:
printArray(arr, size);
break;
case 2:
insertElement(arr, &size);
break;

case 3:
deleteElement(arr, &size);
break;
case 4:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Try again.\n");
}

} while(choice != 4);

return 0;
}

// Function to create array
void createArray(int arr[], int *size) {
int i;
printf("Enter number of elements: ");
scanf("%d", size);

printf("Enter %d elements:\n", *size);
for(i = 0; i < *size; i++) {
printf("Element %d: ", i + 1);
scanf("%d", &arr[i]);
}
}

// Function to print array
void printArray(int arr[], int size) {
int i;
printf("Array elements: ");

for(i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}

// Function to insert element
void insertElement(int arr[], int *size) {
int pos, value, i;

if(*size >= 100) {
printf("Array is full. Cannot insert.\n");
return;
}

printf("Enter position to insert (1 to %d): ", *size + 1);
scanf("%d", &pos);

if(pos < 1 || pos > *size + 1) {
printf("Invalid position.\n");
return;
}

printf("Enter value to insert: ");
scanf("%d", &value);

for(i = *size; i >= pos; i--) {
arr[i] = arr[i - 1];
}
arr[pos - 1] = value;
(*size)++;

printf("Element inserted successfully.\n");
}

// Function to delete element
void deleteElement(int arr[], int *size) {
int pos, i;

if(*size == 0) {
printf("Array is empty. Cannot delete.\n");
return;
}

printf("Enter position to delete (1 to %d): ", *size);
scanf("%d", &pos);

if(pos < 1 || pos > *size) {
printf("Invalid position.\n");
return;
}

for(i = pos - 1; i < *size - 1; i++) {
arr[i] = arr[i + 1];
}
(*size)--;

printf("Element deleted successfully.\n");
}
