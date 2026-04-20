#include <iostream>
using namespace std;

class Mahasiswa{
public:
    int nim;
    string nama;
    float nilai;

    void prindata(){
        cout << "Nim :" << nim << endl;
        cout << "Nama :" << nama << endl;
        cout << "Nilai :" << nilai << endl;
    }
};//batas class

int main(){
    Mahasiswa mhs;//object
     mhs.nim = 2024;
     mhs.nama = "abrs";
     mhs.nilai = 80.5;

     mhs.prindata();
}