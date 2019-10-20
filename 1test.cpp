#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[j] <arr[i]){
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
}
}

int main(){
	int arr[7] = {8,3,2,4,6,9,15};
	int n = 7;
	SelectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
}
}