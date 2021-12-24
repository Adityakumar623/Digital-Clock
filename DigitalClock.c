
                                        /*....... MY Digital Clock Project ..........*/

#include <stdio.h>
#include <windows.h>

int main()
{
    int Hr, Min, Sec;
    int d = 1000; //Delay of 1000 millisecond , we use it in function sleep....
    printf("Set time : \n");
    scanf("%d%d%d", &Hr, &Min, &Sec);
    if (Hr > 12 || Min > 60 || Sec > 60)
    {
        printf("Error ! \n");
        exit(0);
    }
    while (1)
    {
        Sec++;
        if (Sec > 59)
        {
            Min++;
            Sec = 0;
        }
        if (Min > 59)
        {
            Hr++;
            Min = 0;
        }

        if (Hr > 12)
        {
            Hr = 1;
        }
        printf("\n Clock :");                      //printf("\n int printf(const char * restrict Format,....")
        printf("\n %02d:%02d:%02d", Hr, Min, Sec); //our time in in this format..
        sleep(d);                                  // it slows down the while loop and appears like a real clock
        system("cls");                             // it clears screen
    }
}