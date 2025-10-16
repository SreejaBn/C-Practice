# include <stdio.h>

int fibonacci (int n){
    if (n<=0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fibonacci (n-1) + fibonacci (n-2);
    }
}

int main (){
    int c, r;
    printf ("\nThis code finds the fibonacci number for you.\n");
    printf ("Enter the number: ");
    scanf ("%d", &c);

    printf ("The series are: \n");
    for (int i =0 ; i<c; i++){
        printf ("%d\t", fibonacci (i));
    }
    printf ("\n");

    
    return 0;

}
