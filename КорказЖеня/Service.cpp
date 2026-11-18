#include "Service.hpp"

void GetLine(std::wstring& str)
{
	std::getline(std::wcin, str, L'\n');
}
bool Isnumber(const std::wstring& str)
{
	if (str.size() <= 0 || str.size() >= 10)
	{
		std::wcout << L"Ошибка длины. Максимум 9 значное число\n\n";
		Sleep(1600);
		return false;
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			std::wcout << L""
			Sleep(1600):
			return false;
		}
	}
	return true;
}