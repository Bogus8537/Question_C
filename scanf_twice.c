// What happend if I use the function "scanf" twice in the same variable and print it?
// Then the first string I input would be stayed in the variable "str" or gone?
// In my think, the first string'd be stayed in "str"...
// If it stayed then how and where can I check it?

#include <stdio.h>

#define MAX 10

void scanf_twice()
{
	const char str[MAX] = {};

	printf("First String : ");
	scanf("%s", str);
	printf("Second String : ");
	scanf("%s", str);

	printf("%s\n", str);
	printf("%s\n\n", str);
}

int main()
{
	scanf_twice();
	return 0;
}
