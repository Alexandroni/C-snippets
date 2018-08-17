#include <stdio.h>

void printVector(int *source){
	
	int i = 0;
	
	//loop to print
	for (i = 0; i < 10; i++){
		printf("%i\n", source[i]);
	}
	
}//End function printVector


//Selection Sort function
void selection(int *source){
	
	int i, j, aux;
	int min;
	
	for (i = 0; i < 10; i++){
		
		//select the actual element
		min = i;
		
		for (j = i + 1; j < 10; j++){
			
			//verify if the actual elementi is bigger then the next j
			if (source[min] > source[j]){
				min = j;
			}
			
		}//End second loop
		
		//swap
		aux = source[i];
		source[i] = source[min];
		source[min] = aux;
		
	}//End first loop
		
}//end function Selection


//Main Function
void main(){
	
	//random vector with equal numbers
	int vector[10] = {120,65,1,35,1,145,0,3,32,3};
	
	//print the actual vector
	printVector(vector);
	
	//sort
	selection(vector);
	
	printf("\n\n\n");
	
	//print the sorted vector
	printVector(vector);
	
}//End main fucntion