//
// Created by Nelson Amerei on 6/28/21.
//

#include "main1.h"

int main()
{
	Ball def;
	def.print();

	Ball black("black");
	black.print();
//
	Ball thirty(30.0);
	thirty.print();
//
	Ball blackThirty("black", 30.0);
	blackThirty.print();

	return 0;
}