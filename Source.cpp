
#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
#include <algorithm>
using namespace std;

int random(int array[], int length) {
	for (int i = 0; i < length; i++) 
		array[i] = rand() % (100 -(- 100) + 1) - 100;
	return array[length];
	
}

void showArr(int array[], int lenght) { //displays an array on the screen
	cout << "The original array: \n[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}
int searchIndex(int array[], int length, int begin = 0) { //returns the index of the first occurrence of an element in the array
	int index = -1;
	for (int i = 0; i < length; i++)
		if (array[i] == begin) {
			index = i;
			break;
		}
		return index;
}
int searchLastIndex(int array[], int length, int begin = 0) { //returns the index of the last occurrence of an element in the array.
	int lastindex = -1;
	for (int i = length - 1; i >= 0; i--)
		if (array[i] == begin) {
			lastindex = i;
			break;
		}
	return lastindex;
}

int maxElement(int array[], int length) { //returns the maximum element of the array
	int max = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}

int minElement(int array[], int length) { //returns the mainimum element of the array
	int min = 0;
	for (int i = 0; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}

int meanValue(float arr[], float length) { //returns the arithmetic	mean of all array elements
	float sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	float Value = sum / length;
	return Value;
}

void range(int array[], int num, int num1) { //outputs all array elements that are included in the range passed to the function
	if (num > num1)
		swap(num, num1);
	for (int i = num; i <= num1; i++)
		cout << array[i] << ", ";
	cout << "\b\b.\n";
}


int counter(int array[], int length, int num) {//returns the number of occurrences of the passed element in the array
	int count = 0; 
	for (int i = 0; i < length; i++) {
		if (array[i] == num)
				count++;
	}
	return count;
}



int main() {
	int n, m;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[100];
	random(arr, 100);
	showArr(arr, 100);
	cout << "Enter an array element for the first occurrence: ";
	cin >> n;
	cout << "Index = " << searchIndex(arr, 100, n) << endl;
	cout << "Enter an array element for the last occurrence: ";
	cin >> n;
	cout << "Index = " << searchLastIndex(arr, 100) << endl;
	cout << "Enter an array element: ";
	cin >> n;
	cout << "The number of occurrences of the passed element " << n << " in the array = " << counter(arr, 100, n) << endl;
	cout << "Enter the required range: ";
	cin >> n >> m;
	cout << "\nNumbers in the range:";
	range(arr, n, m);







	return 0;
}