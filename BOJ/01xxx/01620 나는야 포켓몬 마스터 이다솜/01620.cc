#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<string> pokemonNames(n + 1);
  map<string, int> pokemonNumbers;
  for (int i = 1; i <= n; i++) {
    cin >> pokemonNames[i];
    pokemonNumbers.insert({pokemonNames[i], i});
  }

  string question;
  for (int i = 0; i < m; i++) {
    cin >> question;

    if (isdigit(question[0]))
      cout << pokemonNames[stoi(question)] << '\n';
    else
      cout << pokemonNumbers[question] << '\n';
  }
}
