#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m;
	while (~scanf("%d", &m)) {
		int start = m * (m - 1) + 1;//找到对应m^3的起始奇数
		char buf[10240] = { 0 };
		//sprintf(buf, format, ...) 与printf用法类似，格式化字符串但是不用于打印而是放到一个buf中
		sprintf(buf, "%d", start);//先将起始奇数转换成为字符串存入buf中
		for (int i = 1; i < m; i++) {
			//然后将紧随随后的m-1个奇数数字转换为字符串，按照指定格式放入buf中
			//%s+%d, 要求先有一个字符串，然后是+符号，然后是个数字的格式，对应是buf原先的数据，和奇数
			sprintf(buf, "%s+%d", buf, start += 2);
		}
		printf("%s\n", buf);
	} 
	return 0;
}