#include<iostream>
using namespace std; 

int reverse(int n){
	cout<<n%10<<endl;//gets the last value in the integer
	int m = n/10;//gets rid of the last digit
	cout<<m%10<<endl;
	cout<<(m/10)%10<<endl;
	return 0;
}

int TrueReverse(int n){
	int reverseValue=0;
	while(n>0){
		reverseValue=reverseValue*10 + n%10;
		//cout<<n%10<<endl;//gets the last value in the integer
		//cout<<reverseValue<<endl;//shows the progress of the conversion 
		n/=10;//gets rid of the last digit
	}
	return reverseValue;
}

int main(){
	int n=12349;
	int m = TrueReverse(n);
	cout<<"The original value is: "<<n<<endl;
	cout<<"The reverse is: "<<m<<endl;
	return 0;
}