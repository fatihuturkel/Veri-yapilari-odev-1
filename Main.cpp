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



	/*
	satirListesiNode* satirHead0 = NULL;
	satirListesiNode* satirHead1 = NULL;
	satirListesiNode* satirHead2 = NULL;
	satirListesiNode* satirHead3 = NULL;
	satirListesiNode* satirHead4 = NULL;
	satirListesiNode* satirHead5 = NULL;
	satirListesiNode* satirHead6 = NULL;
	satirListesiNode* satirHead7 = NULL;
	satirListesiNode* satirHead8 = NULL;
	satirListesiNode* satirHead9 = NULL;
	satirListesiNode* satirHead10 = NULL;
	satirListesiNode* satirHead11 = NULL;
	satirListesiNode* satirHead12 = NULL;
	satirListesiNode* satirHead13 = NULL;
	satirListesiNode* satirHead14 = NULL;
	satirListesiNode* satirHead15 = NULL;
	satirListesiNode* satirHead16 = NULL;
	satirListesiNode* satirHead17 = NULL;
	satirListesiNode* satirHead18 = NULL;
	satirListesiNode* satirHead19 = NULL;
	satirListesiNode* satirHead20 = NULL;
	satirListesiNode* satirHead21 = NULL;
	satirListesiNode* satirHead22 = NULL;
	satirListesiNode* satirHead23 = NULL;
	satirListesiNode* satirHead24 = NULL;
	satirListesiNode* satirHead25 = NULL;
	satirListesiNode* satirHead26 = NULL;
	*/

	/*
	appendSatir(&satirListesi[0], 1);
	appendSatir(&satirListesi[0], 2);
	printAdresSatir(satirListesi[0]);
	bagla(head, satirListesi[0], 0);
	printsatirlistesi(head, 0);
	*/

	/*
	printAdres(head);
	appendSatir(&satirHead0, 5);
	appendSatir(&satirHead0, 6);
	appendSatir(&satirHead1, 7);
	appendSatir(&satirHead1, 8);
	appendSatir(&satirHead2, 9);
	appendSatir(&satirHead2, 10);
	printAdresSatir(satirHead0);
	printAdresSatir(satirHead1);
	printAdresSatir(satirHead2);
	bagla(head, satirHead0, 0);
	bagla(head, satirHead1, 1);
	bagla(head, satirHead2, 2);
	printsatirlistesi(head, 0);
	printsatirlistesi(head, 1);
	printsatirlistesi(head, 2);
	*/
}