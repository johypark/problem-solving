#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string person;
  set<string> neverHeard;
  for (int i = 0; i < n; i++) {
    cin >> person;
    neverHeard.insert(person);
  }

  set<string> neverHeardAndSeen;
  for (int i = 0; i < n; i++) {
    cin >> person;
    if (neverHeard.find(person) != neverHeard.end())
      neverHeardAndSeen.insert(person);
  }

  cout << neverHeardAndSeen.size() << '\n';
  for (const string &person : neverHeardAndSeen) {
    cout << person << '\n';
  }
}
