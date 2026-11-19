#include <stdio.h>



  int multiplyArray(int arr[],int size){
      for (int i=0;i<size;i++){
          arr[i]=arr[i]*2;
              printf("%d\n",arr[i]);    
      } 
  } 
  
int main() {
    int nums[]={9,6,7,5};
    int size=sizeof(nums)/sizeof(nums[0]);

    multiplyArray(nums,size);


    return 0;
}