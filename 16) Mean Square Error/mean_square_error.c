#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {
  double res = 0;
  if(n == 0 || a == NULL || b == NULL){
    return res;
  }
  for(size_t i = 0;i<n; i++){
    res += ((double)(a[i]-b[i])*(a[i]-b[i]))/((double)n);
  }
    return res;
}

int main(){

    return 0;
}
