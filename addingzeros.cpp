#include <iostream>
#include <vector>
using namespace std;
int main() {
  int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  vector<int> temp;
  for (int i = 0; i < 10; i++) {
    if (arr[i] != 0) {
      temp.push_back(arr[(i)]);
    }
  }
  for (int i = 0; i < temp.size(); i++) {
    arr[i] = temp[i];
  }
  int nz = temp.size();
  for (int i = nz; i < 10; i++) {
    arr[i] = 0;
  }
  for (int i = 0; i < 10; i++) {
    cout << arr[i];
  }
}
