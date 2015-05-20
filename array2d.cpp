#include <iostream>
#include <stdlib.h> 
#include <iomanip>
using namespace std; 

const int ROW = 5; 
const int COL = 8; 

void FillArray(int array[][COL], int);

void DisplayArray(int array[][COL], int );

int FindMax (int array[][COL], int);

int FIndMin(int array[][COL], int); 

int FinAverage(int array[][COL], int); 

void DisplayArrayCol(int array[][COL], int); 

int main(){
	srand(time(NULL));
	
	int array[ROW][COL]; 
	
	FillArray(array, ROW); 
	
	DisplayArray(array, COL); 
	
	cout << " The Max number = " << FindMax(array, COL) << endl << endl; 
	
	cout << " The Min number = " << FindMin(array, COL) << endl << endl; 
		
	cout << " The Average number = " << FindAverage(array, COL) << endl << endl; 
	
	DisplayArrayCol(array, COL); 
}

void FillArray(int array[][COL], int){
}

void DisplayArray(int array[][COL], int ){
}

int FindMax (int array[][COL], int){
}

int FIndMin(int array[][COL], int){
}

int FinAverage(int array[][COL], int){
} 

void DisplayArrayCol(int array[][COL], int){
}
