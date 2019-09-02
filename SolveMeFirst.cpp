/*HackerRank Solve Me First
compute the sum of two integers
a and b are integer inputs*/
#include<iostream>
using namespace std; 

int a, b;

int solveMeFirst(int a, int b){
	return a+b;
}

int main(){
	cout<<"Please enter two integers: ";
	cin>>a>>b;
	cout<<"\n The sum of these integers is: "<<solveMeFirst(a,b)<<endl;
	return 0;
}