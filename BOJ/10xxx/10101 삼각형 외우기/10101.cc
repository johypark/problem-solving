#include <iostream>

using namespace std;

void printTriangleType(int a, int b, int c) {
  if (a == 60 && b == 60 && c == 60)
    cout << "Equilateral" << '\n';
  else if (a + b + c == 180)
    if (a == b || a == c || b == c)
      cout << "Isosceles" << '\n';
    else
      cout << "Scalene" << '\n';
  else
    cout << "Error" << '\n';
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  printTriangleType(a, b, c);
}
