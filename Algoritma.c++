#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input ()
{    // Procedure Input
    while (true)
{
cout << "Masukan Jumlah Data pada Array :"; //Membuat Inputan Jumlah element Array
cin >> n; // Memanggil variable inputan n

if (n <=20)
{ //Membuat kondisi n tidak lebih dari 20 
    break;
}
else
{
    cout << "\nArray yang anda maksukan maksimal 20 elemen.\n ";
}
}
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Element Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
{
cout << "data Ke-" << (i + 1 ) <<": ";
cin >>arr [i];

}
}

void insertionSort()
{

    int temp;
    int j, i;

for (i = 1; i <= n - 1; i++)
{

    temp = arr[i];

    j = i - 1;
    
    while (j >= 0 && arr[j] > temp)
{
arr[j + 1] = arr[j];
j--;
}

arr[j + 1] = temp;
}
}

void display()
{
    cout << endl;
    cout <<"==================================" << endl;
    cout << "Total Pass = " << n-1 << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int j = 0; j <n; j++)
{
cout << arr [j] << endl;
}
cout << endl;
}

int main ()
{
input ();
insertionSort ();
display ();
system("Pause");
return 0;
}
