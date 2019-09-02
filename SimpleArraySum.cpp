/*HackerRank Simple Array Sum
Find the sum of all elements in an array*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> ConvertInputToArrayList(string list){
	char splitter = ' ';
	vector<string> temp;
	for(int i=0;i<list.length();i++){
		if(list[i] != splitter){
			temp.push_back(string(1,list[i]));
		}
	}
	return temp;
}

vector<int> ConvertInputs(vector<string> ar){
	vector<int>temp;
	for(int i=0;i<ar.size();i++){
		//temp.at(i) = stoi(ar.at(i));
		int value = atoi(ar.at(i).c_str());//returns a point to that value
		temp.push_back(value);
	}
	return temp;
}

int SumOfArrayElements(vector<int> true_AR){
	int temp=0;
	for(int i=0;i<true_AR.size();i++){
		temp += true_AR.at(i);
	}
	return temp;
}



int main(){
	int sizeOfArray;//variable used to hold the size of the array
	int sum=0;//used to hold the sum of all values in a vector
	string temp_Values;//used to hold the users input
	cout<<"Please enter the number of values in your array: ";
	cin>>sizeOfArray;
	
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	
	vector<string> ar(sizeOfArray); //used to hold array of user input elements
	vector<int> true_AR(sizeOfArray);//used to hold the int converted array
	
	//IGNORESE THE REST OF THE CURRENT LINE UP TO \n 
	//REMOVES THE NUMERIC LIMIT ON VALUES
	
	cout<<"\n"<<"Pease enter the space seperated values in your array: ";
	getline(cin,temp_Values);//even when spaces are used, still holds values
	cout<<"\n"<<"Your values are: "<<temp_Values<<endl;
	ar=ConvertInputToArrayList(temp_Values);//converts the string to a string vector
	true_AR=ConvertInputs(ar);//convert string vector to int vector
	sum=SumOfArrayElements(true_AR);
	cout<<"The sum of the vector elements is: "<<sum<<endl;
	
	return 0;
}
