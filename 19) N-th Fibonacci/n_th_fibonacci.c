typedef unsigned long long ull;

ull nth_fib(int n) {
  ull f1 = 0;
  ull f2 = 1;
  while(--n){
      f2 = f2 + f1;
      f1 = f2 - f1;
  }
  return f1;
}

int main(){

    return 0;
}
