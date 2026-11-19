#include <stdio.h>


int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",i);
    } 
}

int main() {
    int nums[5]={1,2,4,5,6};
    int size=sizeof(nums)/sizeof(nums[0]);

    printf("%d",printArray(nums,size));
    return 0;
}