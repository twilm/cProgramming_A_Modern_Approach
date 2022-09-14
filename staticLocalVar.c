// static in declaration of local variable causes it to havee
// static storage duration. Instead of autiomatic storage.
// It has a permanent storage location. so it retains its value throughout execution
//
void f(void)
{
	static int i; /* Static local variable */
	// Allocated the same memory location throughout the execution of the program. When 
	// f returns, i wont lose its value.

	// A static local variable is a place to hide data from other functions;
	// but retain it for future calls of the same function.

	/* PARAMETERS */
	// Parameters have the same properties - automatic storage duration and block-scope - as local
	// variables. 
}
 

