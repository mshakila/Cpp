// DATATYPES

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a = 15;
	float b = 7.8384394839483984;
	char c = 'M';
	bool d = false;
	double e = 7.8384394839483984; // for higher precision

	cout << a << endl;
	cout << b << endl;
	cout << fixed << setprecision (12) << e << endl ; 
	cout << c << endl;
	cout << d << endl;	
	cout << fixed << setprecision (12) << e << endl ; // after decimal 12 digits
	//cout << setprecision (8) << e << endl ; 
	//cout << e << endl;

	return 0;
}

----------------------------------
//SIZEOF 
#include <iostream>
using namespace std;

int main(){
    int marks, score;
    marks = 50;

    cout << sizeof(marks) <<endl; // 4 byte = 32 bits
    cout << sizeof(score) << endl; // 4 byte
    cout << sizeof(int) <<endl; // 4 byte
    cout << sizeof(long) <<endl; // 4 bytes
    cout << sizeof(short) << endl; // 2 bytes
    cout << sizeof(float) <<endl; // 4 byte
    cout << sizeof(double) <<endl; // 8 byte = 64 bits
    cout << sizeof(char) <<endl; // 1 byte
    cout << sizeof(bool) <<endl; // 1 byte = 8 bits
 
    return 0;
}
/* minimum allocation of memory on RAM is 1 byte . hence for boolean, 
even thou 1 bit is enough, uses 1 byte space .
for character also, 1 byte=8bits . with 8bits have 2^8 = 256 combinations.
to represent a character, this is enough.
*/