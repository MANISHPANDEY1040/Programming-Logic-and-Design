#include<stdio.h>
int main(){
    int arr[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int num = 21;  
    int found = 0;  // Flag to indicate if the element is found

    // Linear search
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            found = 1;  // Set the flag to 1 if the element is found
            break;
        }
    }

    if(found){
        printf("Element searched and found");
    } else {
        printf("Element not found");
    }

    return 0;
}