#include "Accounts.h"

size_t userSize = 3;
size_t currentId = 0;
std::wstring currentStatus;
std::wstring* loginArr = new std::wstring[userSize]{L"admin",L"user1",L"user2"};
std::wstring* passArr = new std::wstring[userSize]{ L"admin",L"user1",L"user2" };
std::wstring* statusArr = new std::wstring[userSize]{ L"SuperAdmin",L"admin",L"user" };
size_t* useridArr = new size_t[userSize]{ 0,1,2 };