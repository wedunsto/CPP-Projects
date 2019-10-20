#include<iostream>
using namespace std;

void printList(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
	}
}

void insertLast(int arr[],int n){
	int x=arr[n-1];
	int i=n-2;
	while(i>=0 &&arr[i]>x){
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=x;
}

void select(arr[],int n,int k){
	int i;
	int msf=arr[k];//initialize value
	int msfi=k;
	
	for(i=k+1;i<n;i++){
		if(arr[i]<msf){
			msf = arr[i];
			msfi = i;//get the index of the smallest value
	}
	swap(arr[msfi],arr[k]);
	printList(arr,n);
}

void SelectionSort(int arr[],int n){
	int i;
	
	for(i=0;i<n;i++){
		select(arr,n,i);
	}
	printList(arr,n);
}

int main(){
const int n=10000;
const int n1 = 5;
int arr1[n1]={4,3,1,5,2};

int *arr = new int[n];
int i;
for(i=0;i<n;i++){
arr[i] = rand();
//constructing the best case : already sorted: arr[i] = i;
//constructing the worst case : reverse order array arr[i] = n-i;
}
for(i=2;i<=n;i++){
insertLast(arr,i);
}

SelectionSort(arr1,n1);

return 0;
}