#include <iostream>
using namespace std;

void menu() {
    cout << "\n=== MENU ARRAY 2 DIMENSI ===\n";
    cout << "1. Tampilkan address array\n";
    cout << "2. Tampilkan address dari semua index array\n";
    cout << "3. Masukkan nilai ke dalam semua index array\n";
    cout << "4. Tampilkan isi array\n";
    cout << "5. Keluar\n";
    cout << "Pilih: ";
}

int main() {
    int b[3][2];
    int choice;
    bool running = true;

    while (running) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Address array b: " << &b << endl;
                break;

            case 2:
                cout << "Address tiap index:\n";
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << "b[" << i << "][" << j << "] : " 
                             << &b[i][j] << endl;
                    }
                }
                break;

            case 3:
                cout << "Masukkan nilai ke array (3 baris x 2 kolom):\n";
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << "b[" << i << "][" << j << "] = ";
                        cin >> b[i][j];
                    }
                }
                cout << "Input selesai.\n";
                break;

            case 4:
                cout << "\nIsi array b:\n";
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << b[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5:
                running = false;
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }
    }

    return 0;
}
