/*
 * Console.cpp
 *
 *  Created on: Mar 6, 2018
 *      Author: jakefolsom
 */
#include <cstdlib>
#include "Console.h"
#include <cstdlib>
#include <time.h>
int x = 1;
int y = 9;

int hit = 0;

char map[11][21] = {
		"                    ",
		"####################",
		"#                  #",
		"#                  #",
		"#                  #",
		"#                  #",
		"#                  #",
		"#                  #",
		"#------------------#",
		"#@                 #",
		"####################"};

Console::Console() {
	// TODO Auto-generated constructor stub

}

Console::~Console() {
	// TODO Auto-generated destructor stub
}
int Console::MovingAnimals(){
	srand (time(NULL));
		int tempx = rand() % 18 + 1; // side to side
		int tempy = rand() % 4 + 2; // top to bottom
	map[tempy][tempx] = 'C';
	return tempy;
}
void Console::Move(int V, int H, int S){
	int x2 = x + H;
	int y2 = y + V;



	if(map[y][x2] == ' ' || map[y][x2] == 'C' ){
		map[y][x] = ' ';
		for(int i=4;i<=7;i++){
			if(map[y-i][x] != 'C'){
		map[y-i][x] = ' ';
		}
		}
		x += H;
		map[y][x] = '@';


	} else if(map[y2][x] == ' '|| map[y][x2] == 'C'){

		map[y][x] = ' ';
		y += V;
		map[y][x] = '@';
		for(int i = 4; i<=7; i++){


		}
	} else if(S == 1){

	for(int i = 4; i<=7; i++){

		if(map[y-i][x] == 'C'){
					map[y-i][x] = 'H';
					hit++;
					MovingAnimals();

		} else if(map[y-i][x] != 'C'){
			map[y-i][x] = '|';
		}

	}
	}
}


