#include "../librari/class.h"
void data::proses(){
    cout << "------------------------------\n";
    nimMahasiswa = new int[10];
    namaMahasiswa = new string[10];
    for(int i=0; i<5; i++){
      *nimMahasiswa = nimMhs[i];
      nimMahasiswa += 1;
      *namaMahasiswa = namaMhs[i];
      namaMahasiswa +=1;
    }
  }