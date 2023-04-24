// FUNCTIONS
/* Functions is a block of intructions which executes only when it is called

Advantages;
1. code is now organised 
2. Reusable
3. Modular, can execute only the code that you need
4. Readable, since code is divided among various functions
5. Easy to understand, debug, extend, easy to maintain

Eg. youtube video there are many actions like playVideo, signIn, uploadVideo,
like, comment, subscribe , recommendVideo, etc.
for each action there is certain code that needs to be triggered.
when you click a button, it is making a function call

Programming languages also have libraries that have pre-defined functions 
usualy used for some common/frequent tasks. 
we can also write user-defined functions

Syntax
void play_music(){
	cout << "Playing music";
}
int main(){
	play_music(); // call the function
	return 0;
}

// Declaration + Definition = Function
Declaration -- it tells compiler about the name of function, return-type,
and parameters
Definition -- here actual body of function is written , what function does

void play_music(){ // declaration
	cout << "Enter your favourite song" << endl;
	int song;
	cin >> song;
	cout << "Playing song "<< song;
}
-----------------------------------
#include <iostream>
using namespace std;

// Forward declaraion
void playMusic();

int main(){
	playMusic();
	return 0;
}

void playMusic(){
	cout << "playing music" << endl;
} // when declare after main get compile error that function
// is not declared. So do forward declaration
---------------------------------------------
*/
