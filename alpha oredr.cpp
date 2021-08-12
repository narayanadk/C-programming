#include <stdio.h> 
#include <string.h> 
int main()
{
   int i, j, num=10;
   char name[50][30], tname[50][30], temp[50];
   printf("Please enter %d names\n", num);
   for(i=0; i< num ; i++)
   {
      gets(name[i]);
      strcpy (tname[i], name[i]);
   }
   for(i=0; i < num-1 ; i++)
   {
      for(j=i+1; j< num; j++)
      {
         if(strcmp(name[i],name[j]) > 0)
         {
             strcpy(temp,name[i]);
             strcpy(name[i],name[j]);
             strcpy(name[j],temp);
         }
      }
   }
   printf("Names after sorting in alphabetical order\n");
   for(i=0; i< num ; i++)
   {
      printf("%s\n",name[i]);
   }
   return 0;
}
