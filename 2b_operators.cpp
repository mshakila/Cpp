

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
-------------------------
// ADD TWO NUMBERS
include <iostream> 
using namespace std;

int main(){
    int a, b, c ;
    a=10;
    b=20;
    c=a+b;
    cout << "A " << a << " B " << b << " C " << c << endl;
    cout << "Sum of 2 integers: " << c <<endl;
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
