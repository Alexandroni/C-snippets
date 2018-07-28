#include<stdio.h>

int main()
{
    
    //File pointer
    FILE *filePointer;   
 
    //create file is like to open file
    filePointer = fopen("new_txt.txt","w");

    //verify if the file was "opened"
    if(filePointer == NULL)
    {
        printf("It was'nt possible to open the file.");
		//exit the code
		return 0;
    }

    //write String on the file
    fputs("Hello, Writing to a File", filePointer);

    //Close the file
    fclose(filePointer);
    return 0;
}