#include <iostream>
using namespace std;

void QuickSort(int arr1[], int start, int stop){
	if(stop < start){
		return;
	}
	int pivot = arr1[stop];//determines the pivot
	int leftPointer = start;
	int rightPointer = stop-1;
	
	for(int i=0;i<stop;i++){
		if(leftPointer <= rightPointer){//until the pointers cross
			if((arr1[leftPointer] > pivot) && (arr1[rightPointer] < pivot)){//if left is bigger, and right is smaller
				swap(arr1[leftPointer],arr1[rightPointer]);
				leftPointer++;//increment left pointer
				rightPointer--;//decrement right pointer
			}
			else if(arr1[leftPointer] > pivot){//if right is not smaller
				rightPointer--;
			}
			else{//if left is not bigger
				leftPointer++;
			}
		}
	}
	swap(arr1[stop], arr1[leftPointer]);
	//at this point all values to the left of pointer are smaller, 
	//and all values to the right of pointer are larger
	QuickSort(arr1,start,leftPointer-1);//recursively sort the left side of the pivot
	QuickSort(arr1,leftPointer+1,stop);//recursively sort the right side of the pivot
}

int main(){
	int arr1[] = {8,9,0,4,7,6};
	int length = 6;
	QuickSort(arr1,0,length-1);
	for(int i=0;i<length;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}