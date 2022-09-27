#include<stdio.h>
#include<string.h>
int main()
{
int i=10;
char str1[10]="manikanta";
char str2[10];
strncpy(str2,str1);
printf("%s",str2);
printf("%d",i);
printf("code is running succufully");
return 0;
}
