

// ARITHMETIC OPERATORS
#include <iostream>
using namespace std;

int main() {
    int a=10;
    int b=3;

    cout << "A " << a << " B " << b << endl;

    cout << a+b << endl ;
    cout << a-b << endl;
    cout << (a*b) << endl;
    cout << a/b << endl;
    cout << a%b << endl;

    return 0;

}
--------------------------
// COMPOUND ASSIGNMENT
#include <iostream>
using namespace std;

int main() {
    int a=5;
    int b=10;

    cout << "A " << a << " B " << b << endl;

    a += 5 ; // a= a+5
    b -= 1 ;

    cout << "compd addition: "<< a << endl ;
    cout << "compd subtraction: " << b << endl;

    return 0;

}
----------------------------
#include <iostream>
using namespace std;

// first Demo given , later explained
int main() {
// INCREMENT DECREMENT OPERATORS
    int a = 10 ;
    int b = 3 ;

    cout << "A " << a << " B " << b << endl;

    a++ ; // OR ++a
    cout << "Increment " << a <<endl;

    b-- ; // OR --b
    cout << "Decrement " << b << endl;

    return 0;

}
--------------------
#include <iostream>
using namespace std;

int main() {
// INCREMENT DECREMENT OPERATORS
// INCREMENT  OPERATORS
    int x = 10 ;
    int y = x++ ;

    cout << "X , Y " << x << "," << y <<endl;

    int z = ++x ;
    cout <<"X , Z " << x << "," << z <<endl;

    return 0;
/*  y = x++
first assignment happens y = x , 
 then increment happens x++ 
 so y =10 , then x =11 -> This is post-increment

   z = ++x ;
   first increment happens , then assignment , x=12, z =12 -> pre-increment
 */
}
----------------
#include <iostream>
using namespace std;

// DECREMENT  OPERATORS
int main(){

    int x = 10 ;
    int y = x-- ;

    cout << "X , Y " << x << "," << y <<endl;

    int z = --x ;
    cout <<"X , Z " << x << "," << z <<endl;
}

----------------------------
// RELATIONAL OPERATORS 
// many times used in if-else statements
#include <iostream>
using namespace std;

int main(){
    int x,y,a,b ;
    x = 5;
    y = 12;
    a =3;
    b = 3;

    cout << "X and Y " << x << "," << y << endl;

    cout << (x > y) << endl;
    cout << (x <= y) <<  endl;
    cout << (x != y) << endl;
    cout << (a == b) << endl;

    return 0;   

}
-----------------------
// OPERATORS
/*
Arithmetic operators
Relational operators
Logical operators
Bitwise operators
Assignment operators
Miscellaneous operators

1.  ARITHMETIC OPERATORS
 They are used to perform arithmetic operations on variables and data
 +    -    *           /  Division             % Modulo   
	int/int -> int 
	float/int   OR   int/float   -> we will get float */
	 a/b
	 a + b -c * d + 24

/* 2. ASSIGNMENT OPERATORS

Assignment operators    =   
 Compound assignment operators -> They combine binary operator (+,-,*, etc) 
 with assignment operator (=)
 +=    compound addition   -=	csubt     *=   cmulti	/=   cdiv   %= compound modulo
 */
 a+=8   ->  a=a+8
 b*=4   ->  b = b * 4

 /*
 INCREMENT DECREMENT
 ++  	Increment
 --		Decrement */
 	int a = 10;
 	a++ ; //postincrement , here value will be a+1 , 11
 	++a ; //pre increment

 	a-- ; //post decrement
 	--a : // pre decrement 
 	int a = 5;
 	cout << a++ <<endl;
 	cout << ++a <<endl;;
 	cout << a-- << endl; 
 	cout << --a <<endl;

 /*
 3. RELATIONAL OPERATORS
 used to check the relationship  btw 2 operands or compare
 ==  isEqualTo  	 !=   	>  	 <		>=		<= 

 4. LOGICAL OPERATORS
used to check if an expression is true (1) or false (0)

 &&		logical AND
 ||		logical OR
 !      logical NOT

 5. BITWISE OPERATORS
 used to perform operations on individual bits. used with char and int
 &  binary AND
 |  binary OR
 ^  binary XOR
 ~  binary one compliment
 << left shift
 >> right shift

6. Other operators
sizeof  returns size of datatype
?:   Ternary operator
&    address of operator
.     Dot operator
*     Dereference operator
->    Access members of objects
*/
}
