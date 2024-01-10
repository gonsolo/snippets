#include <bitset>
#include <cstdint>
#include <iostream>
#include <numbers>

using namespace std;

auto main() -> int
{
	union ufloat {
		float f;
		uint32_t i;
	} uf;

	float input = -33.f;
	uf.f = input;
	cout << "Input: " << input << endl;
	cout << std::bitset<32>(uf.i) << endl;
	cout << "32 bit float input " << input << " as uint32: dec: " << uf.i << ", hex: " << hex << uf.i << endl;

	float pi = numbers::pi_v<float>;
	float result = input / pi;
	uf.f = result;

	uint8_t i8 = uf.i;
	cout << std::bitset<32>(uf.i) << endl;
	cout << "                        " << std::bitset<8>(i8) << endl;
	cout << "32 bit float result " << result << " as uint32: dec: " << uf.i << ", hex: " << hex << uf.i << endl;
	cout << "The lowest 8 bits of 1.f / pi as uint8: " << hex << (int)i8 << endl;
}

