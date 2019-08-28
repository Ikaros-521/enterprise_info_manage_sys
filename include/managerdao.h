#ifndef MANAGERDAO_H
#define MANAGERDAO_H

class ManagerDao
{
public:
	virtual void load(void) = 0;
	virtual void save(void) = 0;
};

#endif//MANAGERDAO_H
