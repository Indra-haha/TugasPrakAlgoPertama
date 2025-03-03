#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
using namespace std;

int n, a = 0, temp = 0; // n = jumlah data, a = angka default input
char pil, home;
string cari;
struct buku
{
    char judul[30];
    char pengarang[30];
    char penerbit[30];
    int terbit;
    int harga;
};
buku data[9999999];
struct dataKarantina
{
    char judul[30];
    char pengarang[30];
    char penerbit[30];
    int terbit;
    int harga;
};
dataKarantina sementara[9999999];

int inputDataBuku(int numBooks, int a)
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
    do
    {
        cout << a + 1 << ". Judul Buku" << setw(7) << setiosflags(ios::right) << ": ";
        cin.ignore();
        cin.getline(data[a].judul, 30);
        cout << "   Pengarang" << setw(8) << setiosflags(ios::right) << ": ";
        cin.ignore();
        cin.getline(data[a].pengarang, 30);
        cout << "   Penerbit" << setw(9) << setiosflags(ios::right) << ": ";
        cin.ignore();
        cin.getline(data[a].penerbit, 30);
        cout << "   Tahun Terbit" << setw(5) << setiosflags(ios::right) << ": ";
        cin >> data[a].terbit;
        cout << "   Harga" << setw(12) << setiosflags(ios::right) << ": ";
        cin >> data[a].harga;
        cout << endl;
        a++;
    } while (a < temp);
    a += numBooks;
    return 0;
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
                cout << data[b].judul << setw(20 - strlen(data[b].judul)) << setiosflags(ios::right) << "|";
                break;
            case 1:
                cout << data[b].pengarang << setw(20 - strlen(data[b].pengarang)) << setiosflags(ios::right) << "|";
                break;
            case 2:
                cout << data[b].penerbit << setw(20 - strlen(data[b].penerbit)) << setiosflags(ios::right) << "|";
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

int bubble_asc(int k, int temp)
{
    for (int a = 0; a < temp; a++)
    {
        for (int b = 0; b < temp; b++)
        {
            sementara[a].judul[b] = data[a].judul[b];
            sementara[a].pengarang[b] = data[a].pengarang[b];
            sementara[a].penerbit[b] = data[a].penerbit[b];
        }
        sementara[a].terbit = data[a].terbit;
        sementara[a].harga = data[a].harga;
    }
    for (int i = 0; i < temp - 1; i++)
    {
        for (int j = 0; j < temp - i - 1; j++)
        {
            for ( int l = 0; l < 30; l++)
            {
                if (k == 1)
            {
                if (sementara[i].judul[l] > sementara[i + 1].judul[l])
                {
                    swap(sementara[i], sementara[i + 1]);
                }
                else
                {
                    continue;
                }
            }
            else if (k == 2)
            {
                if (sementara[i].pengarang[l] > sementara[i + 1].pengarang[l])
                {
                    swap(sementara[i], sementara[i + 1]);
                }
                else
                {
                    continue;
                }
            }
            else if (k == 3)
            {
                if (sementara[i].penerbit[l] > sementara[i + 1].penerbit[l])
                {
                    swap(sementara[i], sementara[i + 1]);
                }
                else
                {
                    continue;
                }
            }
            else if (k == 4)
            {
                if (sementara[i].terbit > sementara[i + 1].terbit)
                {
                    swap(sementara[i], sementara[i + 1]);
                }
                else
                {
                    continue;
                }
            }
            else if (k == 5)
            {
                if (sementara[i].harga > sementara[i + 1].harga)
                {
                    swap(sementara[i], sementara[j + i]);
                }
                else
                {
                    continue;
                }
            }
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
                cout << sementara[b].judul << setw(20 - strlen(sementara[b].judul)) << setiosflags(ios::right) << "|";
                break;
            case 1:
                cout << sementara[b].pengarang << setw(20 - strlen(sementara[b].pengarang)) << setiosflags(ios::right) << "|";
                break;
            case 2:
                cout << sementara[b].penerbit << setw(20 - strlen(sementara[b].penerbit)) << setiosflags(ios::right) << "|";
                break;
            case 3:
                cout << sementara[b].terbit << setw(15 - (to_string(sementara[b].terbit)).size()) << setiosflags(ios::right) << "|";
                break;
            case 4:
                cout << sementara[b].harga << setw(15 - (to_string(sementara[b].harga)).size()) << setiosflags(ios::right) << "|";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}

int bubble_dsc(int n, int temp)
{
    cout << "belum ada";
    cout << n << endl;
    cout << temp << endl;
    // for (int j = 0; j < temp; j++)
    // {
    //     for (int i = j + 1; i < temp; i++)
    //     {
    //         if (data[j].nama[n][j] > data[i].nama[n][i])
    //         {
    //             swap(data[j], data[i]);
    //         }
    //     }
    // }
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
            system("cls");
            inputDataBuku(n, a);
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
            char urutan;
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
            case '1':
                cout << endl;
                cout << "Urutkan berdasarkan" << endl;
                cout << "1. Judul Buku" << endl;
                cout << "2. Pengarang" << endl;
                cout << "3. Penerbit" << endl;
                cout << "4. Tahun Terbit" << endl;
                cout << "5. Harga" << endl;
                cout << "Masukan pilihan : ";
                cin >> pilPengurutan;
                system("cls");
                cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                dataBuku();
                cout << endl;
                cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                switch (pilPengurutan)
                {
                case '1':
                    cout << sementara[0].judul[1] << endl;
                    cout << "Pengurutan berdasarkan Judul Buku" << endl;
                    bubble_asc(pilPengurutan, temp);
                    break;
                case '2':
                    cout << "Pengurutan berdasarkan Pengarang" << endl;
                    bubble_asc(pilPengurutan, temp);
                    break;
                case '3':
                    cout << "Pengurutan berdasarkan Penerbit" << endl;
                    bubble_asc(pilPengurutan, temp);
                    break;
                case '4':
                    cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                    bubble_asc(pilPengurutan, temp);
                    break;
                case '5':
                    cout << "Pengurutan berdasarkan Harga" << endl;
                    bubble_asc(pilPengurutan, temp);
                    break;
                }
                break;
            case '2':
                system("cls");
                cout << "Urutkan berdasarkan" << endl;
                cout << "1. Judul Buku" << endl;
                cout << "2. Pengarang" << endl;
                cout << "3. Penerbit" << endl;
                cout << "4. Tahun Terbit" << endl;
                cout << "5. Harga" << endl;
                cout << "Masukan pilihan : ";
                cin >> pilPengurutan;
                system("cls");
                cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                dataBuku();
                cout << endl;
                cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                switch (pilPengurutan)
                {
                case '1':
                    cout << "Pengurutan berdasarkan Judul Buku" << endl;
                    bubble_dsc(pilPengurutan, temp);
                    break;
                case '2':
                    cout << "Pengurutan berdasarkan Pengarang" << endl;
                    bubble_dsc(pilPengurutan, temp);
                    break;
                case '3':
                    cout << "Pengurutan berdasarkan Penerbit" << endl;
                    bubble_dsc(pilPengurutan, temp);
                    break;
                case '4':
                    cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                    bubble_dsc(pilPengurutan, temp);
                    break;
                case '5':
                    cout << "Pengurutan berdasarkan Harga" << endl;
                    bubble_dsc(pilPengurutan, temp);
                    break;
                }
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