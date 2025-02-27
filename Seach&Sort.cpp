#include<iostream>
using namespace std;

int main(){
    int n;
    char pil;
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
        inputBuku(n);
        break;
        case '2': 
        cout << "Data Buku : " << endl;
        for (int a = 0; a < n; a++)
        {
            cout << "Buku ke-" << a+1 << endl;
            cout << "Judul Buku : " << buku[a].judul << endl;
            cout << "Pengarang : " << buku[a].pengarang << endl;
            cout << "Penerbit : " << buku[a].penerbit << endl;
            cout << "Tahun Terbit : " << buku[a].tahun << endl;
            cout << "Harga : " << buku[a].harga << endl;
        }
        break;
        case '3':
        cout << "Pengurutan Data dengan Bubble Sort" << endl;
        cout << "1. Urutkan data secara ascending : " ; cin >> urutan;
        cout << "2. Urutkan data secara descending : "  ; cin >> urutan;
        switch (urutan)
        {
            case '1':
            bubbleSortAsc(n);
            break;
            case '2':
            bubbleSortDesc(n);
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
            quickSortAsc(n);
            break;
            case '2':
            quickSortDesc(n);
            break;
        }
        break;  
        case '5':
        cout << "Pencarian Data dengan Sequential Search" << endl;
        cout << "Masukan judul buku yang dicari : " ; cin >> cari;
        sequentialSearch(cari);
        break;
        case '6':
        cout << "Pencarian Data dengan Binary Search" << endl;
        cout << "Masukan judul buku yang dicari : " ; cin >> cari;
        binarySearch(cari);
        break;
        case '7':
        cout << "Terima Kasih" << endl;
        break;

    }
}