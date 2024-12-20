#include <stdio.h> 
int main()  
{    
    int n; 
    printf("Enter the size of the array:"); 
    scanf("%d",&n); 
    int arr[n]; 
     
    printf("Enter the %d values to store it in array: \n", n); 
    for(int i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
    } 
    printf("The values stored in the array are: \n");     
    for(int i=0;i<n;i++) 
    { 
        printf("%d \n",arr[i]); 
    } 
 
}
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
// Function to verify if a vehicle registration number is valid 
bool verifyRegistration(char registration[])  
{ 
// Check if the registration number has exactly 10 characters 
if (strlen(registration) != 10)  
{ 
return false; 
} 
// Check if the first two characters are alphabets (e.g., "KA" for Karnataka) 
for (int i = 0; i < 2; i++)  
{ 
} 
if (!isalpha(registration[i]))  
{ 
return false; 
} 
// Check if the next two characters are numbers (e.g., "09" for a specific district) 
for (int i = 2; i < 4; i++)  
{ 
} 
if (!isdigit(registration[i]))  
{ 
return false; 
} 
// Check if the next two characters are alphabets (e.g., "MN" for serial number) 
for (int i = 4; i < 6; i++)
    { 
        if (!isalpha(registration[i]))  
        { 
            return false; 
        } 
    } 
 
    // Check if the penultimate two characters are numbers (e.g., "3865" for vehicle number) 
    for (int i = 6; i < 10; i++)  
    { 
        if (!isdigit(registration[i]))  
        { 
            return false; 
        } 
    } 
 
    return true; 
} 
 
int main() { 
    char registration[11];  
    printf("Enter a vehicle registration number: "); 
    scanf("%s", registration); 
 
    if (verifyRegistration(registration))  
    { 
        printf("Accept: Vehicle registration number is valid.\n"); 
    }  
    else  
    { 
        printf("Reject: Vehicle registration number is invalid.\n"); 
    } 
 
    return 0; 
}
#include <stdio.h> 
int main() { 
int m, n, p, q; 
printf("Enter the number of rows and columns of the first matrix: "); 
scanf("%d %d", &m, &n); 
printf("Enter the number of rows and columns of the second matrix: "); 
scanf("%d %d", &p, &q); 
if (n != p) { 
printf("Matrix multiplication is not possible. Column of the first matrix must be equal to 
the row of the second matrix.\n"); 
return 1; 
} 
int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q]; 
printf("Enter elements of the first matrix:\n"); 
for (int i = 0; i < m; i++) { 
for (int j = 0; j < n; j++) { 
scanf("%d", &firstMatrix[i][j]); 
} 
} 
printf("Enter elements of the second matrix:\n"); 
for (int i = 0; i < p; i++) { 
for (int j = 0; j < q; j++) { 
scanf("%d", &secondMatrix[i][j]); 
} 
} 
// Matrix multiplication 
for (int i = 0; i < m; i++) { 
for (int j = 0; j < q; j++) { 
resultMatrix[i][j] = 0; 
for (int k = 0; k < n; k++) { 
resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j]; 
} 
} 
} 
printf("Resultant matrix after multiplication:\n"); 
for (int i = 0; i < m; i++) { 
for (int j = 0; j < q; j++) { 
printf("%d ", resultMatrix[i][j]); 
} 
printf("\n"); 
} 
return 0; 
} 
#include <stdio.h> 
int isValidSudoku(int board[9][9]) { 
// Check rows 
for (int i = 0; i < 9; i++) { 
int row[10] = {0}; 
for (int j = 0; j < 9; j++) { 
if (board[i][j] != 0 && row[board[i][j]] == 1) { 
return 0; // Invalid Sudoku 
} 
row[board[i][j]] = 1; 
} 
} 
// Check columns 
for (int j = 0; j < 9; j++) { 
int col[10] = {0}; 
for (int i = 0; i < 9; i++) { 
if (board[i][j] != 0 && col[board[i][j]] == 1) { 
return 0; // Invalid Sudoku 
}
 col[board[i][j]] = 1; 
        } 
    } 
 
    // Check 3x3 subgrids 
    for (int block = 0; block < 9; block++) { 
        int subgrid[10] = {0}; 
        for (int i = block / 3 * 3; i < block / 3 * 3 + 3; i++) { 
            for (int j = block % 3 * 3; j < block % 3 * 3 + 3; j++) { 
                if (board[i][j] != 0 && subgrid[board[i][j]] == 1) { 
                    return 0; // Invalid Sudoku 
                } 
                subgrid[board[i][j]] = 1; 
            } 
        } 
    } 
 
    return 1; // Valid Sudoku 
} 
 
int main() { 
    int sudoku[9][9] = { 
        {5, 3, 0, 0, 7, 0, 0, 0, 0}, 
        {6, 0, 0, 1, 9, 5, 0, 0, 0}, 
        {0, 9, 8, 0, 0, 0, 0, 6, 0}, 
        {8, 0, 0, 0, 6, 0, 0, 0, 3}, 
        {4, 0, 0, 8, 0, 3, 0, 0, 1}, 
        {7, 0, 0, 0, 2, 0, 0, 0, 6}, 
        {0, 6, 0, 0, 0, 0, 2, 8, 0}, 
        {0, 0, 0, 4, 1, 9, 0, 0, 5}, 
        {0, 0, 0, 0, 8, 0, 0, 7, 9} 
    }; 
 
    if (isValidSudoku(sudoku)) { 
        printf("Valid Sudoku\n"); 
    } else { 
        printf("Invalid Sudoku\n"); 
    } 
 
    return 0; 
}
