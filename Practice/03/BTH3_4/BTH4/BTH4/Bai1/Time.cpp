#include "Time.h"
#include<iostream>

using namespace std;


void  fix(int& x) {
	cout << "Nhap sai, moi ban nhap lai: ";
	cin >> x;

}

void Time::getInfo() {
	cout << "Input hour: ";
	cin >> hour;
	while (hour < 0 ) {
		fix(hour);
	}
	cout << "Input minute: ";
	cin >> minute;
	while (minute < 0 ) {
		fix(minute);
	}
	
	cout << "Input second: ";
	cin >> second;
	while (second < 0 ) {
		fix(second);
	}
}

Time Time::FormatTime() {
	int d = 0;
	int s = 0;
	while (this->second > 60) {
		this->second = this->second - 60;
		d++;
	}

	this->minute += d;

	while (this->minute > 60) {
		this->minute = this->minute - 60;
		s++;
	}
	this->hour += s;
	while (this->hour > 24) {
		this->hour = this->hour - 24;
	}

	return *this;
}

Time Time::CongThoiGian( int x ) {
	this->second = this->second + x;
	return *this;
}

Time Time::TruThoiGian(int k) {
	this->second = this->second - k;
	return *this;
}


void Time::Printf() {
	cout << this->hour << ":" << this->minute << ":" << this->second;
}