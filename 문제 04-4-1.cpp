#include <stdio.h>
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	
	num=~num;
	num=num+1;
	printf("��� ��� : %d", num);
	return 0;
}
