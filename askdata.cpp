/*perimeter of rectangle, simple interest, perimeter of circle*/
#include<stdio.h>
int main()
{
/*	int l,b,peri;
	printf("enter length of the rectangle\t");
	scanf("%d",&l);
	printf("enter breadth of the rectangle\t");
	scanf("%d",&b);
	peri=2*(l+b);
	printf("perimeter of rectangle is %d\t\n\n",peri);
	
	float p,t,r;
	printf("enter the principal\t");
	scanf("%f",&p);
	printf("enter the time\t");
	scanf("%f",&t);
	printf("enter the rate\t");
	scanf("%f",&r);
	float s=(p*t*r)/100;
	printf("the simple interest is %f\t\n\n",s);
	
	float ra,pr;
	printf("enter the radius of circle\t");
	scanf("%f",&ra);
	pr=2*3.14159*ra;
	printf("the perimeter of cicle is %f\t",pr);
	
	float len,bre,he;
	printf("enter length breadth and height");
	scanf("%f,%f,%f",&len,&bre,&he);
	float vol=len*bre*he;
	printf("the volume of cuboid is %f",vol);
	*/
	
	float len;
	printf("enter length in cm");
	scanf("%f",&len);
	float m=len/100;
	printf("%f in m is %f",len,m);
	return 0;
}
