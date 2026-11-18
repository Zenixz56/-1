#include "Storage.h"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;

size_t maxStorageSize = 2000;
size_t currentStorageSize = 0;
void CreateStorage(int mode)
{

	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;

		size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Футболка белая с принтом", L"Кофта с капюшенном черная",
				L"Джинсы узкие синие", L"Шорты серые", L"Кроссовки nike модные",
				L"Кепка с большим козырьком", L"Подштаники теплые", L"Кофта с утиплителем"
				L"Ботинки зимние с шипами на подошве", L"Футболка черная", L"Шорты черные"
		};
		size_t countArrStatic[staticSize]{ 10,6,8,15,4,9,6,6,3,7 };
		double priceArrStatic[staticSize]{ 143.4, 210.4, 452.1, 377.3, 116.8, 207.2, 140.4,
		210.3, 899.9, 1900.0 };

		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArrstatic, idArr, sizeSt);
		FillArray(nameArrStatic, nameArr, sizeSt);
		FillArray(countArrStatic, countArr, sizeSt);
		FillArray(priceArrStatic, priceArr, sizeSt);

		for (size_t i = 0; i < sizeSt; i++)
		{
			currentStorageSize += countArrStatic[i];
		}
		isStorageCreated = true;
	}
	else if (mode == 1)
	{
		//to do
	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
		Sleep(1500);
	}
}


void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\tТовары \n\n\n";

		std::wcout << L"ID\t" << std::left << std::setw(50) << L"Название товара\t\t"
			<< L"Кол-во\t" << L"Цена\n\n";
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(50)
				<< nameArr[i] << L"\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		std::wcout << L"\n\n";
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\tПополнение товаров на складе \n\n\n";

		std::wcout << L"ID\t" << std::left << std::setw(50) << L"Название товара\t\t"
			<< L"Кол-во\n\n";
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(50)
				<< nameArr[i] << L"\t" << countArr[i] << L"\n";
		}
		std::wcout << L"\n\n";
		std::wcout << L"Свободного места " << currentStorageSize << L" из " << maxStorageSize;
	}
	

	
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(1);

		std::wcout << L"Введите ID товара или \"exit\" Для выхода: ";
		GetLine(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции пополнения товара\n\n";
			Sleep(1200);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите кол-во товара для пополнения: ";
				GetLine(chooseCount);
				if (IsNumber(chooseCount))
				{
					size_t count = std::stoull(chooseCount);
					if (count < 0 && count > maxStorageSize - currentStorageSize)
					{
						// continue
					}
				}
			}
		}
	}
}