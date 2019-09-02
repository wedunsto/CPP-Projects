#include<iostream>
using namespace std;

class Overloading{//class containing overloaded methods
	public: //access modifier
	int EnterValue(int overloadValue){//overloaded method
		cout<<"Input value is: "<<overloadValue<<endl;
		return 0;
	}
	int EnterString(string overloadString){//overloaded method
		cout<<"\n"<<"Input string: "<<overloadString<<endl; 
		return 0;
	}
};

int main(){
	Overloading obj;//object of class with overloaded methods
	obj.EnterString("Testing C++");//overloaded method being called
	obj.EnterValue(2);//overloaded method being called
	return 0;
}
	