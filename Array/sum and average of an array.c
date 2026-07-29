#include <stdio.h>

//function to read an array
void read_array(int arr[], int n){
    for (int i= 0; i<n; i++){
        printf("Enter the %d element:", i+1);
        scanf("%d", &arr[i]);
    }
}

//function to print an array
void print_array(int arr[], int n){
    printf("\nThe array elements are:\n");
    for (int i=0; i<n; i++){
        printf("%d    ",arr[i]);
    }
}

//function for sum of all the elements of an array
int sum_array(int arr[], int n){
    int sum= 0;
    for (int i=0; i<n; i++){
        sum= sum+ arr[i];
    }
    return sum;
}

//function for average of all the elements of an array
float average(int arr[], int n){
    int sum= sum_array(arr, n);
    return (float)sum/n;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);
    print_array(arr, n);
    printf("\nThe average of the array elements is: %.2f\n", average(arr, n));
    printf("\nThe sum of the array elements is: %d\n", sum_array(arr, n));
    

    return 0;
}
