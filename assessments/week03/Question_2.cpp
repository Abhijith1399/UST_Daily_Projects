#include<iostream>
using namespace std;
#define MAX 9

int main() {
    int arr_A[MAX];
    int sum = 0;


    int count = 0;

    cout << "Enter the sorted array:" << endl;  //element inserted
    for (int i = 0; i < MAX; i++)
 {
        cout << "arr_A[" << i << "]: ";
        cin >> arr_A[i];
    }

   
    for (int i = 0; i < MAX; i++)        
    {
        count = 0;
        for (int j = 0; j < MAX; j++)
        { 
            if (arr_A[i] == arr_A[j])   
            {
                count++;
            }
        }

        if (count == 1) {

            cout << arr_A[i] << endl;       
        }
       
    }

    cout << endl;
    return 0;
}
