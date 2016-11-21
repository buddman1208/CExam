#include<stdio.h>
#define n 5
int main(void){
        int arr[5] = {23,345,3,457,234};

        for(int i=0;i<n;i++){
                printf("%d ", arr[i]);
        }
        printf("\n");
        for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1-i;j++){
                        if(arr[j]>arr[j+1]){
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }

        }
        for(int i=0;i<n;i++){
                printf("%d " ,arr[i] );
        }
        printf("\n");
}               
