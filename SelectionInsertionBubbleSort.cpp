#include <iostream>
using namespace std;

void SelectionSort(int arr1[], int start, int stop){
	for(int i=start;i<stop;i++){//reach next element
		for(int j=i+1;j<stop;j++){//compare each element
			if(arr1[i] > arr1[j]){
				swap(arr1[i],arr1[j]);
			}
		}
	}
}

void BubbleSort(int arr1[], int start, int stop){
	for(int i=start;i<stop;i++){//reach next element
		for(int j=0;j<stop-i-1;j++){//last i elements will be in place
			if(arr1[j] > arr1[j+1]){
				swap(arr1[j],arr1[j+1]);
			}
		}
	}
}

void InsertionSort(int arr1[], int stop){
	int newValue = arr1[stop-1];
	for(int i=stop-2;i>0;i--){//start from the value left of the new value
		if(arr1[i] > newValue){
			arr1[i+1] = arr1[i];//shift to the right
		}
		else{
			arr1[i+1] = newValue;//when the previous value isnt greater than the new value
		}
	}
}

int main(){
	int length = 6;
	int arr1[length+1] = {8,6,4,9,5,2};
	
	SelectionSort(arr1,0,length);
	//BubbleSort(arr1,0,length);
	arr1[length] = 4;
	InsertionSort(arr1,length+1);
	for(int i=0;i<length+1;i++){
		cout<<arr1[i]<<" ";
	}
}