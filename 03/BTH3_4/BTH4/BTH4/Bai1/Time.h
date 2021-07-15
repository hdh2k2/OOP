#pragma once
class Time
{
private:
	int hour = 0;
	int minute = 0;
	int second = 0;
public:
	Time();
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}

	void getInfo();
	void Printf();
	void fixNhap();
	Time CongThoiGian( int x);
	Time TruThoiGian(int k);
	Time FormatTime();
	//void ~Time();
};



