#include<stdlib.h>
int queue_time(const int *customers, int customers_length, int n)
{
    if(customers == 0 || customers_length == 0 || n == 0){
      return 0;
    }
     int *checkout_tills = (int *) calloc(n,sizeof(int));
     printf("kasa sayisi = %d\n",n);

    int i = 0;
    int queue_index = 0;

    int ret = 0;
    while(1){
      puts("girdi");
      for(i = 0;i<n;i++){
        if(queue_index < customers_length && checkout_tills[i] <= 0){
          checkout_tills[i] = customers[queue_index];
          queue_index++;
        }
      }
      if(queue_index == customers_length){
        unsigned char check_tills = 0;
        for(i = 0;i<n;i++){
            if(checkout_tills[i]>0){
                check_tills = 1;
                break;
            }
        }
        if(check_tills == 0){
            return ret;
        }

      }
      for(i = 0;i<n;i++){
        checkout_tills[i]--;
      }
      ret++;
    }
}
int main(){
    int time = queue_time((int []){1, 2, 3, 4}, 4, 1);
    printf("time = %d",time);

    return 0;
}
