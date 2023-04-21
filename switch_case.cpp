/*
5.  SWITCH CASE
used to select one of the many code blocks to be executed
replace multiple if-else blocks

switch(expression){
	case x:
		// code block
		break;
	case y:
		// code block
		break;
	default:
		// code block
}

The value of expression is compared with values of each case, when matches then
that block of code gets executed. 
values cannot be complicated, should be simple
if do not add, break, all cases below will also be executed until finds break
Break statement takes out of the switch case block
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	// simple calculator
	int a , b ;
	char op;

	cin >> a >> op >> b ;
	cout << endl;

	switch (op){
	case '+': cout << (a+b) << endl;
		break;

	case '-': cout << (a-b) << endl;
		break;

	case '*': cout << (a*b) << endl;
		break;

	case '/': cout << (a/b) << endl;
		break;

	case '%': cout << (a%b) << endl;
		break;

	default : cout << "Enter a valid input " << endl;

	}


	return 0;
} 
/* ------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	// simple calculator
	int a , b ;
	char op;

	cin >> a >> op >> b ;
	cout << endl;

	switch (op){
	case '+': cout << (a+b) << endl;
		break;

	case '-': cout << (a-b) << endl;
		break;

	case '*': cout << (a*b) << endl;
		//break;

	case '/': cout << (a/b) << endl;
		//break;

	case '%': cout << (a%b) << endl;
		break;

	default : cout << "Enter a valid input " << endl;

	}
	return 0;
}
	-----
	
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int a, b, num;

	cin >> num ;

	switch (num){
	case 1: cout << "Grade A+ " << endl;
		break;
	case 2: cout << "Grade A " << endl;
		break;
	case 3: cout << "Grade B+ " << endl;
		break;			
	case 4: cout << "Grade B " << endl;
		break;
	default: cout << "Grade C " << endl;

		return 0;
	}
*/

