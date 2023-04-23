// CONTROL FLOW
/*  Conditional statments & Loops
if
if-else    
else-if
Ternary operators
Switch case

1.  IF
a block of code gets executed if a condition is true

*/
#include <iostream>
using namespace std;

int main(){
	int phone = 15000 ; // 15,000
	int money ;

	// Read the money
	cout << "Enter the money you have " << endl; 
	cin >> money ;
	cout << endl;	

	if (money >= phone)
	{
		cout << "Lets BUY the Phone" << endl ;
	}

	cout << "Thanks for Shopping" << endl;

	return 0;


}
/* ------------------------
2. IF-ELSE
if statement -- a block of code gets executed if a condition is true
else statement - the block of code gets executed if the condition is false
else statement is always used along with if statement
*/
#include <iostream>
using namespace std;

int main(){
	int phone = 15000 ; // 15,000
	int money ;

	cout << "Enter the money you have " << endl;

	cin >> money ;
	cout << endl;

	if(money>= phone){
		cout << "Lets BUY the phone now "<< endl;
	}
	else{
		cout << "Let's WAIT for SALE " << endl;
	}
	cout <<"Thanks for Shopping" << endl;
}
------------------------

/*
2. MULTIPLE IF Blocks
Each IF is independant of the other IFs
if statement -- a block of code gets executed if a condition is true
else statement - the block of code gets executed if the condition is false
else statement is always used along with if statement
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int phone = 15000 ; // 15,000
	int money ;
	string weather = "good";

	cout << "Enter the money & weather " << endl;

	cin >> money >> weather;
	cout << endl;

	// SHOPPING
	if(money > phone){
		cout << "Let's BUY the phone now "<< endl;
	}
	cout << endl;
	
	// WEATHER
	if (weather == "good"){
		cout << "Let's go for a picnic" << endl;
	}
	else{
		cout << "Let's play indoor games" << endl;
	}
	return 0;
}

------------------------------------------
/*
2. ELSE - IF 

	if( condition1 ){
		// block of code is executed if condition 1 is True
	}
	else if ( condition2 ){
		// block of code is executed if condition 1 is False and condition 2 is True
	}
	else {
		/ block of code is executed if both conditions are False 
	}
	------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

/*
>80       A
61 - 80   B
41 - 60   C
<= 40     D
*/
int main(){

	int marks;

	cout << "Enter marks " <<endl;
	cin >> marks ;
	cout<<endl;

	if (marks>80){
		cout << "Grade A" << endl;
	}
	else if (marks>60){
		cout << "Grade B" << endl;
	}
	if (marks>40){
		cout << "Grade C" << endl;
	}
	else{
		cout << "Grade D" << endl;
	}	

	return 0;		
}

/*
int main(){
	int phone = 15000 ; // 15,000
	int money ;

	cout << "Enter the money" << endl;

	cin >> money ;
	cout << endl;

	// SHOPPING
	if(money > phone){
		cout << "Let's BUY the phone now "<< endl;
	}
	else if(money == phone){
		cout << "Let's ask for discount" << endl;
	}
	else{
		cout << "Let's wait for sale" << endl;
	}
	
}
*/
----------------------------
/*
4. TERNARY OPERATORS --  ?:
It consists of 3 operands, hence the name
Used to replace simple if-else statements


SYNTAX
variable = (condition) ? expressionTRUE : expressionFALSE
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int temp;
	string weather;

	cout<<"Enter temp value " <<endl;
	cin >> temp ;
	

	// Ternary operator
	weather = temp >30 ? "hot" : "pleasant" ;
	// cout << (temp >30 ? "hot" : "pleasant") << endl;
	// cout << "Weather is " << (temp > 30 ? "Hot" : "Pleasant" ) << endl;
	cout << "Weather is " << weather << endl;

	return 0;
}
/* Without Ternary operator
#include <iostream>
#include <string>
using namespace std;

int main(){

	string weather;
	int temp ;
	cout << "Enter temperature "<< endl;
	cin >> temp ;
	cout << endl;

	if(temp > 30){
		weather = "hot" ;
	}
	else{
		weather = "pleasant" ;
	}
	cout << "Weather is " <<weather <<endl;

	return 0;
}
-----------------------
// Example
#include <iostream>
#include <windows.h>
using namespace std;

int main(){

	int a =13;
	int b = 11;

	if(a==b)
	cout << "a is equal to b" << endl;
	else if(a<b)
	cout << "a is lesser than b" << endl;
	else 
	cout << "a is greater than b" << endl;
	
	return 0;
}
-----------------------------
