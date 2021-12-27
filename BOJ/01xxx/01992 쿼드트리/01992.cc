#include <iostream>
#include <vector>

using namespace std;

string compressImage(const vector<vector<bool>> &image, int size, int x = 0,
                     int y = 0) {
  bool hasTrue = false;
  bool hasFalse = false;
  for (int i = y; i < y + size; i++)
    for (int j = x; j < x + size; j++)
      image[i][j] ? hasTrue = true : hasFalse = true;

  if (hasTrue && hasFalse)
    return '(' + compressImage(image, size / 2, x, y) +
           compressImage(image, size / 2, x + size / 2, y) +
           compressImage(image, size / 2, x, y + size / 2) +
           compressImage(image, size / 2, x + size / 2, y + size / 2) + ')';

  return to_string(hasTrue);
}

int main() {
  int n;
  cin >> n;

  string input;
  vector<vector<bool>> image(n, vector<bool>(n));
  for (auto &row : image) {
    cin >> input;
    for (size_t i = 0; i < row.size(); i++)
      row[i] = input[i] - '0';
  }

  cout << compressImage(image, image.size()) << endl;
}
