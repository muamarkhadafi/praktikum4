#include<iostream>
using namespace std;
int main ()
{


    cout<< "|              Muamar khadafi                         |"<<endl;
    cout<< "|-----------------------------------------------------|"<<endl;
    cout<< "|Tugas Praktikum4"<< "Program Menghitung Total Belanja     |"<< endl;
    cout<< "|-----------------------------------------------------|" <<endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout<< "Masukan Jumlah Barang (N):"; cin>>y;
    x=1;

    while(x<=y)
    {
        cout<< "Barang Ke-"; cin>>a;
        cout<< "Masukan Banyaknya barang: "; cin>>jumlah_beli;
        cout<< "Masukan Harga Barang:Rp"; cin>>harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
    }
    if(total>=1000000)
    {
        diskon=total*10/100;
    }
    else if (total>500000&&total<1000000)
    {
        diskon=total*5/100;
    }else{
    diskon=0;
    }
    bayar=total-diskon;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Barang Yang Di Beli    :"  <<total_beli<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Semua Pembelian        :Rp"     <<total<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Mendapatkan Diskon Sebesar   :Rp"    <<diskon<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Yang Harus Di Bayar    =Rp"     <<bayar<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< " Terima Kasih"<< endl;
}

