#include "AVTORIZATION.h"

void Start()
{
	while (true)
	{
		if (Login())
		{
			if (currentStatus == L"SuperAdmin")
			{

			}
			else if (currentStatus == L"Admin")
			{

			}
			else if (currentStatus == L"user")
			{

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