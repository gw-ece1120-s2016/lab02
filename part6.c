#include <stdio.h>

/* ECE1120 - Lab 2 part 6
 * by Your Name Here.
 */

int main(void)
{
	int x, y;
	char c;

	printf("enter first number:\n");
	scanf("%d", &x);
	printf("the first number is %d\n", x);

	printf("enter second number:\n");
	scanf("%d", &y);
	printf("the second number is %d\n", y);

	printf("enter a character:\n");
	scanf("\n%c", &c);
	printf("the character is %c\n", c);

	/* Note: the newline in the scanf for a single character is needed
	 * because the %c specifier does not ignore whitespace by
	 * default.
	 */

	if (c == '&') {
		printf("the character is an ampersand\n");
	}

	return 0;
}
