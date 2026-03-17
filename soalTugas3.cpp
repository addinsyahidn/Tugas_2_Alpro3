/*
Lembaga Kemahasiswaan USU memiliki sebuah program yang menentukan kategori beasiswa yang dapat diterima oleh mahasiswa yang mengajukan beasiswa. Penentuan beasiswa ini didasarkan pada Indeks Prestasi (IP) mahasiswa dan Gaji Orang Tua.

Ketentuan Penerimaan Beasiswa
1. Mahasiswa dengan IP ≥ 3.5 otomatis berhak atas beasiswa kategori 4.
2.  Mahasiswa berhak atas beasiswa kategori 1 jika:
- Gaji orang tua kurang dari 1 juta rupiah.
- IP mahasiswa kurang dari 3.5.
3. Mahasiswa berhak atas beasiswa kategori 2 atau 3 jika:
- Gaji orang tua berada di rentang 1 juta - 5 juta rupiah.
- IP mahasiswa kurang dari 3.5:
    - Jika IP ≥ 2.0, berhak atas beasiswa kategori 3.
    - Jika IP < 2.0, berhak atas beasiswa kategori 2.
4. Mahasiswa yang tidak memenuhi kriteria di atas tidak mendapatkan beasiswa.

Buatlah program yang membaca 2 input berupa bilangan riil (float):
IP mahasiswa (contoh: 3.51)
Gaji orang tua dalam juta rupiah (contoh: 1.5, yang berarti 1.5 juta rupiah)
Program harus mencetak kategori beasiswa yang diperoleh mahasiswa sesuai dengan ketentuan di atas. Jika mahasiswa tidak berhak atas beasiswa, cetak “Tidak berhak mendapatkan beasiswa”.

*/

// Hapus komentar yang berisi soal sebelum memasukkan kode untuk jawaban