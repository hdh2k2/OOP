#pragma once
#include"Bo.h"
#include"Cuu.h"
#include"De.h"
#include<vector>
#include"TiengKeu.h"
#include"ChuTheoTiengNoi.h"

class NongTrai {
private:
	vector<GiaSuc*> nongtrai_ql_giasuc;
	int So_Luong_Con_Bo_Hien_Hanh = 0;
	int So_Luong_Con_Cuu_Hien_Hanh = 0;
	int So_Luong_Con_De_Hien_Hanh = 0;
	int CHISO;
public:
	void MENU();
	NongTrai();
	~NongTrai();

	double TongSua();
};

