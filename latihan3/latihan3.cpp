#include<iostream>

using namespace std;

int main () {

    int A,B,C;
    cout<<"Masukan bilangan 1 : ";
    cin>> A;
    cout<<"Masukan bilangan 2 : ";
    cin>> B;
    cout<<"Masukan bilangan 3 : ";
    cin>> C;

    if (A<B) {
        if (B<C)
            cout<< "Bilangan tengah adalah :" << B << endl;
    else
        if (A<C)
            cout<< "Bilangan tengah adalah :" << C << endl;
        else  cout<< "Bilangan tengah adalah :" << A << endl;
    }else{
    if (A<C)
        cout << "Bilangan tengah adalah : " << A << endl;
    else
        if (B<C)

        cout << "Bilangan tengah adalah : " << C << endl;
    else
         cout << "Bilangan tengah adalah : " << B << endl;
    }
}
