#include <stdio.h>
#include <iostream>

int main()
{
	 int t = 60;
    while (t > 0)
    {

		system("clear");
       std::cout <<"\r" << t-- << " Seconds Remaining" << std::endl;


        system("wait 1000");
    }
    printf("Trying To Connect Again");

}
