#include<iostream>
#include<vector>
#include<array>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int scores[]={2,3,6,6,5};
	int scoresSize = 5;
	vector<int> TempList;
	cout<<"The original scores are: ";
	for(int i=0;i<scoresSize;i++){
		cout<<scores[i]<<" ";
	}
	sort(scores,scores+5);
	cout<<"\n"<<"The sorted scores are: ";
	for(int i=0;i<scoresSize;i++){
		cout<<scores[i]<<" ";
	}
	for(int i=0;i<scoresSize;i++){
		if(scores[i] < scores[scoresSize-1]){
			TempList.push_back(scores[i]);
		}
	}
	cout<<"\n"<<"The scores in c'TempList' are: ";
	for(int i=0;i<TempList.size();i++){
		cout<<TempList.at(i)<<" ";
	}
	cout<<"\n"<<"The runner up score is: "<<TempList.back()<<endl;
	return 0;
}
