#include <stdio.h>

void printVector(int *source){
	
	int i = 0;
	
	//loop to print
	for (i = 0; i < 10; i++){
		printf("%i\n", source[i]);
	}
	
}//End function printVector


//Bubble Sort function
void bubble(int *source){
	
	int i, j, aux;
	
	for (i = 0; i < 10; i++){
		
		for (j = i + 1; j < 10; j++){
			
			//verify if the actual elementi is bigger then the next j
			if (source[i] > source[j]){
				//change positions
				aux = source[i];		
			    source[i] = source[j];
				source[j] = aux;
			}
			
		}//End second loop
		
	}//End first loop
		
}//end function bubble


//Main Function
void main(){
	
	//random vector with equal numbers
	int vector[10] = {12,65,1,35,1,145,0,3,32,3};
	
	//print the actual vector
	printVector(vector);
	
	//sort
	bubble(vector);
	
	printf("\n\n\n");
	
	//print the sorted vector
	printVector(vector);
	
}//End main fucntion