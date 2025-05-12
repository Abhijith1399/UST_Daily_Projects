#include<iostream>
  

#define max 6
using namespace std;

int main() {
    int arr[max];
    int i;
    int sum = 0;
    for (i = 0; i < max; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < max+1; i++) {
        sum += i;

    }
    cout << sum;
    return 0;
}