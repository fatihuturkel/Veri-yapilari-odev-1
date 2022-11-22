#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
//#include "yoneticiListesiNode.cpp"
//#include "satirListesiNode.cpp"
#include "graphic.cpp"
using namespace std;

int main() {

	ifstream dosyaOku;

	string taranansatir;
	char karakter;
	float ortalama;
	float ArOrtalama[27][3];

	dosyaOku.open("veriler.txt");

	getline(dosyaOku, taranansatir);

	int satirno = 0;
	int i = 0;

	do
	{
		satirno++;
		int sayac = 0;
		int toplam = 0;
		istringstream iss(taranansatir);
		string sayiStr;
		while (getline(iss, sayiStr, ' ')) {

			stringstream ss(sayiStr);		 // string to int for sayý
			int sayiInt = 0;
			ss >> sayiInt;

			toplam = toplam + sayiInt;
			sayac++;
		}
		ortalama = (float)toplam / sayac;
		ortalama = round(ortalama * 10) / 10;   // virgülden sonra tek basamak icin yuvarlama islemi

		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
				ArOrtalama[i][0] = i;
			else if (j == 1)
				ArOrtalama[i][1] = ortalama;
			else
				ArOrtalama[i][2] = sayac;       // eleman sayısını kullanmak icin eklendi.
		}
		i++;
	} while (getline(dosyaOku, taranansatir));
	dosyaOku.close();

	yoneticiListesiNode* head = NULL;

	qsort(ArOrtalama, 27, sizeof(*ArOrtalama),                //  ortalama arrayini sýralýyor bu sýralama isleminden sonra ortalamalar sýralý bir biçimde durmaktadýr.
		[](const void* arg1, const void* arg2)->int
		{
			float const* lhs = static_cast<float const*>(arg1);
	float const* rhs = static_cast<float const*>(arg2);
	return (lhs[1] < rhs[1]) ? -1
		: ((rhs[1] < lhs[1]) ? 1
			: (lhs[1] < rhs[1] ? -1
				: ((rhs[1] < lhs[1] ? 1 : 0))));
		});

	// Yonetici düðümlerini oluþturur.
	for (int i = 0; i < 27; i++)
	{
		appendYonetici(&head, ArOrtalama[i][0], ArOrtalama[i][1],ArOrtalama[i][2]);
	}

	satirListesiNode* satirListesi[27];                   // Satir listesi headlerini oluþturur.
	for (int i = 0; i < 27; i++)
	{
		satirListesi[i] = NULL;
	}

	for (int i = 0; i < 27; i++)
	{
		dosyaOku.open("veriler.txt");
		// satir elemanlarini teker teker çekiyor.
		int satirNumber = satirDondur(head, i);
		for (int i = 0; i < satirNumber + 1; i++)    // +1 arrayda diziler 0dan basladýgý icin eksik satýr cýkma sorununu çözüyor.
		{
			getline(dosyaOku, taranansatir);
		}

		istringstream iss(taranansatir);
		string sayiStr;
		while (getline(iss, sayiStr, ' '))
		{
			stringstream ss(sayiStr);		 // string to int for sayi
			int sayiInt = 0;
			ss >> sayiInt;
			appendSatir(&satirListesi[i], sayiInt);
		}
		dosyaOku.close();
	}

	for (int i = 0; i < 27; i++)
	{
		bagla(head, satirListesi[i], i);
	}

	printAdres(head);
	graphic(head);
	
}





// gelecek islemler: interafktiflik tarafında fonksiyonel islemler eklenecek.
