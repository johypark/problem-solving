#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t timer;
  time(&timer);

  tm *t = gmtime(&timer);
  cout << t->tm_year + 1900 << '\n'
       << t->tm_mon + 1 << '\n'
       << t->tm_mday << endl;
}
