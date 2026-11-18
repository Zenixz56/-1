#ifndef _SERVICE_HPP_
#define _SERVICE_HPP_

#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
void GetLine(std::wstring& str);
bool IsNumber(const std::wstring& str);

__forceinline void Err()
{
	std::wcout << L"Некоректный ввод\n";
	Sleep(1500);
}

template <class ArrType>
void FillArray(ArrType* staticArr, ArrType* dynamicArr, size_t commonSize)
{
	for (size_t i = 0; i < commonSize; i++)
	{
		dynamicArr[i] = staticArr[i];
	}
}

#endif // !_SERVICE_HPP_