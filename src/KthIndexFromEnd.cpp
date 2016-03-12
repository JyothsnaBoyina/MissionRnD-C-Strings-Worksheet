/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdlib.h>
int length(char*);

char KthIndexFromEnd(char *str, int K) {
	int len;

	if (str == NULL)
		return '\0';
	len = length(str);

	if (K>len || K<0 || len == 0)
		return '\0';

	else
		return str[len - K - 1];

}

int length(char * str)
{
	int i = 0;
	while (*(str + i) != '\0')
		i++;
	return i;
}
