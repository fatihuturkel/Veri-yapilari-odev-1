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

	string taranansatýr;
	char karakter;
	float ortalama;
	float ArOrtalama[27][2];

	dosyaOku.open("veriler.txt");

	getline(dosyaOku, taranansatýr);

	int satýrno = 0;
	int i = 0;

	do
	{
		satýrno++;
		int sayac = 0;
		int toplam = 0;
		istringstream iss(taranansatýr);
		string sayýStr;
		while (getline(iss, sayýStr, ' ')) {

			stringstream ss(sayýStr);		 // string to int for sayý
			int sayýInt = 0;
			ss >> sayýInt;

			toplam = toplam + sayýInt;
			sayac++;
		}
		ortalama = (float)toplam / sayac;
		ortalama = round(ortalama * 10) / 10;   // virgülden sonra tek basamak icin yuvarlama islemi

		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
				ArOrtalama[i][0] = i;
			else
				ArOrtalama[i][j] = ortalama;
		}
		i++;
	} while (getline(dosyaOku, taranansatýr));
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
		appendYonetici(&head, ArOrtalama[i][0], ArOrtalama[i][1]);
	}

	satirListesiNode* satirListesi[27];                   // Satir listesi headlerini oluþturur.
	for (int i = 0; i < 27; i++)
	{
		satirListesi[i] = NULL;
	}

	for (int i = 0; i < 27; i++)
	{
		dosyaOku.open("veriler.txt");
		// satir elemanlarýný teker teker çekiyor.
		int satirNumber = satirDondur(head, i);
		for (int i = 0; i < satirNumber + 1; i++)    // +1 arrayda diziler 0dan basladýgý icin eksik satýr cýkma sorununu çözüyor.
		{
			getline(dosyaOku, taranansatýr);
		}

		istringstream iss(taranansatýr);
		string sayiStr;
		while (getline(iss, sayiStr, ' '))
		{
			//cout <<  sayýStr << endl;

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

	/*
	for (int i = 0; i < 27; i++)
	{
		printAdresSatir(satirListesi[i]);
	}
	*/

	printAdres(head);
	graphic(head);

}