#ifndef SERVICEIMPL_H
#define SERVICEIMPL_H

#include "service.h"

class ServiceImpl:public Service
{
public:
	bool manager_login(void);
	void menu(void);//显示运营管理子菜单
	void addDept(void);//增加部门菜单项
	void deleteDept(void);//删除部门菜单项
	void listDept(void);//列出部门菜单项
	void addEmp(void);//增加员工菜单项
	void deleteEmp(void);//删除员工菜单项
	void modifyEmp(void);//修改员工信息菜单项
	void listEmp(void);//列出部门员工菜单项
	void listAllEmp(void);//列出所有员工菜单项
};

#endif//SERVICEIMPL_H
