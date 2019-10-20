//Binary Search
//Getting to the center time complexity O(1)
//time complexity of binary search O(log(n))

#include <iostream>
using namespace std;

int Binary(int arr[], int index, int start, int finish){
	if(start >= finish){//base condition for recursion
		return -1;
	}
	int mid = (start + finish) / 2;
	if(arr[mid] == index){//if the middle index is where the key is
		return mid;
	}
	else if(arr[mid] < index){//if the key is less than the middle value
		return Binary(arr,index,mid+1,finish);//recursively call binary search
	}
	else{//if the key is greater than the middle value
		return Binary(arr,index,start,mid-1);
	}
}

int main(){
	int arr[] = {2,3,4,5,6};
	int found = 0;
	
	found = Binary(arr, 55, 0,4);
	cout<<found<<endl;
}
