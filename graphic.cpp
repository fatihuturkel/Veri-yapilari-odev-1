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
	int index = 1,cikis=1;
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
		switch (index)
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
		}

		do
		{
			cin >> input;
			switch (input)
			{
			case 'a':
				if (index == 0)
				{
					cout << "Ilk satirdan geriye gidilemez.";
					system("pause");
					cikis = 0;
				}
				else
				{
					index--;
					cikis = 1;
				}
				break;

			case 'd':
				if (index == 26)
				{
					cout << "Son satirdan ileriye gidilemez.";
					system("pause");
					cikis = 0;
				}
				else
				{
					index++;
					cikis = 1;
				}
				break;

			}
		} while (cikis!=1);
		
	} while (index != 5);

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