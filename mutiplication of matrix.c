# include <stdio.h>
int main (){
    printf ("This program is to multiply two matrices: \n");

    int r1, r2, c1, c2;

    printf ("Enter the number of rows for 1st matrix: ");
    scanf ("%d", &r1);
    printf ("Enter the number of columns for 1st matrix: ");
    scanf ("%d", &c1);

    printf ("\nEnter the number of rows for 2nd matrix: ");
    scanf ("%d", &r2);
    printf ("Enter the number of columns for 2nd matrix: ");
    scanf ("%d", &c2);

    if (c1 != r2){
        printf ("The multiplication is not possible!!\n");
        return 0;
    }

    int m1[r1][c1], m2[r2][c2], p[r1][c2];

    // First matrix:
    printf ("Enter the elements of first matrix: \n");
    for (int i =0; i<r1; i++){
        for (int j =0; j< c1; j++){
            printf ("Element [%d][%d]", i,j);
            scanf ("%d", &m1[i][j]);
        }
        printf ("\n");
    }

    // Second matrix:
    printf ("Enter the elements of Second matrix: \n");
    for (int i =0; i<r2; i++){
        for (int j =0; j< c2; j++){
            printf ("Element [%d][%d]", i,j);
            scanf ("%d", &m2[i][j]);
        }
        printf ("\n");
    }

    for (int i =0; i< r1; i++){
        for (int j =0; j<c2; j++){
            p[i][j] =0;
        }
    }

    // multiplication:
    for (int i =0; i<r1; i++){
        for (int j=0; j<c2; j++){
            for (int k=0; k<c1; k++){
                p[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf ("The result is:\n");
    for (int i =0; i< r1; i++){
        for (int j =0; j<c2; j++){
            printf ("%d\t", p[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
