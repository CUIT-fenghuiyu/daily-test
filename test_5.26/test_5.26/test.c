#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void reverse(char* start, char* end)
{
	char tmp;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

	return;
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);

	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	char* end = arr;
	
	while (1)
	{
		while(*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == '\0')
		{
			break;
		}
		end++;
		start = end;
	}

	printf("%s\n", arr);

	return 0;
}