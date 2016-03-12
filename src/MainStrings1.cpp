/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include "FunctionHeadersStrings1.h"

int main(){

	//Test KthIndexFromEnd 

	//TestNumbertoStr

	//removeSpaces
	/*char str[] = "12 w 2e     we  2 3     ";
	char a=removeSpaces(str);
	printf(" there is  :  %s", str);

	//StrWordsinRev
	char input[10] = "a b c d";
	str_words_in_rev(input, 7);
	printf("here is : %s", input); */

	//commonWords
	//char *str1 = " ";
	//char *str2 = " who ";
	char **p = commonWords(NULL,NULL);
	
		printf("I am:  %s", *(p+0));




	return 0;
}