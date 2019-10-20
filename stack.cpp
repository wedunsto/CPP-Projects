#include <iostream>
#include <vector>
using namespace std;

class stack{
 vector<int> arr;//no need for circular
 int topValue;
 public:
  stack(){//vectors dont care about size 
   topValue = -1;
  }
 
  void push(int k){//add value to the top of a stack
   arr.push_back(k);
   topValue = arr.size()-1;//always makes the topValue, the top value in the stack
  }
  //when stack is empty == underflow -1 is not a valid index
  int top(){//return the item at the top of the stack
   if(topValue == -1){
    throw("stack is empty");
   }
   return arr[topValue];
  }

  void pop(){//removes last item in stack
   if(topValue == -1){
    throw("stack is empty");
   }
   arr.pop_back();//removes the last item in the vector
   topValue--;//changes to the next last item in the vector
  }

  bool empty(){
   return topValue == -1;
  }

};

int main(){
 stack s;
 int i;
 for(i=0; i<10; i++){
  s.push(i+1);
 }
 while(!s.empty()){
  cout<<s.top()<<", ";
  s.pop();
 }
 cout<<endl;
 return 0;
}
