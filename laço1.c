//Write a function that takes the time as three integer arguments (for
//hours, minutes, and seconds) and returns the number of seconds since the last time the clock “struck
//12.” Use this function to calculate the amount of time in seconds between two times, both of which
//are within one 12-hour cycle of the clock.

#include <stdio.h>
#include <stdlib.h>

int tempo(int X)
{
    return 3600*X;
}
int main()
{  
    int horas;

    printf("Digite a quantidade de horas:");
    scanf("%d", &horas);
    
    printf("Número de segundos: %d.\n", tempo(horas));



return 0;
}
