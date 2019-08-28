#ifndef MANAGERSERVICE_IMPL_H
#define MANAGERSERVICE_IMPL_H

#include <iostream>
#include <string.h>
#include "managerservice.h"
#include "manager.h"

class ManagerServiceImpl:public ManagerService
{
public:
	bool login(void);//超级管理员登陆
	void menu(void);//通过控制台显示主菜单
	void add(void);//通过控制台处理增加管理员菜单项
	void del(void);//通过控制台处理删除管理员菜单项
	void list(void);//通过控制台处理列出所有管理员菜单项
};

#endif//MANAGERSERVICE_IMPL_H
