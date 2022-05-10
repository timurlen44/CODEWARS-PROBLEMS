#include<stdio.h>
int rgb(int r, int g, int b, char *output)
{
  int int_arr[3] = {r,g,b};
	for(int i = 0;i<3;i++){
		if(int_arr[i] >255){
			int_arr[i] = 255;
		}
		else if(int_arr[i]<0){
			int_arr[i] = 0;
		}
		for(int j = 0;j<2;j++){
		
			int res = int_arr[i]%16;
			if(res >= 10){
				output[1-j+i*2] = res+55;
			}
			else{
				output[1-j+i*2] = res+'0';
			}
			int_arr[i] /= 16;
			
		}
	}
	
   return 0; 
}

int main()
{
	
	return 0;
}
