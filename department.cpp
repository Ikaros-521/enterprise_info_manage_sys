#include "department.h"

int Department::get_id(void)
{
	return id;
}
string Department::get_name(void)
{
	return name;
}
int Department::get_e_num(void)
{
	return e_num;
}
void Department::set_e_num(int cnum)
{
	e_num = cnum;
}
void Department::set_name(string cname)
{
	name = cname;
}
void Department::set_id(int cid)
{
	id = cid;
}
