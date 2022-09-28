/*#include "name.h"

void main()
{
	printf("이름: %s\n", NAME);
	printf("나이: %d\n", AGE);
	printf("직업: %s\n", JOB);
}


*/


#include <Windows.h>
#include "def_common.h"


void cpu_init()
{
	printf("초기화 내용\n");
}

void cpu_run()
{
	int i;
	for (i = 1; i <= NUM; i++)
	{
		printf("작업 수행중\n");
	}
}
void main()
{
	int cnt_num = 0;
	while (TRUE) // “def_common.h”에서 1로 정의  무한 반복문
	{
		cpu_init(); // “def_common.h”에서 선언된 함수
		cpu_run(); // “def_common.h”에서 선언된 함수
		cnt_num++;
		printf("%d회 수행완료 \n", cnt_num);
		Sleep(1000);																				  
	}
}