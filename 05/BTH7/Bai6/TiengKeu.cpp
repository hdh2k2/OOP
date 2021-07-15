#include "TiengKeu.h"
//#define mciSendString mciSendStringW

TiengKeu::TiengKeu() {

}

TiengKeu::~TiengKeu() {

}

void TiengKeu::Keu(int &index, string TenConVat) {
	int check = 0;
	if (index == 0) {
		if (TenConVat == "Bo") {
			ChuTheoTiengNoi x;
			check = 1;
			PlaySound(L"KhongCoBo.wav", NULL, SND_SYNC);
			x.ChayChu(check);
			//cin.ignore();
		}

		else if (TenConVat == "Cuu") {
			ChuTheoTiengNoi x;
			check = 2;
			PlaySound(L"KhongCoCuu.wav", NULL, SND_SYNC);
			x.ChayChu(check);
			//cin.ignore();
		}

		else if (TenConVat == "De") {
			ChuTheoTiengNoi x;
			check = 3;
			PlaySound(L"KhongCoDe.wav", NULL, SND_SYNC);
			x.ChayChu(check);
			//cin.ignore();
		}
	}

	else if (index == 1 ) {
		ChuTheoTiengNoi x;
		check = 4;
		PlaySound(L"VuiLongDoi.wav", NULL, SND_SYNC);
		x.ChayChu(check);
		PlaySound(L"BoKeu.wav", NULL, SND_SYNC);
		//cin.ignore();
	}

	else if (index == 2) {
		check = 4;
		PlaySound(L"VuiLongDoi.wav", NULL, SND_SYNC);
		ChuTheoTiengNoi x;
		x.ChayChu(check);
		PlaySound(L"CuuKeu.wav", NULL, SND_SYNC);
		//cin.ignore();
	}

	else if (index == 3) {
		check = 4;
		PlaySound(L"VuiLongDoi.wav", NULL, SND_SYNC);
		ChuTheoTiengNoi x;
		x.ChayChu(check);
		PlaySound(L"DeKeu.wav", NULL, SND_SYNC);
		//cin.ignore();
	}
}