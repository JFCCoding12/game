/*
 * Console.h
 *
 *  Created on: Mar 6, 2018
 *      Author: jakefolsom
 */

#ifndef CONSOLE_H_
#define CONSOLE_H_
#include <cstdlib>

class Console {
public:
	Console();
	virtual ~Console();
	void Move(int V, int H, int S);
	int MovingAnimals();
};

extern char map[11][21];
extern int x;
extern int hit;
extern int y;

#endif /* CONSOLE_H_ */
