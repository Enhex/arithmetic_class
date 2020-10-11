#include <arithmetic_class/integral_classes.h>
#include <iostream>

using namespace std;

struct A : int32_fast
{
	using int32_fast::int32_fast;
};

int main()
{
	int8_fast x = 1;
	uint8_fast y = 2;
	int16_fast z = x + y;
	A a1 = 25;
	A a2 = z + 7.f;

	int i = a1 * a2;

	cout << i << endl;
}