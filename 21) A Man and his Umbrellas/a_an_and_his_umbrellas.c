#include <stddef.h>

enum weather_type { CLEAR, SUNNY, CLOUDY, RAINY, OVERCAST, WINDY, THUNDERSTORMS };

int min_umbrellas (size_t length, const enum weather_type forecasts[length])
{
  int in_work = 0;//morning
  int in_home = 0;//afternoon
  for(size_t i = 0;i<length;i++){
    if(forecasts[i] == RAINY || forecasts[i] == THUNDERSTORMS){
      if(i%2 == 0){//if in home 
        if(in_home>0){
          in_home--;
          in_work++;
        }
        else{
          in_work++;
        }
      }
      else{//if in work
        if(in_work>0){
          in_work--;
          in_home++;
        }
        else{
          in_home++;
        }
      }
    }
  }
	return in_work+in_home;
}

int main(){

	return 0;
}