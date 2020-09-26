#pragma once
public ref class Wahadla
{

public:
	//Pola wahad�a

//warto�ci sta�e dla ka�dego wahad�a
	double gravity = 9.81;
	//d�ugo�� wahad�a
	double length;
	//masa
	double mass;
	//wsp�czynnik t�umienia
	double suppresion;
	//po�o�enie pocz�tkowe wahad�a o� x //xk
	double prevposx;
	//po�o�enie pocz�tkowe wahad�a o� y //yk
	double prevposy;
	//po�o�enie ko�cowe wahad�a o� x //xk
	double nextposx;
	//po�o�enie ko�cowe wahad�a o� y //yk
	double nextposy;
	//pr�dko�� pocz�tkowa
	double prevvelocity;
	//pr�dko�� ko�cowa
	double nextvelocity;
	//wsp�rz�dne kartezja�skie wahad�a
	double x, y;
	//wsp�czynniki sprz�enia, tylko jeden wsp�czynnik, gdy wahadla jest pierwsze/ostatnie.
	double prevcoupling;
	double nextcoupling;
	//wychylenie pocz�tkowe wahad�a
	double wychylenie;


};

