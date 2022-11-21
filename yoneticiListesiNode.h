#pragma once
#include "satirListesiNode.h"
class yoneticiListesiNode
{
public:
	float ortalama;
	int satirNo;
	yoneticiListesiNode* next = nullptr;
	yoneticiListesiNode* prev = nullptr;
	satirListesiNode* satirListesi = nullptr;
};