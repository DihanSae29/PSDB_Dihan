#include <iostream>
#include <string>
using namespace std;

void tukar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n;
    string nama[1005];
    int nilai[1005];

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    cout << "Masukkan nama dan nilai mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nama[i] >> nilai[i];
    }
    // Selection Sort berdasarkan nilai
    for (int i = 0; i < n - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (nilai[j] < nilai[pos]) {
                pos = j;
            }
        }
        if (pos != i) {
            tukar(&nilai[i], &nilai[pos]);
            swap(nama[i], nama[pos]); // ikut menukar nama agar sesuai nilai
        }
    }
    cout << "\nDaftar nilai mahasiswa setelah diurutkan (ascending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << nama[i] << " " << nilai[i] << endl;
    }
    return 0;
}
