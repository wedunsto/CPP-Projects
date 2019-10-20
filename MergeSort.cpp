//Merge Sort
// O(n) auxillary space 
// O(n*log(n)) time complexity

#include <iostream>
using namespace std;

void MergeSort(int[] arr,int start, int end){
	if(start >= end){//condition where the recursive method stops running
	//without a base condition a segment fault error occurs
		return;
	}
	
	int mid = (start+end)/2;//start by created a variable for the middle of the array
	//MergeSort(arr,start,mid);//continue by recursively calling the merge sort method
	//MergeSort(arr,mid+1,end);//again for the second half
	//int temp[] = new int[arr.length];//create a new array
	int i = start;//this start will vary by the way each section is set up
	int k = start;
	int j = mid +1;
	
	/*while(i < mid && j < end){// looping through the indexes 
		if(arr[i] < arr[j]){//if the first value is less than the value at the middle
			temp[k] = arr[i];//set the value at this index in the next array to the lower value
			i++;//increment the index until the while condition is met
		}
		else{//if the value at the index is greater than, then 
			temp[k] = arr[j];//set the value to the lowest value
			j++;//increment j
		}
		k++;
	}
	
	while(i < mid){
		temp[k] = arr[i];
		i++; k++;
	}
	
	while(j < end){
		temp[k] = arr[j];
		j++; k++;
	}
	
	for(int i=start; i< end;i++){
		arr[i] = temp[i];
	}*/
}

int main(){
	int arr[] = {2,3,57,9,6,3,1,4,6};
	MergeSort(arr,0,2);

	return 0;
}