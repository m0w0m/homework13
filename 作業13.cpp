#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int x,y;
	

	printf("請選擇性別並輸入年齡，(1)男 (2)女");
	scanf("%d %d", &x,&y);
	if (x == 1)
	{
		if (y - 8 < 18)
			printf("你不能結婚");
		else if (y - 8 >= 18)
			printf("你可以結婚");
		else
			printf("輸入錯誤");
	}
	else if (x == 2)
	{
		if (y - 8 < 16)
		printf("你不能結婚");
		else if (y - 8 >= 16)
		printf("你可以結婚");
		else
		printf("輸入錯誤");
	}
	else
		printf("輸入錯誤");

	system("pause");
	return 0;
}