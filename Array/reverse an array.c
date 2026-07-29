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

//function to reverse an array
void reverse(int arr[], int n){
    
    int temp;
    
    for (int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);
    print_array(arr, n);
    reverse(arr, n);
    print_array(arr, n);

    return 0;
}
