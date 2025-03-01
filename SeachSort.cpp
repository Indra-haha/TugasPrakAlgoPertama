#include <iostream>
#include <iomanip>
using namespace std;

int n, a = 0, temp = 0; // n = jumlah data, a = angka default input
char pil, home;
string cari;
struct buku
{
    string judul;
    string pengarang;
    string penerbit;
    int terbit;
    int harga;
};
buku data[9999999];

int inputDataBuku(int n)
{
    system("cls");
    temp += n;
    if (a == 0)
    {
        cout << "Data anda masih kosong!!" << endl;
    }
    else
    {
        cout << "Anda memiliki " << temp << " data buku." << endl;
    }
    cout << "Anda akan memasukan " << n << " data buku." << endl;
    do
    {
        cout << a + 1 << ". Judul Buku" << setw(7) << setiosflags(ios::right) << ": ";
        cin >> data[a].judul;
        cout << "   Pengarang" << setw(8) << setiosflags(ios::right) << ": ";
        cin >> data[a].pengarang;
        cout << "   Penerbit" << setw(9) << setiosflags(ios::right) << ": ";
        cin >> data[a].penerbit;
        cout << "   Tahun Terbit" << setw(5) << setiosflags(ios::right) << ": ";
        cin >> data[a].terbit;
        cout << "   Harga" << setw(12) << setiosflags(ios::right) << ": ";
        cin >> data[a].harga;
        cout << endl;
        a++;
    } while (a < temp);
    a += n - 1;
    return 0;
}

int dataBuku(int n)
{
    system("cls");
    cout << "Judul Buku" << setw(5) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
    cout << "Pengarang" << setw(6) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
    cout << "Penerbit" << setw(7) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
    cout << "Tahun terbit" << setw(3) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
    cout << "Harga" << setw(10) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
    cout << endl ;
    cout << "-" << setfill('-');
    cout << setw(86) << setiosflags(ios::left) << "-";
    cout << endl ;
    cout << setfill(' ');
    for (int b = 0; b < temp; b++)
    {
        for (int k = 0; k < 5; k++)
        {
            switch (k)
            {
            case 0:
                cout << data[b].judul << setw(15-(data[b].judul).size()) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
                break;
            case 1:
                cout << data[b].pengarang << setw(15-(data[b].pengarang).size()) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
                break;
            case 2:
                cout << data[b].penerbit << setw(15-(data[b].penerbit).size()) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
                break;
            case 3:
                cout << data[b].terbit << setw(15-(to_string(data[b].terbit)).size()) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
                break;
            case 4:
                cout << data[b].harga << setw(15-(to_string(data[b].harga)).size()) << setiosflags(ios::right) << "|" << setw(3) << setiosflags(ios::right) << " ";
                break;
            }
        }
        cout << endl;
    }
    cout << endl ;
    return 0;
}
int main()
{
    do
    {
        system("cls");
        home = 'n';
        cout << "----MENU----" << endl;
        cout << "1. Input Data Buku" << endl;
        cout << "2. Tampilkan Data Buku" << endl;
        cout << "3. Urutkan Buku dengan Bubble Sort" << endl;
        cout << "4. Urutkan Buku dengan Quick Sort" << endl;
        cout << "5. Cari Buku dengan Sequential Search" << endl;
        cout << "6. Cari Buku dengan Binary Search" << endl;
        cout << "7. Keluar" << endl;
        cout << "Masukan pilihan : ";
        cin >> pil;
        switch (pil)
        {
        case '1':
            cout << "Masukan jumlah buku : ";
            cin >> n;
            inputDataBuku(n);
            cout << "Kembali ke menu utama [y/n] : ";
            cin >> home;
            break;
        case '2':
            dataBuku(n);
            cout << "Kembali ke menu utama [y/n] : ";
            cin >> home;
            break;
        case '3':
            char urutan;
            cout << "-----DATA AWAL SEBELUM DI URUTKAN-----" << endl;
            dataBuku(n);
            cout << "Pengurutan Data dengan Bubble Sort" << endl;
            cout << "1. Urutkan data secara ascending : " << endl;
            cout << "2. Urutkan data secara descending : " << endl;
            cout << "Masukan pilihan : ";
            cin >> urutan;
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
            cout << "1. Urutkan data secara ascending : " << endl;
            cout << "2. Urutkan data secara descending : " << endl;
            cout << "Masukan pilihan : ";
            cin >> urutan;
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
            cout << "Masukan judul buku yang dicari : ";
            cin >> cari;
            break;
        case '6':
            cout << "Pencarian Data dengan Binary Search" << endl;
            cout << "Masukan judul buku yang dicari : ";
            cin >> cari;
            break;
        case '7':
            cout << "Terima Kasih" << endl;
            break;
        }
    } while (home == 'y');
}