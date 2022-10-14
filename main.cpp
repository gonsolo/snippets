#include <iostream>
#include <algorithm>
#include <cstddef>
#include <span>
#include <string>

using namespace std;

class A {};

class B : public A {};

auto bla() -> A {
        B b;
        return {b};
}

auto main() -> int {}
