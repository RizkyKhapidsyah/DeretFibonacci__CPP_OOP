#include <iostream>
#include <conio.h>
#include <string>

/*
	Reference by Kelas Terbuka
	Modified by Rizky Khapidsyah
*/

#define Spasi " "
#define GMin '-'
#define Judul "DERET FIBONACCI"
#define Ulangi 24
#define Pertanyaan "\nMasukkan Nilai Ke-n: "

using namespace std;

class Fibonacci
{
public:
	int n, f_n, f_n1, f_n2;
	
	void DeretPertama(int f_n1Param, int f_n2Param)
	{
		cout << f_n2Param << Spasi;
		cout << f_n1Param << Spasi;
	}

	void DeretHasil(int nParam, int f_nParam, int f_n1Param, int f_n2Param)
	{
		for (int i = 1; i < nParam; i++)
		{
			f_nParam = f_n1Param + f_n2Param;
			f_n2Param = f_n1Param;
			f_n1Param = f_nParam;

			cout << f_nParam << Spasi;
		}
	}

	void BannerGaris(char C)
	{
		for (int i = 0; i < Ulangi; i++)
		{
			cout << C;
		}
	}

	void BannerJudul(string J)
	{
		BannerGaris(GMin);
		cout << endl << J << endl;
		BannerGaris(GMin);
	}

	void Tanya(string T)
	{
		cout << T;
	}
};
