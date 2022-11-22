#include <iomanip>
#include "yoneticiListesiNode.cpp"
#include "satirListesiNode.cpp"
using namespace std;

void ilk_Cizgi_Son();
void yatayCizgiUzun();
void yatayCizgiKisa();
void dikenIsareti();
void boslukBirak(int);

inline void graphic(yoneticiListesiNode* yoneticiNode) {
	int innerIndex = 0, outerCikis = 0;
	char input;

	satirListesiNode satirListesiBasNodeTutucu[27];
	for (int i = 0; i < 27; i++)
	{
		satirListesiBasNodeTutucu[i] = satirDondurV2(yoneticiNode, i);
	}

	do
	{


		system("cls");
		ilk_Cizgi_Son();

		for (int i = 0; i < 8; i++)
		{
			printYoneticiAdresSelf(yoneticiNode, i);
			cout << "   ";
		}

		yatayCizgiUzun();

		for (int i = 0; i < 8; i++)
		{
			printYoneticiAdresPrev(yoneticiNode, i);
			cout << "   ";
		}

		yatayCizgiUzun();

		for (int i = 0; i < 8; i++)
		{
			printYoneticiOrtalama(yoneticiNode, i);
			cout << "   ";
		}

		yatayCizgiUzun();

		for (int i = 0; i < 8; i++)
		{
			printYoneticiAdresNext(yoneticiNode, i);
			cout << "   ";
		}

		yatayCizgiUzun();
		cout << endl;
		switch (innerIndex)
		{
		case 0:
			boslukBirak(0), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 0); i++)
			{
				boslukBirak(0), deneme4(yoneticiNode, 0, 2, satirListesiBasNodeTutucu[0]), cout << endl; // adres
				boslukBirak(0), yatayCizgiKisa();
				boslukBirak(0), deneme4(yoneticiNode, 0, 1, satirListesiBasNodeTutucu[0]), cout << endl; //data
				boslukBirak(0), yatayCizgiKisa();
				boslukBirak(0), deneme4(yoneticiNode, 0, 4, satirListesiBasNodeTutucu[0]), cout << endl; //next
				boslukBirak(0), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 0, 3, satirListesiBasNodeTutucu[0]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 0, 5, satirListesiBasNodeTutucu[0]);               // bas node adresini atar.

			break;
		case 1:
			boslukBirak(1), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 1); i++)
			{
				boslukBirak(1), deneme4(yoneticiNode, 1, 2, satirListesiBasNodeTutucu[1]), cout << endl; // adres
				boslukBirak(1), yatayCizgiKisa();
				boslukBirak(1), deneme4(yoneticiNode, 1, 1, satirListesiBasNodeTutucu[1]), cout << endl; //data
				boslukBirak(1), yatayCizgiKisa();
				boslukBirak(1), deneme4(yoneticiNode, 1, 4, satirListesiBasNodeTutucu[1]), cout << endl; //next
				boslukBirak(1), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 1, 3, satirListesiBasNodeTutucu[1]);       // next node'a geçer.
			}
			deneme4(yoneticiNode, 1, 5, satirListesiBasNodeTutucu[1]);           // bas node adresini atar.

			break;
		case 2:
			boslukBirak(2), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 2); i++)
			{
				boslukBirak(2), deneme4(yoneticiNode, 2, 2, satirListesiBasNodeTutucu[2]), cout << endl; // adres
				boslukBirak(2), yatayCizgiKisa();
				boslukBirak(2), deneme4(yoneticiNode, 2, 1, satirListesiBasNodeTutucu[2]), cout << endl; //data
				boslukBirak(2), yatayCizgiKisa();
				boslukBirak(2), deneme4(yoneticiNode, 2, 4, satirListesiBasNodeTutucu[2]), cout << endl; //next
				boslukBirak(2), yatayCizgiKisa();

				cout << endl<<endl;
				deneme4(yoneticiNode, 2, 3, satirListesiBasNodeTutucu[2]);      // next node'a geçer.
			}
			deneme4(yoneticiNode, 2, 5, satirListesiBasNodeTutucu[2]);          // bas node adresini atar.

			break;
		case 3:
			boslukBirak(3), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 3); i++)
			{
				boslukBirak(3), deneme4(yoneticiNode, 3, 2, satirListesiBasNodeTutucu[3]), cout << endl; // adres
				boslukBirak(3), yatayCizgiKisa();
				boslukBirak(3), deneme4(yoneticiNode, 3, 1, satirListesiBasNodeTutucu[3]), cout << endl; //data
				boslukBirak(3), yatayCizgiKisa();
				boslukBirak(3), deneme4(yoneticiNode, 3, 4, satirListesiBasNodeTutucu[3]), cout << endl; //next
				boslukBirak(3), yatayCizgiKisa();

				cout << endl<<endl;
				deneme4(yoneticiNode, 3, 3, satirListesiBasNodeTutucu[3]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 3, 5, satirListesiBasNodeTutucu[3]);               // bas node adresini atar.

			break;
		case 4:
			boslukBirak(4), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 4); i++)
			{
				boslukBirak(4), deneme4(yoneticiNode, 4, 2, satirListesiBasNodeTutucu[4]), cout << endl; // adres
				boslukBirak(4), yatayCizgiKisa();
				boslukBirak(4), deneme4(yoneticiNode, 4, 1, satirListesiBasNodeTutucu[4]), cout << endl; //data
				boslukBirak(4), yatayCizgiKisa();
				boslukBirak(4), deneme4(yoneticiNode, 4, 4, satirListesiBasNodeTutucu[4]), cout << endl; //next
				boslukBirak(4), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 4, 3, satirListesiBasNodeTutucu[4]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 4, 5, satirListesiBasNodeTutucu[4]);               // bas node adresini atar.

			break;
		case 5:
			boslukBirak(5), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 5); i++)
			{
				boslukBirak(5), deneme4(yoneticiNode, 5, 2, satirListesiBasNodeTutucu[5]), cout << endl; // adres
				boslukBirak(5), yatayCizgiKisa();
				boslukBirak(5), deneme4(yoneticiNode, 5, 1, satirListesiBasNodeTutucu[5]), cout << endl; //data
				boslukBirak(5), yatayCizgiKisa();
				boslukBirak(5), deneme4(yoneticiNode, 5, 4, satirListesiBasNodeTutucu[5]), cout << endl; //next
				boslukBirak(5), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 5, 3, satirListesiBasNodeTutucu[5]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 5, 5, satirListesiBasNodeTutucu[5]);               // bas node adresini atar.

			break;
		case 6:
			boslukBirak(6), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 6); i++)
			{
				boslukBirak(6), deneme4(yoneticiNode, 6, 2, satirListesiBasNodeTutucu[6]), cout << endl; // adres
				boslukBirak(6), yatayCizgiKisa();
				boslukBirak(6), deneme4(yoneticiNode, 6, 1, satirListesiBasNodeTutucu[6]), cout << endl; //data
				boslukBirak(6), yatayCizgiKisa();
				boslukBirak(6), deneme4(yoneticiNode, 6, 4, satirListesiBasNodeTutucu[6]), cout << endl; //next
				boslukBirak(6), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 6, 3, satirListesiBasNodeTutucu[6]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 6, 5, satirListesiBasNodeTutucu[6]);               // bas node adresini atar.

			break;
		case 7:
			boslukBirak(7), dikenIsareti();
			for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 7); i++)
			{
				boslukBirak(7), deneme4(yoneticiNode, 7, 2, satirListesiBasNodeTutucu[7]), cout << endl; // adres
				boslukBirak(7), yatayCizgiKisa();
				boslukBirak(7), deneme4(yoneticiNode, 7, 1, satirListesiBasNodeTutucu[7]), cout << endl; //data
				boslukBirak(7), yatayCizgiKisa();
				boslukBirak(7), deneme4(yoneticiNode, 7, 4, satirListesiBasNodeTutucu[7]), cout << endl; //next
				boslukBirak(7), yatayCizgiKisa();

				cout << endl << endl;
				deneme4(yoneticiNode, 7, 3, satirListesiBasNodeTutucu[7]);           // next node'a geçer.
			}
			deneme4(yoneticiNode, 7, 5, satirListesiBasNodeTutucu[7]);               // bas node adresini atar.

			break;
		}

		int cikis = 1;
		do
		{
			cin >> input;
			switch (input)
			{
			case 'z':
				if (innerIndex == 0)
				{
					cout << "Ilk satirdan geriye gidilemez.";
					system("pause");
					cikis = 0;
				}
				else
				{
					innerIndex--;
					cikis = 1;
				}
				break;

			case 'c':
				if (innerIndex == 26)
				{
					cout << "Son satirdan ileriye gidilemez.";
					system("pause");
					cikis = 0;
				}
				else
				{
					innerIndex++;
					cikis = 1;
				}
				break;
			case 'x':
				outerCikis = 1;
				break;
			}
		} while (cikis!=1);
		
	} while (outerCikis != 1);

}

// ilk satýrda bulunan ilk , son yazýsý ve ---> iþaretini ekrana cizdiren fonksiyon
inline void ilk_Cizgi_Son() {
	cout << "ilk" << setw(170) << "--->" << endl;
}

inline void yatayCizgiUzun() {
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "------------------" << "   ";
	}
	cout << endl;
}

inline void yatayCizgiKisa() {
	cout << "------------------" << "   ";
	cout << endl;
}

inline void dikenIsareti() {
	cout << "^^^^^^^^^^^^^^^^^^" << "   ";
	cout << endl;
}

inline void boslukBirak(int carpim) {
	for (int i = 0; i < carpim; i++)
	{
		cout << "                  " << "   ";
	}
}