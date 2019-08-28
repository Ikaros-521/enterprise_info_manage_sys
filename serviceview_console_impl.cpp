#include "serviceview_console_impl.h"
#include "manager.h"
#include "servicedao_file_impl.h"
#include <stdlib.h>

void ServiceViewConsoleImpl::service_sys(void)
{
	ServiceImpl si;
	ServiceDaoFileImpl sd;
	sd.load();
	if(!si.manager_login())
	{
		cout << "登陆失败" << endl;
		return;
	}
	while(1)
	{
		system("clear");
		si.menu();
		switch(get_cmd('0','8'))
		{
			case '1': si.addDept(); break;
			case '2': si.deleteDept(); break;
			case '3': si.listDept(); break;
			case '4': si.addEmp(); break;
			case '5': si.deleteEmp(); break;
			case '6': si.modifyEmp(); break;
			case '7': si.listEmp(); break;
			case '8': si.listAllEmp(); break;
			case '0': sd.save(); return;
		}
		//getch();
	}
}
