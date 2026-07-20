#include <stdio.h>
enum Status
{
    OFF,
    ON
};

struct Device
{
    int device_id;
    enum Status status;
};
int main()
{
    struct Device d1;

    d1.device_id = 101;
    d1.status = ON;

    printf("Device ID : %d\n", d1.device_id);

    if(d1.status == ON)
    {
        printf("Status : ON\n");
    }
    else
    {
        printf("Status : OFF\n");
    }

    return 0;
}
