#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

public ref class Runge
{
	//Pola
	//sta³e
	double dt = 0.1;
	double g = 9.81;
	//wspó³rzêdne biegunowe przyspieszenia RK4
	double xk, yk;
	//wspó³rzêdne biegunowe prêdkoœci RK4
	double wk;
	//kroki Rk4
	//prêdkoœci
	double k1v, k2v, k3v, k4v;
	//przyspieszenia
	double k1, k2, k3, k4;

	//metoda obliczania prêdkoœci  parametr x
protected:
	//równanie ró¿niczkowe ruchu wahad³a dx/dt
	double WahVe(double xp, double yp) {

		double Ve = xp;
		return Ve;
	}

public:
	//metoda obliczania prêdkoœci  parametr x
	//Rk4Ve(xp,wp) zwraca wartoœæ wk, kolejnej wartoœci prêdkoœci
	double Rk4Ve(double xp,double wp)
	{
		this->k1v = WahVe(xp, wp);
		this->k2v = WahVe(xp + dt * 0.5, wp + 0.5 * dt * k1v);
		this->k3v = WahVe(xp + dt * 0.5, wp + 0.5 * dt * k2v);
		this->k4v = WahVe(xp + dt, wp + dt * k3v);

		this->wk = wp + (k1v + 2 * k2v + 2 * k3v + k4v) * dt / 6;

		return wk;
	}
protected:
//Ac = -m * g / l * sin(yp) + k * w + wspsprz1 * (yp - yp2) / m + wspsprz1 * (yp2 - yp3) / m; ostatni
//równanie ró¿niczkowe ruchu wahad³a dv/dt -> argument xp do uwzglêdniony dla ew. zmiany równañ, wspsprz1 -> nextcoupling -> wspsprz2->prevcoupling
	double WahAc(double xp,double yp, double t, double w, double k, double l, double m, double wspsprz1, double yp2, double wspsprz2,double yp3) {
		//test
		double Ac =  g / l * sin(yp) -k * w/m - wspsprz1* (yp - yp2) / (m*l*l) - wspsprz2 * (yp - yp3) / (m*l*l);
		return Ac;
	}

public:
	//metoda obliczania przyspieszenia y
	////Rk4AcX(xp,wp) zwraca wartoœæ xk, kolejnej wartoœci przyspieszenia ! Uwaga dla poprawnoœci wczeœniej musi byæ wywo³ana metoda Rk4Ve

	//w brak
	double Rk4AcX(double xp,double yp,double tp, double k,double l, double m, double wspsprz1,double yp2, double wspsprz2,double yp3)
	{
		this->k1 = WahAc(xp, yp, tp, this->k1v, k, l, m, wspsprz1, yp2,wspsprz2,yp3);

		this->k2 = WahAc(xp + dt * 0.5, yp + 0.5 * dt * k1, tp, this->k2v, k, l, m, wspsprz1, yp2,wspsprz2,yp3);

		this->k3 = WahAc(xp + dt * 0.5, yp + 0.5 * dt * k2, tp, this->k3v, k, l, m, wspsprz1, yp2, wspsprz2,yp3);

		this->k4 = WahAc(xp + dt, yp + dt * k3, tp, this->k4v, k, l, m, wspsprz1, yp2, wspsprz2, yp3);

		this->xk = xp + (k1 + 2 * k2 + 2 * k3 + k4) * dt / 6;

		this->yk = yp + xk * dt;

		return xk;
	}
	
	//Rk4AcY(xk,yp) zwraca wartoœæ yk, kolejnej wartoœci przyspieszenia ! Uwaga dla poprawnoœci wczeœniej musi byæ wywo³ana metoda Rk4AcX
	double Rk4AcY()
	{
		return yk;
	}
};

