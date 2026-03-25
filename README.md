# 👨‍ Program Data Mahasiswa (Array)

> **Tugas Algoritma & Struktur Data**  
> 🎓 **Institut Teknologi Sumatera (ITERA)**  
> 👨‍💻 **Oleh: Goklas Irvan Joshua Harianja**  
> 📌 **NIM: 125140175**

[![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=cplusplus)](https://isocpp.org/)
[![Status](https://img.shields.io/badge/Status-Completed-brightgreen)](.)
[![Semester](https://img.shields.io/badge/Semester-2-blue)](.)

---

## 📌 Tentang Program

Program ini adalah implementasi sederhana untuk mengelola data mahasiswa menggunakan **Array of Struct** dalam C++. Program menyimpan data seperti NIM, Nama, dan IPK, kemudian melakukan filtering untuk menampilkan mahasiswa dengan **IPK di bawah 2.0** (kategori peringatan akademik).

> ⚠️ **Catatan:** Ini adalah implementasi dasar menggunakan Array statis sebelum mempelajari konsep Linked List yang lebih dinamis.

---

## 🎯 Fitur Program

- ✅ Penyimpanan data mahasiswa menggunakan `struct`
- ✅ Input data hardcoded (10 mahasiswa)
- ✅ Filtering mahasiswa berdasarkan IPK (< 2.0)
- ✅ Output informasi Nama dan NIM

---

## 🛠️ Struktur Data

### Struct Mahasiswa
```cpp
struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

##🚀 Cara Menjalankan
1.Clone Repo
git clone https://github.com/goklasirvanjoshuaharianja-byte/SourceCode-ASD-GoklasIrvanJoshuaHarianja.git
cd SourceCode-ASD-GoklasIrvanJoshuaHarianja

2.Compile
g++ -std=c++11 mahasiswa_array.cpp -o mahasiswa

3.Run
./mahasiswa        # Linux/Mac
mahasiswa.exe      # Windows


##🔄 Rencana Pengembangan
Berikut adalah rencana untuk mengembangkan program ini menggunakan materi yang sedang dipelajari saat ini:

- Double Linked List: Mengganti Array dengan Double Linked List untuk data yang lebih fleksibel
- Input Dinamis: Menambahkan menu untuk input data mahasiswa baru secara manual
- Fitur Search: Mencari data berdasarkan NIM atau Nama
- Sorting: Mengurutkan data berdasarkan IPK (Terkecil → Terbesar)
- Delete Data: Menghapus data mahasiswa dengan NIM tertentu
- File Handling: Menyimpan dan membaca data dari file .txt agar tidak hilang setelah program ditutup

##📝 Catatan Pembelajaran

    "Array itu seperti kursi bioskop yang jumlahnya tetap. Kalau penuh, nggak bisa nambah kursi. Kalau Linked List, kita bisa nambah kursi kapan saja!"

##📖 Referensi

    Modul Kuliah Algoritma & Struktur Data - Institut Teknologi Sumatera
    LearnCpp.com - Arrays & Structs
    GeeksForGeeks - Array Data Structure

## 📬 Kontak

    GitHub: @goklasirvanjoshuaharianja-byte
    Portfolio: goklasharianja-dev.vercel.app
    Gmail : goklasirvanjoshuaharianja@gmail.com.com





