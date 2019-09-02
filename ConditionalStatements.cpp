#include<iostream>//Header file library lets us work with input and output objects
using namespace std;//import the standard library for object and variable names

int day;//holds to numerical value of the day of the week
string dayOfWeek;//holds the string value of the day of the week
string fullWeek[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
string GetDayOfWeek(){//method to be called in the main() method
	do{
		cout<<"Enter a number between 1 and 7 coresponding to a day of the week: ";//prompts user to input a day of the week
		cin>>day;//accept user input
	}
	
	while(day <=0 || day >=8);
	
	switch(day){//switch case statement based on user input
		case 1:
			dayOfWeek = "Monday";
			break;
		case 2:
			dayOfWeek = "Tuesday";
			break;
		case 3:
			dayOfWeek = "Wednesday";
			break;
		case 4:
			dayOfWeek = "Thursday";
			break;
		case 5:
			dayOfWeek = "Friday";
			break;
		case 6:
			dayOfWeek = "Saturday";
			break;
		case 7:
			dayOfWeek = "Sunday";
			break;
		default:
			dayOfWeek = "Not a valid day of the week. Please enter a number between 1 and 7: ";
			break;
	}
	return "The day of the week is: "+dayOfWeek;
}

string DaysLeftInTheWeek(int day){//determines how many days are left in the week
	int numberOfDaysInWeek = (sizeof(fullWeek)/ sizeof(fullWeek[0]))-1;//counts the number of elements in an array
	string none = "\n";
	string daysLeft;
	if(day<=6){//if the day in the week is earlier than Sunday
		daysLeft = "The following days are left in the week:"+none;
	}
	else{//if the day of the week is Sunday
		daysLeft = "Today is Sunday, the week is over"+none;
	}
	for(int i = day;i <= numberOfDaysInWeek; i++){//loop through the days in the week to output
			daysLeft += fullWeek[i]+none;
	}
	return daysLeft;
}

int main(){
	string dayOutput = GetDayOfWeek();//method call
	string allDaysLeft = DaysLeftInTheWeek(day);//method call
	cout<<dayOutput<<endl;//output values
	cout<<allDaysLeft<<endl;//output values
}