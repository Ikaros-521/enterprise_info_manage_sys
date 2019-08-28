#include "servicedao_file_impl.h"
#include "emis.h"
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

void ServiceDaoFileImpl::load(void)
{
	/*
	char str1[32],str2[32],str3[32];
	ifstream r2("data/id.dat",ios::in|ios::binary); //二进制读方式打开
    if(!r2) 
	{
        cout << "id.dat数据加载失败" <<endl;
        return;
    }
	
    r2.read((char *)&str1, sizeof(int));
	r2.read((char *)&str2, sizeof(int));	
	r2.read((char *)&str3, sizeof(int));
	mid = atoi(str1);
	did = atoi(str2);
	eid = atoi(str3);
    
    r2.close();
*/
	fstream r2("data/id.txt",ios::in);
	if(!r2.good())
	{
		cout << "id.txt数据加载异常" << endl;
	}
	r2 >> mid >> did >> eid;
	r2.close();

	fstream r3("data/managers.txt",ios::in);
	if(!r3.good())
	{
		cout << "managers.txt数据加载异常" << endl;
	}

	for(int i=0; i<MAX_M; i++)
	{
		int id;
		string name;
		string password;
		long perm;
		r3 >> id >> name;
		r3 >> password >> perm;
		m[i] = new Manager(id,name,password,perm);		
	}
	r3.close();

	fstream r("data/employee.txt",ios::in);
	if(!r.good())
	{
		cout << "employee.txt数据加载异常" << endl;
	}

	for(int i=0; i<MAX_E; i++)
	{
		int id;
		string name;
		bool gender;
		int age;
		int d_id;
		r >> id >> name;
		r >> gender >> age >> d_id;
		e[i] = new Employee(id,name,gender,age,d_id);		
	}
	r.close();

	fstream r1("data/department.txt",ios::in);
	if(!r1.good())
	{
		cout << "department.txt数据加载异常" << endl;
	}

	for(int i=0; i<MAX_D; i++)
	{
		int id;
		string name;
		int e_num;
		r1 >> id >> name >> e_num;
		d[i] = new Department(id,name,e_num);		
	}
	r1.close();
}
void ServiceDaoFileImpl::save(void)
{
	fstream r2("data/id.txt",ios::out);
	r2 << mid << " " << did << " " << eid;
	r2.close();

	fstream r("data/employee.txt",ios::out);

	for(int i=0; i<MAX_E; i++)
	{
		int id = e[i]->get_id();
		string name = e[i]->get_name();
		bool gender = e[i]->get_gender();
		int age = e[i]->get_age();
		int d_id = e[i]->get_d_id();
		r << id <<" "<< name << " ";
		r << gender <<" "<< age <<" "<< d_id <<"\n";		
	}
	r.close();

	fstream r1("data/department.txt",ios::out);

	for(int i=0; i<MAX_D; i++)
	{
		int id = d[i]->get_id();
		string name = d[i]->get_name();
		int e_num = d[i]->get_e_num();
		r1 << id <<" "<< name <<" "<< e_num<<"\n";	
	}
	r1.close();
	cout << "数据已成功保存" << endl;
}
