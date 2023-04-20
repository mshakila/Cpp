#include <iostream>
using namespace std;

// Typecasting -> change of resulting datatype
int main(){

 // IMPLICIT typecasting

// FLOAT + INT
    cout << 7/3 << endl;
    cout << 7.0/3 << endl;

// CHAR + INT
    char letter = 'A';
    cout << letter + 1 << endl;
    cout << "old letter " <<letter << endl;
    letter = letter +1 ;
    cout << "new letter " <<letter << endl;

    char ch = 69;
    cout << ch << endl;

// BOOL + INT
    cout <<  (true +10) << endl;
    cout << (false +10) << endl;


 // EXPLICIT TYPECASTING
	cout << 5/3 << endl;
	cout << (float)5/3 << endl;
	cout << endl;

	char letter = 'A';
	cout << letter +1 << endl;
	cout << (char)(letter +1)<< endl;
	int b = 1;

	cout << (bool)5+1 << endl; // first number , treated as boolean , non-zero is true
	cout << (bool) 0+ 5 << endl;

	return 0;
}
