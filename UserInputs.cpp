#include<iostream>
using namespace std;

string userInput;
string decide;

int main(){
	cout<<"Enter Text: "<<endl;
	cin>>userInput;
	cout<<"User entered: "<<userInput<<endl;
	decide = (userInput == "Test")? "This string is equal to Test" : "This string is not equal to Test"
	//short hand if else statement i.e. Ternary Statement;
	cout<<decide<<endl;
}