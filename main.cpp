#include <iostream>
#include <conio.h>
using namespace std;

int a=1;
struct paket
{
    string jenis_barang, kota;
    int berat;

};

struct paket kirim[100];

void pushdata(int x)
{
    cout << "Data no." << a << endl;
    cout << "Masukkan Jenis Barang : ";
    cin >> kirim[x].jenis_barang;
    cout << "Masukkan Berat Barang : ";
    cin >> kirim[x].berat;
    cout << "Masukkan Kota Tujuan : ";
    cin >> kirim[x].kota;
    a++;

}

void tampildata(int x)
{
    for(int i =1; i<x; i++)
    {
        cout << "Data no. " << i <<endl;
        cout << "Jenis Barang\t: " <<kirim[i].jenis_barang << endl;
        cout << "Berat Barang\t: " << kirim[i].berat << endl;
        cout << "Kota Tujuan\t: " << kirim[i].kota << endl << endl;
    }
    cout << "Press Any Key..." << endl << endl;
    getch(); //dari conio.h
}

void popdata(int x)
{
        cout << "Data yang dihapus" << endl;
        cout << "Data no. " << x << endl;
        cout << "Jenis Barang\t: " << kirim[x].jenis_barang << endl;
        cout << "Berat Barang\t: " << kirim[x].berat << endl;
        cout << "Kota Tujuan\t: " << kirim[x].kota << endl << endl;
}

int main()
{
    int pilih;
    int top = 1;
    int maksimum;

    cout<<"Masukkan Maksimum Data : ";
    cin >> maksimum;
    do
    {
        cout << "1. Push Data" << endl;
        cout << "2. Pop Data" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "9. Keluar" << endl;

        cout << "Pilihan Anda [1-9] : ";
        cin >> pilih;
        if(pilih==1)
            {
                if(top <= maksimum)
                {
                    pushdata(top);
                    top++;
                }
                else
                {
                    cout << "SORRY STACK IS FULL!!" << endl;
                    cout <<"MAKSIMUM STACK : "<< maksimum <<endl;
                    getch();
                }

            }
        if(pilih==2)
            {
                if(top != 1)
                {
                    top--;
                    popdata(top);
                }
                else
                {
                    cout<<"SORRY STACK IS EMPTY!!"<<endl<<endl;
                }

            }
        if(pilih==3)
            tampildata(top);
    }
    while (pilih != 9);

    return 0;
}
