#include <iostream>
using namespace std;

int getMode(int*, int);
int* makeArray(int);

// main has been completed for you

int main()
{	
	const int SIZE = 11;
	int test[SIZE] = {1, 2, 3, 3, 3, 2, 2, 1, 3, 4, 5};
	int mode;

	mode = getMode(test, SIZE);
   
	if (mode == -1)
		cout << "The test set has no mode.\n";
	else
		cout << "\nThe mode of the test set is: " 
		     << mode << endl;

    system("PAUSE");
	return 0;
}

int getMode(int *array, int size)
{
	
	// frequencies will point at a dynamically allocated array
	// in this assignment pointer notation (i.e., using the *) should always be used instead of
	// bracket/subscript notation (i.e., using the []).
	
	int* frequencies = makeArray(size);
	
	// implement the rest of the function
	// implement the rest of the function
	// implement the rest of the function
	
	
	delete[] frequencies; // Do NOT remove this -- this needs to be at the end of the function
	                       // to remove the dynamically allocated frequencies array from memory
	                       // when it is no longer needed.
	
}



// makeArray has been completed for you

int* makeArray(int size)
{
	return new int[size];
}





