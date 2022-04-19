//solution must allocate all required memory
//and return a free-able buffer to the caller.


#include <stdio.h>
#include <stdlib.h>
char *disemvowel(const char *str)
{
    int size = strlen(str);
    char *new_str = (char *)malloc(sizeof(char)*size);
    int different = 0;
    for(int i = 0;i<=size;i++){
        putchar(str[i]);
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')){
            different++;
            continue;
        }

        new_str[i-different] = str[i];
    }

    return new_str;
}

int main() {
    char *str = disemvowel("This website is for losers LOL!");
    puts(str);
    free(str);
}
