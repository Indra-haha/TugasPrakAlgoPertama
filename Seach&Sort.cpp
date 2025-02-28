#include<iostream>
#include<iomanip>
using namespace std;

int inputDataBuku(int n){
    for (int a = 0; a < n; a++){
        cout << a + 1 << " . Judul Buku" << setw(15) << setiosflags(ios::left) << ": "; cin >> array[a];
        cout << "  Pengarang" << setw(15) << setiosflags(ios::left) << ": "; cin >> 
    }
    return 0;
}

void dataBuku(){
    for (int a = 0; a < n; a++){
            cout << "Buku ke-" << a+1 << endl;
            cout << "Judul Buku : " << buku[a].judul << endl;
            cout << "Pengarang : " << buku[a].pengarang << endl;
            cout << "Penerbit : " << buku[a].penerbit << endl;
            cout << "Tahun Terbit : " << buku[a].tahun << endl;
            cout << "Harga : " << buku[a].harga << endl;
        }
}
int main(){
    int n;
    char pil;
    struct buku{
        string judul;
        string pengarang;
        string penerbit;
        string tahunTerbit;
        int harga;
    };buku buku[n];
    cout << "----MENU----" << endl;    
    cout << "1. Input Data Buku" << endl;   
    cout << "2. Tampilkan Data Buku" << endl;   
    cout << "3. Urutkan Buku dengan Bubble Sort" << endl;
    cout << "4. Urutkan Buku dengan Quick Sort" << endl;
    cout << "5. Cari Buku dengan Sequential Search" << endl;
    cout << "6. Cari Buku dengan Binary Search" << endl;
    cout << "7. Keluar" << endl;
    switch (pil)
    {
        char urutan;
        char cari;
        case '1':
        cout << "Masukan jumlah buku : " ; cin >> n;
        inputDataBuku(n);
        break;
        case '2': 
        cout << "Data Buku : " << endl;
        dataBuku();
        break;
        case '3':
        cout << "Pengurutan Data dengan Bubble Sort" << endl;
        cout << "1. Urutkan data secara ascending : " ; cin >> urutan;
        cout << "2. Urutkan data secara descending : "  ; cin >> urutan;
        switch (urutan)
        {
            case '1':
            break;
            case '2':
            break;
        }
        break;
        case '4': 
        cout << "Pengurutan Data dengan Quick Sort" << endl;
        cout << "1. Urutkan data secara ascending : " ; cin >> urutan;
        cout << "2. Urutkan data secara descending : "  ; cin >> urutan;
        switch (urutan)
        {
            case '1':
            break;
            case '2':
            break;
        }
        break;  
        case '5':
        cout << "Pencarian Data dengan Sequential Search" << endl;
        cout << "Masukan judul buku yang dicari : " ; cin >> cari;
        break;
        case '6':
        cout << "Pencarian Data dengan Binary Search" << endl;
        cout << "Masukan judul buku yang dicari : " ; cin >> cari;
        break;
        case '7':
        cout << "Terima Kasih" << endl;
        break;

    }
}