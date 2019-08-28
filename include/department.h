#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"
using namespace std;

class Department
{
	int id;
	string name;
	int e_num;
public:
	Department(int id=0,string name="0",int e_num=0)
	{
		this->id = id;
		this->name = name;
		this->e_num = e_num;
	}
	int get_id(void);
	string get_name(void);
	int get_e_num(void);
	void set_e_num(int cnum);
	void set_name(string cname);
	void set_id(int cid);
};

#endif//DEPARTMENT_H
