# include <stdio.h>
int main (){
    int a, n;
    printf ("What is your age? ");
    scanf ("%d", &a);
    if (a <18){
        printf ("U r not an adult yet.\n");
        if (a<=10){
            printf ("You are just a kid.\n");
        }
    }
    else{
        printf ("You are an adult.");
    }

    return 0;
}
