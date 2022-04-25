#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>
#include<stdlib.h>
typedef unsigned long long ull;

unsigned long long* productFib(ull prod) {
  ull *fib_arr = (ull *) malloc(sizeof(ull)*3);
  fib_arr[0] = 0, fib_arr[1] = 1;

  while(fib_arr[2] < prod){
    fib_arr[2] = fib_arr[1];
    fib_arr[1] += fib_arr[0];
    fib_arr[0] = fib_arr[2];
    fib_arr[2] = fib_arr[0]*fib_arr[1];
  }
  if(fib_arr[2]> prod)
    fib_arr[2] = 0;
  else
    fib_arr[2] = 1;

  return fib_arr;

}

int main()
{
    ;
    printf("{%lld,%lld,%lld}\n",*(productFib(4895)),*(productFib(4895)+1),*(productFib(4895)+2));

    return 0;
}

