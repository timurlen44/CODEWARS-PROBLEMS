char *human_readable_time (unsigned seconds, char *time_string)
{
	int sec = seconds%60;
	time_string[8] = '\0';
	time_string[7] = (sec%10)+'0';
	
	time_string[6] = ((sec/10)%10)+'0';
	
	time_string[5] = ':';
	
	int min = (seconds/60)%60;
	time_string[4] = (min%10)+'0';
	
	time_string[3] = ((min/10)%10)+'0';
	
	time_string[2] = ':';
	
	int hours = (seconds/3600)%100;
	time_string[1] = (hours%10)+'0';
	time_string[0] = ((hours/10)%10)+'0';
	return time_string; // return it
}

int main(){
	
	return 0;
}
