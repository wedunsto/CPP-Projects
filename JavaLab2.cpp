#include<iostream>
#include<fstream>//header file to read and write files
using namespace std;

ifstream readFile;//variable used to read files
string line;
vector<string> listName;//used to hold the values in the file

void ReadFile(string fileName){//method used to read in files
int i =0;
	readFile.open(fileName);//opens a file
	while(getline (readFile,line)){//while the method get line recognizes another line
		listName[i] = line;
		i++;
	}
	readFile.close();
}

void SplitString(string line){
}
	

int main(){
	ReadFile("Lab 2 Data.txt");
	cout<<sizeof(line)/sizeof(line[0])<<endl;
}