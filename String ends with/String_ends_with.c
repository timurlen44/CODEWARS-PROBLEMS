#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{

    int size_ending = strlen(ending);
    if(size_ending == 0){
        return true;
    }
    int size_string = strlen(string);
    int sub = size_string - size_ending;
    if(size_string>size_ending){
        for(int i = size_string-1;i>0;i--){
            if(string[i] != ending[i-sub]){
                return false;
            }
        }
        return true;
    }
    return false;
}
int main(){
    printf("%s\n",solution("abc","bc")?"true":"false");
    puts("-------------------");
    printf("%s\n",solution("abc","d")?"true":"false");
    puts("-------------------");
    printf("%s\n",solution("abc","")?"true":"false");

    puts("-------------------");
    printf("%s\n",solution("abaaa","a")?"true":"false");


    return 0;
}

