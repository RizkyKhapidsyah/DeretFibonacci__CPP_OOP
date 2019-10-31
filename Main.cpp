#include "Class_Fibonacci.cpp"

/* 
	Reference by Kelas Terbuka
	Modified by Rizky Khapidsyah 
*/

int main()
{
	Fibonacci F;

	F.BannerJudul(Judul);
	F.Tanya(Pertanyaan);
	
	cin >> F.n;

	F.f_n1 = 0;
	F.f_n2 = 1;
	
	F.DeretPertama(
		F.f_n2, 
		F.f_n1
	);
	
	F.DeretHasil(
		F.n, 
		F.f_n, 
		F.f_n1, 
		F.f_n2
	);
	
	_getch();
	return 0;
}