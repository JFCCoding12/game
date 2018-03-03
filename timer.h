/*
 * timer.h
 *
 *  Created on: Mar 2, 2018
 *      Author: jakefolsom
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdio.h>
#include <iostream>
#include <time.h>

void sleep(unsigned int mseconds);

int hunttimer()
{
	 int t = 60;
    while (t > 0)
    {
#if defined(_WIN32)
  system("CLS")
#elif defined(__linux__)
  system("CLS")
#elif defined(__APPLE__)
		system("clear");
#endif
       std::cout <<"\r" << t-- << " Seconds Remaining" << std::endl;

#if defined(_WIN32)
       sleep(1000);
#elif defined(__linux__)
       sleep(1000000);
#elif defined(__APPLE__)
  sleep(1000000);
#endif


    }
    printf("Hunt End");
    return 0;

}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}




#endif /* TIMER_H_ */
