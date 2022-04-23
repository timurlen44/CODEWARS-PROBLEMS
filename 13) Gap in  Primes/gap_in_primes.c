#include<stdlib.h>
#include<stdbool.h>

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
long long* gap(int g, long long m, long long n) {
  long long * ret_pair = (long long*) calloc(2,sizeof(long long));
  if( g<2 || m <=2 || n < m){
    return ret_pair;
  }

  bool any_prime_between_two_primes;
  for(;m<=n;m++){
    if(isPrime(m)){
      any_prime_between_two_primes = false;
      for(int i = m+1;i<m+g;i++){
        if(isPrime(i)){
          any_prime_between_two_primes = true;
          break;
        }
      }

      if(isPrime(m+g) && any_prime_between_two_primes == false){
        ret_pair[0] = m;
        ret_pair[1] = m+g;
        break;
      }
    }

  }

  return ret_pair;
}
int main(){


    return 0;
}
