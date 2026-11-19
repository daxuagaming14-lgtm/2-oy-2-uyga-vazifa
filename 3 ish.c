#include <stdio.h>



  int sumOdd(int arr[],int size){
      int s=0;
      for (int i=0;i<size;i++){
          if(arr[i]%2==1){
              s+=arr[i];
              
              
      } 
  } return s;
  }
int main() {
    int nums[5]={1,2,3,5,7};
    int size=sizeof(nums)/sizeof(nums[0]);

    printf("%d",sumOdd(nums,size));


    return 0;
}