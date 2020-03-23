## Tugas Besar 1 Pemrograman Berorientasi Objek
### Kalkulator dengan OOP, C++, dan .NET Framework Visual Studio

#### Struktur kode
Kode yang kami buat menggunakan struktur kode berorientasi objek, sehingga kode yang kami buat terdiri dari banyak kelas dan setiap kelasnya saling berinteraksi satu dengan yang lainnya.

#### Cara compile
Untuk melakukan kompilasi terhadap program, diperlukan Visual Studio yang sebelumnya telah diinstall dengan **Visual Studio** disertai dengan ***Package Desktop development with C++*** dan ***individual components yang digunakan adalah .NET Core 3.1 SDK, .NET Framework 4.6.1, .NET Framework 4.8 SDK, C++/CLI support for v142 build tools, dan .NET Core 3.0 Runtime***. Jika semua keperluan untuk kompilasi sudah dipenuhi, lakukan **klik kanan pada Tubes OOP 1 -> Add -> Existing Item lalu pilih semua library yang diperlukan**, meliputi ***Expression.h, BinaryExpression.h, UnaryExpression.h, Evaluator.hpp, History.h, ErrorHandling.h, MyForm.h, dan MyForm.cpp***. Kompilasi dapat dilakukan secara langsung dengan menekan tombol Local Windows Debugger. Hal ini ditujukan untuk mempermudah proses kompilasi. Pastikan juga agar Linker yang terdapat pada **Project -> Properties -> Linker -> System -> Subsystem** di-set pada SubSystem **Windows** dan pada **Project -> Properties -> Linker -> System -> Advanced** di-set pada **main**.

#### Cara run program
Jika semua kebutuhan di atas sudah terpenuhi, maka untuk menjalankan program, kita dapat mengklik **Local Windows Debugger** pada Visual Studio atau menjalankan program **Tubes OOP 1.exe** pada folder **Debug**

#### Screenshot aplikasi
##### Gambar 1. Contoh masukan ekspresi
![Screenshot1](https://github.com/stefanusgusega/Tubes-1-OOP/blob/master/Screenshots/Screenshot1.png)

##### Gambar 2. Hasil keluaran ekspresi
![Screenshot3](https://github.com/stefanusgusega/Tubes-1-OOP/blob/master/Screenshots/Screenshot3.png)

##### Gambar 3. Contoh penanganan *error* (Pembagian dibagi 0)
![Screenshot2](https://github.com/stefanusgusega/Tubes-1-OOP/blob/master/Screenshots/Screenshot2.png)
