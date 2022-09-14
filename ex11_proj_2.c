// Modify Programming Project 8 from Chapter 5 so that it includes the following
// function:
// void find_closest_flight(int desired_time,
//						    int *departure_time,
//						    int *arrival_time);
// This function will find the flight whose departure time is closest to desired_time
// (expressed in minutes since midnight). It will store the departure and arrival times of
// this flight. (also expressed in minutes since midnight) int the variables pointed to by
// departure_time and arrival_time, respectively.

#include <stdio.h>

void find_closest_flight(int desired_time,
						int *departure_time,
						int *arrival_time);

int main(void)
{
	int hours, minutes, time;
	
	/* Every multiplication of 60 = 1 hour */
	/*	 example: 8 * 60 + 30 == 8:30am	   */
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	time = hours * 60 + minutes;
	if (time <= ((8 * 60)))   {
			printf("Closes departure time is 8:00am\n");
			printf("Arriving at 10:16am\n");
	} else if (time <= (9 * 60 + 43)) {
			printf("Closest departure time is 9:43am\n");
			printf("Arriving at 9:43am\n");
	} else if (time <= (11 * 60 + 19)) {
			printf("Closest departure time is 11:19am\n");
			printf("Arriving at 1:31pm\n");
	} else if (time <= (12 * 60 + 47)) {
			printf("Closest departure time is 12:47am\n");
			printf("Arriving at 3:00pm\n");
	} else if (time <= (14 * 60)) {
			printf("Closest departure time is 2:00pm\n");
			printf("Arriving at 4:08pm\n");
	} else if (time <= (15 * 60 + 45)) {
			printf("Closest departure time is 3:45pm\n");
			printf("Arriving at 5:55pm\n");
	} else if (time <= (19 * 60)) {
			printf("Closest departure time is 7:00pm\n");
			printf("Arriving at 9:20pm\n");
	} else {
			printf("Closest departure time is 9:45pm\n");
			printf("Arriving at 11:58pm\n");
	}
	

}

void find_closest_flight(int desired_time,
						 int *departure_time,
						 int *arrival_time)
{
	int hours, minutes;
	if (desired_time <= (8 * 60)) {
			*departure_time = (8 * 60);
			*arrival_time = (9 * 60 + 43);
	} else if (desired_time <= (10 * 60 )) {
			*departure_time = (9 * 60 + 43);
	} else if (desired_time <= (12 * 60)) {
			*departure_time = (11 * 60 + 19);
	} else if (desired_time <= (13 * 60 + 30)) {
			*departure_time = (12 * 60 + 47);
	} else if (desired_time <= (15 * 60)) {
			*departure_time =  (14 * 60);
	} else if (desired_time <= (16 * 60 + 30)) {
			*departure_time = (15 * 60 + 45);
	} else if (desired_time <= (19 * 60)) {
			*departure_time = (19 * 60);
	} else {	
			*departure_time = (21 * 60 + 45);
	}
}

