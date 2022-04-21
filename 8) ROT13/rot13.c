//ABCDEFGHIJKLMNOPQRSTUVWXYZ
//NOPQRSTUVWXYZABCDEFGHIJKLM

//abcdefghijklmnopqrstuvwxyz
//nopqrstuvwxyzabcdefghijklm



char rot13_hash_table[180] ={0,1,2,3,4,5,5,7,8,9,
                            10,11,12,13,14,15,16,17,18,19,
                            20,21,22,23,24,25,26,27,28,29,
                            30,31,32,33,34,35,36,37,38,39,
                            40,41,42,43,44,45,46,47,48,49,
                            50,51,52,53,54,55,56,57,58,59,
                            60,61,62,63,64,'N','O','P','Q','R',
                            'S','T','U','V','W','X','Y','Z','A','B',
                            'C','D','E','F','G','H','I','J','K','L',
                            'M',91,92,93,94,95,96,'n','o',
                            'p','q','r','s','t','u','v','w','x','y',
                            'z','a','b','c','d','e','f','g','h','i',
                            'j','k','l','m',123,124,125,126,127,128,129,
                            130,131,132,133,134,135,136,137,138,139,
                            140,141,142,143,144,145,146,147,148,149,
                            150,151,152,153,154,155,156,157,158,159,
                            160,161,162,163,164,165,166,167,168,169,
                            170,171,172,173,174,175,176,177,178,179};


char *rot13 (char *str_out, const char *str_in)
{
  int len = strlen(str_in);
  for(int i = 0;i<=len;i++){
    str_out[i] = rot13_hash_table[str_in[i]];
  }
  return str_out;
}

const char * string = "HELLO EVERY ONE!";
char output[50];
int main(){
    rot13(output,string);
    printf("input = %s\n",string);
    printf("output = %s\n",output);
}



