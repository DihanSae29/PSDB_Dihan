#include <iostream>
#include <string>
using namespace std;

// Fungsi Sequential Search
int sequentialSearch(string arr[], int n, string key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // mengembalikan index jika ketemu
        }
    }
    return -1; // tidak ketemu
}

int main() {
    // Daftar nama siswa
    string siswa[] = {"Andi", "Budi", "Citra", "Dewi", "Eka", "Fajar"};
    int n = sizeof(siswa) / sizeof(siswa[0]);

    string cari;
    cout << "Masukkan nama siswa yang dicari: ";
    cin >> cari;

    int hasil = sequentialSearch(siswa, n, cari);

    if (hasil != -1)
        cout << "Siswa bernama " << cari << " ditemukan pada indeks ke-" << hasil << endl;
    else
        cout << "Siswa bernama " << cari << " tidak ada dalam daftar." << endl;

    return 0;
}
