#include <stdio.h>
int solution(int number) {
    if(number <= 0){
      return 0;
    }
    int sum = 0;
    for(int i = 3;i<number;i++){
      if(i%3 == 0){
        sum += i;
      }
      else if(i%5 == 0){
        sum += i;
      }
    }

    return sum;
}

int main(){
    printf("sum = %d\n",solution(10));
    return 0;
}
