/*Insert a number into an ordered array*/
#include<iostream>
using namespace std;

void printList(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void insertLast(int arr[], int n){//standard method header working with arrays
	//start from the end of the list
	int x=arr[n-1];//gets the last value in the array
	int i=n-2;//because we want to insert 15 before the last index
	//15 is already at the last location (n-1)
	while(i>=0 && arr[i]>x){
		arr[i+1] = arr[i];//shifts values to the right
		i--;
	}
	arr[i+1] = x;//the loop stops in the middle because its sorted.
	//the location of i is where the number needs to be inserted
	printList(arr,n);
}

void insertionSort(int arr[],int n){
	//insertLast(arr,n);
	int i;
	for(i=2;i<=10;i++){
		insertLast(arr,i);
		printList(arr,2);
	}
}

int main(){
	int arr[10]={1,3,5,7,8,11,13,19,21,0};
		int arr1[10]={1,3};
		//want to insert 15 into the proper position
	//insertLast(arr,10);
	insertionSort(arr,2);
	return 0;
}