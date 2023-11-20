#include <bitset>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <numbers>

using namespace std;

auto main() -> int
{
	union ufloat {
		float f;
		uint32_t i;
	} uf;
	uf.f = numbers::inv_pi;
	uint32_t u;
	memcpy(&u, &uf.f, sizeof(u));
	cout << std::bitset<32>(u) << endl;
}

