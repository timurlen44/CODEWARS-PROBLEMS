#include <stdbool.h>
#include <stdio.h>
//https://www.codewars.com/kata/56b22765e1007b79f2000079/train/c
long long unsigned llu_pow(long long unsigned x,unsigned int y){
  long long unsigned result = 1;
  while(y){
    result *= x;
    y--;
  }
  return result;
}

unsigned int find_the_number_of_digits(long long unsigned x){
  int number_of_digits = 0;
  while(1){
    if( x != 0){
      x = x/10 ;
      number_of_digits++;
    }
    else{
      return number_of_digits;
    }
  }
}
bool is_narcissistic(long long unsigned x)
{
  int digit_num = find_the_number_of_digits(x);
  long long unsigned result = 0;
  long long unsigned temp_x = x;
  while(1){
    result += llu_pow(temp_x%10,digit_num);
    temp_x /= 10;
    if(temp_x == 0){
        break;
    }
  }
  if(result == x){
    return true;
  }
  return false;
}

int main(void){
    printf("%d",is_narcissistic(153));
}
