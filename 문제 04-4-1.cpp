#include <stdio.h>
int main(void)
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	
	num=~num;
	num=num+1;
	printf("결과 출력 : %d", num);
	return 0;
}
