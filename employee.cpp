#include "employee.h"

int Employee::get_id(void)
{
	return id;
}
string Employee::get_name(void)
{
	return name;
}
bool Employee::get_gender(void)
{
	return gender;
}
int Employee::get_age(void)
{
	return age;
}
int Employee::get_d_id(void)
{
	return d_id;
}

void Employee::set_id(int cid)
{
	id = cid;
}
void Employee::set_name(string cname)
{
	name = cname;
}
void Employee::set_gender(bool cgender)
{
	gender = cgender;
}
void Employee::set_age(int cage)
{
	age = cage;
}
void Employee::set_d_id(int c_d_id)
{
	d_id = c_d_id;
}
