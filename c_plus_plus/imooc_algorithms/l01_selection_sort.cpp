#include <iostream>

/* 兼容老标准 */
#include <algorithm>


using namespace std;

void selectSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        swap(arr[j], arr[minIndex]);
      }
    }
  }
}

int main() {
  int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  selectSort(a, 10);

  for (int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
