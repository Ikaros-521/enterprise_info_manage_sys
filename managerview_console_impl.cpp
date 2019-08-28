#include "managerview_console_impl.h"
#include "managerservice_impl.h"
#include "managerdao_file_impl.h"
#include <stdlib.h>
#include "tools.h"

void ManagerViewConsoleImpl::manager_sys(void)
{
	ManagerServiceImpl ms;
	ManagerDaoFileImpl md;
	md.load();
	if(!ms.login())
	{
		return;
	}
	while(1)
	{
		system("clear");
		ms.menu();//通过控制台显示主菜单
		switch(get_cmd('0','3'))
		{
			case '1': ms.add(); break;
			case '2': ms.del(); break;
			case '3': ms.list(); break;
			case '0': md.save(); return;
		}
		//getch();
	}
}
