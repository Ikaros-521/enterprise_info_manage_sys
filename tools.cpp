#include "tools.h"
#include <string.h>
#include <getch.h>
#include <stdbool.h>

void clear_stdin(void)
{
	stdin->_IO_read_ptr = stdin->_IO_read_end;//清理输入缓冲区
}

char get_cmd(char start,char end)
{
	clear_stdin();

	printf("请输入指令:");
	while(true)
	{
		char val = getch();
		if(val >= start && val <= end)
		{
			printf("%c\n",val);
			return val;
		}
	}
}

char* get_pw(char* passwd,bool is_show,size_t size)
{
	if(NULL == passwd) return NULL;

	unsigned int count = 0;
	do{
		char val = getch();
		if(127 == val)
		{
			if(count > 0)
			{
				if(is_show)printf("\b \b");
				count--;
			}
			continue;
		}
		else if(10 == val)
		{
			break;
		}
		passwd[count++] = val;
		if(is_show) printf("*");
	}while(count < size -1);

	passwd[count] = '\0';
	return passwd;
}
