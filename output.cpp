#include "../librari/class.h"
void data::output(){
    nimMahasiswa  -= 5;
    namaMahasiswa -= 5;
    cout<<"Menampilkan data mahasiswa "<<endl;
    for (int i=0; i<5; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *namaMahasiswa ;
      namaMahasiswa += 1;
      cout << "\nNim : " ;
      cout << *nimMahasiswa ;
      cout << "\n------------------------------\n";
      nimMahasiswa += 1;
    }
  }