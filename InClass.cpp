#include<iostream>
using namespace std;

void WorkingWithArrays(){
	int *ar = new int[10];//ar is a point that points to a starting location
	//points to an address
	int i;
	for(i=0;i<10;i++){
		ar[i] = i+123;
	}
	printf("%x\n",ar);
	cout<<ar<<endl;
	ar++;
	cout<<ar<<endl;//increments by 4 because the int type is 4 bytes
	cout<<*ar<<endl;
	
	ar = (int*)8231;
	cout<<*ar<<endl;
}

int main(){
	cout<<"Hello world"<<endl;
	WorkingWithArrays();
return 0;
}