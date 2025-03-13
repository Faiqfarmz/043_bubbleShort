#include <iostream>
#include <string>
using namespace std;

int arr[20];    // Deklarasi variable global array a dengan ukuran 20
int n;          // Deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input () { // prosedur input
    while (true) {
        cout << "masukkan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n;   // input dari pengguna
        if (n <= 20)    // jika n kurang dari atau sama dengan 20
            break;
        else {  // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen/n" << endl;
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i <n; i++){
        cout << "Data ke-" << (1+1) << ";" ;
        cin >> arr [i];
    }
}  