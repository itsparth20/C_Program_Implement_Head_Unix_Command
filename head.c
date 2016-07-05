// Class: Introduction To System Programming
// Name: Parth Patel
// NetId: ru7853
// Assignment 2
//Define header file
#include <stdio.h>
#include <stdlib.h>

//define main method
int main (int argc, char *argv[])
{
	
	char s[99999];
	int lendth, lineSize = 0, tillEnd =10, lineNo=0, temp =0;
	FILE *fp;

	//Open file for read line
	fp = fopen( argv[1], "r" );
	
	//if there is no file name then display message
	if(argc == 1){
	printf("Enter a file name: ex. $ ./xyz abc.c \n"); 
	exit(0);
	}


	if(argc == 3)
	tillEnd = atoi(argv[2]); // convert argument into int and overrite tillEnd
	if (!fp){	// verify file opened or not.
		printf("Error while opening file\n");
		exit(1);	// exit if file does not open.
	}
	
	// Print line 
	while(!feof(fp))
	{
		temp = fgetc(fp);
		printf("%c", temp);
		if(temp == '\n')
		lineNo++;
		// check for user specified number if match then stop loop.
		if(lineNo == tillEnd) break;
	
			
	}
	
	fclose(fp);
	return 0;
}
