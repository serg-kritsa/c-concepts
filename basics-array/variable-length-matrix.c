#include <stdio.h>

int sum2d(int rows, int cols, int arr[rows][cols]) {
    int r, c, tot = 0;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            tot += arr[r][c];
        }
    }
    return tot;
}

int main( ) {
    size_t rows = 0;
    size_t columns = 0;

    printf("Enter row number to store: ");
    scanf("%zd", &rows);
    printf("Enter column number to store: ");
    scanf("%zd", &columns);

    float matrix[rows][columns];
    // printf("=%d ", );
    // printf("\t");
    // printf("\n");

    return 0;
}