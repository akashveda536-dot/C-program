#include<stdio.h>

struct employee
{
	int id;
	float salary;
	char department[20];
};
int main()
{
	struct employee E1= {111,40000.00,"RandD"};
	struct employee E2= {112,30000.00,"design"};
	struct employee E3= {113,40000.00,"NPD"};

printf("%d %.2f %s\n",E1.id,E1.salary,E1.department);
printf("%d %.2f %s\n",E2.id,E2.salary,E2.department);
printf("%d %.2f %s\n",E3.id,E3.salary,E3.department);

return 0;
}

  

