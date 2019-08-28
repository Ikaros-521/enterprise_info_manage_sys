#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
	int id;
	string name;
	bool gender;
	int age;
	int d_id;
public:
	Employee(int id=0,string name="0",bool gender=0,int age=0,int d_id=0)
	{
		this->id = id;
		this->name = name;
		this->gender = gender;
		this->age = age;
		this->d_id = d_id;
	}
	int get_id(void);
	string get_name(void);
	bool get_gender(void);
	int get_age(void);
	int get_d_id(void);

	void set_id(int cid);
	void set_name(string cname);
	void set_gender(bool cgender);
	void set_age(int cage);
	void set_d_id(int c_d_id);
};

#endif//EMPLOYEE_H
