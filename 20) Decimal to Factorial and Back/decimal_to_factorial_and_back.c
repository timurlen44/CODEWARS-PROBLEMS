#include <stdlib.h>
#include <string.h>

typedef unsigned long long ull;
typedef unsigned long ul;


char *strrev(char *str){
  ul len = strlen(str);
  char temp;
  for(size_t i = 0;i<len/2;i++){
    temp = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;
  }
  return str;
}
char *dec2FactString (ull decimal)
{
  unsigned char size = 0;
  char *dec2FactStr = (char *)calloc(50,1);
  while(decimal>0){
    if(decimal%(size+1) >9){
      dec2FactStr[size] = (char)((decimal%(size+1))+55);
    }
    else{
      dec2FactStr[size] = (char)((decimal%(size+1))+48);
    }

    size++;
    decimal /= size;
  }
	return strrev(dec2FactStr);
}


ul n_factorial(size_t n){
  ull fact = 1;
  while(n>1){
    fact *= n;
    n--;
  }
  return fact;

}

ull factString2Dec (const char *factorial)
{
  ull ret = 0;
  ul len =  strlen(factorial);
  for(ul i = 0;i<len;i++){
    if(factorial[i]>64){
      ret += n_factorial(len-i-1)*(factorial[i]-55);
    }
    else{
      ret += n_factorial(len-i-1)*(factorial[i]-48);
    }

  }

	return ret;
}

int main(){
    printf("ret = %s\n",dec2FactString(36288000));
    printf("ret = %lld\n",factString2Dec("4041000"));
    return 0;
}
