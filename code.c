/**
 * write a C++ code to represent the following :
 * 1 - reading matrix of $10 \times 10$ integer elements.
 * 2 - storing them in $2-D$ array.
 * 3- finding the maximum of the 5th row, and minimum of 10 th column ..
 * 4- finding the transpose of the matrix.
 * 5 - finding the average of each row.
 */
 
#include <stdio.h>  
#include <limits.h>  

int main()  
{  
    int arr[3][3];  
    int max = INT_MIN;  
    int min = INT_MAX; /* max int = (2)^31-1*/  
    int transpose_arr[3][3];  
    int average;  

    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 3; j++) {  
            printf("row:%d, col: %d = ", i, j);  
            scanf("%d", &arr[i][j]);  
        }  
    }  

    // Maximum value for the 5th row  
    for (int i = 0; i < 3; i++) {  
        if (max < arr[1][i]) {  
            max = arr[1][i];  
        }  
    }  

    // Minimum value for the 10th column  
    for (int i = 0; i < 3; i++) {  
        if (min > arr[i][2]) {  
            min = arr[i][2];  
        }  
    }  

    // Transpose of the matrix  
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 3; j++) {  
            transpose_arr[j][i] = arr[i][j];  
        }  
    }  

    // Average for each row  
    for (int i = 0; i < 3; i++) {  
        average = 0;  
        for (int j = 0; j < 3; j++) {  
            average += arr[i][j];  
        }  
        printf("Average for row number %d = %d\n", i + 1, average / 3);  
    }  

    printf("Min: %d\nMax: %d", min, max);  

    return 0;  
}  
