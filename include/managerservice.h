#ifndef MANAGERSERVICE_H
#define MANAGERSERVICE_H

#include <iostream>

using namespace std;

class ManagerService
{
public:
	virtual bool login(void) = 0;//超级管理员登陆
	virtual void menu(void) = 0;//通过控制台显示主菜单
	virtual void add(void) = 0;//通过控制台处理增加管理员菜单项
	virtual void del(void) = 0;//通过控制台处理删除管理员菜单项
	virtual void list(void) = 0;//通过控制台处理列出所有管理员菜单项
};

#endif//MANAGERSERVICE_H
