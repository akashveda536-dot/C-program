#include <stdio.h>
enum DeviceState
{
    INIT,
    RUNNING,
    ERROR
};
void updateState(enum DeviceState *state, enum DeviceState newState)
{
    *state = newState;
}
int main()
{
    enum DeviceState state = INIT;

    printf("Initial State = %d\n", state);

    updateState(&state, RUNNING);
    printf("Current State = %d\n", state);

    updateState(&state, ERROR);
    printf("Current State = %d\n", state);

    return 0;
}
