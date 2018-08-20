#include <stdio.h>

void printVector(int *source){
	
	int i = 0;
	
	//loop to print
	for (i = 0; i < 10; i++){
		printf("%i\n", source[i]);
	}
	
}//End function printVector


//Insertion Sort function
void insertion(int *source){
	
	int i, j, aux;
	int actual;
	
	//first loop - initates at 1
	for (i = 1; i < 10; i++){
		
		j = i;
		
		//select the actual element
		actual = source[i];
		
		//second loop
		while(j > 0 && source[j -1] > source[j]){
			
			aux = source[j];
			source[j] = source[j - 1];
			source[j - 1] = aux;
			j--;
			
		}//end scond loop
		
	}//End first loop
		
}//end function Insertion


//Main Function
void main(){
	
	//random vector with equal numbers
	int vector[10] = {852,14,1,2,65,3,1,74,522,100};
	
	//print the actual vector
	printVector(vector);
	
	//sort
	insertion(vector);
	
	printf("\n\n\n");
	
	//print the sorted vector
	printVector(vector);
	
}//End main fucntion