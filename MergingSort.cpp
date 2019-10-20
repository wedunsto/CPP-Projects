#include<iostream>
using namespace std;

void Merge(int arr[], int start, int mid, int stop){
	int i, j, k; //iterators for first half, second half, and final arrays
    int leftLimit = mid - start + 1;//limit for the first half 
    int rightLimit =  stop - mid;//limit for the second half
  
    int left[leftLimit], right[rightLimit]; //arrays for the left and right half
  
    for (i = 0; i < leftLimit; i++){//populates the left half
        left[i] = arr[start + i];
	}		
    for (j = 0; j < rightLimit; j++){//populates the right half
        right[j] = arr[mid + 1+ j]; 
	}
	//reinitialize iterators
    i = 0;  
    j = 0;
    k = start;
    while (i < leftLimit && j < rightLimit){ 
        if (left[i] <= right[j]) {//compares the values at the same index in the left and right arrays
            arr[k] = left[i]; 
            i++;//if the left value is lower, move to the next value and compare
        } 
        else{ 
            arr[k] = right[j]; 
            j++;//if the right value is lower, move to the next value and compare
        } 
        k++;//regardless of which is lower, increment the final array index
    } 

    while (i < leftLimit)  {//if there is a final largest value on the left, add it
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 

    while (j < rightLimit) {//if there is a final largest value on the right, add it
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
}

void MergeSort(int arr[], int start, int stop){
	if(stop < start){
		return;
	}
		int mid = start + (stop-start)/2;//find the mid-index
		MergeSort(arr,start,mid);//merge sort the left side
		MergeSort(arr,mid+1,stop);//merge sort the right side
		Merge(arr,start,mid,stop);//bring 2 sorted arrays together
}

int main(){
	int values[] = {8,4,2,1,6};
	int length = 5;
	MergeSort(values,0,length-1);
	for(int i=0;i<length;i++){
		cout<<values[i]<<" ";
	}
}