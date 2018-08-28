#include <iostream>
using namespace std;

int main() {

  float rad;
  float se;
  
  cout << "Convierte radianes a grados sexagesimales" << endl;

  cout << "Ingrese el número de radianes: ";
  cin >> rad;

  se = rad * 180 / 3.14;

  cout << "Ángulo en grados sexagesimales: " << se;

}
