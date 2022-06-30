#include <stdlib.h>
#include <stdio.h>

//https://www.codewars.com/kata/525f4206b73515bffb000b21/train/c
int char_to_int(char c)
{
    return c-48;
}
char int_to_char(int i)
{
    return i+48;
}

char *add(const char *a, const char *b)
{

    int a_len = strlen(a);
    int b_len = strlen(b);
    int a_digit_value = 0;
    int b_digit_value = 0;
    int total_len = (a_len>b_len)?a_len+1:b_len+1;
    int remainder = 0;
    int digit = 0;

    char *ret = (char *)calloc(total_len,sizeof(char));
    for(int i = total_len-1;i>0;i--)
    {
        if(a_len)
        {
            a_len--;
            a_digit_value = char_to_int(a[a_len]);
        }
        else
        {
            a_digit_value = 0;
        }

        if(b_len)
        {
            b_len--;
            b_digit_value = char_to_int(b[b_len]);
        }
        else
        {
            b_digit_value = 0;
        }

        ret[i] = int_to_char((a_digit_value + b_digit_value+remainder)%10);
        remainder = ((a_digit_value + b_digit_value+remainder)/10);
    }

    if(remainder)
    {
        ret[0] = int_to_char(remainder);
    }
    else
    {
        for(int i =0;i<total_len-1;i++)
        {
            ret[i] = ret[i+1];
        }
        ret[total_len-1] = '\0';
    }
    return ret;
}

int main()
{
    char *ret = add("63829983432984289347293874", "90938498237058927340892374089");
    printf("%s\n",ret);
    free(ret);
    return 0;
}
