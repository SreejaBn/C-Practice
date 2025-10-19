# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main (){
    int choice, num;
    num = 1+ (rand()% 3);
    srand (time(NULL));

    printf ("\nThis is a rock, paper, sissor game.\n\n");
    printf ("The options are:\n1. Rock\n2. Paper\n 3. Scissors\n\n");
    printf ("You only need to enter the number of the option you want to choose.\n");
    do{
        printf ("Enter your choice: ");
        scanf ("%d", &choice);
        if (num == choice){
            printf ("The computer chose: %d\n", choice);
            printf ("This round ends in a tie.\n");
        }
        else if ((choice== 1 && num== 2)||(choice== 2 && num== 3)||(choice== 3 && num== 1)){
            printf ("The computer chose: %d\n", num);
            printf ("The computer wins.\n");
        }
        else{
            printf ("The computer chose: %d\n", num);
            printf ("Congratulations!! You won!\n");
        }
        printf ("Do you want to play again?\n Types Y for yes and N for no.\n");
    }
    while (())
    return 0;
}
