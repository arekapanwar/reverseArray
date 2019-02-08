#include <iostream>
using namespace std;

void reverseArray(int array[], int arraySize) {
	int revArray[arraySize];
	int temp;
	
	for (int i = 0; i <( arraySize/2); ++i) {
	  temp = array[i];
	  array[i] = array[arraySize-i-1];
	  array[arraySize-i-1] = temp;
		
	}

	for (int i = 0; i <arraySize; i++) {
		cout << array[i] << endl;
	}
}



int main() {
	int narray[20];
	for (int i = 0; i < 20; i++) {
		narray[i] = i;

	}
	reverseArray(narray, 20);
	return 0;

}
