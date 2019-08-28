#ifndef SERVICE_H
#define SERVICE_H

class Service
{
public:
	virtual bool manager_login(void) = 0;
	virtual void menu(void) = 0;//显示运营管理子菜单
	virtual void addDept(void) = 0;//增加部门菜单项
	virtual void deleteDept(void) = 0;//删除部门菜单项
	virtual void listDept(void) = 0;//列出部门菜单项
	virtual void addEmp(void) = 0;//增加员工菜单项
	virtual void deleteEmp(void) = 0;//删除员工菜单项
	virtual void modifyEmp(void) = 0;//修改员工信息菜单项
	virtual void listEmp(void) = 0;//列出部门员工菜单项
	virtual void listAllEmp(void) = 0;//列出所有员工菜单项
};

#endif//SERVICE_H
