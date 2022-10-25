#include <algorithm>
#include <iostream>
#include <bitset>
#include <cstddef>
#include <functional>
#include <span>
#include <string>

using namespace std;

class Base {

protected:

  void a() {
    b(); 
  }

  void b() {
    cout << "Base b" << endl; 
  }
};

class Derived: public Base {

public:

  void a() {
    Base::a(); 
  }

  void b() {
    cout << "Derived b" << endl; 
  }
};

int main() {

  Derived* d = new Derived();
  d->a();
}
