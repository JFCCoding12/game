#include <stdio.h>
#include <iostream>
#include <time.h>
#include "timer.h"
#include "ColorConsole.h"

using namespace std;
int main()
{
	int option;
	cout << GREEN << "                                                      ____                                                                  " << endl;
	cout << GREEN<< "      .'. .`.             .'.       | |..          | |                   `````|````` |`````````,       .'.       | |        " << endl;
	cout << GREEN<< "    .'   `   `.         .''```.     | |  ``..      | |______                  |      |'''|'''''      .''```.     | |        " << endl;
	cout << GREEN<< "  .'           `.     .'       `.   | |      ``..  | |                        |      |    `.       .'       `.   | |        " << endl;
	cout << GREEN<< ".'               `. .'           `. | |          ``| |___________             |      |      `.   .'           `. | |_______ " << endl;
	cout << GREEN<< "                                                                                                                            " << endl;
	cout << RED << "________________________________________________________@@@__________________________________________________________________" << endl;
	cout << RED << "|                                                                                                                             |" << endl;
	cout << "|                                                                                                                                  |" << endl;
	cout << "|" << endl;
	cout << "|         1) Run The Trail                                                                                                        |" << endl;
	cout << "|          2) Highscores                                                                                                           |" << endl;
	cout << "|           3) Credits                                                                                                             |" << endl;
	cout << "|            4) Quit                                                                                                               |" << endl;
	cout << "|" << endl;
	cout << RED << "|________________________________________________________@@@__________________________________________________________________|" << endl;
	cout << RESET;
	cout << "Start Your Adventure: ";
	cin >> option;
	cout << endl;

	return 0;

}
