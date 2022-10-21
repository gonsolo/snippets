#include <algorithm>
#include <iostream>
#include <bitset>
#include <cstddef>
#include <functional>
#include <span>
#include <string>

using namespace std;

void cpp11() {
        auto a = {1, 2, 3};
        for (auto& i : a ) {
                cout << i << endl;
        }
}

auto cpp14() {
        return 134'566'000;
}

ostream& operator<< (ostream& os, byte b) {
        auto i = std::to_integer<int>(b);
        auto bits = std::bitset<8>(i);
        return os << i << " " << bits;
}

void cpp17() {
        byte b{0x2A};
        cout << b << endl;
}

template<typename T>
concept Hashable = requires(T a) {
        { std::hash<T>{}(a) } -> std::convertible_to<std::size_t>;
};

template<Hashable T>
void f(T i) {
        cout << i << " " << hash<std::string>{}(i) << endl;
}

void cpp20() {
        f("42"s);
}

consteval int add(int a, int b) {
                return a + b;
}

constexpr int add_or_mul(int a, int b) {
        if consteval {
                return add(a, b);
        } else {
                return a * b;
        }
}


void cpp23() {
        cout << 15uz << endl;

        const int i = 3;
        const int j = 3;
        static_assert(add_or_mul(i, j) == 6);
        cout << add_or_mul(i, j) << endl;
}

int main(){
        cpp11();
        cout << cpp14() << endl;
        cpp17();
        cpp20();
        cpp23();
}
