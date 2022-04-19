//  do not allocate memory for return string
//  assign the value to the pointer "result"

//https://www.codewars.com/kata/5264d2b162488dc400000001/train/c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void spin_words(const char *sentence, char *result) {
    int end_index = 0;
    int begin_index = 0;
    int last_index = strlen(sentence)-1;
    char * chr_ptr = NULL;
    while(end_index < last_index){
        chr_ptr = strchr(sentence+end_index+1, ' ');
        if(chr_ptr == NULL){
            puts("null");
            if(last_index- begin_index+1 >=5){
                printf("last_index = %d, begin_index = %d\n",last_index,begin_index);
                for (int i = last_index;i>=begin_index;i--){
                result[last_index - i] = sentence[i];
                }
                printf("soz  = %s\n",result);
            }
            else{
                printf("last_index = %d, end_index = %d\n",last_index,end_index);
                for(int i = begin_index;i<last_index;i++){
                result[i] = sentence[i];
                }
                printf("soz  = %s\n",result);
            }
            return;
        }
        end_index = (int)(chr_ptr - sentence);
        if(end_index - begin_index + 1 >= 5){
            printf("end_index = %d, begin_index = %d\n",end_index,begin_index);
            for (int i = end_index;i>=begin_index;i--){
                result[end_index - i] = sentence[i];
            }
            printf("soz  = %s\n",result);
        }
        else{
            printf("begin_index = %d, end_index = %d\n",begin_index,end_index);
            for(int i = begin_index;i<end_index;i++){
                result[i] = sentence[i];
            }
            printf("soz  = %s\n",result);
        }

        begin_index = end_index+1;

    }
    return;

}
int main(){
    char sentence[50] = "Hey fellow warriors";
    char res[50];
    spin_words(sentence,res);
    printf("sonuc = %s\n",res);
    /*
    const char *string = "qwerty";
    char *e;
    int index;

    e = strchr(string, 'e');
    if(e == NULL){
        puts("NULL");
        return 0;
    }
    index = (int)(e - string);
    printf("e = %s\n",e);
    printf("i = %d\n",index);

    //printf("boyut = %d\n",strlen(sentence));
    */
    return 0;
}

/*

#include <stdio.h>
#include <string.h>

int main ()
{
char *string = "qwerty";
char *e;
int index;

e = strchr(string, 'e');
if(e == NULL){
    puts("NULL");
    return 0;
}
index = (int)(e - string);
printf("e = %s\n",e);
printf("i = %d\n",index);
}
*/
