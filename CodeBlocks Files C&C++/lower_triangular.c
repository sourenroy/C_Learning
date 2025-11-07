//Q. Print Lower triangular matrix of a square matix

#include <stdio.h>
int main() {
int n;
printf("Enter the size of the square matrix: ");
scanf("%d", &n);

int arr[50][50]; // You can change size as needed

// Input elements of the matrix
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
scanf("%d", &arr[i][j]);
}
}

// Display the original matrix (optional)
printf("\nThe matrix is:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
printf("%d\t", arr[i][j]);
}
printf("\n");
}

// Display the lower triangular matrix
printf("\nLower Triangular Matrix:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {

if (i >= j)
printf("%d\t", arr[i][j]); // Keep lower elements
else
printf("0\t"); // Replace upper elements with 0
}
printf("\n");
}

return 0;
}
