# Sylabus CPP

<p align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" alt="C++" width="72" />
  &nbsp;&nbsp;&nbsp;
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/vscode/vscode-original.svg" alt="Visual Studio Code" width="72" />
  &nbsp;&nbsp;&nbsp;
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/neovim/neovim-original.svg" alt="Neovim" width="72" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++ badge" />
  <img src="https://img.shields.io/badge/Editor-VS%20Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white" alt="VS Code badge" />
  <img src="https://img.shields.io/badge/Editor-Neovim-57A143?style=for-the-badge&logo=neovim&logoColor=white" alt="Neovim badge" />
</p>

Repository ini berisi kumpulan latihan C++ dari materi paling dasar sampai latihan kecil yang lebih menantang. Proyek ini cocok dipakai sebagai catatan belajar, arsip tugas, dan syllabus pribadi untuk memahami alur pemrograman C++ secara bertahap.

## Isi Materi

| Level | Materi | Contoh File |
| --- | --- | --- |
| 01 | Dasar C++, `cout`, `cin`, variabel, tipe data | `nabil.cpp`, `dimas.cpp`, `TEST VSCODE.cpp` |
| 02 | Operator, aritmatika, dan perhitungan sederhana | `luas segitiga.cpp`, `luas permukaan kubus.cpp`, `kalkulator trustech.cpp` |
| 03 | Percabangan `if`, `else`, dan logika kondisi | `lampu merah.cpp`, `ganjil genap nabil.cpp`, `NIP PNS.cpp` |
| 04 | Perulangan `for`, `while`, dan `do while` | `while.cpp`, `4 LOOPING WHILE.cpp`, `DO WHILE TOTAL BELANJA BUKU.cpp` |
| 05 | Pola dan latihan nested loop | `looping pola.cpp`, `LOOPING SEGITA & PERSEGI FOR.cpp` |
| 06 | Array, vector, dan pengolahan data sederhana | `basic array.cpp`, `array1dimensi.cpp`, `VECTOR & LIST (looping foreach).cpp` |
| 07 | File handling | `nyoba fstream.cpp`, `nama.txt` |
| 08 | Class, constructor, dan dasar OOP | `class + constructor.cpp` |
| 09 | Mini project dan eksperimen | `game ular.cpp`, `beep.cpp`, `shutdown.cpp` |

## Cara Menjalankan

Pastikan compiler C++ sudah terpasang. Untuk Windows bisa memakai MinGW, MSYS2, atau compiler bawaan Visual Studio. Untuk Linux/WSL bisa memakai `g++`.

Contoh compile satu file:

```bash
g++ "luas segitiga.cpp" -o luas-segitiga
./luas-segitiga
```

Untuk nama file yang memakai spasi, selalu gunakan tanda kutip:

```bash
g++ "VECTOR & LIST (looping foreach).cpp" -o vector-list
./vector-list
```

Beberapa file memakai library khusus Windows seperti `conio.h` atau perintah `system("cls")`, sehingga lebih cocok dijalankan di Windows atau perlu disesuaikan jika dijalankan di Linux/WSL.

## Urutan Belajar yang Disarankan

1. Pahami struktur program C++: `#include`, `using namespace std`, `int main()`, dan `return`.
2. Latih input dan output memakai `cin` dan `cout`.
3. Kuasai variabel, tipe data, operator aritmatika, dan operator perbandingan.
4. Masuk ke percabangan: `if`, `else if`, `else`, dan operator logika.
5. Pelajari perulangan: `for`, `while`, dan `do while`.
6. Latih nested loop dengan membuat pola angka atau pola bintang.
7. Pelajari array dan vector untuk menyimpan banyak data.
8. Mulai belajar fungsi agar kode lebih rapi dan tidak terlalu panjang.
9. Pelajari file handling dengan `fstream`.
10. Masuk ke dasar OOP: `class`, object, constructor, method, dan access modifier.
11. Buat mini project sederhana seperti kalkulator, sistem parkir, data siswa, atau game console.

## Ide Pengembangan Project

- Rapikan nama file agar lebih konsisten, misalnya `01-dasar-input-output.cpp`.
- Pisahkan file berdasarkan folder materi, seperti `01-dasar`, `02-percabangan`, dan `03-looping`.
- Tambahkan komentar singkat di setiap file untuk menjelaskan tujuan latihan.
- Buat file latihan baru untuk fungsi, pointer, struct, inheritance, dan exception handling.
- Hindari contoh teks yang tidak sopan agar repository nyaman dibaca oleh siapa pun.

## Struktur yang Bisa Dipakai Nanti

```text
sylabus-cpp/
├── 01-dasar/
├── 02-percabangan/
├── 03-looping/
├── 04-array-vector/
├── 05-file-handling/
├── 06-oop/
├── mini-project/
└── README.md
```

## Tools yang Direkomendasikan

| Tool | Fungsi |
| --- | --- |
| C++ | Bahasa pemrograman utama |
| g++ | Compiler untuk menjalankan program C++ |
| Visual Studio Code | Editor ringan dengan banyak extension |
| Neovim | Editor terminal untuk latihan workflow cepat |
| Git | Version control untuk menyimpan riwayat perubahan |
| GitHub | Tempat publikasi dan dokumentasi project |

Extension VS Code yang berguna:

- C/C++ dari Microsoft
- Code Runner
- Error Lens
- CMake Tools, jika nanti belajar project C++ yang lebih besar

## Daftar Pustaka Belajar C++

Mulai dari sumber yang paling ramah pemula, lalu naik ke referensi yang lebih lengkap:

1. [Programiz - C++ Programming](https://www.programiz.com/cpp-programming)  
   Cocok untuk pemula karena penjelasannya ringkas dan banyak contoh dasar.

2. [W3Schools - C++ Tutorial](https://www.w3schools.com/cpp/)  
   Bagus untuk mengenal syntax dasar, latihan singkat, dan review cepat.

3. [LearnCpp](https://www.learncpp.com/)  
   Salah satu sumber belajar C++ paling lengkap dan terstruktur dari dasar sampai konsep lanjutan.

4. [cplusplus.com](https://cplusplus.com/doc/tutorial/)  
   Berguna sebagai tutorial dan referensi library standar C++.

5. [cppreference](https://en.cppreference.com/w/)  
   Referensi resmi gaya dokumentasi untuk standard library C++. Cocok dipakai setelah mulai terbiasa membaca dokumentasi teknis.

6. [The Cherno - C++ YouTube Playlist](https://www.youtube.com/@TheCherno)  
   Cocok untuk memahami konsep C++ dengan visual dan penjelasan praktis.

7. [freeCodeCamp - C++ Course](https://www.freecodecamp.org/news/tag/cpp/)  
   Sumber tambahan untuk belajar lewat artikel dan kursus panjang.

## Target Belajar

Setelah menyelesaikan syllabus ini, target minimal yang bisa dicapai:

- Bisa membuat program console sederhana.
- Bisa memakai percabangan dan perulangan untuk menyelesaikan masalah.
- Bisa menyimpan dan mengolah banyak data dengan array atau vector.
- Bisa membaca dan menulis file sederhana.
- Bisa memahami dasar class dan object.
- Bisa membuat mini project C++ yang rapi dan bisa dijelaskan ulang.

---

> Belajar C++ itu bertahap. Yang penting bukan langsung hafal semua syntax, tapi sering latihan, paham alur program, dan berani memperbaiki error satu per satu.
