#pragma once

ref class Ekran
{
protected:

	//atrybuty
	double Xp, Xk;
	double Yp, Yk;
	
public:
	//konstruktor - ustawienia szerokoœci(Xp do Xk) i wysokoœci(Yp do Yk)
	Ekran(double SzerLX,double SzerPX,double WysLY,double WysPY)
	{
		this->Xp = SzerLX;
		this->Xk = SzerPX;
		this->Yp = WysLY;
		this->Yk = WysPY;
	}

	//zmiana wartoœci y
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

	//zmiana wartoœci rzeczywistych na ekranowe
	//szerokoœæ pictureBox ->Width
	int SzerEkr(double x, int szerokosc) { return int((x - Xp) / (Xk - Xp) * szerokosc); }
	//wysokoœæ pictureBox ->Height
	int WysEkr(double y,int wysokoœæ) { return int((Yk - y) / (Yk - Yp) * wysokoœæ); }

	//zmiana wartoœci ekranowych na rzeczywiste
	//szerokoœæ pictureBox ->Width
	double RealSzer(double x,int szerokosc) { return Xp + (Xk - Xp) * x / szerokosc; }
	//wysokoœæ pictureBox ->Height
	double RealWys(double y, int wysokosc) { return Yk - (Yk - Yp) * y / wysokosc; }

};

