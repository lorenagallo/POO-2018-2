#include <iostream>
using namespace std;

int main() {
  int x;
  int y;
  float real;
  int entero;

  cout << "Este programa realizará la división real y entera de dos números enteros" << endl;

  cout << "Ingrese el primer número: ";
  cin >> x;

  cout << "Ingrese el segundo número: ";
  cin >> y;

  real = x * 1.0;
  cout << "División real: " << real/y << endl;
  entero = x/y;
  cout << "División entera: " << entero;
