#include <iostream>
#define MAX 6
using namespace std;

int main() {
    int arr[MAX];
    int count = 0;
  cout << "Enter the elements:" << endl;
    for (int i = 0; i < MAX; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
 for (int i = 0; i < MAX; i++) {
        int num = arr[i]; 
        count = 0; 

  for (int j = 0; j < MAX; j++) {
            if (arr[j] == num) {
                count++;
            }
        }   cout << num << "-" << count << endl;

      
        for (int k = 0; k < MAX; k++) {
            if (arr[k] == num) {
                arr[k] = -1; 
            }
        }
    }

    return 0;
}
