#include <iostream>
#include <io.h>
#include <fcntl.h>
#include"Nguoi.h"
#include"QuanLiSoHong.h"


int main(){
    /*_setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"Tiếng Việt có dấu" << std::endl;
    wchar_t test[256] = { 0 };
    std::wcout << L"Hãy nhập vào một chuỗi ký tự:" << std::endl;
    std::wcin >> test;
    std::wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << std::endl;
    std::wcout << test;
    std::wstring s = L"ê";
    std::wcout << s;*/
    QuanLiSoHong x;
    x.KhoiTaoDanhSachQuanLi();
    return 0;
}