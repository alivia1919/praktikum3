#praktikum3

## Latihan1.cpp : Program Menghitung bilangan terbesar sebanyak jumlah "n"


**Alur algoritma**
1. Mendeklarasikan variabel int `a,max,n` sebagai variabel input
2. Membaca input dari keyboard `cin >> n`
3. Membandingkan nilai variabel **A** dengan variabel **max** jika `a>max`
4. Bandingkan kembali kedua variabel sebanyak jumlah n atau bilangan yang di input sampai menemukan hasil `a=max` maka cetaklah.
5. Print bilangan terbesar dari semua bilangan yang di inputkan.


**Flowchart Program**
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan1/Flowchart1.png)


**code program lengkap :**
```c++
#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int n,a;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}


**hasilnya :**
![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan1/SS1.png)


## Latihan2.cpp : Program mengurutkan bilangan terkecil hingga ke terbesar

**Alur algoritma**
1. Mendeklarasikan variabel `int A,B,C` sebagai variabel input
s2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dengan variabel **B** jika **A** lebih kecil daripada **B**
4. Bandingkan kembali variabel **B** dengan variabel **C**
5. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yanng terkecil-terbesar yaitu **A,B,C**
6. Jika kondisi **FALSE** , bandingkan kembali variabel **A** dengan variabel **C** jika **A** lebih kecil dari **C**
7. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **A,C,B**
8. Jika kondisi **FALSE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **C,A,B**
9. Kemudian jika **A** lebih kecil dari **C**
10. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **B,A,C**
11. Jika kondisi **FALSE** , Bandingkan kembali variabel **B** dengan variabel **C** jika **B** lebih kecil dari **C**
12. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **B,C,A**
13. Jika kondisi **FALSE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **C,B,A**
14. Lalu, **END**.


**Flowchart Program**
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan2/Flowchart2.png)


**code program lengkap :**
```c++
#include<iostream>

using namespace std;

int main(){
    int A,B,C;

    cout << "Masukkan bilangan A: "; cin >> A;
    cout << "Masukkan bilangan B: "; cin >> B;
    cout << "Masukkan bilangan C: "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: "<< B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: "<< C << ", " << B << ", " << A << endl;
        }
    }
}


hasilnya :
![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan2/SS2.png)


## Latihan3.cpp : Program mencetak nilai tengah dari 3 buah bilangan yang diinputkan


**Alur algoritma**
1. Mendeklarasikan variabel `int A,B,C` sebagai variabel input
2. Membaca input dari keyboard `cin << A << B << C`
3. Membandingkan nilai variabel **A** dengan variabel **B** jika **A** lebih kecil daripada **B**
4. Bandingkan kembali variabel **B** dengan variabel **C**
5. Jika kondisi **TRUE** , Maka cetaklah bilangan tengah dari **A,B,C** yaitu **B**
6. Jika kondisi **FALSE** , bandingkan kembali variabel **A** dengan variabel **C** jika **A** lebih kecil dari **C**
7. Jika kondisi **TRUE** , Maka cetaklah bilangan tengah dari **A,C,B** yaitu **C**
8. Jika kondisi **FALSE** , Maka cetaklah bilangan tengah dari **C,A,B** yaitu **A**
9. Kemudian jika **A** lebih kecil dari **C**
10. Jika kondisi **TRUE** , Maka cetaklah bilangan tengah dari **B,A,C** yaitu **A**
11. Jika kondisi **FALSE** , Bandingkan kembali variabel **B** dengan variabel **C** jika **B** lebih kecil dari **C**
12. Jika kondisi **TRUE** , Maka cetaklah bilangan tengah dari **B,C,A** yaitu **C**
13. Jika kondisi **FALSE** , Maka cetaklah bilangan tengah dari **C,B,A** yaitu **B**
14. Lalu, **END**.


**Flowchart Program**
![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan3/Flowchart3.png)


**code program lengkap :**
```c++
#include<iostream>

using namespace std;

int main () {

    int A,B,C;
    cout<<"Masukan bilangan 1: ";
    cin>> A;
    cout<<"Masukan bilangan 2: ";
    cin>> B;
    cout<<"Masukan bilangan 3: ";
    cin>> C;

    if (A<B) {
        if (B<C)
            cout<< "Bilangan tengah adalah:" << B << endl;
    else
        if (A<C)
            cout<< "Bilangan tengah adalah:" << C << endl;
        else  cout<< "Bilangan tengah adalah:" << A << endl;
    }else{
    if (A<C)
        cout << "Bilangan tengah adalah: " << A << endl;
    else
        if (B<C)

        cout << "Bilangan tengah adalah: " << C << endl;
    else
         cout << "Bilangan tengah adalah: " << B << endl;
    }
}


**hasilnya :**
![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum3/master/latihan3/SS3.png)


praktikum3