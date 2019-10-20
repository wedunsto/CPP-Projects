#include<iostream>
using namespace std;
 
 void insertionSort(int array[],int size_Of_Array){//only works for ordered arrays with only 1 new item
	 int value_To_Be_Ordered = array[size_Of_Array-1];//unordered item
	 int index_For_Value = size_Of_Array-2;//index of next number that is ordered
	 while(index_For_Value>=0 && array[index_For_Value]>value_To_Be_Ordered){//while the next value is bigger than the out of order value
		 array[index_For_Value+1] = array[index_For_Value];//make the next value equal to the previous value
		 index_For_Value--;//decrement to find the index where to save the out of order value
	 }
	 array[index_For_Value+1]=value_To_Be_Ordered;//make the correct index equal to the out of order value
 }
 //bubble sort
 void selectionSort(int array[], int size_Of_Array){//works for sorted and unsorted arrays
	 for(int i=0;i<size_Of_Array;i++){
		 for(int j=i+1;j<size_Of_Array;j++){
			 if(array[i]>array[j]){//compares the current element to the next element
				 int temp = array[i];//saves the current element to a temperary variable 
				 array[i] = array[j];//swaps the current and next element
				 array[j] = temp;//saves the temperary value to the next element
			 }
		 }
	 }
 }
 
 int main(){
	 int i=0;
	 int firstArray[5] = {1,2,3,5,4};
	 int secondArray[5] = {3,4,2,1,5};
	 for(i=0;i<5;i++){
		 cout<<firstArray[i]<<" ";
	 }
	 cout<<endl;
	 insertionSort(firstArray,5);
	 for(i=0;i<5;i++){
		 cout<<firstArray[i]<<" ";
	 }
	 cout<<endl;
	 cout<<endl;
	 for(i=0;i<5;i++){
		 cout<<secondArray[i]<<" ";
	 }
	 cout<<endl;
	 selectionSort(secondArray,5);
	 for(i=0;i<5;i++){
		 cout<<secondArray[i]<<" ";
	 }
 }
	 