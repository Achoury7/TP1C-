#pragma once
#include <stdio.h>
#include <math.h>
#include <iostream>
#define PI 3.14

class Cadre {

	int setX = 10;
	int setY = 5;
	int largeur = 5;
	int longueur = 2 * largeur; 
	int motif = '*';
	
};


boolean isCarre() {

	if setX = setY
		then isCarre true

	else
		isCarre false
};




void Cadre::deplace(float val_x, float val_y)
{
	this->flt_x = this->flt_x + val_x;
	this->flt_y = this->flt_y + val_y;


void Cadre::rotation(float flt_angle)
	{
		flt_x = flt_x * cos(flt_angle * (PI / 180)) - flt_y * sin(flt_angle * (PI / 180));
		flt_y = flt_x * sin(flt_angle * (PI / 180)) + flt_y * cos(flt_angle * (PI / 180));
		std::cout << flt_x << "  " << flt_y << std::endl;

	float Cadre::rho()
		{
			return sqrt(flt_x * flt_x + flt_y * flt_y);
		}


	int ptrCharNom_Cadre
		typedef char '*';

