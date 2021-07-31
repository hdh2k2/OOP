/*

	Ý tưởng: 
			- Mỗi 1 người có 5 tính cách, việc dùng 1 vector để bao bọc 5 tính cách, và truyền nó cho người là điều cần thiết. 
			Sau đó, dùng 1 danh sách quản lí kết quả đánh giá tâm lý của từng người sẽ dễ dàng hơn. Hơn nữa để tiết kiệm thời gian làm bài,
			tôi đã kết hợp tên yếu tố vào phương thức khởi tạo cho từng đối tượng trong lớp kế thừa.
			- Yếu tố nạp chồng hàm XuatThongTin từ lớp cơ sở cho các lớp kế thừa để thể hiện rõ từng tính cách của 1 con người thực thụ.

	Ngoài ra: 
			- Việc lập trình trong 1 file .cpp, giúp các bạn dễ mường tượng mô hình nhân vật cũng như dễ hiểu cách code 
			hơn trong quá trình thi trên giấy.
			- Không bắt buộc làm code tiếng việt, vì thời gian làm bài không cho phép.



*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <io.h>
#include <fcntl.h>

#define HHD 10000

using namespace std;

class Personality {
protected:
	wstring YeuTo;
	double ChiSo;
public:
	virtual double getter_ChiSo(); // Dùng phương thức ảo để thực hiện việc nạp chồng hàm (giúp thể hiện tính đa hình).
	virtual void NhapThongTin() = 0; // Dùng phương thức thuần ảo để biến lớp cơ sở thành 1 lớp trừu tượng để thực hiện tính trừu tượng.
	virtual void XuatThongTin(); // Dùng phương thức ảo để thực hiện việc nạp chồng hàm (giúp thể hiện tính đa hình).
};

double Personality::getter_ChiSo() {
	return this->ChiSo;
}

void Personality::XuatThongTin() {
	wcout << this->YeuTo << this->ChiSo;
}

class Openness :public Personality {
public:
	Openness();
	void setter_ChiSo(double ChiSo);
	void NhapThongTin();
	void XuatThongTin();
};

Openness::Openness() {
	this->YeuTo = L"O";
}

void Openness::setter_ChiSo(double ChiSo) {
	this->ChiSo = ChiSo;
}

void Openness::NhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Sẵn sàng trải nghiệm (O)': ";
	double recyl;
	wcin >> recyl;
	setter_ChiSo(recyl);
}

void Openness::XuatThongTin() {
	Personality::XuatThongTin();
	if (this->ChiSo >= 70) {
		wcout << L": Sẵn sàng trải nghiệm (O) Người có điểm cao ở yếu tố này thường là người thích những ý tưởng mới, ";
		wcout << L"\n\t thích hiểu biết nhiều lĩnh vực nhưng đồng thời cũng thích tự do, không thích bị ràng buộc, ...";
	}

	else if (this->ChiSo <= 30) {
		wcout << L": Sẵn sàng trải nghiệm (O) Người có điểm thấp ở yếu tố này thường khá bảo thủ, khó tiếp nhận những ý tưởng mới, lạ.";
		wcout << L"\n\t Họ thích sự ổn định, quen thuộc và thực tế. ";
	}

	else
		wcout << L": Không xác định rõ ";
}

class Conscientiousness :public Personality {
public:
	Conscientiousness();
	void setter_ChiSo(double ChiSo);
	void NhapThongTin();
	void XuatThongTin();
};

Conscientiousness::Conscientiousness() {
	this->YeuTo = L"C";
}

void Conscientiousness::setter_ChiSo(double ChiSo) {
	this->ChiSo = ChiSo;
}


void Conscientiousness::NhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Tự chủ tận tâm (C)': ";
	double recyl;
	wcin >> recyl;
	setter_ChiSo(recyl);
}

void Conscientiousness::XuatThongTin() {
	Personality::XuatThongTin();
	if (this->ChiSo >= 70) {
		wcout << L": Tự chủ tận tâm (C) Người có điểm cao ở yếu tố này thường là người chăm chỉ, có khả năng chịu áp lực tốt.";
		wcout << L"\n\t Họ thường là người gắn bó, trung thành với tổ chức.";
	}

	else if (this->ChiSo <= 30) {
		wcout << L": Tự chủ tận tâm (C) Người có điểm thấp ở yếu tố này thường dễ bỏ cuộc, khả năng chịu áp lực, tuân thủ kỷ luật";
		wcout << L"\n\t của tổ chức kém.";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Extraversion :public Personality {
public:
	Extraversion();
	void setter_ChiSo(double ChiSo);
	void NhapThongTin();
	void XuatThongTin();
};

Extraversion::Extraversion() {
	this->YeuTo = L"E";
}

void Extraversion::setter_ChiSo(double ChiSo) {
	this->ChiSo = ChiSo;
}


void Extraversion::NhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Hướng ngoại (E)': ";
	double recyl;
	wcin >> recyl;
	setter_ChiSo(recyl);
}

void Extraversion::XuatThongTin() {
	Personality::XuatThongTin();
	if (this->ChiSo >= 70) {
		wcout << L": Hướng ngoại (E) Người có điểm cao ở yếu tố này thường là người nhiệt tình, năng động,";
		wcout << L"\n\t giao tiếp tốt, thích thể hiện bản thân.";
	}

	else if (this->ChiSo <= 30) {
		wcout << L": Hướng ngoại (E) Người có điểm thấp ở yếu tố này thường ngại giao tiếp, không thích sự nổi bậc,";
		wcout << L"\n\t thích được làm việc độc lập. ";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Agreeableness :public Personality {
public:
	Agreeableness();
	void setter_ChiSo(double ChiSo);
	void NhapThongTin();
	void XuatThongTin();
};

Agreeableness::Agreeableness() {
	this->YeuTo = L"A";
}

void Agreeableness::setter_ChiSo(double ChiSo) {
	this->ChiSo = ChiSo;
}


void Agreeableness::NhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Hòa đồng dễ chịu (A)': ";
	double recyl;
	wcin >> recyl;
	setter_ChiSo(recyl);
}

void Agreeableness::XuatThongTin() {
	Personality::XuatThongTin();
	if (this->ChiSo >= 70) {
		wcout << L": Hòa đồng dễ chịu (A) Người có điểm cao ở yếu tố này thường thân thiện, cởi mở, đồng cảm với mọi người";
		wcout << L"\n\t nhưng nhiều khi 'thiếu chính kiến'.";
	}

	else if (this->ChiSo <= 30) {
		wcout << L": Hòa đồng dễ chịu (A) Người có điểm thấp ở yếu tố này thường đặt lợi ích của bản thân lên trên, ít đồng cảm,";
		wcout << L"\n\t chia sẽ với đồng nghiệp, có tính cạnh tranh cao.";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Neuroticism :public Personality {
public:
	Neuroticism();
	void setter_ChiSo(double ChiSo);
	void NhapThongTin();
	void XuatThongTin();
};

Neuroticism::Neuroticism() {
	this->YeuTo = L"N";
}

void Neuroticism::setter_ChiSo(double ChiSo) {
	this->ChiSo = ChiSo;
}


void Neuroticism::NhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Bất ổn cảm xúc (N)': ";
	double recyl;
	wcin >> recyl;
	setter_ChiSo(recyl);
}

void Neuroticism::XuatThongTin() {
	Personality::XuatThongTin();
	if (this->ChiSo >= 70) {
		wcout << L": Bất ổn cảm xúc (N) Người có điểm cao ở yếu tố này thường có cảm xúc tiêu cực như: lo lắng, bực bội,";
		wcout << L"\n\t tự ti, yếu đuối và khả năng chịu áp lực kém.";
	}

	else if (this->ChiSo <= 30) {
		wcout << L": Bất ổn cảm xúc (N) Người có điểm thấp ở yếu tố này thường kiểm soát được cảm xúc, ứng phó với căng thẳng tốt,";
		wcout << L"\n\t ít bị bên ngoài ảnh hưởng đến tâm trạng của bản thân.";
	}

	else
		wcout << L": Không xác định rõ ";
}

class QuanLiCamXucCuaTungNguoi {
private:
	vector<Personality*> quanli; // Dùng vector đối tượng con trỏ để hạn chế tối thiểu việc tiêu hao bộ nhớ trên bộ dữ liệu.
								 // Ngoài ra việc dùng quanli Personality để thực hiện quá trình liên kết động cho bộ dữ liệu.

public:
	~QuanLiCamXucCuaTungNguoi(); // Vì dùng đối tượng con trỏ nên bắt buộc phải có phương thức hủy để giải phóng vùng nhớ cho bộ dữ liệu.
	void NhapThongTinCamXuc();
	void XuatThongTinCamXuc();
	bool NguoiCoNguyCoKhienNhaTuyenDungCanLuuY();
};

void QuanLiCamXucCuaTungNguoi::NhapThongTinCamXuc() {
	Personality* personality;
	wcout << L"\n\n\t === Nhập kết quả đánh giá tâm lý === \n";
	personality = new Openness;
	personality->NhapThongTin();
	quanli.push_back(personality);

	personality = new Conscientiousness;
	personality->NhapThongTin();
	quanli.push_back(personality);

	personality = new Extraversion;
	personality->NhapThongTin();
	quanli.push_back(personality);

	personality = new Agreeableness;
	personality->NhapThongTin();
	quanli.push_back(personality);

	personality = new Neuroticism;
	personality->NhapThongTin();
	quanli.push_back(personality);
}

void QuanLiCamXucCuaTungNguoi::XuatThongTinCamXuc() {
	for (int i = 0; i < quanli.size() ; i++) {
		wcout << L"\n\t ";
		quanli[i]->XuatThongTin();
	}
}

bool QuanLiCamXucCuaTungNguoi::NguoiCoNguyCoKhienNhaTuyenDungCanLuuY() {
	if (quanli[1]->getter_ChiSo() <= 30 || quanli[4]->getter_ChiSo() >= 70 || (quanli[4]->getter_ChiSo() >= 70 && quanli[2]->getter_ChiSo() <= 30))
		return true;
	return false;
}

QuanLiCamXucCuaTungNguoi::~QuanLiCamXucCuaTungNguoi() {
	for (int i = 0; i < quanli.size(); i++)
		delete quanli[i];
}


class DSNguoi {
private:
	int SoLuong;
	QuanLiCamXucCuaTungNguoi quanlicamxuc[HHD]; // Dùng mảng động để giảm thiểu thời gian làm việc trên giấy cũng như không cần thêm hàm hủy
public:
	void NhapKetQuaPhanTichTamLy();
	void XuatKetQuaPhanTichTamLy();
	void XuatThongTinKetQuaPhanTichTamLyCuaNguoiDuocChon();
	void XuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY();
};

void DSNguoi::NhapKetQuaPhanTichTamLy() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\n\n\t Mời bạn nhập số người muốn phân tích tâm lý: ";
	wcin >> SoLuong;
	quanlicamxuc[SoLuong];
	for (int i = 0; i < SoLuong; i++) {
		wcout << L"\n\t Mời bạn nhập kết quả phân tích tâm lý của người thứ " << i + 1 << L": ";
		quanlicamxuc[i].NhapThongTinCamXuc();
	}
}

void DSNguoi::XuatKetQuaPhanTichTamLy() {
	wcout << L"\n\n\t === Thông tin kết quả phân tích tâm lý === \n";
	for (int i = 0; i < SoLuong; i++) {
		wcout << L"\n\t Thông tin kết quả phân tích tâm lý của người thứ " << i + 1 << L": ";
		quanlicamxuc[i].XuatThongTinCamXuc();
	}
}

void DSNguoi::XuatThongTinKetQuaPhanTichTamLyCuaNguoiDuocChon() {
	wcout << L"\n\n\t Bạn muốn xem kết quả phân tích tâm lý của người thứ mấy trong danh sách ?: ";
	int ThuTu;
	wcin >> ThuTu;
	wcout << L"\n\t Thông tin kết quả phân tích tâm lý của người thứ " << ThuTu + 1 << L": ";
	quanlicamxuc[ThuTu].XuatThongTinCamXuc();
}

void DSNguoi::XuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\n\n\t === Danh sách những người có nguy cơ cao mà các nhà tuyển dụng cần lưu ý ===\n";
	for (int i = 0; i < SoLuong; i++) {
		if (quanlicamxuc[i].NguoiCoNguyCoKhienNhaTuyenDungCanLuuY()) {
			wcout << L"\n\n\t Người thứ " << i + 1 << ": ";
			quanlicamxuc[i].XuatThongTinCamXuc();
		}
	}
}


int main() {
	DSNguoi x;
	x.NhapKetQuaPhanTichTamLy(); // Câu 1 + 2
	x.XuatKetQuaPhanTichTamLy(); // Câu 3
	x.XuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY(); // Câu 4
}