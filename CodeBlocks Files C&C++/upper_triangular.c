//Q. Print upper triangular matrix of a square matix

#include <stdio.h>
int main() {
int n;
printf("Enter the size of the square matrix: ");
scanf("%d", &n);

int arr[50][50]; // you can adjust size as needed

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

// Display the upper triangular matrix
printf("\nUpper Triangular Matrix:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (i <= j)

printf("%d\t", arr[i][j]); // print upper triangle and diagonal
else
printf("0\t"); // replace lower part with 0
}
printf("\n");
}

return 0;
}
