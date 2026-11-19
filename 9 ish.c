#include <stdio.h>



  int countZero(int arr[],int size){
      int s=0;
      for (int i=0;i<size;i++){
          if(arr[i]==0){
              s++;
          }    
      } return s;
  } 
  
int main() {
    int nums[]={9,6,0,5};
    int size=sizeof(nums)/sizeof(nums[0]);

    
    printf("%d",countZero(nums,size));

    return 0;
}