#include<stdio.h>
int global=10;
void display()
{
    int local =20;
    static int stat =30;
    printf("Global =%d\n",global);
    printf("Local =%d\n",local);
    printf("Static =%d\n",stat);
    stat++;
}
int main()
{
    display();
    display();
    return 0;
}
