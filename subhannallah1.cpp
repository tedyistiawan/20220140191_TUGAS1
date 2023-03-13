#include <iostream>
using namespace std;

int main()
{ // begin
  // numeric
  int bil;
  // character status 
  string status;
  // display "masukkan bilangan = "
  cout << "masukkan bilangan = ";
  // accept bil 
  cin >> bil;
  // if(bil == 0)
  if (bil == 0)
  // status = "nol"
  status = "nol";
  // else if (bil %2 == 0)
  else if (bil % 2 == 0)
  // status = "genap"
  status = "genap";
  // else
  else
  //status = "ganjil"
status = "ganjil";
// display "bilangannya"
cout << "bilangannya =" << status;
//end
}