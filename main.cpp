#include <iostream>
using namespace std;
int main(){
	cout << "Week 2 Lab:" << endl;
	
	int bob = 42;
	int john = 32;
	int jimbob = bob + john;
	short rachel = 10;
	short luke = 7;
	float pie = 3.14;
	char middle = 'M';
	bool shouldWe = false;
	
	if('M' == middle){
		cout << "The result was true" << endl;
	} else {
		cout << "FALSE!!!!" << endl;
	}
	
	cout << jimbob << " is bob and jim added" << endl;
	cout << bob - john << " is bob and jim subtracted" << endl;
	cout << bob / john << " is bob and jim divided" << endl;
	cout << bob * john << " is bob and jim multiplied" << endl;
	cout << bob % john << " is bob modulas jim" << endl;
	
	
    return 0;
}