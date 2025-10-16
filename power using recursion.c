# include <stdio.h>
long power(int base, int exp){
    if (exp != 0){
        return (base * power (base, exp-1));
    }
    else{
        return 1;
    }
}

int main (){
    int base, exp, result;

    printf ("Enter the base: ");
    scanf ("%d", &base);

    printf ("Enter the exponent: ");
    scanf ("%d", &exp);

    result = power (base, exp);

    printf ("The result is: %d", result);
    
    return 0;
}
