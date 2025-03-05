#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int a = 0, temp = 0;
int n;
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
buku data[999999];

int inputDataBuku(int numBooks)
{
    temp += numBooks;
    if (a == 0)
    {
        cout << "Data anda masih kosong!!" << endl;
    }
    else
    {
        cout << "Anda memiliki " << temp << " data buku." << endl;
    }
    cout << "Anda akan memasukan " << numBooks << " data buku." << endl;
    for (int x = a; x < temp; x++)
    {
        cout << x + 1 << ". Judul Buku" << setw(7) << setiosflags(ios::right) << ": ";
        cin.ignore();
        getline(cin, data[x].judul);
        cout << "   Pengarang" << setw(8) << setiosflags(ios::right) << ": ";
        cin.ignore();
        getline(cin, data[x].pengarang);
        cout << "   Penerbit" << setw(9) << setiosflags(ios::right) << ": ";
        cin.ignore();
        getline(cin, data[x].penerbit);
        cout << "   Tahun Terbit" << setw(5) << setiosflags(ios::right) << ": ";
        cin >> data[x].terbit;
        cout << "   Harga" << setw(12) << setiosflags(ios::right) << ": ";
        cin >> data[x].harga;
        cout << endl;
    }
    a += numBooks;
    return temp, a;
}

int tampilanHeader()
{
    cout << "                                               Data Buku                                            " << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << setw(2) << setiosflags(ios::right) << " ";
    cout << "Judul Buku" << setw(10) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << "Pengarang" << setw(11) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << "Penerbit" << setw(12) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << "Tahun terbit" << setw(3) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << "Harga" << setw(10) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << endl;
    cout << "-" << setfill('-');
    cout << setw(99) << setiosflags(ios::left) << "-";
    cout << endl;
    cout << setfill(' ');
    return 0;
}

int dataBuku()
{
    tampilanHeader();
    for (int b = 0; b < temp; b++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << setw(2) << " ";
            switch (k)
            {
            case 0:
                cout << data[b].judul << setw(20 - data[b].judul.size()) << setiosflags(ios::right) << "|";
                break;
            case 1:
                cout << data[b].pengarang << setw(20 - data[b].pengarang.size()) << setiosflags(ios::right) << "|";
                break;
            case 2:
                cout << data[b].penerbit << setw(20 - data[b].penerbit.size()) << setiosflags(ios::right) << "|";
                break;
            case 3:
                cout << data[b].terbit << setw(15 - (to_string(data[b].terbit)).size()) << setiosflags(ios::right) << "|";
                break;
            case 4:
                cout << data[b].harga << setw(15 - (to_string(data[b].harga)).size()) << setiosflags(ios::right) << "|";
                break;
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int salinData(buku *data, buku *manipulasi, int temp)
{
    for (int i = 0; i < temp; i++)
    {
        manipulasi[i].judul = data[i].judul;
        manipulasi[i].pengarang = data[i].pengarang;
        manipulasi[i].penerbit = data[i].penerbit;
        manipulasi[i].terbit = data[i].terbit;
        manipulasi[i].harga = data[i].harga;
    }
    return 0;
}

int bubble(int k, int temp, buku *manipulasi)
{
    for (int i = 0; i < temp - 1; ++i)
    {
        for (int j = 0; j < temp - i - 1; ++j)
        {
            // ascending
            if (k == 1)
            {
                cout << "belum ada" << endl;
            }
            else if (k == 2)
            {
                cout << "berlum ada" << endl;
            }
            else if (k == 3)
            {
                cout << "belum ada" << endl;
            }
            else if (k == 4 && manipulasi[j].terbit > manipulasi[j + 1].terbit)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 5 && manipulasi[j].harga > manipulasi[j + 1].harga)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            // descending
            else if (k == 6 && manipulasi[j].judul < manipulasi[j + 1].judul)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 7 && manipulasi[j].pengarang < manipulasi[j + 1].pengarang)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 8 && manipulasi[j].penerbit < manipulasi[j + 1].penerbit)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 9 && manipulasi[j].terbit < manipulasi[j + 1].terbit)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 10 && manipulasi[j].harga < manipulasi[j + 1].harga)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
        }
    }
    tampilanHeader();
    for (int b = 0; b < temp; b++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << setw(2) << " ";
            switch (k)
            {
            case 0:
                cout << manipulasi[b].judul << setw(20 - manipulasi[b].judul.size()) << setiosflags(ios::right) << "|";
                break;
            case 1:
                cout << manipulasi[b].pengarang << setw(20 - manipulasi[b].pengarang.size()) << setiosflags(ios::right) << "|";
                break;
            case 2:
                cout << manipulasi[b].penerbit << setw(20 - manipulasi[b].penerbit.size()) << setiosflags(ios::right) << "|";
                break;
            case 3:
                cout << manipulasi[b].terbit << setw(15 - (to_string(manipulasi[b].terbit)).size()) << setiosflags(ios::right) << "|";
                break;
            case 4:
                cout << manipulasi[b].harga << setw(15 - (to_string(manipulasi[b].harga)).size()) << setiosflags(ios::right) << "|";
                break;
            }
        }
        cout << endl;
    }
    cout << "Kembali ke menu utama [y/n] : ";
    cin >> home;
    if (home == 'y')
    {
        delete[] manipulasi;
    }
    return 0;
}

int quick(int k, int temp, buku *manipulasi)
{
    cout << "belum ada";
    return 0;
}

int sequential_search()
{
    cout << "belum ada";
    return 0;
}

int binary_search()
{
    cout << "belum ada";
    return 0;
}

int daftarPilUrutan()
{
    cout << "Urutkan berdasarkan" << endl;
    cout << "1. Judul Buku" << endl;
    cout << "2. Pengarang" << endl;
    cout << "3. Penerbit" << endl;
    cout << "4. Tahun Terbit" << endl;
    cout << "5. Harga" << endl;
    return 0;
}

int main()
{
    do
    {
        system("cls");
        home = 'n';
        buku *manipulasi;
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
            system("cls");
            inputDataBuku(n);
            cout << "Kembali ke menu utama [y/n] : ";
            cin >> home;
            break;
        case '2':
            system("cls");
            dataBuku();
            cout << "Kembali ke menu utama [y/n] : ";
            cin >> home;
            break;
        case '3':
            system("cls");
            int urutan;
            cout << "-----DATA AWAL SEBELUM DI URUTKAN-----" << endl;
            dataBuku();
            cout << "Pengurutan Data dengan Bubble Sort" << endl;
            cout << "1. Urutkan data secara ascending : " << endl;
            cout << "2. Urutkan data secara descending : " << endl;
            cout << "Masukan pilihan : ";
            cin >> urutan;
            switch (urutan)
            {
                char pilPengurutan;
            case 1:
                cout << endl;
                daftarPilUrutan();
                cout << "Masukan pilihan : ";
                cin >> pilPengurutan;
                system("cls");
                cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                dataBuku();
                if (temp > 0)
                {
                    buku *manipulasi = new buku[temp];
                    salinData(data, manipulasi, temp);
                    cout << endl;
                    cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                    switch (pilPengurutan)
                    {
                    case '1':
                        cout << "Pengurutan berdasarkan Judul Buku" << endl;
                        bubble(1, temp, manipulasi);
                        break;
                    case '2':
                        cout << "Pengurutan berdasarkan Pengarang" << endl;
                        bubble(2, temp, manipulasi);
                        break;
                    case '3':
                        cout << "Pengurutan berdasarkan Penerbit" << endl;
                        bubble(3, temp, manipulasi);
                        break;
                    case '4':
                        cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                        bubble(4, temp, manipulasi);
                        break;
                    case '5':
                        cout << "Pengurutan berdasarkan Harga" << endl;
                        bubble(5, temp, manipulasi);
                        break;
                    }
                    cout << "Kembali ke menu utama [y/n] : ";
                    cin >> home;
                    break;
                }
            case 2:
                cout << endl;
                daftarPilUrutan();
                cout << "Masukan pilihan : ";
                cin >> pilPengurutan;
                system("cls");
                cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                dataBuku();
                if (temp > 0)
                {
                    buku *manipulasi = new buku[temp];
                    salinData(data, manipulasi, temp);
                    cout << endl;
                    cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                    switch (pilPengurutan)
                    {
                    case '1':
                        cout << "Pengurutan berdasarkan Judul Buku" << endl;
                        bubble(6, temp, manipulasi);
                        break;
                    case '2':
                        cout << "Pengurutan berdasarkan Pengarang" << endl;
                        bubble(7, temp, manipulasi);
                        break;
                    case '3':
                        cout << "Pengurutan berdasarkan Penerbit" << endl;
                        bubble(8, temp, manipulasi);
                        break;
                    case '4':
                        cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                        bubble(9, temp, manipulasi);
                        break;
                    case '5':
                        cout << "Pengurutan berdasarkan Harga" << endl;
                        bubble(10, temp, manipulasi);
                        break;
                    }
                    cout << "Kembali ke menu utama [y/n] : ";
                    cin >> home;
                    break;
                }
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
            cout << "Masukan tahun terbit buku yang dicari : ";
            cin >> cari;
            break;
        case '6':
            cout << "Pencarian Data dengan Binary Search" << endl;
            cout << "Masukan tahun terbit buku yang dicari : ";
            cin >> cari;
            break;
        case '7':
            cout << "Terima Kasih" << endl;
            break;
        }
    } while (home == 'y');
}