//Write a program to read age of person  and find out the category among following according to age.
//           category                                         age
//           child                                           0 to 12
//           teenage                                         13 to 19
//           adult life                                      20 to 30
//           mature life                                     31 to 50
//           old age                                         over 50

#include<stdio.h>
int main()
{
float age_person;
printf("enter your age \n");
scanf("%f",&age_person);
if(age_person>0)
{
if(age_person>=0 && age_person<=12)
        printf("Your are child\n");
else if(age_person>12 && age_person<=19)
        printf("Your are teenager\n");
    else if(age_person>19 && age_person<=30)
        printf("Your are in adult life\n");
else if(age_person>30 && age_person<=50)
        printf("Your are passing your mature life now\n");
else if(age_person>50)
        printf("Your are now an old person\n");
    else
	printf("thank you!!!!\n");
}
else 
printf("invalid entry");
return 0;
}
