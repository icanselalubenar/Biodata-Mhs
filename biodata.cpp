#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct biodata
	{
		string nama, alamat, nim;
		int umur;
	};
	struct biodata mhs;
	
	cout << "Masukan Nama Mahasiswa   : "; getline(cin, mhs.nama);
	cout << "Masukan NIM Mahasiswa    : "; getline(cin, mhs.nim);
	cout << "Masukan Alamat Mahasiswa : "; getline(cin, mhs.alamat);
	cout << "Masukan Umur Mahasiswa   : "; cin >> mhs.umur;
	
	system("cls");
	
	cout << "+================= Biodata =================+" << endl;
	cout << " Nama Mahasiswa   = " << mhs.nama << endl;
	cout << " NIM Mahasiswa    = " << mhs.nim << endl;
	cout << " Alamat Mahasiswa = " << mhs.alamat << endl;
	cout << " Umur Mahasiswa   = " << mhs.umur << endl;
	cout << "+===========================================+" << endl;
}
