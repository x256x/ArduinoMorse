  /*==========================*/
 /*<Copyright (c) 2022 x256x>*/
/*==========================*/
#ifndef LIBMORSE_H
#define LIBMORSE_H

#include <Arduino.h>


extern int dly[5];
extern int PIN;
extern int fre;

void m_init(int x,int y,int z);
void m_str(String x);
void t(int x);
void m(const char* x);

#endif