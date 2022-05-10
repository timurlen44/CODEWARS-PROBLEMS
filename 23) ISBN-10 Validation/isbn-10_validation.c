#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool is_valid_ISBN_10 (const char *ISBN)
{
  int res = 0;
  size_t str_length = strlen(ISBN);
  if(str_length < 9 || str_length >10){
    return false;
  }
  for(size_t i = 0;i<(str_length-1);i++){
    if(isdigit(ISBN[i]) == 0){
      return false;
    }
    res += (ISBN[i]-'0')*(i+1);
  }
  if(ISBN[str_length-1] == 'X'){
    res += 10*str_length;  
  }
  else if(isdigit(ISBN[str_length-1]) >0){
    res += (ISBN[str_length-1]-'0')*str_length;
  }
  else {
    return false;
  }
  
  if(res %11 == 0 && res >0){
    return true;
  }
  
  
  return false;
}
