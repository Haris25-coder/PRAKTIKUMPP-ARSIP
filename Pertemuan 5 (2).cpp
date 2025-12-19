
#include <iostream>
using namespace std;

int main(){
    //Membuat array kosong
    int nilai[5];

    //Mengisi array kosong
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    //Mencetak isi array
    cout << "Nilai ke-1: " << nilai[0] << endl;
    cout << "Nilai ke-2: " << nilai[1] << endl;
    cout << "Nilai ke-3: " << nilai[2] << endl;
    cout << "Nilai ke-4: " << nilai[3] << endl;
    cout << "Nilai ke-5: " << nilai[4] << endl;

    return 0;
}






 CONTOH ARRAY MULTI DIMENSI


#include <iostream>
using namespace std;

int main(){
    int matriks[100][100];
    int jum_baris, jum_kolom, i, j;

    cout<<"Input Jumlah Baris Matriks: ";
    cin>>jum_baris;

    cout<<"Input Jumlah Kolom Matriks: ";
    cin>>jum_kolom;

    for(i = 0; i < jum_baris; i++){
        for(j = 0; j < jum_kolom; j++){
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << " = ";
            cin>>matriks[i][j];
        }
        cout<<endl;
    }

    cout << "Hasil Matriks: " << endl;

    for(i = 0; i < jum_baris; i++){
        for(j = 0; j < jum_kolom; j++){
            cout << matriks[i][j];
        }
        cout << endl;
    }

    return 0;
}
