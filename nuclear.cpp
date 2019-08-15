#include <bits/stdc++.h>
using namespace std;

void cls() {
    //cout << string( 100, '\n' );
	system("cls");
}
 
void wait ( int nsec ) { 
  clock_t endwait; 
  endwait = clock () + double(nsec)/1000 * CLOCKS_PER_SEC ; 
  while (clock() < endwait) {} 
} 

void printLogo() {
	cls();
	cout << "    ______                 __   ___     \n   / ____/________ _____  / /__/ (_)___ \n  / /_  / ___/ __ `/ __ \\/ //_/ / / __ \\\n / __/ / /  / /_/ / / / / ,< / / / / / /\n/_/ _ /_/_  \\__,_/_/ ///_/|_/_/_/_/ /_/ \n   / | / /_  _______/ /__  ____ ______  \n  /  |/ / / / / ___/ / _ \\/ __ `/ ___/  \n / /|  / /_/ / /__/ /  __/ /_/ / /      \n/_/ |_/\\__,_/\\___/_/\\___/\\__,_/_/       \n                                   \n";
}



void fire() {
	printLogo();
	for (int i=0; i<=50; i++) {
		cout << "Loading missile [";
		for (int j=0; j<i-1; j++) cout << "|";
		cout << ">";
		for (int j=0; j<50-i; j++) cout << " ";
		cout << "] " << i*2 << "%\r" << flush;
		wait(50);
	}
	cout << "";
	wait(3000);
}

void destruct() {
	printLogo();
	cin.get();
}

void kill() {
	printLogo();
	cin.get();
}

void mainMenu() {
	printLogo();
	cout << "FrankLin Nuclear v0.000\n";
	cout << "Please select your operation:\n\n";
	cout << "1) Launch Missile \n2) Kill FrankLin **RECOMMENDED**\n3) Self Destruct\n";
	cout << "=>";
	int choice;
	cin >> choice;
	cin.clear();
	switch(choice) {
		case 1:
			fire();
			break;
		case 2:
			kill();
			break;
		case 3:
			destruct();
	}
}

int main() {
	while (true) {
		mainMenu();	
	}
}