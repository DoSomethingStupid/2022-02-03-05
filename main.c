#include <stdio.h>
#include <string.h>

int main () {
	char dolorem[] = "Lorem ipsum dolor sit amet"; // sample text
	char temp[100] = {}; //temporary empty string of length 99
	int length = strlen(dolorem); // the length of sample text

	strcpy(temp, dolorem); // copies dolorem text to temp for reversing
	printf("Original string: %s\n", dolorem); // prints dolorem

	for (int i = length; i > 0; i--) { // for length amount of times
		dolorem[i-1] = temp[length - i]; // since the null character is included in the length, i needs to be subtracted by 1 when used for dolorem.
	}

	printf("Reversed string: %s\n", dolorem); // prints the reversed string
	return 0;
}