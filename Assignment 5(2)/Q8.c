#include <stdio.h>

enum State
{
    START = 10,
    STOP = 20,
    PAUSE = 30
};

int main()
{
    enum State s;

    s = START;

    printf("START = %d\n", START);
    printf("STOP  = %d\n", STOP);
    printf("PAUSE = %d\n", PAUSE);

    return 0;
}
