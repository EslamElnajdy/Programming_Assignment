/**
 write a C code to represent the following : 
 1- reading matrix of 10x10 integer elements - 
 2- storing them in 2-D array -    
 3- finding the maximum of the 5th row , and minimum of 10th column .. 
 4- finding the transpose of the matrix  - 
 5- finding the average of each row.
 */
 
#include <stdio.h>  
#include <limits.h>  
#define SIZE 10
void printArray(int arr[][SIZE], int size);

int main()  
{  
    int size = SIZE;
    int arr[size][size];  
    int max = INT_MIN;  /*     min int = (2)^31    => -2147483648   */  
    int min = INT_MAX;  /*     max int = (2)^31-1  => 2147483647    */
    int transpose_arr[size][size];  
    double row_sum;  

    for (int i = 0; i < size; i++) {  
        for (int j = 0; j < size; j++) {
            // we can enable the user to enter the items by enable the next two rows
            //printf("row:%d, col: %d = ", i, j);  
            //scanf("%d", &arr[i][j]); 
            // or enter them dynamic
            arr[i][j] = i + j;
        }  
    }  

    printArray(arr, size);

    // Maximum value for the 5th row  
    for (int i = 0; i < size; i++) {  
        if (max < arr[4][i]) {  
            max = arr[4][i];  
        }  
    }  

    // Minimum value for the 10th column  
    for (int i = 0; i < size; i++) {  
        if (min > arr[i][9]) {  
            min = arr[i][9];  
        }  
    }  

    // Transpose of the matrix  
    for (int i = 0; i < size; i++) {  
        for (int j = 0; j < size; j++) {  
            transpose_arr[j][i] = arr[i][j];  
        }  
    }  

    // Average for each row  
    for (int i = 0; i < size; i++) {  
        row_sum = 0;  
        for (int j = 0; j < size; j++) {  
            row_sum += arr[i][j];  
        }  
        printf("average for row number %d = %.2f\n", i + 1, row_sum / size);  
    }  

    printf("Min 10th col: %d\nMax 5th row : %d\n", min, max);  

    return 0;  
}  

void printArray(int arr[][SIZE], int size) {
    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n******************************************************\n\n");
}
