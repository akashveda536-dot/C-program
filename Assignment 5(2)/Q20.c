#include <stdio.h>

typedef enum
{
    TEMP,
    PRESSURE,
    HUMIDITY
} Unit;

typedef struct
{
    float value;
    Unit unit;
} Sensor;

int main()
{
    Sensor s1;

    s1.value = 75.2;
    s1.unit = HUMIDITY;

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
