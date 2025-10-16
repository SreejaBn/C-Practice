# include <stdio.h>

int main (){
    int n, a=0, b=1, c;

    printf ("This code will find the fibonacci number for you.\n");
    printf ("Enter the number: ");
    scanf ("%d", &n);

    if (n<=0){
        printf ("The result is : 0");
        return 0;
    }
    else if (n==1){
        printf ("The result is %d", n);
        return 0;
    }
    else{
        printf ("The result is: \n");

        for (int i=0; i<n; i++){
            printf ("%d\t",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;

}
