#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char kata[20];
    int i, panjang;
    int flag = 0;

    cout << "Masukkan string: ";
    cin >> kata;
    panjang = strlen(kata);

    for (i=0; panjang > i; i++){
        if (kata[i] != kata[panjang-i-1]){
            flag=1;
        }
    }

    if (flag){
       cout << kata << " adalah bukan palindrome" << endl;
    } else {
        cout << kata << " adalah palindrome" << endl;
    }


}
