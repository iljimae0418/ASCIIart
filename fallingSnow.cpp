#include <iostream> 
#include <chrono> 
#include <thread> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 

/*
snow flake types: ❄,❅,❆,*
*/

void printVillage(){
	 cout << "\t\t\t\t    +" << endl;             
                                   cout << "\t\t\t\t   / \\" << endl; 
	cout << " _____        _____     __________/ o \\/\\_________      _________" << endl; 
	cout << "|o o o|_______|    |___|               | | # # #  |____|o o o o  | " << endl; 
	cout << "|o o o|  * * *|: ::|. .|               |o| # # #  |. . |o o o o  |" << endl; 
	cout << "|o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . |o o o o  |" << endl; 
	cout << "|o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . |o o o o  |" << endl; 
	cout << "|_[]__|__[]___|_||_|__<|____________;;_|_|___/\\___|_.|_|____[]___|  " << endl; 
}

void snow(){
	cout << "❆             ❄                *                                ❆" << endl; 
	cout << endl; 
	cout << "   ❄    ❄            ❄             ❆             ❆          ❆ " << endl; 
	cout << endl; 
	cout << "            ❆               *                                  " << endl; 
	cout << endl; 
	cout << "                 ❆              ❆         *           *        "  << endl; 
	cout << endl; 
	cout << " *        *                                    ❄           ❄   " << endl; 
	cout << endl; 
	cout << "     ❄       ❄               ❅                        ❅      " << endl; 
  
}

void pause(int n){
	this_thread::sleep_for(chrono::milliseconds(n)); 
}

int main(){
	for (int i = 0; i < 8; i++){
		pause(800); 
		snow(); 
	}
	pause(100); 
	printVillage();
	pause(800); 
	return 0; 
}
