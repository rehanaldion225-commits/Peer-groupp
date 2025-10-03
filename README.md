/*
===========================================================
📘 KALKULATOR NILAI MAHASISWA
===========================================================

👨‍👩‍👦‍👦 Nama Kelompok:
1. Raehan Aldion H. (2557071011) 
2. Muhammad Ferdinan Tamaam
3. Ahmad Zidan
4. Abdurrahman

-----------------------------------------------------------

1. Latar Belakang
   Mahasiswa sering kali kesulitan dalam menghitung rata-rata nilai 
   dari berbagai mata kuliah. Oleh karena itu dibuat program sederhana 
   menggunakan bahasa C++ untuk membantu menghitung rata-rata nilai 
   dan menentukan grade.

2. Kegunaan Project
   - Menghitung rata-rata nilai dari sejumlah mata kuliah.
   - Menampilkan hasil grade (A–E) sesuai rata-rata.
   - Membantu mahasiswa mengevaluasi performa akademiknya.

3. Alur Project
   1. Input jumlah mata kuliah.
   2. Input nilai setiap mata kuliah.
   3. Jumlahkan nilai → hitung rata-rata.
   4. Tentukan grade berdasarkan rata-rata.
   5. Tampilkan hasil.

4. Algoritma
   - Input jumlah mata kuliah (n).
   - Loop sebanyak n untuk input nilai.
   - Simpan total nilai.
   - Hitung rata-rata = total / n.
   - Tentukan grade:
        A : ≥ 85
        B : 70 – 84
        C : 60 – 69
        D : 50 – 59
        E : < 50

5. Flowchart
         ┌────────────────────┐
         │ Mulai              │
         └───────┬────────────┘
                 │
                 ▼
      ┌────────────────────┐
      │ Input jumlah matkul│
      └───────┬────────────┘
              │
              ▼
 ┌───────────────────────────┐
 │ Perulangan input nilai     │
 │ Simpan total nilai         │
 └───────┬───────────────────┘
         │
         ▼
 ┌───────────────────────────┐
 │ Hitung rata-rata = total/jm│
 └───────┬───────────────────┘
         │
         ▼
 ┌───────────────────────────┐
 │ Tentukan grade A–E         │
 └───────┬───────────────────┘
         │
         ▼
 ┌───────────────────────────┐
 │ Tampilkan rata-rata & grade│
 └───────┬───────────────────┘
         │
         ▼
     ┌──────────────┐
     │ Selesai       │
     └──────────────┘

6. Fitur
   ✅ Input jumlah mata kuliah fleksibel.
   ✅ Perhitungan rata-rata otomatis.
   ✅ Penentuan grade dengan standar umum.
   ✅ Tampilan interaktif di terminal.

7. Simulasi Penggunaan
   Contoh Input/Output:
   ----------------------
   === Kalkulator Nilai Mahasiswa ===
   Masukkan jumlah mata kuliah: 3
   Masukkan nilai mata kuliah ke-1: 80
   Masukkan nilai mata kuliah ke-2: 90
   Masukkan nilai mata kuliah ke-3: 70

   Rata-rata nilaimu: 80
   Grade: B
