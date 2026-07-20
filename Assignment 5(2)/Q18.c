#include <stdio.h>
enum Direction
{
    CW,
    CCW
};
struct Motor
{
    int speed;
    enum Direction direction;
};

int main()
{
    struct Motor m1;

    m1.speed = 1500;
    m1.direction = CW;

    printf("Motor Speed : %d RPM\n", m1.speed);

    if(m1.direction == CW)
    {
        printf("Direction : Clockwise (CW)\n");
    }
    else
    {
        printf("Direction : Counter Clockwise (CCW)\n");
    }

    return 0;
}
