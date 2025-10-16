# include <stdio.h>
int main (){
    printf ("This program is to add two different matrices: \n");

    int cols, rows;

    printf ("Enter the number of rows for the first matrix: \n");
    scanf ("%d", &rows);
    printf ("Enter the number of columns for the first matrix: ");
    scanf ("%d", &cols);

    int m1[rows][cols], m2[rows][cols], sum[rows][cols];
    
    printf ("Enter the elements of first matrix: ");
    for (int i= 0; i<rows; i++){
        for (int j =0; j<cols; j++){
            printf ("Element [%d][%d]", i,j);
            scanf ("%d", &m1[i][j]);
        }
    }

    printf ("Enter the elements of second matrix: ");
    for (int i= 0; i<rows; i++){
        for (int j =0; j<cols; j++){
            printf ("Element [%d][%d]", i,j);
            scanf ("%d", &m2[i][j]);
        }
    }

    // adding:
    for (int i= 0; i<rows; i++){
        for (int j =0; j<cols; j++){
            sum[i][j]= m1[i][j] + m2[i][j];
        }
    }

    printf ("The result matrix is: \n");
    for (int i =0; i<rows; i++){
        for (int j =0; j<cols; j++){
            printf ("%d\t", sum[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
