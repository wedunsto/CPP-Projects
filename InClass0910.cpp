#include<iostream>
using namespace std;
//REVIEW THIS
int findMin(int arr[], int n){
	if(n == 1){
		return arr[0];
	}
	int x = findMin(arr,n-1);//finds the smallest values excluding the final value
	return min(x,arr[n-1]);//finds the smallest value between x and the last value 
}

int sum(int arr[],int n){
	if(n == 1){
		return arr[0];
	}
	int x = sum(arr,n-1);//adds all the values excluding the last value
	return x+arr[n-1];//adds the sum plus the last element
}

int main(){
	int n = 6;
	int arr[n] = {4,3,1,5,2,0};
	cout<<findMin(arr,n)<<endl;
	cout<<sum(arr,n)<<endl;
}