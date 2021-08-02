#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int numbers[10] = {4,8,5,6,1,2,3,7,9,10}, aux;
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		numbers[i] = 1 + rand() % (25 + 1 - 1);
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(numbers[j] > numbers[j+1]){
				aux = numbers[j+1];
				numbers[j+1] = numbers[j];
				numbers[j] = aux;
			}
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<numbers[i]<<"  ";
	}
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
