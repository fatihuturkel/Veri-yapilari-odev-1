#include <iomanip>
#include "yoneticiListesiNode.cpp"
#include "satirListesiNode.cpp"
using namespace std;

void ilk_yazisi_ok_isareti();
void ok_isareti_sola_saga();
void yatayCizgiUzun();
void yatayCizgiKisa();
void dikenIsareti();
void boslukBirak(int);

inline void graphic(yoneticiListesiNode* yoneticiNode) {
	int innerIndex = 0, outerCikis = 0,outerIndex=0;
	char input;

	satirListesiNode satirListesiBasNodeTutucu[27];
	for (int i = 0; i < 27; i++)
	{
		satirListesiBasNodeTutucu[i] = satirDondurV2(yoneticiNode, i);
	}

	do
	{	
		system("cls");
		switch (outerIndex)
		{
		case 0:
			ilk_yazisi_ok_isareti();

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

					cout << endl << endl;
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

					cout << endl << endl;
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
			break;

		case 1:
			ok_isareti_sola_saga();

			for (int i = 0; i < 8; i++)
			{
				printYoneticiAdresSelf(yoneticiNode, i+8);
				cout << "   ";
			}

			yatayCizgiUzun();

			for (int i = 0; i < 8; i++)
			{
				printYoneticiAdresPrev(yoneticiNode, i+8);
				cout << "   ";
			}

			yatayCizgiUzun();

			for (int i = 0; i < 8; i++)
			{
				printYoneticiOrtalama(yoneticiNode, i+8);
				cout << "   ";
			}

			yatayCizgiUzun();

			for (int i = 0; i < 8; i++)
			{
				printYoneticiAdresNext(yoneticiNode, i+8);
				cout << "   ";
			}

			yatayCizgiUzun();
			cout << endl;
			switch (innerIndex)
			{
			case 0:
				boslukBirak(0), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 8); i++)
				{
					boslukBirak(0), deneme4(yoneticiNode, 8, 2, satirListesiBasNodeTutucu[8]), cout << endl; // adres
					boslukBirak(0), yatayCizgiKisa();
					boslukBirak(0), deneme4(yoneticiNode, 8, 1, satirListesiBasNodeTutucu[8]), cout << endl; //data
					boslukBirak(0), yatayCizgiKisa();
					boslukBirak(0), deneme4(yoneticiNode, 8, 4, satirListesiBasNodeTutucu[8]), cout << endl; //next
					boslukBirak(0), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 8, 3, satirListesiBasNodeTutucu[8]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 8, 5, satirListesiBasNodeTutucu[8]);               // bas node adresini atar.

				break;
			case 1:
				boslukBirak(1), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 9); i++)
				{
					boslukBirak(1), deneme4(yoneticiNode, 9, 2, satirListesiBasNodeTutucu[9]), cout << endl; // adres
					boslukBirak(1), yatayCizgiKisa();
					boslukBirak(1), deneme4(yoneticiNode, 9, 1, satirListesiBasNodeTutucu[9]), cout << endl; //data
					boslukBirak(1), yatayCizgiKisa();
					boslukBirak(1), deneme4(yoneticiNode, 9, 4, satirListesiBasNodeTutucu[9]), cout << endl; //next
					boslukBirak(1), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 9, 3, satirListesiBasNodeTutucu[9]);       // next node'a geçer.
				}
				deneme4(yoneticiNode, 9, 5, satirListesiBasNodeTutucu[9]);           // bas node adresini atar.

				break;
			case 2:
				boslukBirak(2), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 10); i++)
				{
					boslukBirak(2), deneme4(yoneticiNode, 10, 2, satirListesiBasNodeTutucu[10]), cout << endl; // adres
					boslukBirak(2), yatayCizgiKisa();
					boslukBirak(2), deneme4(yoneticiNode, 10, 1, satirListesiBasNodeTutucu[10]), cout << endl; //data
					boslukBirak(2), yatayCizgiKisa();
					boslukBirak(2), deneme4(yoneticiNode, 10, 4, satirListesiBasNodeTutucu[10]), cout << endl; //next
					boslukBirak(2), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 10, 3, satirListesiBasNodeTutucu[10]);      // next node'a geçer.
				}
				deneme4(yoneticiNode, 10, 5, satirListesiBasNodeTutucu[10]);          // bas node adresini atar.

				break;
			case 3:
				boslukBirak(3), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 11); i++)
				{
					boslukBirak(3), deneme4(yoneticiNode, 11, 2, satirListesiBasNodeTutucu[11]), cout << endl; // adres
					boslukBirak(3), yatayCizgiKisa();
					boslukBirak(3), deneme4(yoneticiNode, 11, 1, satirListesiBasNodeTutucu[11]), cout << endl; //data
					boslukBirak(3), yatayCizgiKisa();
					boslukBirak(3), deneme4(yoneticiNode, 11, 4, satirListesiBasNodeTutucu[11]), cout << endl; //next
					boslukBirak(3), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 11, 3, satirListesiBasNodeTutucu[11]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 11, 5, satirListesiBasNodeTutucu[11]);               // bas node adresini atar.

				break;
			case 4:
				boslukBirak(4), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 12); i++)
				{
					boslukBirak(4), deneme4(yoneticiNode, 12, 2, satirListesiBasNodeTutucu[12]), cout << endl; // adres
					boslukBirak(4), yatayCizgiKisa();
					boslukBirak(4), deneme4(yoneticiNode, 12, 1, satirListesiBasNodeTutucu[12]), cout << endl; //data
					boslukBirak(4), yatayCizgiKisa();
					boslukBirak(4), deneme4(yoneticiNode, 12, 4, satirListesiBasNodeTutucu[12]), cout << endl; //next
					boslukBirak(4), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 12, 3, satirListesiBasNodeTutucu[12]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 12, 5, satirListesiBasNodeTutucu[12]);               // bas node adresini atar.

				break;
			case 5:
				boslukBirak(5), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 13); i++)
				{
					boslukBirak(5), deneme4(yoneticiNode, 13, 2, satirListesiBasNodeTutucu[13]), cout << endl; // adres
					boslukBirak(5), yatayCizgiKisa();
					boslukBirak(5), deneme4(yoneticiNode, 13, 1, satirListesiBasNodeTutucu[13]), cout << endl; //data
					boslukBirak(5), yatayCizgiKisa();
					boslukBirak(5), deneme4(yoneticiNode, 13, 4, satirListesiBasNodeTutucu[13]), cout << endl; //next
					boslukBirak(5), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 13, 3, satirListesiBasNodeTutucu[13]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 13, 5, satirListesiBasNodeTutucu[13]);               // bas node adresini atar.

				break;
			case 6:
				boslukBirak(6), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 14); i++)
				{
					boslukBirak(6), deneme4(yoneticiNode, 14, 2, satirListesiBasNodeTutucu[14]), cout << endl; // adres
					boslukBirak(6), yatayCizgiKisa();
					boslukBirak(6), deneme4(yoneticiNode, 14, 1, satirListesiBasNodeTutucu[14]), cout << endl; //data
					boslukBirak(6), yatayCizgiKisa();
					boslukBirak(6), deneme4(yoneticiNode, 14, 4, satirListesiBasNodeTutucu[14]), cout << endl; //next
					boslukBirak(6), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 14, 3, satirListesiBasNodeTutucu[14]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 14, 5, satirListesiBasNodeTutucu[14]);               // bas node adresini atar.

				break;
			case 7:
				boslukBirak(15), dikenIsareti();
				for (int i = 0; i < yoneticiNode_elemanSayisi_dondur(yoneticiNode, 15); i++)
				{
					boslukBirak(7), deneme4(yoneticiNode, 15, 2, satirListesiBasNodeTutucu[15]), cout << endl; // adres
					boslukBirak(7), yatayCizgiKisa();
					boslukBirak(7), deneme4(yoneticiNode, 15, 1, satirListesiBasNodeTutucu[15]), cout << endl; //data
					boslukBirak(7), yatayCizgiKisa();
					boslukBirak(7), deneme4(yoneticiNode, 15, 4, satirListesiBasNodeTutucu[15]), cout << endl; //next
					boslukBirak(7), yatayCizgiKisa();

					cout << endl << endl;
					deneme4(yoneticiNode, 15, 3, satirListesiBasNodeTutucu[15]);           // next node'a geçer.
				}
				deneme4(yoneticiNode, 15, 5, satirListesiBasNodeTutucu[15]);               // bas node adresini atar.

				break;
			}
			break;;
		}

		

		int cikis = 1;
		do
		{
			cin >> input;
			switch (input)
			{
			case 'z':                                             // ic indexte geriye sarar.
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

			case 'c':                                                  // ic indexte ileri sarar.
				if (outerIndex==3 && innerIndex==2)
				{
					cout << "Son satirdan ileriye gidilemez.";
					system("pause");
					cikis = 0;
				}
				else if (innerIndex == 7)
				{
					cout << "Gosterilen satirlarda sonuncudan ileriye gidilemez lütfen ileriki sayfaya geciniz. ";
					system("pause");
					cikis = 0;
				}
				else
				{
					innerIndex++;
					cikis = 1;
				}
				break;
			case 'a':
				outerIndex--;
				innerIndex = 0;
				break;
			case 'd':
				outerIndex++;
				innerIndex = 0;
				break;
			case 'x':                                          // sistemden cikir yapar.
				outerCikis = 1;
				break;
			}
		} while (cikis!=1);
		
	} while (outerCikis != 1);

}

// ilk satýrda bulunan ilk , son yazýsý ve ---> iþaretini ekrana cizdiren fonksiyon
inline void ilk_yazisi_ok_isareti() {
	cout << "ilk" << setw(170) << "--->" << endl;
}

inline void ok_isareti_sola_saga() {
	cout << "<---" << setw(170) << "--->" << endl;
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