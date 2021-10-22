#include <stdio.h>

int main()
{
	char str[1000] = "Test String", rev[1000] = "\0";
	int i, j, count = 0;

	printf("String Before Reverse: %s", str);

	//finding the length of the string
	while (str[count] != '\0') { count++; }

	j = count - 1;

	//reversing the string by swapping
	for (i = 0; i < count; i++) {
		rev[i] = str[j];
		j--;
	}

	printf("\nString After Reverse: %s\n", rev);
}
