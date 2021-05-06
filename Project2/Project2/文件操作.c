#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
char file_name[128] = {0};
char Str[21] = {0};
char test[10][201] = { 0 };
char str[201] ;
int i = 0;
printf("input the file's name and the string: ");
scanf("%s",file_name);
scanf("%s",Str);
FILE* fp = fopen(file_name,"r");
if (fp = NULL)
{
return 0;
}
printf("Output:\n");
while (!feof(fp))
{
fgets(test,200,fp);
test[i][201] = str;
i++;
}
for (i = 0; i < 10; i++)
{
printf("%s",str[i]);
}

return 0;
}
