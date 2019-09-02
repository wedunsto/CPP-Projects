#include<iostream>
using namespace std;

class DataTypesAndFormatting{
	public:
	int DecisionMaking(string choice1, string choice2){
		string test;
		test = 1==0? choice1 : choice2;
		cout<<"Decision making output is: "<<test<<endl;
		return 0;
	}
	
	int TernaryOps(int firstNumber, int secondNumber){
		cout<<"Ternary output is: "<<(firstNumber,firstNumber+secondNumber)<<endl;
		return 0;
	}
	
	int ExplicitCasting(float number1){
		int i = (int) number1;
		cout<<"Explicit casting is equal to: "<<i<<endl;
		return 0;
	}
	
	int ByteSize(){
		cout<<"The size of datatype (int) is: "<<sizeof(int)<<endl;
		return 0;
	}
};

int main(){
	string result1 = "Because its true";
	string result2 = "Because its false";
	DataTypesAndFormatting object;
	object.DecisionMaking(result1,result2);
	object.TernaryOps(1,2);
	object.ExplicitCasting(2.56);
	object.ByteSize();
	return 0;
}