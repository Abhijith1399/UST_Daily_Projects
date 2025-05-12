#include<iostream>
#include<algorithm>  

#define max 6
using namespace std;

int main() {
    int arr[max];
    int i;
    for (i = 0; i < max; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + max);

    for (i = 0; i < max -1; i++) { 
        if (arr[i] < arr[i + 1]) { 
           // cout << arr[i] << " ";
        }
    }
    cout << arr[1];
    return 0;
}
