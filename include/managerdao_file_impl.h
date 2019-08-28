#ifndef MANAGERDAO_FILE_IMPL_H
#define MANAGERDAO_FILE_IMPL_H

#include "managerdao.h"

class ManagerDaoFileImpl:public ManagerDao
{
public:
	void load(void);
	void save(void);
};

#endif//MANAGERDAO_FILE_IMPL_H
