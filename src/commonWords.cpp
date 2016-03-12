/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

int length1(char*);
char** compare(char**,char**,int,int);
int compareto(char*, char*);
char** split(char*,int*);

char ** commonWords(char *str1, char *str2) {
	
	char **p, **q, **result;
	int wc1,wc2,*n,l1,l2;

	if (str1 == NULL || str2 == NULL)
		return NULL;

	l1 = length1(str1);
	l2 = length1(str2);
	if (l1 == 0||l2==0)
		return NULL;
	
	
	result = (char**)malloc(SIZE*sizeof(char*));
	
	q = (char**)malloc(SIZE*sizeof(char*));
	p = (char**)malloc(SIZE*sizeof(char*));

	n = &wc1;
	p = split(str1, n);
	n = &wc2;
	q = split(str2, n);

	result=compare(p, q,wc1,wc2);
	return result;
   	
}


char** split(char* str1,int *n)
{
	int i = 0, j = 0, k = 0,c=0, len;

	char   **p,*s;

	s = (char*)malloc(SIZE*sizeof(char));
	p = (char**)malloc(SIZE*sizeof(char*));

	len = length1(str1);

   while (i<=len)
	{
		if (*(str1 + i) == ' '|| *(str1 + i) == '\0' )
		{
			i++;
			s[j] = '\0';
			p[k] = (char*)malloc(j*sizeof(char));
            for (c = 0; c <=j; c++)
				p[k][c] = s[c];
			k++;
			j = 0;
		}
		s[j]= *(str1 + i);
		j++;
		i++;

	}
	*n = k;
	return p ;
} 

char** compare(char **p, char **q, int l1, int l2)
{
	int i = 0, j = 0, k = 0,a,c;
	char **result;
	result = (char**)malloc(SIZE*sizeof(char*));
	for (i = 0; i < l1; i++)
		for (j = 0; j < l2; j++)
		{
			a = compareto(p[i], q[j]);
			if (a == 1)
			{
				result[k] = (char*)malloc(SIZE*sizeof(char));
				for (c = 0; q[j][c] != '\0'; c++)
					result[k][c] = q[j][c];
				result[k][c] = '\0';				
				k++;

			}
		}
	if (k == 0)
		return NULL;
	else
	return result;

} 

int compareto(char *p, char *q)
{
	int i = 0,count=0,l1=0,l2=0;
	l1 = length1(p);
	l2 = length1(q);

	if (l1 != l2||l1==0)
		return 0;
	else
	{
		while (*(p + i) != '\0')
		{
			if (*(p + i) != (*(q + i)))
				count++;
			i++;
		}
		if (count == 0)
			return 1;
		else
			return 0;
	}
}

int length1(char *p)
{
	int i = 0;
	while (*(p + i) != '\0')
		i++;
	return i;
}

