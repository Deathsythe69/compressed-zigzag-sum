#include <stdio.h>
#include <stdlib.h>
int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int compute_zigzag_sum(int** matrix, int n) {
    int sum = 0;
    for (int d = 0; d <= 2 * (n - 1); d++)
        {
        if (d % 2 == 0) {
            int row = (d < n) ? d : n - 1;
            int col = d - row;
            while (row >= 0 && col < n)
             {
                int val = *(*(matrix + row) + col);
                sum += is_prime(val) ? -val : val;
                row--;
                col++;
            }
        }
         else
            {
            int col = (d < n) ? d : n - 1;
            int row = d - col;
            while (col >= 0 && row < n){
                int val = *(*(matrix + row) + col);
                sum += is_prime(val) ? -val : val;
                row++;
                col--;
                }
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter matrix size:: ");
    scanf("%d", &n);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(n * sizeof(int));
    printf("Enter the matrix values (%dx%d)::\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int result = compute_zigzag_sum(matrix, n);
    printf("The Final Zigzag Computed Sum: %d\n", result);
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    free(matrix);
    return 0;
}
