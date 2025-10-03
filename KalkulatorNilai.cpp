
#include <iostream>
using namespace std;

int main() {
    int jumlahMatkul;
    float nilai, total = 0, rata;

    cout << "=== Kalkulator Nilai Mahasiswa ===" << endl;
    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlahMatkul;

    // input nilai pakai perulangan
    for (int i = 1; i <= jumlahMatkul; i++) {
        cout << "Masukkan nilai mata kuliah ke-" << i << ": ";
        cin >> nilai;
        total += nilai;
    }

    rata = total / jumlahMatkul;
    cout << "\nRata-rata nilaimu: " << rata << endl;

    // tentukan grade
    if (rata >= 85) {
        cout << "Grade: A" << endl;
    } else if (rata >= 70) {
        cout << "Grade: B" << endl;
    } else if (rata >= 60) {
        cout << "Grade: C" << endl;
    } else if (rata >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E" << endl;
    }

    return 0;
}
