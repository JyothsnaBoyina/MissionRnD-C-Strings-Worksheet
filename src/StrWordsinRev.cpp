/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void rev(int,int, char*);
void str_words_in_rev(char *input, int len){

	int i; 
	input[len] = ' ';
	input[len + 1] = '\0';
	len = len +1 ;

	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			rev(i, len, input);
			len = len -( i +1);
			i = -1;
		}
	}
	
}
void rev(int l1,int l2, char* input)
{
	int i,j;
	char temp;
	for (i = 0; i <= l1; i++)
	{
		temp = input[0];
		for (j = 0; j<l2; j++)
			input[j] = input[j + 1];
		input[j-1] = temp;
		
	}
}