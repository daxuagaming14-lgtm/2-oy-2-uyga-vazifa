#include <stdio.h>



  int countGreater(int arr[],int size, int x){
      for (int i=0;i<size;i++){
          if(arr[i]>x){
              printf("%d\n",arr[i]);    
      } 
  } 
  }
int main() {
    int nums[]={9,6};
    int x;
    int size=sizeof(nums)/sizeof(nums[0]);
    printf("Son kiriting: ");
    scanf("%d",&x);
    

    countGreater(nums,size,x);


    return 0;
}