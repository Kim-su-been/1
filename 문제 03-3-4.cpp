#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2;
	
	printf("�� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);
	
	result1=num1/num2;
	result2=num1%num2;
	
	printf("�� : %d\n", result1);
	printf("������ : %d", result2);
	return 0;
 }
