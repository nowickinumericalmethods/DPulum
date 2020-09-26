#pragma once
public ref class Wahadla
{

public:
	//Pola wahad³a

//wartoœci sta³e dla ka¿dego wahad³a
	double gravity = 9.81;
	//d³ugoœæ wahad³a
	double length;
	//masa
	double mass;
	//wspó³czynnik t³umienia
	double suppresion;
	//po³o¿enie pocz¹tkowe wahad³a oœ x //xk
	double prevposx;
	//po³o¿enie pocz¹tkowe wahad³a oœ y //yk
	double prevposy;
	//po³o¿enie koñcowe wahad³a oœ x //xk
	double nextposx;
	//po³o¿enie koñcowe wahad³a oœ y //yk
	double nextposy;
	//prêdkoœæ pocz¹tkowa
	double prevvelocity;
	//prêdkoœæ koñcowa
	double nextvelocity;
	//wspó³rzêdne kartezjañskie wahad³a
	double x, y;
	//wspó³czynniki sprzê¿enia, tylko jeden wspó³czynnik, gdy wahadla jest pierwsze/ostatnie.
	double prevcoupling;
	double nextcoupling;
	//wychylenie pocz¹tkowe wahad³a
	double wychylenie;


};

