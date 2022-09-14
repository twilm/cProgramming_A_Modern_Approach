#include <stdio.h>

int main(void)
{
}

void divide_and_conq(void)
{
	// 1 .Choose an array element e (the "partitioning element") then rearrange
	// the array so that element 1, ..., i - 1 are less than or equal to e, eleme-
	// nt contains e, and elements i + 1..., n are greater than or equal to e.
	// 2. Sort elements 1, ..., i -1 by using Quicksort recursively.
	// 3. Sort elements i + 1, ..., n by using Quicksort recursively
}

// Algoritihm relies on two "markers" named low and high, which keep track
// of positions within array. initially; low points to the first element of the array
// and high points to the last element. 
//
// Start by copying the first element (partitioning element) into termporary location
// elsewhere, leaving a "hole" in array. 
// Next: move high across the array from right to left until it points to an 
// element that's smaller than the partitioning element. then copy ele. into th hole
// that low points tom which creates a new hole (pointed to by high)
//
// Now move low from left to right, looking for element thats larger than the 
// partitioning element. When we find one, we copy it into the hole that high poitns to,
// Process repeats, with low and high taking turns, until they meet somewhere in middle
// of the array. At that time, both will point to a hole: all we need do is copy partitioning
// element into the hole. 
//
// [12][3][6][18][7][15][10]	- lets start with an array containing 7 ele. 
//  |					  |		- low points to first ele, 
// low					 high	- high to the last one 
//								---------------------------------------------
// [][3][6][18][7][15][10]		- The first element, 12 is the partitioning ele. 
//  |					|		- Copying elsewhere leaves a hole at beginning
// low				   high 
//
// [10][3][6][18][7][15][] 12
//  |					  |
// low					 high 
//
// [10][3][6][18][7][15][] 12
//		| 			  |
//	   low			 high 
//
// [10][3][6][18][7][15][ ] 12
//	       |	    	 |
//		  low			high 
//
// [10][3][6][ ][7][15][18] 12
//			  |		 |  	
//			 low    high
