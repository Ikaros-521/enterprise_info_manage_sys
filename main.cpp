#include <iostream>
#include <stdlib.h>
#include "tools.h"
#include "service_impl.h"
#include "serviceview_console_impl.h"
#include "managerservice_impl.h"
#include "managerview_console_impl.h"

using namespace std;

void menu(void)
{
	cout << "****企业信息管理系统****" << endl;
	cout << "    1.管理子系统" << endl;
	cout << "    2.业务子系统" << endl;
	cout << "    0.退出系统" << endl;
	cout << "______________________" << endl;
}

int main()
{
	ServiceViewConsoleImpl sv;
	ManagerViewConsoleImpl mv;
	while(1)
	{
		system("clear");
		menu();
		switch(get_cmd('0','2'))
		{
			case '1': mv.manager_sys(); break;
			case '2': sv.service_sys(); break;
			case '0': return 0;
		}
		getch();
	}
}
