#include "AVTORIZATION.h"

void Start()
{
	while (true)
	{
		if (Login())
		{
			if (currentStatus == L"SuperAdmin")
			{
				CreateStorage();
				SuperAdminMenu();
			}
			else if (currentStatus == L"Admin")
			{
				// to do
			}
			else if (currentStatus == L"user")
			{
				// to do
			}
			else
			{
				std::wcout << L"CURRENT_STATUS_LOGIN_ERROR_";
			}
		}
		else
		{

		}
	}
}

bool Login()
{
	std::wstring login, pass;
	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t\tДобро пожаловать!";
		std::wcout << L"\n\n\t\t\t  Барахолка\n\n\n";
		std::wcout << L"Введите логин или \"exit\" Для выхода: ";
		GetLine(login);
		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}
		else
		{
			std::wcout << L"Введите пароль: ";
			GetLine(pass);
			for (size_t i = 0; i < userSize; i++)
			{
				if (login == loginArr[i] && pass == passArr[i])
				{
					std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n"; 
					std::wcout << L"Ваш уровень доступа: " << statusArr[i];
					currentId = useridArr[i];
					currentStatus = statusArr[i];
					Sleep(2000);
					return true;
				}
			}
			std::wcout << L"Неверный логин или пароль, Повторите попытку\n\n";
			Sleep(2000);
		}
	}

}

void SuperAdminMenu()
{
	std::wstring choose;
	
	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\tМеню СуперАдмина\n";
		std::wcout << L"1 - Начать продажу\n";
		std::wcout << L"2 - Показать склад\n";
		std::wcout << L"3 - Пополнить склад\n";
		std::wcout << L"4 - Списать товары\n";
		std::wcout << L"5 - Изменить цены\n";
		std::wcout << L"6 - Редактировать склад\n";
		std::wcout << L"7 - Редактирование сотрудника\n";
		std::wcout << L"8 - Отчет о прибыли\n";
		std::wcout << L"0 - Выход\n";
		std::wcout << L"Ввод: \n";
		GetLine(choose);

		if (choose == L"1")
		{

		}
		else if (choose == L"2")
		{
			ShowStorage();
		}
		else if (choose == L"3")
		{
			AddProduct();
		}
		else if (choose == L"4")
		{

		}
		else if (choose == L"5")
		{

		}
		else if (choose == L"6")
		{

		}
		else if (choose == L"7")
		{

		}
		else if (choose == L"8")
		{

		}
		else if (choose == L"0")
		{

		}
		else
		{
			Err();
		}
	}
}