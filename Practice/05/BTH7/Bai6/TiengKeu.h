#pragma once
#include"GiaSuc.h"
#include<windows.h>
#include<mmsystem.h>
#include<string>
#include"ChuTheoTiengNoi.h"

class TiengKeu {
public:
	TiengKeu();
	~TiengKeu();
	void Keu(int &index, string TenConVat);
	friend class GiaSuc;
};

