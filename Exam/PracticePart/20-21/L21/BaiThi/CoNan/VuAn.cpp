#include "VuAn.h"
#include<iostream>

using namespace std;

VuAn::VuAn() {
	this->_dokho = 0;
}

void VuAn::khoiTaoDoKho() {
	cin >> this->_dokho;
}

int VuAn::getterDoKho() {
	return this->_dokho;
}

VuAn::~VuAn() {

}