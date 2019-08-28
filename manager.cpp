#include "manager.h"

int Manager::get_id(void)
{
	return id;
}
string Manager::get_name(void)
{
	return name;
}
string Manager::get_password(void)
{
	return password;
}
long Manager::get_perm(void)
{
	return perm;
}

void Manager::set_id(int cid)
{
	id = cid;
}
void Manager::set_name(string cname)
{
	name = cname;
}
void Manager::set_password(string cpassword)
{
	password = cpassword;
}
void Manager::set_perm(long cperm)
{
	perm = cperm;
}
