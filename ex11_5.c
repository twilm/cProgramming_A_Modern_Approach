// write the following function:
// void split_time(long total_sec, int *hr, int *min, int *sec);
// total_sec is a time represented as the number of seconds since midnight, hr, min, and
// sec are all pointers to variables in which the function will store the equivalent time in
// hours (0-23), minutes(0-59), and seconds(0-59), respectively
//	ANSWER:

//		  #include <stdio.h>
//		  
//		  void split_time(long total_sec, int *hr, int *min, int *sec);
//		  
//		  int main(void)
//		  {
//		  	int h, m, s;
//		  
//		  
//		  }
//		  
//		  void split_time(long total_sec, int *hr, int *min, int *sec)
//		  {
//		  	*hr  = total_sec / 3600;		
//		  	total_sec -= *hr * 3600;
//		  	*min = total_sec / 60;
//		  	total_sec -= *min * 60;
//		  	*sec = total_sec;
//		  }
//		  
//
// ORIGINAL ANSWER BEFORE LOOKING UP SOLUTION
// I worked it out backwards, not understanding the question completely. 
void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = *min * 60;
	*min = *sec * 60;
	*sec = *hr + *min;
	total_sec = *sec;
}