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
	int index = 1;
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
		case 0: boslukBirak(0), dikenIsareti(),
			boslukBirak(0), printYoneticiSatirAdresNew(yoneticiNode, 0, 0),
			boslukBirak(0), yatayCizgiKisa();

			boslukBirak(0), printYoneticiSatirAdresDataNew(yoneticiNode, 0, 0);
			boslukBirak(0), yatayCizgiKisa();

			boslukBirak(0), printYoneticiSatirAdresDataNew(yoneticiNode, 0, 1);
			boslukBirak(0), yatayCizgiKisa();
			break;
		case 1:
			boslukBirak(1), dikenIsareti(); 
			satirListesiNode prevSatirListesi= satirDondurV2(yoneticiNode, 1);
			for (int i = 0; i < 4; i++)
			{
				boslukBirak(1), deneme4(yoneticiNode,1,2,prevSatirListesi),cout<<endl ; // adres
				boslukBirak(1), yatayCizgiKisa();
				boslukBirak(1), deneme4(yoneticiNode,1,1,prevSatirListesi),cout<<endl; //data
				boslukBirak(1), yatayCizgiKisa();
				boslukBirak(1), deneme4(yoneticiNode, 1, 4,prevSatirListesi), cout << endl; //next
				
				cout << endl;
				deneme4(yoneticiNode, 1, 3,prevSatirListesi);
			}
			deneme4(yoneticiNode, 1,5,prevSatirListesi);
			
			cout << endl << endl << endl;
		}

		cin >> index;
	} while (index!=5);

	

	/*
	* 
	case 1: boslukBirak(1), dikenIsareti(),
			boslukBirak(1), printYoneticiSatirAdresNew(yoneticiNode, 1, 0),
			boslukBirak(1), yatayCizgiKisa();
			boslukBirak(1), printYoneticiSatirAdresDataNew(yoneticiNode, 1, 0);
			boslukBirak(1), yatayCizgiKisa();
			break;

	*/






	//dikenIsareti();

	//printYoneticiSatirAdresNew(yoneticiNode, 0, 0);


	//yatayCizgi();
	//printYoneticiSatirAdresDataNew(yoneticiNode, 0, 0);
	//printYoneticiSatirAdresDataNew(yoneticiNode, 0, 1);
	//printYoneticiSatirAdresDataNew(yoneticiNode, 0, 1);

	//yatayCizgi();
	//cout << endl;

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
	for (int i = 0; i <carpim; i++)
	{
		cout << "                  " << "   ";
	}
}