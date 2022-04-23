#include <stdlib.h>

//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n) {

  if( n == 0){
    return NULL;
  }


  long long *ret_arr = (long long *) malloc(sizeof(long long)*(n+3));
    ret_arr[0] = signature[0];
    ret_arr[1] = signature[1];
    ret_arr[2] = signature[2];
    for(size_t i = 3;i<n+3;i++){
      ret_arr[i] = ret_arr[i-1] + ret_arr[i-2] + ret_arr[i-3];
    }

    return ret_arr;

    //  <----  inizio!

}
int main(){


    return;
}
