#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;
void ProsedurHitungLuas(){
  Luas = Panjang * Lebar;
}
void ProsedurInputData(){
  cout << "Masukkan Panajng : ";
  cin >> Panjang;
  cout << "Masukkan Lebarnya : ";
  cin >> Lebar;
}
void ProsedurOutpuData(){
  cout << "Luas Persegi Panjang : " << Luas;
}

int main()
{
  ProsedurInputData();
  ProsedurHitungLuas();
  ProsedurOutpuData();
}