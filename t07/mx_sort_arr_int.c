#include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
int tmp = 0;
for(int i = 0;i  < size;i++){
   for(int k = 0; k < size - 1;k++){
   if( arr[k] > arr[k+1]){
    tmp = arr[k];
    arr[k] = arr[k + 1];
     arr[k + 1] = tmp;
}
}
}
}
