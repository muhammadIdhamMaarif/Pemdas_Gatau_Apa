#include <iostream>
#include <cmath>
using namespace std;

void input_positif(int &var, const string &prompt) {
    do {
        cout << prompt;
        cin >> var;
        if (var <= 0) {
            cout << "\nMasukkan nilai positif!\n";
        }
    } while (var <= 0);
}

void luas_persegi() {
    int sisi;
    input_positif(sisi, "\nMasukkan Panjang Sisi: ");
    cout << "\nLuas Persegi adalah " << sisi * sisi << endl;
}

void luas_persegi_panjang() {
    int panjang, tinggi;
    input_positif(panjang, "\nMasukkan Panjang Persegi Panjang: ");
    input_positif(tinggi, "Masukkan Tinggi Persegi Panjang: ");
    cout << "\nLuas Persegi Panjang Adalah: " << panjang * tinggi << endl << endl;
}

void luas_lingkaran() {
    int radius;
    const float pi = 3.14159;
    input_positif(radius, "\nMasukkan Radius Lingkaran: ");
    cout << "\nLuas Lingkaran Adalah: " << pi * radius * radius << endl << endl;
}

void pangkat() {
    int x, n;
    cout << "\nMasukkan Nilai X: ";
    cin >> x;
    cout << "\nMasukkan Nilai N: ";
    cin >> n;
    cout << "\nX pangkat N adalah: " << pow(x, n) << endl;
}

void average() {
    int panjang;
    float total = 0;
    input_positif(panjang, "\nMasukkan Jumlah Angka: ");
    for (int i = 0; i < panjang; i++) {
        float tmp;
        cout << "\nMasukkan Angka ke-" << i + 1 << ": ";
        cin >> tmp;
        total += tmp;
    }
    cout << "\nRata-Rata Angka Adalah: " << total / panjang << endl;
}

void pilih_operasi(int pilihan) {
    switch (pilihan) {
        case 1:
            luas_persegi();
            break;
        case 2:
            luas_persegi_panjang();
            break;
        case 3:
            luas_lingkaran();
            break;
        case 4:
            pangkat();
            break;
        case 5:
            average();
            break;
    }
}

int main() {
    const string opsi[] = {
        "Luas Persegi", 
        "Luas Persegi Panjang", 
        "Luas Lingkaran", 
        "X pangkat N", 
        "Nilai rata-rata dari n-bilangan"
    };

    int n;
    cout << "Masukkan Operasi yang Ingin Dipilih" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << opsi[i] << "\n";
    }

    do {
        cout << "\nMasukkan Pilihan Operasi: ";
        cin >> n;
        if (n < 1 || n > 5) {
            cout << "\nMasukkan Pilihan Operasi dari 1-5!\n";
        }
    } while (n < 1 || n > 5);

    pilih_operasi(n);

    return 0;
}
