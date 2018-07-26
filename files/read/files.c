#include<stdio.h>

int main()
{
	//Declarate a file pointer 
	FILE *filePointer;
	
	//Declarate a buffer to load with the txt content
	char bufffer[10000];
	
	//Open the file
	//you can put the whole file path
	filePointer = fopen("hello.txt","r");
	
	//verify if the file was opened sucessfully
	if (filePointer == 0){
		printf("It was'nt possible to open the file.");
		//exit the code
		return 0;
	}//end verification of the file
		
	//Read the content from the file
	//If the character is different from NULL so print
	while (fgets(bufffer,1000, filePointer) != NULL){
		printf("%s", bufffer);
	}//End while loop
		
	//close the file
	fclose(filePointer);
	
	return 0;	
}//Fim Main Function