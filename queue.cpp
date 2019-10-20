#include <iostream>
using namespace std;

class Queue
{
	private:
		int *arrayPointer;
		int head, tail;
		int size;
	
	public:
		Queue(int userSize){
			size = userSize;
			arrayPointer = new int [userSize];
			head = tail = -1;
		}
		
		void enqueue(int add){//add int to queue
			if(queueIsEmpty()){//if this is the first element added to the queue
				head = tail = 0;//move head and tail to first index
				arrayPointer[tail] = add;//add element to the first index
				return;
			}
			if(queueIsFull() == true){//the queue is full 
				int *newArrayPointer = new int[2*size];//reallocate array
				int oldArrayIndex = head;//index of old array
				int newArrayIndex = 0;//index of new array
				while(1){//populate new array
					newArrayPointer[newArrayIndex] = arrayPointer[oldArrayIndex];
					newArrayIndex++;
					if(oldArrayIndex == tail){
						break;//stop populating when the tail is reached
					}
					else{
						oldArrayIndex = (oldArrayIndex+1) % size;//moves new index over
					}
				}
					newArrayPointer[newArrayIndex] = add;//sets index equal to new value
					head = 0;
					size = size * 2;
					tail = newArrayIndex;
					delete[] arrayPointer;//deletes old array for memory
					arrayPointer = newArrayPointer;//sets array pointer to new array
			}
			else{
				tail = (tail+1) % size;//moves the tail in a circular fashion 
				arrayPointer[tail] = add;//if queue isnt full add to end
			}
		}
		
		int dequeue(){//remove int from queue
		//dont worry about removing actual value from array
			if(head == -1){//signifies empty queue
				return -1;
			}
			int remove = arrayPointer[head];//holds the value being dequeued
			if(head == tail){//when all values are removed, place the head and tail back at the initial values
				head = tail = -1;
			}
			else{
				head = (head+1) % size;//moves the head in a circular fashion
			}
			return remove;
		}
		
		bool queueIsFull(){//determines if queue is full
			return ((head == 0 && tail == size-1) || (tail == head-1));
		}
		
		bool queueIsEmpty(){//determines if queue is empty
			return (head == -1);
		}
		
		void printQueue(){//display values in a queue
			int i = head;//dont want to move the head 
			while(1){
				cout<<arrayPointer[i]<<" ";
				if(i == tail){//complete circle has been made, all values printed
					break;
				}
				i = (i+1) % size;//move placeholder
			}
			cout<<endl;
		}
};

int main(){
	int size = 5;//user size of queue
	string queueFull;
	string queueEmpty;
	Queue userQueue(size);//creates queue object
	for(int i=0;i<size+15;i++){//dynamically populate queue
		userQueue.enqueue(i);
	}
	userQueue.printQueue();//call the print function
	for(int i=0;i<size+15;i++){//remove all values from the queue
		cout<<"Value removed: "<<userQueue.dequeue()<<endl;
	}
	return 0;
}