#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m;
	while (~scanf("%d", &m)) {
		int start = m * (m - 1) + 1;//�ҵ���Ӧm^3����ʼ����
		char buf[10240] = { 0 };
		//sprintf(buf, format, ...) ��printf�÷����ƣ���ʽ���ַ������ǲ����ڴ�ӡ���Ƿŵ�һ��buf��
		sprintf(buf, "%d", start);//�Ƚ���ʼ����ת����Ϊ�ַ�������buf��
		for (int i = 1; i < m; i++) {
			//Ȼ�󽫽�������m-1����������ת��Ϊ�ַ���������ָ����ʽ����buf��
			//%s+%d, Ҫ������һ���ַ�����Ȼ����+���ţ�Ȼ���Ǹ����ֵĸ�ʽ����Ӧ��bufԭ�ȵ����ݣ�������
			sprintf(buf, "%s+%d", buf, start += 2);
		}
		printf("%s\n", buf);
	} 
	return 0;
}