#include <stdio.h>
#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count);
unsigned binary_array_to_numbers(const unsigned *bits, size_t count){
    unsigned ret = 0;
    for(size_t i = count-1;i>0;i--){
        ret |= bits[i]<<(count-1-i);
    }
    ret |= bits[0]<<(count-1);
    return ret;
}

int main()
{
    unsigned bits[] = { 0,0,0,1 };
    unsigned received = binary_array_to_numbers(bits, sizeof(bits)/sizeof(bits[0]));
    printf("ret = %u",received);
    return 0;
}

