#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://www.codewars.com/kata/56a5d994ac971f1ac500003e/train/c
char *longestConsec (const char *const strings[/*arr_len*/], int arr_len, int k)
{
    if(arr_len == 0 || k>arr_len || k<=0){
        return NULL;
    }

    int index = 0;
    int max = -1;
    int temp = 0;
    for(int i=0;i<arr_len-k;i++){
        temp = strlen(strings[i]);
        for(int i2 = 1;i2<k;i2++){
            temp += strlen(strings[i+i2]);
        }
        if(temp > max){
            index = i;
            max = temp;
        }
    }
    char *concatenated_strings = (char *)calloc(max,sizeof(char));
    strcpy(concatenated_strings,strings[index]);
    for(int i = 1;i<k;i++){
        strcat(concatenated_strings,strings[i+index]);
    }
    return concatenated_strings;
}

int main(){
    const char *const strings[6] ={"tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"};
    char *concatenated_strings = longestConsec(strings,6,2);
    printf("%s\n",concatenated_strings);
    free(concatenated_strings);
    return 0;
}
