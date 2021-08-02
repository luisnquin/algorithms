#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int numbers[25], aux, min;
	srand(time(NULL));
	
	for(int i=0; i<25; i++){
		numbers[i] = 100 + rand() % (300 + 1 - 100);
	}
	// Selection Sort
	for(int i=0; i<25; i++){
		min = i;
		
		for(int j=i+1; j<25; j++){
			if(numbers[min] > numbers[j]){
				min = j;
			}
		}
		aux = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = aux;
	}
	//End of this
	
	cout<<"---ORDEN ASCENDENTE"<<"-"*50<<endl<<endl;
	for(int i=0; i<25; i++){
		cout<<numbers[i]<<"  ";
	}
	cout<<endl<<endl;
	
	cout<<"---ORDEN DESCENDENTE"<<endl<<endl;
	for(int i=24; i>=0; i--){
		cout<<numbers[i]<<"  ";
	}
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
