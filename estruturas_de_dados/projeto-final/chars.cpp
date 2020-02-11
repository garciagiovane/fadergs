#include <string.h>
#include <stdio.h>
int main(void)
{
	char string[10] = "ae";
	char text2[10];
	int i = 5000;
	sprintf(text2,"%d",i);	
	strcat(text2,string);
	printf("%s",text2);	
}
