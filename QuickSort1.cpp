#include<iostream>
using namespace std;

int partition(int arr[], int start, int stop){
	int pivot = arr[stop];//always choses the value at the end of the array as the pivot
	int smaller = start-1;//instantiate the smallest values as one less than the current value
	
	for(int j=start;j<=stop;j++){
		if(arr[j] < pivot){//if the current value is less than the pivot, swap it with the value to the left
			smaller++;//increment the left most index
			swap(arr[smaller],arr[j]);
		}
	}
	//when smaller is increment it keeps track of where the pivot value belongs
	swap(arr[smaller+1],arr[stop]);//swap the pivot with the index next to the last swapped value
	return(smaller+1);//return the index where the old pivot is
}

void QuickSort(int arr[], int start, int stop){
	//base condition: if the stop index is less than or equal to the start index
	if(stop <= start){
		return;
	}
	
	int select = partition(arr,start,stop);//find the index where the pivot value needs to be
	QuickSort(arr,start,select-1);//quick sorts all values smaller than the pivot
	QuickSort(arr,select+1,stop);//quick sorts all values greater than the pivot
}

int main(){
	int values[] = {8,4,2,1,6};
	int length = 5;
	int i,j = 0;
	
	cout<<"The unsorted values are: ";
	while(i<length){
		cout<<values[i]<<" ";
		i++;
	}
	cout<<"\n"<<"The sorted values are: ";
	QuickSort(values,0,length-1);
	while(j<length){
		cout<<values[j]<<" ";
		j++;
	}
}