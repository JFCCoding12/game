/*
 * GAME.h
 *
 *  Created on: Mar 2, 2018
 *      Author: jakefolsom
 */
#include <iostream>
#include "ColorConsole.h"
#include <fstream>

using namespace std;

#ifndef GAME_H_
#define GAME_H_


void clearscreen(){
#if defined(_WIN32)
  system("CLS");
#elif defined(__linux__)
  system("CLS");
#elif defined(__APPLE__)
		system("clear");
#endif
}

void newgame(){
	ofstream outData;
	outData.open("playerstats.TMT");
	int option = 0;
	cout << RED << "________________________________________________________@@@__________________________________________________________________" << endl;
	cout << RED << "|    Many People make the trip up north.                                                                                  |" << endl;
	cout << "|                                                                                                                                |" << endl;
	cout << "|        You may be                                                                                                              |" << endl;
	cout << "|         1) Mass Business man on Vacation                                                                                       |" << endl;
	cout << "|          2) Mainah heading to The County                                                                                       |" << endl;
	cout << "|           3) Canadian coming back from Old Orchard Beach                                                                           |" << endl;
	cout << "|            4) Difference between them                                                                                              |" << endl;
	cout << "|" << endl;
	cout << RED << "|________________________________________________________@@@__________________________________________________________________|" << endl;
	cout << RESET;
	cout << "Who do you want to be?: ";
	cin >> option;
	switch(option){
	case 1:
			outData << "Mass " << 20000;
			outData.close();
			break;
	case 2:

			outData << "Maine " << 10000;
			outData.close();
			break;
	case 3:
			outData << "Canadian " << 15000;
			outData.close();
			break;
	case 4:
		// add later
		cout << "";
		break;

	default:
		clearscreen();
		newgame();
	}
}

#endif /* GAME_H_ */
