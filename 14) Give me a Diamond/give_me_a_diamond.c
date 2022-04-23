#include <stdlib.h>
#include <string.h>

void fill_spaces (char* str,int count){
  for(int i = 0;i<count;i++){
    strcat(str," ");
  }
}
void fill_stars (char* str,int count){
  for(int i = 0;i<count;i++){
    strcat(str,"*");
  }
  strcat(str,"\n");
}

char *diamond (int n)
{

  if((n<=0) || (n%2 == 0)){
    return NULL;
  }
  char *diamond_str = (char *) calloc(n*n,sizeof(char));
  for(int i = 1;i<=n;i+=2){
    fill_spaces(diamond_str,(n-i)/2);
    fill_stars(diamond_str,i);
  }
  for(int i = n-2;i>=1;i-=2){
    fill_spaces(diamond_str,(n-i)/2);
    fill_stars(diamond_str,i);
  }
	return diamond_str;
}
int main(){

    return 0;
}
