#include <iostream>
using namespace std;

// class induk
class BangunDatar{
	protected:
		int panjang, tinggi;
		
	public:
		void setDimensi(int p, int t){
			panjang = p;
			tinggi = t;
		}
};

// class turunan 1
class PersegiPanjang : public BangunDatar{
	public:
		int luas(){
			return (panjang * tinggi);
		}
};

// class turunan 2
class Segitiga : public BangunDatar{
	public: 
		int luas (){
			return ((panjang * tinggi) / 2);
		}
};

// class turunan 3 (Persegi)
class Persegi : public BangunDatar{
	public:
		int luas(){
			return (panjang * panjang);
		}
};

int main (){

	PersegiPanjang persegi_panjang;
	Segitiga segitiga;
	Persegi persegi;
	
	int panjang, tinggi, sisi;
	
	// Input untuk persegi panjang
	cout << "Masukkan panjang persegi panjang: ";
	cin >> panjang;
	cout << "Masukkan tinggi persegi panjang: ";
	cin >> tinggi;
	persegi_panjang.setDimensi(panjang, tinggi);

	cout << "Masukkan alas segitiga: ";
	cin >> panjang;
	cout << "Masukkan tinggi segitiga: ";
	cin >> tinggi;
	segitiga.setDimensi(panjang, tinggi);
	
	cout << "Masukkan sisi persegi: ";
	cin >> sisi;
	persegi.setDimensi(sisi, sisi);
	
	cout << "Luas Persegi Panjang: " << persegi_panjang.luas() << endl;
	cout << "Luas Segitiga: " << segitiga.luas() << endl;
	cout << "Luas Persegi: " << persegi.luas() << endl;
	
	return 0;
}

