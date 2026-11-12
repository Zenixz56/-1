#include "Storage.h"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

void CreateStorage(int mode)
{
	const size_t staticSize = 10;;
	size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
	std::wstring nameArrStatic[staticSize];
	{
		L"Футболка белая с принтом", L"Кофта с капюшенном черная",
			L"Джинсы узкие синие", L"Шорты серые", L"Кроссовки nike модные",
			L"Кепка с большим козырьком", L"Подштаники теплые", L"Кофта с утиплителем"
			L"Ботинки зимние с шипами на подошве";
	};
}
size_t count StaticArr[statusSize]{ 10,6,8,15,4,9,6,6,3 };