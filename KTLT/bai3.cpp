#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int tuoi;
    cout<< "Nhap tuoi hoc sinh : " << endl;
    cin>>tuoi;
   if (tuoi>=16)
   {
    cout<< "Tuoi cua hoc sinh la " << tuoi << " Tuoi." << endl;
    cout<< "Hoc sinh du tuoi vao lop 10 " << endl;
   }
   else
   {
    cout<< "Tuoi cua hoc sinh la " << tuoi << " Tuoi." << endl;
    cout<< "Hoc sinh khong du tuoi vao lop 10 " << endl;
   }
   return 0;
}