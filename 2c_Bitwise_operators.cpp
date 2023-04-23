// BITWISE OPERATORS
/*  used to perform operations on individual bits. used with char and int
 &  binary AND
 |  binary OR
 ^  binary XOR
 ~  binary one compliment
 << left shift
 >> right shift 
*/
#include <iostream>
using namespace std;

int main(){
// BITWISE AND ->  &	
	cout << (5 & 3) << endl; // result is 1
	cout << (3 & 3) << endl; // result is 3

// BITWISE OR ->  |
	cout << (5 | 3) << endl; // result is 7
	cout << (10 | 5) << endl; // result is 15

// BITWISE XOR (Exclusive OR) ->  ^
	cout << (9 ^ 5) << endl; // result is 12
	cout << (5 ^ 5) << endl; // result is 0		

// BITWISE NOT ->  ~   It flips the bits of a number
	cout << (~ 0) << endl; // result is -1
	cout << (~ 1) << endl; // result is -2
	cout << (~ 7) << endl; // result is -8
	cout << (~ -2) << endl; // result is 1
	cout << (~ -1) << endl; // result is 0


	return 0;

/* 
5 ->  1 0 1
3 ->  0 1 1

*/	
}