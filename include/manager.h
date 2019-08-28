#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
using namespace std;

class Manager
{
	int id;	//编号
	string name;	//用户名
	string password;	//密码
	long perm;	//加锁
public:
	Manager(int id=0,string name="0",string password="0",long perm=0)
	{
		this->id = id;
		this->name = name;
		this->password = password;
		this->perm = perm;
	}
	int get_id(void);
	string get_name(void);
	string get_password(void);
	long get_perm(void);

	void set_id(int cid);
	void set_name(string cname);
	void set_password(string cpassword);
	void set_perm(long cperm);
};

#endif//MANAGER_H
