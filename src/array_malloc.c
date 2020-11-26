#include <stdlib.h>
#include <stdio.h>

/*
 * Brady Lange
 * Program 4
 * 5/4/18
 * arraymalloc.c
 * This program uses the function malloc to allocate manually memory to the heap and deallocate manually with another function.
 */

//Prototypes
void* arraymalloc(int n);
void arraydealloc(void* array);

//Main function
int main()
{
	char * str = (char*) arraymalloc(10);
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	printf("%s", str);

	arraydealloc(str);

	return 0; 
} //End of main function

//Allocate on heap manually
void* arraymalloc(int n)
{
	int* arr = (int*) malloc(n*sizeof(int));
}

//Deallocate off of the heap manually
void arraydealloc(void* array)
{
	free(array);
}
