#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	vector<int> test{1,3,5,7,9,2,4,6,8};
	vector<int>even_values;
	int i;

	for(i=0;i<test.size();i++){
		if((test.at(i)%2) == 0){
			even_values.push_back(test.at(i));
		}
	}
		int small=even_values.at(0);
	for(int i=0;i<even_values.size();i++){
		for(int j=i+1;j<even_values.size();j++){
			if(even_values.at(j)<even_values.at(i)){
				small = even_values.at(j);
			}
		}
	}
		cout<<small<<endl;
	return 0;
	}