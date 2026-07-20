#include <stdio.h>
enum Unit
{
    TEMP,
    PRESSURE,
    HUMIDITY
};
struct Sensor
{
    float value;
    enum Unit unit;
};

int main()
{
    struct Sensor s1;

    s1.value = 28.5;
    s1.unit = TEMP;

    printf("Sensor Value : %.2f\n", s1.value);

    switch(s1.unit)
    {
        case TEMP:
            printf("Unit : Temperature\n");
            break;

        case PRESSURE:
            printf("Unit : Pressure\n");
            break;

        case HUMIDITY:
            printf("Unit : Humidity\n");
            break;
    }

    return 0;
}





