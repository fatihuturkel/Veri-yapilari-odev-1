#include "yoneticiListesiNode.h"
#include <iostream>
#include <iomanip>
using namespace std;

inline void appendYonetici(yoneticiListesiNode** head_ref, int input_satir, float input_ortalama, int input_eleman_sayisi) {                   // node oluþturur veya sona ekler.
	yoneticiListesiNode* new_node = new yoneticiListesiNode();
	yoneticiListesiNode* last = *head_ref;
	new_node->ortalama = input_ortalama;
	new_node->satirNo = input_satir;
	new_node->elemanSayisi = input_eleman_sayisi;
	new_node->next = NULL;

	// yoneticiNode boþ ise baþlangýç oluþturur.
	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return;
}

inline void printList(yoneticiListesiNode* node) {
	yoneticiListesiNode* last = NULL;
	cout << "\nTraversal in forward direction \n";
	while (node != NULL) {
		cout << " " << node->ortalama << " ";
		last = node;
		node = node->next;
	}
}

inline void printAdres(yoneticiListesiNode* node) {
	int i = 0;
	while (node != NULL) {
		//cout << i << " ";
		i++;
		//cout << "Yonetici node prev: " << node->prev << " ";
		//cout << "Yonetici node: " << node << " ";
		//cout << "Yonetici Node next: " << node->next << " ";
		//cout << endl;
		node = node->next;
	}
}

inline int satirDondur(yoneticiListesiNode* node, int nodenumber) {
	for (int i = 0; i < nodenumber; i++)
	{
		node = node->next;
	}
	cout << endl <<"ortalama:"<< node->ortalama << endl <<"satirno:" << node->satirNo << endl;
	return node->satirNo;
}

inline void bagla(yoneticiListesiNode* yoneticinode, satirListesiNode* satirnode, int sayac) {

	for (int i = 0; i < sayac; i++)
	{
		yoneticinode = yoneticinode->next;
	}
	yoneticinode->satirListesi = satirnode;
	cout << "baglanan yoneci node:" << yoneticinode << endl << "baglanan satir node:" << satirnode << endl;
	return;
}

inline void printsatirlistesi(yoneticiListesiNode* yoneticinode, int sayac) {
	for (int i = 0; i < sayac; i++)
	{
		yoneticinode = yoneticinode->next;
	}
	cout << "satir node:" << yoneticinode->satirListesi << endl;
	cout << "satir node data:" << yoneticinode->satirListesi->data << endl;
}

inline void printYoneticiAdresSelf(yoneticiListesiNode* node,int nodeNumber) {
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	cout << " " << node<<" ";
}

inline void printYoneticiAdresPrev(yoneticiListesiNode* node, int nodeNumber) {
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	cout << "|" << node->prev << "|";
}

inline void printYoneticiAdresNext(yoneticiListesiNode* node, int nodeNumber) {
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	cout << "|" << node->next << "|";
}

inline void printYoneticiOrtalama(yoneticiListesiNode* node, int nodeNumber) {
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	cout << "|" <<setw(16)<< node->ortalama << "|";
}

inline void printYoneticiSatirAdres(yoneticiListesiNode* node, int nodeNumber) {
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	cout << setw(17) << node->satirListesi <<"    ";
}

inline void printYoneticiSatirAdresData(yoneticiListesiNode* node, int nodeNumber,int elemanNumber) {
	yoneticiListesiNode* helperNode;
	helperNode = node;
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	for (int i = 0; i < elemanNumber; i++)
	{
		
		if (helperNode->satirListesi==nullptr)
		{	
			helperNode = helperNode->prev;
			break;
		}
		helperNode->satirListesi = helperNode->satirListesi->next;
	}
	if (helperNode!=nullptr || helperNode->satirListesi!=nullptr)
	{
		cout << "|" << setw(16) << helperNode->satirListesi->data << "|" << "   ";
	}
}

inline void printYoneticiSatirAdresNext(yoneticiListesiNode* node, int nodeNumber, int elemanNumber) {
	yoneticiListesiNode* helperNode;
	helperNode = node;
	for (int i = 0; i < nodeNumber; i++)
	{
		node = node->next;
	}
	for (int i = 0; i < elemanNumber; i++)
	{
		helperNode->satirListesi = helperNode->satirListesi->next;
		if (helperNode->satirListesi == NULL)
		{
			break;
		}
	}
	cout << "|" << setw(16) << node->satirListesi->next << "|" << "   ";
}

inline void printYoneticiSatirAdresDataNew(yoneticiListesiNode* node, int nodeNumber, int switch_key) {
	yoneticiListesiNode* search = node;
	for (int i = 0; i < nodeNumber; i++)
	{
		search = search->next;
	}

	switch (switch_key)
	{
	case 1:
		search->satirListesi = search->satirListesi->next; break;
	case -1:
		search->satirListesi = search->satirListesi->prev; break;
	}

	if (search->satirListesi != NULL)
	{
		cout << "|" << setw(16) << search->satirListesi->data << "|" << endl;
	}
}

inline void printYoneticiSatirAdresNew(yoneticiListesiNode* node, int nodeNumber, int switch_key) {
	yoneticiListesiNode* search = node;
	for (int i = 0; i < nodeNumber; i++)
	{
		search = search->next;
	}

	switch (switch_key)
	{
	case 1:
		search->satirListesi = search->satirListesi->next; break;
	case -1:
		search->satirListesi = search->satirListesi->prev; break;
	}

	if (search->satirListesi != NULL)
	{
		cout << setw(17) << search->satirListesi << "  "<<endl;
	}
}


inline void YoneticiSatirAdresPrev(yoneticiListesiNode* node, int nodenumber) {
	yoneticiListesiNode* search = node;
	for (int i = 0; i < nodenumber; i++)
	{
		search = search->next;
	}

	if (search->satirListesi->prev != NULL) {
		search->satirListesi->prev;
	}
}


inline void YoneticiSatirAdresNext(yoneticiListesiNode* node, int nodenumber) {
	yoneticiListesiNode* search = node;
	for (int i = 0; i < nodenumber; i++)
	{
		search = search->next;
	}

	if (search->satirListesi->next != NULL) {
		search->satirListesi->next;
	}
}

inline void deneme4(yoneticiListesiNode* node, int nodeNumber, int switch_key,satirListesiNode satirNode) {
	yoneticiListesiNode* temp = node;

	for (int i = 0; i < nodeNumber; i++)
	{
		temp = temp->next;
	}

	switch (switch_key)
	{
	case 1:	if (temp->satirListesi != NULL)
	{
		cout << temp->satirListesi->data;
	}
		  break;
	case 2: if (true)
	{
		if (temp->satirListesi != NULL)
		{
			cout << temp->satirListesi;
		}
		break;
	case 3:
		if (temp->satirListesi->next==nullptr)
		{
			//prevtemp = temp->satirListesi;
		}
		if (temp->satirListesi != NULL)
		{
			temp->satirListesi = temp->satirListesi->next;
		}
		break;
	}
	case 4:
		cout << temp->satirListesi->next;
		break;
	case 5:
		temp->satirListesi = &satirNode;

	}
};

inline satirListesiNode satirDondurV2(yoneticiListesiNode* node, int nodeNumber) {
	yoneticiListesiNode* temp = node;

	for (int i = 0; i < nodeNumber; i++)
	{
		temp = temp->next;
	}
	return *temp->satirListesi;
}



inline int yoneticiNode_elemanSayisi_dondur(yoneticiListesiNode* node, int nodeNumber) {
	yoneticiListesiNode* search = node;
	for (int i = 0; i < nodeNumber; i++)
	{
		search = search->next;
	}

	return search->elemanSayisi;
}