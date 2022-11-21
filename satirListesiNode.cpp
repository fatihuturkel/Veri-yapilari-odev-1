#include "satirListesiNode.h"
#include <iostream>
using namespace std;

inline void appendSatir(satirListesiNode** satýrHead_ref, int new_data) {                  // node oluþturur veya sona ekler.
	satirListesiNode* new_node = new satirListesiNode();
	satirListesiNode* last = *satýrHead_ref;
	new_node->data = new_data;
	new_node->next = NULL;

	// satýrNode boþ ise baþlangýç oluþtur.
	if (*satýrHead_ref == NULL)
	{
		new_node->prev = NULL;
		*satýrHead_ref = new_node;
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

