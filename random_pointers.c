#include<stdio.h>
#include<time.h>

//Generate 10 random integers and store them in an array. 
//Print each element’s address and value on console. 
//Use pointer for all operations.  
//Also print size of an integer using sizeof() operator. 

int main(){
	
	time_t t;
	int array[10];
	int i;
	srand((unsigned)time(&t));
	for(i=0;i<10;i++){
		array[i]=(rand());
	}
	printf("\nValues of array:[");
	for(i=0;i<10;i++){
		printf("%d",array[i]);
		if(i<9){
			printf(",");
		}
	}
	printf("]");
	
	int *array1[10];
	for(i=0;i<10;i++){
		array1[i]=&array[i];
	}
	
	
	
	printf("\nAdresses of array:[");
	for(i=0;i<10;i++){
		printf("%u",array1[i]);
		if(i<9){
			printf(",");
		}
	}
	printf("]");
	
	printf("\nDo you know the size of integer?:%d byte",sizeof(int));
	
	return 0;
}
 
