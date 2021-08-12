//area of triangle
//price of 1 computer book is 300. find the price of 12 books
//convert fahrenheit into celcius and vice versa 
//cel=5/9*(f-32) , fah=9/5*(c+32)
//convert inch onto foot (1 foot= 12 inches) and vice versa
#include<stdio.h>
int main()
{
	float b,h,area;
	printf("enter base and height length\t");
	scanf("%f,%f",&b,&h);
	area=0.5*b*h;
	printf("area of triangle=%f\t\n\n",area);
	
	printf("the price of 1 computer book is 300\n");
	printf("the price of 12 books=%d\n\n",12*300);
	
	float cel,fah;
	printf("enter temperature in fahrenheit\t");
	scanf("%f",&fah);
	cel=(5.0/9.0)*(fah-32.0);
	printf("the temperature in celcius is %f\t\n\n",cel);
	
	printf("enter the temperature in celsius\t");
	scanf("%f",&cel);
	fah=9.0/5.0*(cel+32);
	printf("the temperature in fahrenheit is %f\t\n\n",fah);
	
	float inc,foot;
	printf("enter the length in inch\t");
	scanf("%f",&inc);
	foot=inc/12.0;
	printf("the length in foot is %f\n",foot);
	
	printf("enter the length in foot\t");
	scanf("%f",&foot);
	inc=12.0*foot;
	printf("the length in inch is %f",inc);
	return 0;
	
	
}

