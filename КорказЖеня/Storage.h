#ifndef _Storage_HPP_
#define _Storage_HPP_

#include "Service.hpp"

extern size_t sizeSt;
extern size_t* idArr;
extern std::wstring* nameArr;
extern size_t* countArr;
extern double* priceArr;

void CreateStorage(int mode = 0);

#endif // !_Storage_HPP_
