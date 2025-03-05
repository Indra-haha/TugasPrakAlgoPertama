#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int a = 0, temp = 0; // temp = total data sementara
int n;
char pil, home;
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

int tampilanHeaderSearch()
{
    cout << "Judul Buku" << setw(10) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
    cout << "Tahun terbit" << setw(3) << setiosflags(ios::right) << "|";
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
            else if (k == 6)
            {
                cout << "belum ada" << endl;
            }
            else if (k == 7)
            {
                cout << "belum ada" << endl;
            }
            else if (k == 8)
            {
                cout << "belum ada" << endl;
            }
            else if (k == 9 && manipulasi[j].terbit < manipulasi[j + 1].terbit)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            else if (k == 10 && manipulasi[j].harga < manipulasi[j + 1].harga)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
            // ascending untuk binary_search
            else if (k == 11 && manipulasi[j].terbit > manipulasi[j + 1].terbit)
            {
                swap(manipulasi[j], manipulasi[j + 1]);
            }
        }
    }
    if (k != 11)
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
            delete[] manipulasi;
            cout << "Kembali ke menu utama [y/n] : ";
            cin >> home;
        }
    }
    return 0;
}

int quick(int k, buku *manipulasi, int awal, int akhir)
{
    int low = awal, high = akhir;
    int pivot = manipulasi[(awal + akhir) / 2].terbit;
    if (k >= 1 && k <= 5)
    {
        do
        {
            while (manipulasi[low].terbit < pivot)
                low++;
            while (manipulasi[high].terbit > pivot)
                high--;

            if (low <= high)
            {
                swap(manipulasi[low], manipulasi[high]);
                low++;
                high--;
            }
        } while (low <= high);
        if (awal < high)
        {
            quick(k, manipulasi, awal, high);
        }
        if (low < akhir)
        {
            quick(k, manipulasi, low, akhir);
        }
    }
    else if (k >= 6 && k <= 10)
    {
        cout << "Belum ada" << endl;
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

int sequential_search(int temp, buku *data)
{
    if (temp >= 3)
    {
        int i, x;
        bool found;
        cout << "Masukkan tahun terbit buku yang anda cari = ";
        cin >> x;
        i = 0;
        found = false;
        while ((i <= temp) && (!found))
        {
            if (data[i].terbit == x)
            {
                found = true;
            }
            else
            {
                i++;
            }
        }
        if (i <= temp && (found))
        {
            cout << endl;
            tampilanHeaderSearch();
            for (int k = 0; k < 2; k++)
            {
                switch (k)
                {
                case 0:
                    cout << data[i].judul << setw(20 - data[i].judul.size()) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
                    break;
                case 1:
                    cout << data[i].terbit << setw(15 - (to_string(data[i].terbit)).size()) << setiosflags(ios::right) << "|";
                    break;
                }
            }
            cout << endl;
        }
        else
        {
            cout << "Buku yg terbit pada tahun " << x << " tidak tersedia." << endl;
        }
    }
    cout << endl;
    cout << "Kembali ke menu utama [y/n] : ";
    cin >> home;
    return 0;
}

int binary_search(int cari, buku *manipulasi, int temp)
{
    cout << endl;
    int awal = 0, akhir = temp - 1;
    int tengah;
    bool found = false; //
    while ((!found) & (awal <= akhir))
    {
        tengah = (awal + akhir) / 2;
        if (manipulasi[tengah].terbit == cari)
        {
            found = true;
        }
        else if (cari < manipulasi[tengah].terbit)
        {
            akhir = tengah - 1;
        }
        else
        {
            awal = tengah + 1;
        }
    }
    if (found)
    {
        cout << endl;
        tampilanHeaderSearch();
        for (int k = 0; k < 2; k++)
        {
            switch (k)
            {
            case 0:
                cout << data[awal].judul << setw(20 - data[awal].judul.size()) << setiosflags(ios::right) << "|" << setw(2) << setiosflags(ios::right) << " ";
                break;
            case 1:
                cout << data[awal].terbit << setw(15 - (to_string(data[awal].terbit)).size()) << setiosflags(ios::right) << "|";
                break;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "Buku yg terbit pada tahun " << cari << " tidak tersedia." << endl;
    }
    cout << endl;
    cout << "Kembali ke menu utama [y/n] : ";
    cin >> home;
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
        cout << "----MENU----" << endl;
        cout << "1. Input Data Buku" << endl;
        cout << "2. Tampilkan Data Buku" << endl;
        cout << "3. Urutkan Buku dengan Bubble Sort" << endl;
        cout << "4. Urutkan Buku dengan Quick Sort" << endl;
        cout << "5. Cari Buku dengan Sequential Search" << endl;
        cout << "6. Cari Buku dengan Binary Search" << endl;
        cout << "7. Keluar" << endl;
        cout << "Masukan pilihan : ";
        buku *manipulasi = new buku[temp];
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
            if (temp >= 10)
            {
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
                    break;
                case 2:
                    cout << endl;
                    daftarPilUrutan();
                    cout << "Masukan pilihan : ";
                    cin >> pilPengurutan;
                    system("cls");
                    cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                    dataBuku();
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
                    break;
                }
            }
            else
            {
                cout << "Data buku anda kurang dari 10" << endl;
                dataBuku();
                cout << endl;
                cout << "Input data buku minimal " << 10 - temp << " Data buku." << endl;
                cout << "Kembali ke menu utama [y/n] : ";
                cin >> home;
            }
            break;
        case '4':
            system("cls");
            if (temp >= 10)
            {
                int urutan;
                cout << "-----DATA AWAL SEBELUM DI URUTKAN-----" << endl;
                dataBuku();
                cout << "Pengurutan Data dengan Quick Sort" << endl;
                cout << "1. Urutkan data secara ascending : " << endl;
                cout << "2. Urutkan data secara descending : " << endl;
                cout << "Masukan pilihan : ";
                cin >> urutan;
                switch (urutan)
                {
                    char pilPengurutan;
                case 1:
                {
                    cout << endl;
                    daftarPilUrutan();
                    cout << "Masukan pilihan : ";
                    cin >> pilPengurutan;
                    system("cls");
                    cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                    dataBuku();
                    buku *manipulasi = new buku[temp];
                    salinData(data, manipulasi, temp);
                    cout << endl;
                    cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                    switch (pilPengurutan)
                    {
                    case '1':
                        cout << "Pengurutan berdasarkan Judul Buku" << endl;
                        quick(1, manipulasi, 0, n - 1);
                        break;
                    case '2':
                        cout << "Pengurutan berdasarkan Pengarang" << endl;
                        quick(2, manipulasi, 0, n - 1);
                        break;
                    case '3':
                        cout << "Pengurutan berdasarkan Penerbit" << endl;
                        quick(3, manipulasi, 0, n - 1);
                        break;
                    case '4':
                        cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                        quick(4, manipulasi, 0, n - 1);
                        break;
                    case '5':
                        cout << "Pengurutan berdasarkan Harga" << endl;
                        quick(5, manipulasi, 0, n - 1);
                        break;
                    }
                    break;
                }
                case 2:
                {
                    cout << endl;
                    daftarPilUrutan();
                    cout << "Masukan pilihan : ";
                    cin >> pilPengurutan;
                    system("cls");
                    cout << "-----DATA SEBELUM DI URUTKAN-----" << endl;
                    dataBuku();
                    buku *manipulasi = new buku[temp];
                    salinData(data, manipulasi, temp);
                    cout << endl;
                    cout << "-----DATA SETELAH DI URUTKAN-----" << endl;
                    switch (pilPengurutan)
                    {
                    case '1':
                        cout << "Pengurutan berdasarkan Judul Buku" << endl;
                        quick(6, manipulasi, 0, n - 1);
                        break;
                    case '2':
                        cout << "Pengurutan berdasarkan Pengarang" << endl;
                        quick(7, manipulasi, 0, n - 1);
                        break;
                    case '3':
                        cout << "Pengurutan berdasarkan Penerbit" << endl;
                        quick(8, manipulasi, 0, n - 1);
                        break;
                    case '4':
                        cout << "Pengurutan berdasarkan Tahun Terbit" << endl;
                        quick(9, manipulasi, 0, n - 1);
                        break;
                    case '5':
                        cout << "Pengurutan berdasarkan Harga" << endl;
                        quick(10, manipulasi, 0, n - 1);
                        break;
                    }
                    break;
                }
                }
            }
            else
            {
                cout << "Data buku anda kurang dari 10" << endl;
                dataBuku();
                cout << endl;
                cout << "Input data buku minimal " << 10 - temp << " Data buku." << endl;
                cout << "Kembali ke menu utama [y/n] : ";
                cin >> home;
            }
            break;
        case '5':
            system("cls");
            cout << "Pencarian Data dengan Sequential Search" << endl;
            sequential_search(temp, data);
            break;
        case '6':
            system("cls");
            int cari;
            cout << "Pencarian Data dengan Binary Search" << endl;
            salinData(data, manipulasi, temp);
            bubble(11, temp, manipulasi);
            cout << "Masukkan tahun terbit buku yang dicari = ";
            cin >> cari;
            cout << endl;
            binary_search(cari, manipulasi, temp);
            break;
        case '7':
            cout << "Terima Kasih" << endl;
            break;
        }
    } while (home == 'y');
}