#include <stdio.h>
#include <iostream>
#include <time.h>

void sleep(unsigned int mseconds);

int main()
{
	 int t = 60;
    while (t > 0)
    {

		system("clear");
       std::cout <<"\r" << t-- << " Seconds Remaining" << std::endl;


       sleep(1000000);
    }
    printf("Trying To Connect Again");

}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
