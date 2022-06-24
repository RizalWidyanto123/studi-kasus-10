#include "../librari/class.h"
using namespace std;
  void data::input(){
     cout<<"------------------------------------------"<<endl;
    cout << "\t\tData Mahasiswa Yang Masuk \n";
    cout << "\t   Babak Final Lomba Parmatika"<<endl;
    cout<<"------------------------------------------"<<endl<<endl;
    for (int i=0; i<5; i++){
      cout << "Masukkan NIM  : ";
      cin >> nimMhs[i];
      cout << "Masukkan Nama : ";
      cin >> namaMhs[i];
      cout<<endl;
    }
  }