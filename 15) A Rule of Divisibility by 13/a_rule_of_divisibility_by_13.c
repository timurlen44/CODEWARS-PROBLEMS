long long digit_mod(long long num, long long pow){
  long long ret = 1;
  while(pow>=1){
    ret *= 10;
    pow--;
  }
  return ((ret%13)*num);
}

long long thirt(long long n)
{
    long long num = 0;
    long long temp_num = 0;
    long long temp_num2 = n;
    long long pow = 0;
      while(temp_num2>0){
        temp_num += digit_mod((temp_num2%10),pow);
        temp_num2 /= 10;
        pow++;
      }
      if(temp_num == n){
      	return n;
	  }
	  else{
	  	return thirt(temp_num);
	  }
}

int main(){
    long long res = thirt(1234567);
    printf("result = %lld\n",res);
}
