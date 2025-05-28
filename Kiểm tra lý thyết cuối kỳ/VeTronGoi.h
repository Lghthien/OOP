#pragma once
#include"veDS.h"
class VTG:public VE
{
public:
	VTG(string = "", string = "", int = 1900, int = 0);
	~VTG();
	int getGia();
	string getLoai();
};

