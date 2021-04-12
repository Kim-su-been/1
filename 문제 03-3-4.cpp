#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2;
	
	printf("두 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	
	result1=num1/num2;
	result2=num1%num2;
	
	printf("몫 : %d\n", result1);
	printf("나머지 : %d", result2);
	return 0;
 }
