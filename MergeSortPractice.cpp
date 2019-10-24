#include<iostream>
using namespace std;

void Merge(int arr1[], int start, int midpoint, int stop){
	//actually pulls values from the array with the give indexs
	cout<<endl;
	cout<<"The starting value is: "<<start<<endl;
	cout<<"The midpoint value is: "<<midpoint<<endl;
	int i,j,k;//Iteration variable
	int leftLimit = midpoint-start+1;//Determines the distance from start to mid
	cout<<"The left limit is: "<<leftLimit<<endl;
	cout<<endl;
	int rightLimit = stop - midpoint;//Determines the distance from mid to end
	cout<<"The right limit is: "<<rightLimit<<endl;
	cout<<endl;
	int left[leftLimit];//array for the left side
	int right[rightLimit];//array for the right side
	cout<<"The stopping value is: "<<stop<<endl;
	cout<<endl;
	
	for(i=0;i<leftLimit;i++){//populate the left side
		left[i] = arr1[start+i];
		cout<<"Left side includes: "<<left[i]<<endl;
	}
	cout<<endl;
	for(j=0;j<rightLimit;j++){//populate the right side
		right[j] = arr1[midpoint+1+j];
		cout<<"Right side includes: "<<right[j]<<endl;
	}
	cout<<endl;
	
	i=j=0;//reinstantiate the iterators
	k=start;
	while(i<leftLimit && j<rightLimit){//while the iterators are in range
		//merge sorting two arrays
		if(left[i] < right[j]){//if the left value is less than the right value
			arr1[k] = left[i];//add the left value first
			i++;//increment iterator to next index value
			cout<<"Left value was added: "<<arr1[k]<<" ";
			cout<<endl;
		}
		else{
			arr1[k] = right[j];//add the right value first
			j++;//increment iterator to the next index value
		    cout<<"Right value was added: "<<arr1[k]<<" ";
		}
		cout<<endl;
		k++;//increment iterator for the actual array
	}
	while(i < leftLimit){//while all values from the left side are not added to array
		arr1[k] = left[i];//add remaining values to the end of arr1
		cout<<"Remaining value added: "<<arr1[k]<<endl;
		i++;//increment iterator
		k++;//increment iterator
	}
	while(j < rightLimit){//while all values from the right side are not added to array
		arr1[k] = right[j];//add remaining values to the end of arr1
		cout<<"Remaining value added: "<<arr1[k]<<endl;
		j++;//increment iterator
		k++;//increment iterator
	}
}

void MergeSort(int arr1[],int start, int stop){
	//finds the mid points but does not actually affect the array
	if(stop <= start){//base condition for recursion 
		return;
	}
	int midpoint = (start + stop) / 2;//find the mid pointer
	cout<<"Midpoint is: "<<midpoint<<endl;
	MergeSort(arr1,start,midpoint);//merge sort the left side
	MergeSort(arr1,midpoint+1,stop);//merge sort the right side
	cout<<"Merging with a mid point of "<<midpoint<<endl;//reached each time the base condition is reached
	Merge(arr1,start,midpoint,stop);//combines 2 sorted arrays
}

int main(){
	int arr1[] = {1,8,6,9,5,4};
	int length = 6;
	MergeSort(arr1,0,length-1);
	for(int i=0;i<length;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}