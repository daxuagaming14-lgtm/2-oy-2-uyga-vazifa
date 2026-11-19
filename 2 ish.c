#include <stdio.h>



  int sumEven(int arr[],int size){
      int s=0;
      for (int i=0;i<size;i++){
          if(arr[i]%2==0){
              s+=arr[i];
              
              
      } 
  } return s;
  }
int main() {
    int nums[5]={1,2,4,5,6};
    int size=sizeof(nums)/sizeof(nums[0]);

    printf("%d",sumEven(nums,size));


    return 0;
}