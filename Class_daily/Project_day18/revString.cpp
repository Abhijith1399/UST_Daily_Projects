#include <iostream>
using namespace std;

#define max 100

void rev(char str[]) {
    int i, r;
    int l = 0;
    int temp = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            r = i - 1;
            while (l < r) {
                temp = str[l];
                str[l] = str[r];
                str[r] = temp;
                l++;
                r--;
            }
            l = i + 1; 
        }
    }

   
    r = i - 1;
    while (l < r) {
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }

    cout << str;
}

int main() {
    char str[max];
    cout << "Enter the string: ";
    cin.getline(str, max); 
    rev(str);                
    return 0;                
}
