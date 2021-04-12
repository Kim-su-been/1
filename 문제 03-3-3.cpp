#include <stdio.h>
int main(void)
{
	int num;
	int result;
	
	printf("하나의 정수 입력 : ");
	scanf("%d", &num);
	
	result=num*num;
	printf("결과값 : %d", result);
	return 0;
}
