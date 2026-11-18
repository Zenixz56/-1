#include <io.h>
#include <fcntl.h>
#include <iostream>
#include "AVTORIZATION.h"



int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	Start();
	delete[]loginArr;
	delete[]passArr;
	delete[]statusArr;
	delete[]useridArr;

	if (isStorageCreated == true)
	{
		delete[]idArr;
		delete[]nameArr;
		delete[]countArr;
		delete[]priceArr;
	}
	

	return 0;
}


/*
	Авторизация: ввод логина и пароля 
	Аккаунты: бд пользователей + функции. Супер админ, Админ, Пользователь.
	Продажи: покупк, оплата, чек
	Склад: бд товаров, функции
	служебные: всяка для работы программы

*/