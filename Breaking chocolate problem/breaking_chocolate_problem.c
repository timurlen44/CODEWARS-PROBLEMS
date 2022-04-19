#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define __STDC_FORMAT_MACROS

uint32_t breaking_chocolate(uint32_t n, uint32_t m);

int main(void){
    printf("%"PRIu32"\n",breaking_chocolate(5,5));
    printf("%"PRIu32"\n",breaking_chocolate(1,2));
    printf("%"PRIu32"\n",breaking_chocolate(1,3));
    return 0;
}

uint32_t breaking_chocolate(uint32_t n, uint32_t m){
    if(m == 0){
        return 0;
    }
    else if(n == 0){
        return 0;
    }
    return m*n-1;
}
