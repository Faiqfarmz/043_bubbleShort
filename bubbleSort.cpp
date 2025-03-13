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

void bubbleSortArray(){
    int pass = 1; // step1

    do
    {
        for (int j= 0; j <= n -1 - pass; j++)
        {   //step2

            if (arr[j] > arr[j + 1]) //step3
            {
                int temp;
                temp + arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; // step4
    }  while (pass <= n - 1); // step5

}


void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dar pass
    cout << endl;
    cout << endl;
}

int main() {
    input ();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}