/*
CONTROL FLOW - LOOPS
When you repeat an action  or set of instructions again and again. 
you can put that read statement in a loop

LOOP statement allows us to execute a statement or group of statements multiple times

SYntax
loop (){
	
}

1. WHILE LOOP
While loop runs thru a block of code as long as specified contdition is True
Syntax
initialization
while (condition){
	// code block
	//update
}

#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	int i= 1; // i=1 , give n=5 , result 1,2,3,4,5
	while (i <= n){
		cout << i << endl;
		i = i+1 ;  
	}
// i=10  , i = i+10 , give n=50 , result 10,20,30,40,50
	//return 0;
}
---

int main(){



	return 0;
}

// Read N mumbers and find their sum
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int i = 1 ;
	int sum = 0;

	while(i <= n){
		int no;
		cin >> no ;
		sum = sum + no ;
		i = i+1 ;
	}
	// final sum
	cout << "SUM : " << sum <<endl;
}
*/
/* FOR LOOP
It is similar to while loop, all 3 criteria/steps in one line

Syntax
for (init ; condition ; update){
	// code block
}


#include<iostream>
using namespace std;

int main(){
	for (int i = 1; i <= 5; i=i+1) // ++i
	{
		cout << i << endl;
	}

	return 0;
}
--------------------- 
#include<iostream>
using namespace std;

int i;
int main(){
	for (i = 1; i <= 5; i=i+1) // ++i
	{
		cout << i << endl; // gives result 1,2,3,4,5
	}
	cout << "After the loop " << i << endl; // gives result 6

	return 0;
}
--------------------- 
#include<iostream>
using namespace std;

int i=1;
int main(){
	for ( ; i <= 5; ) // ++i
	{
		cout << i << endl; // gives result 1,2,3,4,5
		i=i+1;
	}
	cout << "After the loop " << i << endl; // gives result 6

	return 0;
}
--------------------- 
#include<iostream>
using namespace std;

int i=1;
int main(){
	for ( ; i <= 5; i=i+1) // ++i
	{
		cout << i << endl; // gives result 1,3,5 since added i++ twice
		i=i+1;
	}
	cout << "After the loop " << i << endl; // gives result 7

	return 0;
}
-------------------------------- 
// Read N numbers and find the sum of numbers that are even

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	
	int sum = 0;
	for(int i =1 ; i<=n ; ++i){ // i++
		int num ;
		cin >> num ;
		if (num%2==0){
			sum = sum + num;
		}
		
	}
	cout << "Sum of even numbers is " << sum << endl; 

	return 0;
}
------------------------------ 
// DO WHILE LOOP
 Do / while loop is a exit controlled loop. 
For and while loops allow us to enter the loop based on some conditions.
These are called as entry controlled loop. 
Do while loop will check before, atleast once, if condition is true, then 
will repeat the loop as long as the condition is true.



#include <iostream>
using namespace std;

int main(){

	int money = 4;
	do{
		cout << "Shopping with money " <<money <<endl;
		money = money-1 ;
	}
	while (money>0) ;
	return 0;
}
------------------------ 
// Read numbers until I dont get negative numbers.
// 14, 36, 11, 10, 0, -5 Stop


#include <iostream>
using namespace std;

int main(){

	int number;
	do{
		cin >> number ;
		cout << number <<endl;
	}
	while (number >=0);
	return 0;
}
----------------------------
// Do-while another example
// Read numbers until I dont get negative numbers.
// 14, 36, 11, 10, 0, -5 Stop

#include <iostream>
using namespace std;

int main(){

	int number;
	cin >> number ;

	while(number >=0){
		cout << number << endl;
		cin >> number ;
	}
	return 0;
}
--------------------------------
// BREAK STATEMENT
 It is used to explicitly terminate the loop base on certain condition.
When there is break statement, the loop stops and control moves to first statement
after the loop.

Syntax 
while(...){
	if(condition){
	break;
	}
}

#include <iostream>
using namespace std;

int main(){

	int cal = 0;
	while( cal<10 ){
		cout << "Running & burning cals " <<cal << endl;
		cal = cal + 1 ;

	}
	cout << "WORKOUT COMPLETE " << cal << endl;

	return 0;
}
---------------------
// BREAK STATEMENT -- example

#include <iostream>
using namespace std;

int main(){

	int cal = 0;
	int mom_calls_up = 6;

	while( cal<10 ){
		cout << "Running & burning cals " <<cal << endl;
		if(cal == mom_calls_up){
			break;
		}
		cal = cal + 1 ;

	}
	cout << "WORKOUT COMPLETE " << cal << endl;

	return 0;
}
------------------
// BREAK STATEMENT -- example
// Check if number is prime or not

#include <iostream>
using namespace std;

int main(){
	int N ;
	cin >> N;
	
	int i;
	for(i=2 ; i<N ; i++){
		// if N is divisible by i
		if(N%i==0){
			break;
		}
	}
	// out of the loop
	if (i==N){
		cout << N <<" is Prime "  << endl;
	}
	else{
		cout << N << " is Not Prime " << endl;
	}


	return 0;
}
---------------------------
// CONTINUE STATEMENT 
 It is also a control statement like Break. break will take us outside 
the loop. continue will take us to next iteration of the loop. 
It takes control to execute the next iteration of the loop

syntax
while(...){
	if(condition){
	continue; // when true control goes back to line 1(while)
	}
}

// If multiple of 7 , then dont print
#include <iostream>
using namespace std;

int main(){
	int i=0;

	while(i<=20){

		if(i%7==0){
			cout << i << " is Multiple of 7 " << endl;
			i = i+1;
			continue;
		}
		cout << i << endl;
		i++ ;
	}
	------------------



	