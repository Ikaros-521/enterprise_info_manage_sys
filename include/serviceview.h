#ifndef SERVICEVIEW_H
#define SERVICEVIEW_H

class ServiceView
{
public:
	virtual void service_sys(void) = 0;
	virtual bool manager_login(void) = 0;
};

#endif//SERVICEVIEW_H
