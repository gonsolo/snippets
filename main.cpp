#include <iostream>
#include <algorithm>
#include <cstddef>
#include <span>
#include <string>

using namespace std;

class A {};

class B : public A {};

A bla() {
        B b;
        return A(b);
}

int main()
{
}
