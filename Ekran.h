#pragma once

ref class Ekran
{
protected:

	//atrybuty
	double Xp, Xk;
	double Yp, Yk;
	
public:
	//konstruktor - ustawienia szeroko�ci(Xp do Xk) i wysoko�ci(Yp do Yk)
	Ekran(double SzerLX,double SzerPX,double WysLY,double WysPY)
	{
		this->Xp = SzerLX;
		this->Xk = SzerPX;
		this->Yp = WysLY;
		this->Yk = WysPY;
	}

	//zmiana warto�ci y
	void ChValueX(double xpoczat, double xkoniec)
	{
		this->Xp = xpoczat;
		this->Xk = xkoniec;
	}

	void ChValueY(double ypoczat, double ykoniec)
	{
		this->Yp = ypoczat;
		this->Yk = ykoniec;
	}

	//zmiana warto�ci rzeczywistych na ekranowe
	//szeroko�� pictureBox ->Width
	int SzerEkr(double x, int szerokosc) { return int((x - Xp) / (Xk - Xp) * szerokosc); }
	//wysoko�� pictureBox ->Height
	int WysEkr(double y,int wysoko��) { return int((Yk - y) / (Yk - Yp) * wysoko��); }

	//zmiana warto�ci ekranowych na rzeczywiste
	//szeroko�� pictureBox ->Width
	double RealSzer(double x,int szerokosc) { return Xp + (Xk - Xp) * x / szerokosc; }
	//wysoko�� pictureBox ->Height
	double RealWys(double y, int wysokosc) { return Yk - (Yk - Yp) * y / wysokosc; }

};

