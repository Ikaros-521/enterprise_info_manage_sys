#ifndef SERVICEDAO_FILE_IMPL_H
#define SERVICEDAO_FILE_IMPL_H

#include "servicedao.h"

class ServiceDaoFileImpl:public ServiceDao
{
public:
	void load(void);//从数据存储读取部门及员工信息
	void save(void);//将部门及员工信息写入数据存储
};

#endif//SERVICEDAO_FILE_IMPL_H
