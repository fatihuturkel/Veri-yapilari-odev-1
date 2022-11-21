#include "satirListesiNode.h"
#include <iostream>
using namespace std;

inline void appendSatir(satirListesiNode** sat�rHead_ref, int new_data) {                  // node olu�turur veya sona ekler.
	satirListesiNode* new_node = new satirListesiNode();
	satirListesiNode* last = *sat�rHead_ref;
	new_node->data = new_data;
	new_node->next = NULL;

	// sat�rNode bo� ise ba�lang�� olu�tur.
	if (*sat�rHead_ref == NULL)
	{
		new_node->prev = NULL;
		*sat�rHead_ref = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return;
}

inline void printAdresSatir(satirListesiNode* node) {
	int i = 0;
	while (node != NULL) {
		cout << i << " ";
		i++;
		cout << "Satir data:" << node->data << " ";
		cout << "Satir node prev: " << node->prev << " ";
		cout << "satir Node: " << node << " ";
		cout << "Satir node next: " << node->next << " ";
		cout << endl;
		node = node->next;
	}
	cout << endl;
}

