#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> cariKarakter(const char& ch, const string& kata) {
    vector<int> index;
    for (size_t i = 0; i < kata.length(); i++) {
        if (ch == kata[i]) {
            index.push_back(i);
        }
    }
    return index;
}

void tampilkanHasil(const vector<int>& index) {
    if (index.empty()) {
        cout << "-1" << endl;
    } else {
        cout << "Karakter Ditemukan Dalam Index: ke-";
        for (size_t i = 0; i < index.size(); i++) {
            if (i > 0) {
                cout << ", ke-";
            }
            cout << index[i];
        }
        cout << endl;
    }
}

int main() {
    string kalimat;
    char ch;
    
    cout << "Masukkan Sebuah Kalimat: ";    
    getline(cin, kalimat);
    
    cout << "Cari Sebuah Karakter Dalam Kalimat: ";
    cin >> ch;
    
    vector<int> index = cariKarakter(ch, kalimat);
    tampilkanHasil(index);

    return 0;
}
