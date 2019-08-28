#ifndef EMIS_H
#define EMIS_H

#include "manager.h"
#include "department.h"
#include "employee.h"

#define MAX_M 10
#define MAX_D 10
#define MAX_E 30

extern Manager* m1[MAX_M];
extern int mid1,did1,eid1;
extern Manager* m[MAX_M];
extern Department* d[MAX_D];
extern Employee* e[MAX_E];
extern int mid,did,eid;

#endif//EMIS_H
