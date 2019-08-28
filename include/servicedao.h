#ifndef SERVICEDAO_H
#define SERVICEDAO_H

class ServiceDao
{
public:
	virtual void load(void) = 0;
	virtual void save(void) = 0;
};

#endif//SERVICEDAO_H
