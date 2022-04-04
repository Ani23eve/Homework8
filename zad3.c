#include <stdio.h>

int binarySearch(int* array, size_t n, int key);


int main(){
     
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearch(array, n - 1, x);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d\n", result);
  

    return 0;
}

int binarySearch(int* array, size_t n, int key){
    int lo=0;
    int high=n;
    while(1){
        int mid=(lo+high)/2;
        if(array[mid]==key){
            return mid;
        }
        if(array[mid]<key){
            return lo=mid+1;
        }
        else{
            return high=mid-1;
        }
    }
}
