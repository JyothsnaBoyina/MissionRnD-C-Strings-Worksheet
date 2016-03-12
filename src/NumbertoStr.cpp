/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void reverse(char*, int);
int convert_to_string(int, char*);

void number_to_str(float number, char *str, int afterdecimal){
	int intnum, i = 0, len;
	float dec;

	if (number < 0.0)
	{
		*str = '-';
		str++;
		number = number - (2 * number);
	}

	intnum = (int)number;
	dec = number - (float)intnum;

	for (i = 0; i < afterdecimal; i++)
		dec = dec * 10;


	len = convert_to_string(intnum, str);
	*(str + len) = '.';
	len = convert_to_string((int)dec, str + len + 1);

}

int convert_to_string(int intnum, char* str)
{
	int i = 0;
	while (intnum != 0)
	{
		*(str + i) = (intnum % 10) + '0';
		intnum = intnum / 10;
		i++;
	}
	reverse(str, i);
	*(str + i) = '\0';

	return i;
}
void reverse(char* str, int l)
{
	int i;
	char temp;
	for (i = 0; i < l / 2; i++)
	{
		temp = *(str + i);
		*(str + i) = *(str + l - 1 - i);
		*(str + l - 1 - i) = temp;
	}
}
