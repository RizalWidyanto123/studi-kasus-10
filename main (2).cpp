#include <iostream>
using namespace std;
class data{
  public:
  void input();
  void proses();
  void output();
                   
private:
    int *nimMahasiswa;      // tipe data pointer nim mahasiswa
    int nimMhs[10];
    string *namaMahasiswa; // tipe data pointer  nama mahasiswa
    string namaMhs[10];
};
    

  void data::input(){
    cout<<"------------------------------------------"<<endl;
    cout << "\t\tData Mahasiswa Yang Masuk \n";
    cout << "\t   Babak Final Lomba Parmatika"<<endl;
    cout<<"------------------------------------------"<<endl<<endl;
    for (int i=0; i<5; i++){                 // perulangan untuk menginputkan 5 data mahasiswa
      cout << "Masukkan NIM  : ";
      cin >> nimMhs[i];
      cout << "Masukkan Nama : ";
      cin >> namaMhs[i];
      cout<<endl;
    }
  }

  void data::proses(){
    cout << "------------------------------\n";
    nimMahasiswa = new int[10];             // node pointer nim mahasiswa
    namaMahasiswa = new string[10];         // node pointer nama mahasiswa
    for(int i=0; i<5; i++){
      *nimMahasiswa = nimMhs[i];
      nimMahasiswa += 1;
      *namaMahasiswa = namaMhs[i];
      namaMahasiswa +=1;
    }
  }

  void data::output(){
    nimMahasiswa  -= 5;
    namaMahasiswa -= 5;
    cout<<"Menampilkan data mahasiswa "<<endl;
    for (int i=0; i<5; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *namaMahasiswa ;                  // deklarasi pointer menuju ke fungsi tipe data nama mhs
      namaMahasiswa += 1;
      cout << "\nNim : " ;
      cout << *nimMahasiswa ;                   // deklarasi pointer menuju ke fungsi tipe data nim mhs
      cout << "\n------------------------------\n";
      nimMahasiswa += 1;
    }
  }


int main(){
  data x;
  x.input();
  x.proses();
  x.output();
  
}