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
	wstring _yeuto;
	double _chiso;
public:
	virtual double getterChiSo(); // Dùng phương thức ảo để thực hiện việc nạp chồng hàm (giúp thể hiện tính đa hình).
	virtual void nhapThongTin() = 0; // Dùng phương thức thuần ảo để biến lớp cơ sở thành 1 lớp trừu tượng để thực hiện tính trừu tượng.
	virtual void xuatThongTin(); // Dùng phương thức ảo để thực hiện việc nạp chồng hàm (giúp thể hiện tính đa hình).
};

double Personality::getterChiSo() {
	return this->_chiso;
}

void Personality::xuatThongTin() {
	wcout << this->_yeuto << this->_chiso;
}

class Openness :public Personality {
public:
	Openness();
	void setterChiSo(double _chiso);
	void nhapThongTin();
	void xuatThongTin();
};

Openness::Openness() {
	this->_yeuto = L"O";
}

void Openness::setterChiSo(double _chiso) {
	this->_chiso = _chiso;
}

void Openness::nhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Sẵn sàng trải nghiệm (O)': ";
	double recyl;
	wcin >> recyl;
	setterChiSo(recyl);
}

void Openness::xuatThongTin() {
	Personality::xuatThongTin();
	if (this->_chiso >= 70) {
		wcout << L": Sẵn sàng trải nghiệm (O) Người có điểm cao ở yếu tố này thường là người thích những ý tưởng mới, ";
		wcout << L"\n\t thích hiểu biết nhiều lĩnh vực nhưng đồng thời cũng thích tự do, không thích bị ràng buộc, ...";
	}

	else if (this->_chiso <= 30) {
		wcout << L": Sẵn sàng trải nghiệm (O) Người có điểm thấp ở yếu tố này thường khá bảo thủ, khó tiếp nhận những ý tưởng mới, lạ.";
		wcout << L"\n\t Họ thích sự ổn định, quen thuộc và thực tế. ";
	}

	else
		wcout << L": Không xác định rõ ";
}

class Conscientiousness :public Personality {
public:
	Conscientiousness();
	void setterChiSo(double _chiso);
	void nhapThongTin();
	void xuatThongTin();
};

Conscientiousness::Conscientiousness() {
	this->_yeuto = L"C";
}

void Conscientiousness::setterChiSo(double _chiso) {
	this->_chiso = _chiso;
}


void Conscientiousness::nhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Tự chủ tận tâm (C)': ";
	double recyl;
	wcin >> recyl;
	setterChiSo(recyl);
}

void Conscientiousness::xuatThongTin() {
	Personality::xuatThongTin();
	if (this->_chiso >= 70) {
		wcout << L": Tự chủ tận tâm (C) Người có điểm cao ở yếu tố này thường là người chăm chỉ, có khả năng chịu áp lực tốt.";
		wcout << L"\n\t Họ thường là người gắn bó, trung thành với tổ chức.";
	}

	else if (this->_chiso <= 30) {
		wcout << L": Tự chủ tận tâm (C) Người có điểm thấp ở yếu tố này thường dễ bỏ cuộc, khả năng chịu áp lực, tuân thủ kỷ luật";
		wcout << L"\n\t của tổ chức kém.";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Extraversion :public Personality {
public:
	Extraversion();
	void setterChiSo(double _chiso);
	void nhapThongTin();
	void xuatThongTin();
};

Extraversion::Extraversion() {
	this->_yeuto = L"E";
}

void Extraversion::setterChiSo(double _chiso) {
	this->_chiso = _chiso;
}


void Extraversion::nhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Hướng ngoại (E)': ";
	double recyl;
	wcin >> recyl;
	setterChiSo(recyl);
}

void Extraversion::xuatThongTin() {
	Personality::xuatThongTin();
	if (this->_chiso >= 70) {
		wcout << L": Hướng ngoại (E) Người có điểm cao ở yếu tố này thường là người nhiệt tình, năng động,";
		wcout << L"\n\t giao tiếp tốt, thích thể hiện bản thân.";
	}

	else if (this->_chiso <= 30) {
		wcout << L": Hướng ngoại (E) Người có điểm thấp ở yếu tố này thường ngại giao tiếp, không thích sự nổi bậc,";
		wcout << L"\n\t thích được làm việc độc lập. ";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Agreeableness :public Personality {
public:
	Agreeableness();
	void setterChiSo(double _chiso);
	void nhapThongTin();
	void xuatThongTin();
};

Agreeableness::Agreeableness() {
	this->_yeuto = L"A";
}

void Agreeableness::setterChiSo(double _chiso) {
	this->_chiso = _chiso;
}


void Agreeableness::nhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Hòa đồng dễ chịu (A)': ";
	double recyl;
	wcin >> recyl;
	setterChiSo(recyl);
}

void Agreeableness::xuatThongTin() {
	Personality::xuatThongTin();
	if (this->_chiso >= 70) {
		wcout << L": Hòa đồng dễ chịu (A) Người có điểm cao ở yếu tố này thường thân thiện, cởi mở, đồng cảm với mọi người";
		wcout << L"\n\t nhưng nhiều khi 'thiếu chính kiến'.";
	}

	else if (this->_chiso <= 30) {
		wcout << L": Hòa đồng dễ chịu (A) Người có điểm thấp ở yếu tố này thường đặt lợi ích của bản thân lên trên, ít đồng cảm,";
		wcout << L"\n\t chia sẽ với đồng nghiệp, có tính cạnh tranh cao.";
	}

	else
		wcout << L": Không xác định rõ ";
}


class Neuroticism :public Personality {
public:
	Neuroticism();
	void setterChiSo(double _chiso);
	void nhapThongTin();
	void xuatThongTin();
};

Neuroticism::Neuroticism() {
	this->_yeuto = L"N";
}

void Neuroticism::setterChiSo(double _chiso) {
	this->_chiso = _chiso;
}


void Neuroticism::nhapThongTin() {
	wcout << L"\t Mời bạn nhập chỉ số cho tính cách 'Bất ổn cảm xúc (N)': ";
	double recyl;
	wcin >> recyl;
	setterChiSo(recyl);
}

void Neuroticism::xuatThongTin() {
	Personality::xuatThongTin();
	if (this->_chiso >= 70) {
		wcout << L": Bất ổn cảm xúc (N) Người có điểm cao ở yếu tố này thường có cảm xúc tiêu cực như: lo lắng, bực bội,";
		wcout << L"\n\t tự ti, yếu đuối và khả năng chịu áp lực kém.";
	}

	else if (this->_chiso <= 30) {
		wcout << L": Bất ổn cảm xúc (N) Người có điểm thấp ở yếu tố này thường kiểm soát được cảm xúc, ứng phó với căng thẳng tốt,";
		wcout << L"\n\t ít bị bên ngoài ảnh hưởng đến tâm trạng của bản thân.";
	}

	else
		wcout << L": Không xác định rõ ";
}

class QuanLiCamXucCuaTungNguoi {
private:
	vector<Personality*> _quanli; // Dùng vector đối tượng con trỏ để hạn chế tối thiểu việc tiêu hao bộ nhớ trên bộ dữ liệu.
								 // Ngoài ra việc dùng quanli Personality để thực hiện quá trình liên kết động cho bộ dữ liệu.

public:
	~QuanLiCamXucCuaTungNguoi(); // Vì dùng đối tượng con trỏ nên bắt buộc phải có phương thức hủy để giải phóng vùng nhớ cho bộ dữ liệu.
	void nhapThongTinCamXuc();
	void xuatThongTinCamXuc();
	bool nguoiCoNguyCoKhienNhaTuyenDungCanLuuY();
};

void QuanLiCamXucCuaTungNguoi::nhapThongTinCamXuc() {
	Personality* personality;
	wcout << L"\n\n\t === Nhập kết quả đánh giá tâm lý === \n";
	personality = new Openness;
	personality->nhapThongTin();
	_quanli.push_back(personality);

	personality = new Conscientiousness;
	personality->nhapThongTin();
	_quanli.push_back(personality);

	personality = new Extraversion;
	personality->nhapThongTin();
	_quanli.push_back(personality);

	personality = new Agreeableness;
	personality->nhapThongTin();
	_quanli.push_back(personality);

	personality = new Neuroticism;
	personality->nhapThongTin();
	_quanli.push_back(personality);
}

void QuanLiCamXucCuaTungNguoi::xuatThongTinCamXuc() {
	for (int i = 0; i < _quanli.size() ; i++) {
		wcout << L"\n\t ";
		_quanli[i]->xuatThongTin();
	}
}

bool QuanLiCamXucCuaTungNguoi::nguoiCoNguyCoKhienNhaTuyenDungCanLuuY() {
	if (_quanli[1]->getterChiSo() <= 30 || _quanli[4]->getterChiSo() >= 70 || (_quanli[4]->getterChiSo() >= 70 && _quanli[2]->getterChiSo() <= 30))
		return true;
	return false;
}

QuanLiCamXucCuaTungNguoi::~QuanLiCamXucCuaTungNguoi() {
	for (int i = 0; i < _quanli.size(); i++)
		delete _quanli[i];
}


class DSNguoi {
private:
	int _soluong;
	QuanLiCamXucCuaTungNguoi _quanlicamxuc[HHD]; // Dùng mảng động để giảm thiểu thời gian làm việc trên giấy cũng như không cần thêm hàm hủy
public:
	void nhapKetQuaPhanTichTamLy();
	void xuatKetQuaPhanTichTamLy();
	void xuatThongTinKetQuaPhanTichTamLyCuaNguoiDuocChon();
	void xuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY();
};

void DSNguoi::nhapKetQuaPhanTichTamLy() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\n\n\t Mời bạn nhập số người muốn phân tích tâm lý: ";
	wcin >> _soluong;
	_quanlicamxuc[_soluong];
	for (int i = 0; i < _soluong; i++) {
		wcout << L"\n\t Mời bạn nhập kết quả phân tích tâm lý của người thứ " << i + 1 << L": ";
		_quanlicamxuc[i].nhapThongTinCamXuc();
	}
}

void DSNguoi::xuatKetQuaPhanTichTamLy() {
	wcout << L"\n\n\t === Thông tin kết quả phân tích tâm lý === \n";
	for (int i = 0; i < _soluong; i++) {
		wcout << L"\n\t Thông tin kết quả phân tích tâm lý của người thứ " << i + 1 << L": ";
		_quanlicamxuc[i].xuatThongTinCamXuc();
	}
}

void DSNguoi::xuatThongTinKetQuaPhanTichTamLyCuaNguoiDuocChon() {
	wcout << L"\n\n\t Bạn muốn xem kết quả phân tích tâm lý của người thứ mấy trong danh sách ?: ";
	int _thutu;
	wcin >> _thutu;
	wcout << L"\n\t Thông tin kết quả phân tích tâm lý của người thứ " << _thutu + 1 << L": ";
	_quanlicamxuc[_thutu].xuatThongTinCamXuc();
}

void DSNguoi::xuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\n\n\t === Danh sách những người có nguy cơ cao mà các nhà tuyển dụng cần lưu ý ===\n";
	for (int i = 0; i < _soluong; i++) {
		if (_quanlicamxuc[i].nguoiCoNguyCoKhienNhaTuyenDungCanLuuY()) {
			wcout << L"\n\n\t Người thứ " << i + 1 << ": ";
			_quanlicamxuc[i].xuatThongTinCamXuc();
		}
	}
}


int main() {
	DSNguoi x;
	x.nhapKetQuaPhanTichTamLy(); // Câu 1 + 2
	x.xuatKetQuaPhanTichTamLy(); // Câu 3
	x.xuatDanhSachNhungNguoiCoNguyCoCaoCanLuuY(); // Câu 4
}