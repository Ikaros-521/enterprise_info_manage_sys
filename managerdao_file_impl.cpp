#include "managerdao_file_impl.h"
#include "emis.h"
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

void ManagerDaoFileImpl::load(void)
{
	/*	char str1[32],str2[32],str3[32];
	ifstream r2("data/id.dat",ios::in|ios::binary); //二进制读方式打开
    if(!r2) 
	{
        cout << "id.dat数据加载失败" <<endl;
        return;
    }
	
    r2.read((char *)&str1, sizeof(int));
	r2.read((char *)&str2, sizeof(int));	
	r2.read((char *)&str3, sizeof(int));
	mid1 = atoi(str1);
	did1 = atoi(str2);
	eid1 = atoi(str3);
    
    r2.close();
*/
	fstream r2("data/id.txt",ios::in);
	if(!r2.good())
	{
		cout << "id.txt数据加载异常" << endl;
	}
	r2 >> mid1 >> did1 >> eid1;
	r2.close();


	fstream r4("data/managers.txt",ios::in);
	if(!r4.good())
	{
		cout << "managers.txt数据加载异常" << endl;
	}

	for(int i=0; i<MAX_M; i++)
	{
		int id;
		string name;
		string password;
		long perm;
		r4 >> id >> name;
		r4 >> password >> perm;
		m1[i] = new Manager(id,name,password,perm);		
	}
	r4.close();
}

void ManagerDaoFileImpl::save(void)
{
	/*	fstream r2("data/id.txt",ios::out);
	r2 << mid1 << " " << did1 << " " << eid1;
	r2.close();*/

	ofstream r2("data/id.dat", ios::out | ios::binary);
	char s[100];
	sprintf(s, "%d %d %d", mid1,did1,eid1);
    r2.write((char*)&s, sizeof(s));
    r2.close();

	fstream r4("data/managers.txt",ios::out);
	for(int i=0; i<MAX_M; i++)
	{
		int id = m1[i]->get_id();
		string name = m1[i]->get_name();
		string password = m1[i]->get_password();
		long perm = m1[i]->get_perm();
		r4 << id <<" "<< name << " ";
		r4 << password <<" "<< perm <<"\n";		
	}
	r4.close();
	cout << "数据保存成功" << endl;
}
