#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int>a){
	for(int i=0;i<a.size();i++){
		for(int j=a.size();j>=0;j--){
			a.at(i) = a.at(j);
	}
}
return a;
}

int main(){
	cout<<"Test"<<endl;
	vector<int> a{1,2,3,4};
	vector<int> newA = reverse(a);
	cout<<"Test"<<endl;
	for(int i=0;i<newA.size();i++){
		cout<<newA[i]<<endl;
	}
}