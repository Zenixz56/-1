#ifndef _Storage_HPP_
#define _Storage_HPP_

#include "Service.hpp"

extern size_t sizeSt;
extern size_t* idArr;
extern std::wstring* nameArr;
extern size_t* countArr;
extern double* priceArr;
extern size_t MaxStorageSize;
extern size_t currentStorageSize;

extern bool isStorageCreated;

void CreateStorage(int mode = 0);
void ShowStorage(int mode = 0);
void AddProduct();
#endif // !_Storage_HPP_
