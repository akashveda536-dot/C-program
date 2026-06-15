#include<stdio.h>//header file
#define PI 3.14//PI is defined as global

int main()//To start a c program 
{//To start a local 
	int radius;//int (data type)/radius(variable)
	float area;//float(data type)/area(variable)
	char unit;//char(data type)/unit(variable)

	printf("Enter radius of circle:");//print the statement to collect values from user 
	scanf("%c",&unit);//collecting data from the user 

	printf("Enter unit of measurement(e.g.,c for cm);");//print the statement to collect values from user
	scanf("%c",&unit);//collecting data from the user 

	area= PI*(float)(radius*radius);//declaring the area with respective formula

	printf("size of float:%lu bytes\n",sizeof(area));//declaring the size for the area

	if(area>0){//checking the condition for (for loop)
		printf("Area =%.2f%c%c\n",area,unit,178);//if condition is true print the statment 
	}
	else//if condition fails in if statement 
	{//to start the condition 
		printf("Invalid radius entered.\n");//print the statement if condition fails 
	}//terminate the loop
	return 0;//end of the program 
}//The program ends
