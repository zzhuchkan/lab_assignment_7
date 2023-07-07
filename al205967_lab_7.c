#include <stdio.h>

int main()
{
int arr[] = {97,16,45,63,13,22,7,58,72};
int n = 9; //size of the array

printf("\n\n");
numberofswaps(arr, n);
return 0;
}

void numberofswaps(int numbers[], int n){
    int i, j, temp, count;

    for(i = 0; i < n; i++){
        //for the entire array
        count = 0;
        for(j = 0; j < n-i-1; j++){
            if(numbers[j] > numbers[j+1]){
                //if numbers are in the wrong place swap them and count it
                temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
                count++;
            }
        }
        printf("Number of swaps needed for index %d: %d\n", n-i-1 ,count);
    }
}