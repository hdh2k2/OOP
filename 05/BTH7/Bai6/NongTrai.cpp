#include "NongTrai.h"
#include<windows.h>
#include<string>
#include<mmsystem.h>


NongTrai::NongTrai() {

}

NongTrai::~NongTrai() {

}

void NongTrai::MENU() {

	int rac = 100;
	int luachon;
	int index = 0;
	int index1 = 1;
	int index2 = 2;
	int index3 = 3;

	system("cls");
	ChuTheoTiengNoi* x = new ChuTheoTiengNoi;
	x->ChayChu(rac);
	delete x;
	PlaySound(TEXT("loimodau.wav"), NULL, SND_SYNC);
	

	while (true) {
	
		system("cls");
		cout << "\n\n\t ========= NONG TRAI HHD ========= ";
		cout << "\n\n\t 1. Nhap thong tin gia suc loai bo ( so luong 1 con ). ";
		cout << "\n\n\t 2. Nhap thong tin  gia suc loai cuu  ( so luong 1 con ).";
		cout << "\n\n\t 3. Nhap thong tin  gia suc loai de  ( so luong 1 con ).";
		cout << "\n\n\t 4. Neu chu trai di vang, moi ban lang nghe am thanh tieng keu cua cac loai gia suc.";
		cout << "\n\n\t 5. Xuat thong tin toan bo cac loai gia suc sau 1 lan cho sua .";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============== END ============== ";
		cout << "\n\n\t Nhap lua chon: ";
		cin >> luachon;


		GiaSuc* giasuc;
		if (luachon == 1) {
			giasuc = new Bo;

			cout << "\n\n\t NHAP THONG TIN  \n";
			giasuc->input();
			nongtrai_ql_giasuc.push_back(giasuc); 
			So_Luong_Con_Bo_Hien_Hanh = So_Luong_Con_Bo_Hien_Hanh + 1 + giasuc->SoConDuocSinh_Ra();
		
	
		}

		else if (luachon == 2) {
			giasuc = new Cuu;

			cout << "\n\n\t NHAP THONG TIN \n";
			giasuc->input();
			nongtrai_ql_giasuc.push_back(giasuc);
			So_Luong_Con_Cuu_Hien_Hanh = So_Luong_Con_Cuu_Hien_Hanh + 1 + giasuc->SoConDuocSinh_Ra();
	
			
		}

		else if (luachon == 3) {
			giasuc = new De;

			cout << "\n\n\t NHAP THONG TIN \n";
			giasuc->input();
			nongtrai_ql_giasuc.push_back(giasuc);
			So_Luong_Con_De_Hien_Hanh = So_Luong_Con_De_Hien_Hanh + 1 + giasuc->SoConDuocSinh_Ra();
		
			
		}

		else if (luachon == 4) {
			int LUACHON;
			
			string TenConVat;
			while (true) {
				system("cls");
				cout << "\n\n\t ========= NONG TRAI HHD ========= ";
				cout << "\n\n\t BAN MUON NGHE TIENG CON VAT NAO KEU ??????? ";
				cout << "\n\n\t 1. Tieng bo keu . ";
				cout << "\n\n\t 2. Tieng cuu keu.";
				cout << "\n\n\t 3. Tieng de keu.";
				cout << "\n\n\t 0. Thoat";
				cout << "\n\n\t ============== END ============== ";

				cout << "\n\n\t Nhap lua chon: ";
				cin >> LUACHON;

				if (LUACHON == 1) {
					if (So_Luong_Con_Bo_Hien_Hanh != 0) {
						//index = 1;
						TenConVat = "Bo";
						TiengKeu *keu = new TiengKeu;
						keu->Keu(index1, TenConVat);
						
					}

					else {
						TenConVat = "Bo";
						TiengKeu* keu = new TiengKeu;
						keu->Keu(index, TenConVat);
						
					}
					system("pause");
					//cin.ignore();
					//cin.clear(10000, '\n');
				}

				else if (LUACHON == 2) {
					if (So_Luong_Con_Cuu_Hien_Hanh != 0) {
						//index = 2;
						TenConVat = "Cuu";
						TiengKeu* keu = new TiengKeu;
						keu->Keu(index2, TenConVat);
						
					}

					else {
						TenConVat = "Cuu";
						TiengKeu* keu = new TiengKeu;
						keu->Keu(index, TenConVat);
						
					}
					system("pause");
				}

				else if (LUACHON == 3) {
					if (So_Luong_Con_De_Hien_Hanh != 0) {
						//index = 3;
						TenConVat = "De";
						TiengKeu* keu = new TiengKeu;
						keu->Keu(index3, TenConVat);
					
					}

					else {
						TenConVat = "De";
						TiengKeu* keu = new TiengKeu;
						keu->Keu(index, TenConVat);
						
					}
					system("pause");
				}

				else if (LUACHON == 0) {
					break;
				}

				else {
					cout << "\n\n\t Lua chon khong hop le. Xin kiem tra lai!!!";
					system("pause");
				}
			}
			
		}

		else if (luachon == 5) {
			giasuc = new Cuu;

			cout << "\n\n\t TAT CA THNOG TIN THONG TIN \n";
			for (int i = 0; i < nongtrai_ql_giasuc.size(); i++) {
				nongtrai_ql_giasuc[i]->output();
			}

			cout << "\n\n\t Tong so lit sua duoc gia suc cho sau 1 lan sinh: " << TongSua() <<" lit";
			cout << "\n\n\t Sau 1 lan sinh, nong trai co tat ca: " <<  So_Luong_Con_Bo_Hien_Hanh << " con bo" << ", " << So_Luong_Con_Cuu_Hien_Hanh << " con cuu"<< ", " << So_Luong_Con_De_Hien_Hanh << " con de";
			system("pause");
		}

		else if (luachon == 0) {
			break;
		}

		else {
			cout << "\n\n\t Lua chon khong hop le. Xin kiem tra lai!!!";
			system("pause");
		}
	}
}


double NongTrai::TongSua() {
	double res = 0;
	for (int i = 0; i < nongtrai_ql_giasuc.size(); i++) {
		res += nongtrai_ql_giasuc[i]->SoLitSuaMaGiaSucChoSau1LuaSinh();
	}

	return res;
}