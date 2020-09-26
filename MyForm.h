#pragma once

#define _USE_MATH_DEFINES

#include <math.h>


//uwzglêdnianie klas projektu 
//klasy obiektu wahad³a i obliczanie równañ ruchu metod¹ Rungego – Kutty 4, równañ energii (kinetycznych, potencalnych i ca³kowitych)
#include "Wahadla.h"
#include "Runge.h"
#include "Energie.h"

//zmiana wartoœci biegunowych na kartezjañskie
#include "WspKartezjanskie.h"

//zmiana wartoœci rzeczywistych(uzyskanych podczas obliczeñ) na ekranowe/ekranowych na rzeczywiste
#include "Ekran.h"

//klasy z tablicami s³u¿¹ce do wyrysowania wykresów
#include "TabliceEp.h"  //Ep,Ek,Ec -> oœ y na wykresie
#include "TabliceEk.h"
#include "TabliceEc.h"

//obliczanie min,max,srednie w zadanej tablicy
#include "Pomiar.h"


#using <mscorlib.dll>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
#using <PresentationCore.dll>
#using <WindowsBase.dll>

namespace DPulum {

	using namespace System;
		
		using namespace System::ComponentModel;
		
		using namespace System::Collections;
		
		using namespace System::Windows::Forms;
			using namespace System::Windows::Media::Imaging;
					using namespace System::Windows::Threading;
		
		using namespace System::Data;
	
		using namespace System::Drawing;
			using namespace System::Drawing::Drawing2D;
	
		using namespace System::IO; 
	
		using namespace System::Timers;
	
		using namespace System::Threading;
			using namespace System::Threading::Tasks;
	
		using namespace System::Text;
	
		using namespace System::Security;
			using namespace System::Security::Permissions;



	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ animacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wykresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ parametryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjdŸToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::HScrollBar^ hScrollBar2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::HScrollBar^ hScrollBar5;
	private: System::Windows::Forms::HScrollBar^ hScrollBar6;
	private: System::Windows::Forms::HScrollBar^ hScrollBar7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::HScrollBar^ hScrollBar3;
	private: System::Windows::Forms::HScrollBar^ hScrollBar4;
	private: System::Windows::Forms::HScrollBar^ hScrollBar8;
	private: System::Windows::Forms::HScrollBar^ hScrollBar9;
	private: System::Windows::Forms::HScrollBar^ hScrollBar10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::HScrollBar^ hScrollBar11;
	private: System::Windows::Forms::HScrollBar^ hScrollBar12;
	private: System::Windows::Forms::HScrollBar^ hScrollBar13;
	private: System::Windows::Forms::HScrollBar^ hScrollBar14;
	private: System::Windows::Forms::HScrollBar^ hScrollBar15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::HScrollBar^ hScrollBar16;
	private: System::Windows::Forms::HScrollBar^ hScrollBar17;
	private: System::Windows::Forms::HScrollBar^ hScrollBar18;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::HScrollBar^ hScrollBar19;
	private: System::Windows::Forms::HScrollBar^ hScrollBar20;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::HScrollBar^ hScrollBar21;
	private: System::Windows::Forms::HScrollBar^ hScrollBar22;
	private: System::Windows::Forms::HScrollBar^ hScrollBar23;
	private: System::Windows::Forms::HScrollBar^ hScrollBar24;
	private: System::Windows::Forms::HScrollBar^ hScrollBar25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::HScrollBar^ hScrollBar26;
	private: System::Windows::Forms::HScrollBar^ hScrollBar27;
	private: System::Windows::Forms::HScrollBar^ hScrollBar28;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::HScrollBar^ hScrollBar29;
	private: System::Windows::Forms::HScrollBar^ hScrollBar30;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::HScrollBar^ hScrollBar31;
private: System::Windows::Forms::HScrollBar^ hScrollBar32;
private: System::Windows::Forms::HScrollBar^ hScrollBar33;
private: System::Windows::Forms::HScrollBar^ hScrollBar34;
private: System::Windows::Forms::HScrollBar^ hScrollBar35;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::HScrollBar^ hScrollBar36;
private: System::Windows::Forms::HScrollBar^ hScrollBar37;
private: System::Windows::Forms::HScrollBar^ hScrollBar38;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::HScrollBar^ hScrollBar39;
private: System::Windows::Forms::HScrollBar^ hScrollBar40;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::HScrollBar^ hScrollBar41;
private: System::Windows::Forms::HScrollBar^ hScrollBar42;
private: System::Windows::Forms::HScrollBar^ hScrollBar43;
private: System::Windows::Forms::HScrollBar^ hScrollBar44;
private: System::Windows::Forms::HScrollBar^ hScrollBar45;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::HScrollBar^ hScrollBar46;
private: System::Windows::Forms::HScrollBar^ hScrollBar47;
private: System::Windows::Forms::HScrollBar^ hScrollBar48;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::HScrollBar^ hScrollBar49;
private: System::Windows::Forms::HScrollBar^ hScrollBar50;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::HScrollBar^ hScrollBar51;
private: System::Windows::Forms::HScrollBar^ hScrollBar52;
private: System::Windows::Forms::HScrollBar^ hScrollBar53;
private: System::Windows::Forms::HScrollBar^ hScrollBar54;
private: System::Windows::Forms::HScrollBar^ hScrollBar55;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::HScrollBar^ hScrollBar56;
private: System::Windows::Forms::HScrollBar^ hScrollBar57;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::HScrollBar^ hScrollBar59;
private: System::Windows::Forms::HScrollBar^ hScrollBar60;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::HScrollBar^ hScrollBar58;
private: System::Windows::Forms::HScrollBar^ hScrollBar61;
private: System::Windows::Forms::HScrollBar^ hScrollBar62;
private: System::Windows::Forms::HScrollBar^ hScrollBar63;
private: System::Windows::Forms::HScrollBar^ hScrollBar64;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::HScrollBar^ hScrollBar65;
private: System::Windows::Forms::HScrollBar^ hScrollBar66;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::HScrollBar^ hScrollBar67;
private: System::Windows::Forms::HScrollBar^ hScrollBar68;

private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::HScrollBar^ hScrollBar70;
private: System::Windows::Forms::HScrollBar^ hScrollBar69;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::CheckBox^ checkBox10;
private: System::Windows::Forms::TextBox^ textBox3;

private: System::Windows::Forms::CheckBox^ checkBox11;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
private: System::Windows::Forms::CheckBox^ checkBox12;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::CheckBox^ checkBox21;
private: System::Windows::Forms::CheckBox^ checkBox22;
private: System::Windows::Forms::CheckBox^ checkBox23;
private: System::Windows::Forms::CheckBox^ checkBox24;
private: System::Windows::Forms::CheckBox^ checkBox17;
private: System::Windows::Forms::CheckBox^ checkBox18;
private: System::Windows::Forms::CheckBox^ checkBox19;
private: System::Windows::Forms::CheckBox^ checkBox20;
private: System::Windows::Forms::CheckBox^ checkBox16;
private: System::Windows::Forms::CheckBox^ checkBox15;
private: System::Windows::Forms::CheckBox^ checkBox14;
private: System::Windows::Forms::CheckBox^ checkBox13;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::CheckBox^ checkBox26;
private: System::Windows::Forms::CheckBox^ checkBox25;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::HScrollBar^ hScrollBar72;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::HScrollBar^ hScrollBar71;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::CheckBox^ checkBox27;
private: System::Windows::Forms::CheckBox^ checkBox28;

private: System::Windows::Forms::ToolStripMenuItem^ narzêdziaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ wykresToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ energieUk³aduToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ energiaPotencjalnaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ energiaKinetycznaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ energiaCa³kowitaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ legendaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ podgl¹dPomiarówToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ poka¿WektoryToolStripMenuItem;
private: System::Windows::Forms::CheckBox^ checkBox31;
private: System::Windows::Forms::CheckBox^ checkBox30;
private: System::Windows::Forms::CheckBox^ checkBox29;
private: System::Windows::Forms::ToolStripMenuItem^ rysujToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ przyspieszToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ zwolnijToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ legendêToolStripMenuItem;
private: System::Windows::Forms::CheckBox^ checkBox32;
private: System::Windows::Forms::ToolStripMenuItem^ pomiarToolStripMenuItem;
private: System::Windows::Forms::CheckBox^ checkBox33;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::CheckBox^ checkBox34;


private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ animacjaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ belkaToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ siatkaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ wahad³aToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pierwszeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ drugieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ trzecieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ czwarteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pi¹teToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ szósteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ siódmeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ósmeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ dziewi¹ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ wykresToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ dziesi¹teToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ aplikacjaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ t³oToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ wspó³rzêdneToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ osieToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ linkaToolStripMenuItem;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::HScrollBar^ hScrollBar73;
private: System::Windows::Forms::HScrollBar^ hScrollBar74;
private: System::Windows::Forms::HScrollBar^ hScrollBar75;
private: System::Windows::Forms::HScrollBar^ hScrollBar76;
private: System::Windows::Forms::HScrollBar^ hScrollBar77;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::HScrollBar^ hScrollBar78;
private: System::Windows::Forms::HScrollBar^ hScrollBar79;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::HScrollBar^ hScrollBar80;
private: System::Windows::Forms::HScrollBar^ hScrollBar81;
private: System::Windows::Forms::Label^ label99;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->animacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parametryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->legendêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomiarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjdŸToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->narzêdziaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poka¿WektoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przyspieszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zwolnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podgl¹dPomiarówToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wykresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->energieUk³aduToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->energiaPotencjalnaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->energiaKinetycznaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->energiaCa³kowitaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->legendaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rysujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->animacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->belkaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siatkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wahad³aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pierwszeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drugieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trzecieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czwarteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pi¹teToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->szósteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siódmeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ósmeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dziewi¹ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dziesi¹teToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aplikacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->t³oToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wykresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wspó³rzêdneToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->osieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar3 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar4 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar8 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar9 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar10 = (gcnew System::Windows::Forms::HScrollBar());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar5 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar6 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar7 = (gcnew System::Windows::Forms::HScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar2 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar11 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar12 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar13 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar14 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar15 = (gcnew System::Windows::Forms::HScrollBar());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar16 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar17 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar18 = (gcnew System::Windows::Forms::HScrollBar());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar19 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar20 = (gcnew System::Windows::Forms::HScrollBar());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar21 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar22 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar23 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar24 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar25 = (gcnew System::Windows::Forms::HScrollBar());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar26 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar27 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar28 = (gcnew System::Windows::Forms::HScrollBar());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar29 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar30 = (gcnew System::Windows::Forms::HScrollBar());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar31 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar32 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar33 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar34 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar35 = (gcnew System::Windows::Forms::HScrollBar());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar36 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar37 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar38 = (gcnew System::Windows::Forms::HScrollBar());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar39 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar40 = (gcnew System::Windows::Forms::HScrollBar());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar41 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar42 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar43 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar44 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar45 = (gcnew System::Windows::Forms::HScrollBar());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar46 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar47 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar48 = (gcnew System::Windows::Forms::HScrollBar());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar49 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar50 = (gcnew System::Windows::Forms::HScrollBar());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar73 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar74 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar75 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar76 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar77 = (gcnew System::Windows::Forms::HScrollBar());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar78 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar79 = (gcnew System::Windows::Forms::HScrollBar());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar80 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar81 = (gcnew System::Windows::Forms::HScrollBar());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar58 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar61 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar62 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar63 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar64 = (gcnew System::Windows::Forms::HScrollBar());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar65 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar66 = (gcnew System::Windows::Forms::HScrollBar());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar67 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar68 = (gcnew System::Windows::Forms::HScrollBar());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar51 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar52 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar53 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar54 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar55 = (gcnew System::Windows::Forms::HScrollBar());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar56 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar57 = (gcnew System::Windows::Forms::HScrollBar());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar59 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar60 = (gcnew System::Windows::Forms::HScrollBar());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar70 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar69 = (gcnew System::Windows::Forms::HScrollBar());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar72 = (gcnew System::Windows::Forms::HScrollBar());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar71 = (gcnew System::Windows::Forms::HScrollBar());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(10, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(700, 700);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->BackColorChanged += gcnew System::EventHandler(this, &MyForm::PictureBox1_BackColorChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(719, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(719, 343);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckedChanged);
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckStateChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->narzêdziaToolStripMenuItem, this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1424, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->zapiszToolStripMenuItem,
					this->resetToolStripMenuItem, this->wyjdŸToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->animacjeToolStripMenuItem,
					this->wykresToolStripMenuItem, this->parametryToolStripMenuItem, this->legendêToolStripMenuItem, this->pomiarToolStripMenuItem
			});
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			// 
			// animacjeToolStripMenuItem
			// 
			this->animacjeToolStripMenuItem->Name = L"animacjeToolStripMenuItem";
			this->animacjeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->animacjeToolStripMenuItem->Text = L"Animacje";
			this->animacjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AnimacjeToolStripMenuItem_Click);
			// 
			// wykresToolStripMenuItem
			// 
			this->wykresToolStripMenuItem->Name = L"wykresToolStripMenuItem";
			this->wykresToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->wykresToolStripMenuItem->Text = L"Wykres";
			this->wykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::WykresToolStripMenuItem_Click);
			// 
			// parametryToolStripMenuItem
			// 
			this->parametryToolStripMenuItem->Name = L"parametryToolStripMenuItem";
			this->parametryToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->parametryToolStripMenuItem->Text = L"Wyniki";
			this->parametryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ParametryToolStripMenuItem_Click);
			// 
			// legendêToolStripMenuItem
			// 
			this->legendêToolStripMenuItem->Name = L"legendêToolStripMenuItem";
			this->legendêToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->legendêToolStripMenuItem->Text = L"Legendê";
			this->legendêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LegendêToolStripMenuItem_Click);
			// 
			// pomiarToolStripMenuItem
			// 
			this->pomiarToolStripMenuItem->Name = L"pomiarToolStripMenuItem";
			this->pomiarToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->pomiarToolStripMenuItem->Text = L"Pomiar";
			this->pomiarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::PomiarToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->resetToolStripMenuItem->Text = L"Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ResetToolStripMenuItem_Click);
			// 
			// wyjdŸToolStripMenuItem
			// 
			this->wyjdŸToolStripMenuItem->Name = L"wyjdŸToolStripMenuItem";
			this->wyjdŸToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->wyjdŸToolStripMenuItem->Text = L"Zakoñcz";
			this->wyjdŸToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::WyjdŸToolStripMenuItem_Click);
			// 
			// narzêdziaToolStripMenuItem
			// 
			this->narzêdziaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->poka¿WektoryToolStripMenuItem,
					this->podgl¹dPomiarówToolStripMenuItem, this->wykresToolStripMenuItem1
			});
			this->narzêdziaToolStripMenuItem->Name = L"narzêdziaToolStripMenuItem";
			this->narzêdziaToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->narzêdziaToolStripMenuItem->Text = L"Narzêdzia";
			// 
			// poka¿WektoryToolStripMenuItem
			// 
			this->poka¿WektoryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->przyspieszToolStripMenuItem,
					this->zwolnijToolStripMenuItem
			});
			this->poka¿WektoryToolStripMenuItem->Name = L"poka¿WektoryToolStripMenuItem";
			this->poka¿WektoryToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->poka¿WektoryToolStripMenuItem->Text = L"Animacja";
			this->poka¿WektoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Poka¿WektoryToolStripMenuItem_Click);
			// 
			// przyspieszToolStripMenuItem
			// 
			this->przyspieszToolStripMenuItem->Name = L"przyspieszToolStripMenuItem";
			this->przyspieszToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->przyspieszToolStripMenuItem->Text = L"Przyspiesz";
			this->przyspieszToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::PrzyspieszToolStripMenuItem_Click);
			// 
			// zwolnijToolStripMenuItem
			// 
			this->zwolnijToolStripMenuItem->Name = L"zwolnijToolStripMenuItem";
			this->zwolnijToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->zwolnijToolStripMenuItem->Text = L"Zwolnij";
			this->zwolnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ZwolnijToolStripMenuItem_Click);
			// 
			// podgl¹dPomiarówToolStripMenuItem
			// 
			this->podgl¹dPomiarówToolStripMenuItem->Name = L"podgl¹dPomiarówToolStripMenuItem";
			this->podgl¹dPomiarówToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->podgl¹dPomiarówToolStripMenuItem->Text = L"Podgl¹d pomiarów";
			this->podgl¹dPomiarówToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Podgl¹dPomiarówToolStripMenuItem_Click);
			// 
			// wykresToolStripMenuItem1
			// 
			this->wykresToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->energieUk³aduToolStripMenuItem,
					this->legendaToolStripMenuItem, this->rysujToolStripMenuItem
			});
			this->wykresToolStripMenuItem1->Name = L"wykresToolStripMenuItem1";
			this->wykresToolStripMenuItem1->Size = System::Drawing::Size(175, 22);
			this->wykresToolStripMenuItem1->Text = L"Wykres";
			// 
			// energieUk³aduToolStripMenuItem
			// 
			this->energieUk³aduToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->energiaPotencjalnaToolStripMenuItem,
					this->energiaKinetycznaToolStripMenuItem, this->energiaCa³kowitaToolStripMenuItem
			});
			this->energieUk³aduToolStripMenuItem->Name = L"energieUk³aduToolStripMenuItem";
			this->energieUk³aduToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->energieUk³aduToolStripMenuItem->Text = L"Energie uk³adu";
			// 
			// energiaPotencjalnaToolStripMenuItem
			// 
			this->energiaPotencjalnaToolStripMenuItem->Name = L"energiaPotencjalnaToolStripMenuItem";
			this->energiaPotencjalnaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->energiaPotencjalnaToolStripMenuItem->Text = L"Energia potencjalna";
			this->energiaPotencjalnaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnergiaPotencjalnaToolStripMenuItem_Click);
			// 
			// energiaKinetycznaToolStripMenuItem
			// 
			this->energiaKinetycznaToolStripMenuItem->Name = L"energiaKinetycznaToolStripMenuItem";
			this->energiaKinetycznaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->energiaKinetycznaToolStripMenuItem->Text = L"Energia kinetyczna";
			this->energiaKinetycznaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnergiaKinetycznaToolStripMenuItem_Click);
			// 
			// energiaCa³kowitaToolStripMenuItem
			// 
			this->energiaCa³kowitaToolStripMenuItem->Name = L"energiaCa³kowitaToolStripMenuItem";
			this->energiaCa³kowitaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->energiaCa³kowitaToolStripMenuItem->Text = L"Energia ca³kowita";
			this->energiaCa³kowitaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnergiaCa³kowitaToolStripMenuItem_Click);
			// 
			// legendaToolStripMenuItem
			// 
			this->legendaToolStripMenuItem->Name = L"legendaToolStripMenuItem";
			this->legendaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->legendaToolStripMenuItem->Text = L"Legenda";
			this->legendaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LegendaToolStripMenuItem_Click);
			// 
			// rysujToolStripMenuItem
			// 
			this->rysujToolStripMenuItem->Name = L"rysujToolStripMenuItem";
			this->rysujToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->rysujToolStripMenuItem->Text = L"Pomiar";
			this->rysujToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::RysujToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->animacjaToolStripMenuItem,
					this->aplikacjaToolStripMenuItem, this->wykresToolStripMenuItem2
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// animacjaToolStripMenuItem
			// 
			this->animacjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->belkaToolStripMenuItem1,
					this->linkaToolStripMenuItem, this->siatkaToolStripMenuItem, this->wahad³aToolStripMenuItem
			});
			this->animacjaToolStripMenuItem->Name = L"animacjaToolStripMenuItem";
			this->animacjaToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->animacjaToolStripMenuItem->Text = L"Animacja";
			// 
			// belkaToolStripMenuItem1
			// 
			this->belkaToolStripMenuItem1->Name = L"belkaToolStripMenuItem1";
			this->belkaToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->belkaToolStripMenuItem1->Text = L"Belka";
			this->belkaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::BelkaToolStripMenuItem1_Click);
			// 
			// linkaToolStripMenuItem
			// 
			this->linkaToolStripMenuItem->Name = L"linkaToolStripMenuItem";
			this->linkaToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->linkaToolStripMenuItem->Text = L"Linka";
			this->linkaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LinkaToolStripMenuItem_Click);
			// 
			// siatkaToolStripMenuItem
			// 
			this->siatkaToolStripMenuItem->Name = L"siatkaToolStripMenuItem";
			this->siatkaToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->siatkaToolStripMenuItem->Text = L"Siatka";
			this->siatkaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SiatkaToolStripMenuItem_Click);
			// 
			// wahad³aToolStripMenuItem
			// 
			this->wahad³aToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->pierwszeToolStripMenuItem,
					this->drugieToolStripMenuItem, this->trzecieToolStripMenuItem, this->czwarteToolStripMenuItem, this->pi¹teToolStripMenuItem,
					this->szósteToolStripMenuItem, this->siódmeToolStripMenuItem, this->ósmeToolStripMenuItem, this->dziewi¹ToolStripMenuItem, this->dziesi¹teToolStripMenuItem
			});
			this->wahad³aToolStripMenuItem->Name = L"wahad³aToolStripMenuItem";
			this->wahad³aToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->wahad³aToolStripMenuItem->Text = L"Wahad³a";
			this->wahad³aToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Wahad³aToolStripMenuItem_Click);
			// 
			// pierwszeToolStripMenuItem
			// 
			this->pierwszeToolStripMenuItem->Name = L"pierwszeToolStripMenuItem";
			this->pierwszeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->pierwszeToolStripMenuItem->Text = L"Pierwsze";
			this->pierwszeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::PierwszeToolStripMenuItem_Click);
			// 
			// drugieToolStripMenuItem
			// 
			this->drugieToolStripMenuItem->Name = L"drugieToolStripMenuItem";
			this->drugieToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->drugieToolStripMenuItem->Text = L"Drugie";
			this->drugieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::DrugieToolStripMenuItem_Click);
			// 
			// trzecieToolStripMenuItem
			// 
			this->trzecieToolStripMenuItem->Name = L"trzecieToolStripMenuItem";
			this->trzecieToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->trzecieToolStripMenuItem->Text = L"Trzecie";
			this->trzecieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::TrzecieToolStripMenuItem_Click);
			// 
			// czwarteToolStripMenuItem
			// 
			this->czwarteToolStripMenuItem->Name = L"czwarteToolStripMenuItem";
			this->czwarteToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->czwarteToolStripMenuItem->Text = L"Czwarte";
			this->czwarteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CzwarteToolStripMenuItem_Click);
			// 
			// pi¹teToolStripMenuItem
			// 
			this->pi¹teToolStripMenuItem->Name = L"pi¹teToolStripMenuItem";
			this->pi¹teToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->pi¹teToolStripMenuItem->Text = L"Pi¹te";
			this->pi¹teToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Pi¹teToolStripMenuItem_Click);
			// 
			// szósteToolStripMenuItem
			// 
			this->szósteToolStripMenuItem->Name = L"szósteToolStripMenuItem";
			this->szósteToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->szósteToolStripMenuItem->Text = L"Szóste";
			this->szósteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SzósteToolStripMenuItem_Click);
			// 
			// siódmeToolStripMenuItem
			// 
			this->siódmeToolStripMenuItem->Name = L"siódmeToolStripMenuItem";
			this->siódmeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->siódmeToolStripMenuItem->Text = L"Siódme";
			this->siódmeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SiódmeToolStripMenuItem_Click);
			// 
			// ósmeToolStripMenuItem
			// 
			this->ósmeToolStripMenuItem->Name = L"ósmeToolStripMenuItem";
			this->ósmeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ósmeToolStripMenuItem->Text = L"Ósme";
			this->ósmeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÓsmeToolStripMenuItem_Click);
			// 
			// dziewi¹ToolStripMenuItem
			// 
			this->dziewi¹ToolStripMenuItem->Name = L"dziewi¹ToolStripMenuItem";
			this->dziewi¹ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->dziewi¹ToolStripMenuItem->Text = L"Dziewi¹te";
			this->dziewi¹ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Dziewi¹ToolStripMenuItem_Click);
			// 
			// dziesi¹teToolStripMenuItem
			// 
			this->dziesi¹teToolStripMenuItem->Name = L"dziesi¹teToolStripMenuItem";
			this->dziesi¹teToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->dziesi¹teToolStripMenuItem->Text = L"Dziesi¹te";
			this->dziesi¹teToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Dziesi¹teToolStripMenuItem_Click);
			// 
			// aplikacjaToolStripMenuItem
			// 
			this->aplikacjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->t³oToolStripMenuItem1 });
			this->aplikacjaToolStripMenuItem->Name = L"aplikacjaToolStripMenuItem";
			this->aplikacjaToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->aplikacjaToolStripMenuItem->Text = L"Aplikacja";
			// 
			// t³oToolStripMenuItem1
			// 
			this->t³oToolStripMenuItem1->Name = L"t³oToolStripMenuItem1";
			this->t³oToolStripMenuItem1->Size = System::Drawing::Size(90, 22);
			this->t³oToolStripMenuItem1->Text = L"T³o";
			this->t³oToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::T³oToolStripMenuItem1_Click);
			// 
			// wykresToolStripMenuItem2
			// 
			this->wykresToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wspó³rzêdneToolStripMenuItem1,
					this->osieToolStripMenuItem
			});
			this->wykresToolStripMenuItem2->Name = L"wykresToolStripMenuItem2";
			this->wykresToolStripMenuItem2->Size = System::Drawing::Size(124, 22);
			this->wykresToolStripMenuItem2->Text = L"Wykres";
			// 
			// wspó³rzêdneToolStripMenuItem1
			// 
			this->wspó³rzêdneToolStripMenuItem1->Name = L"wspó³rzêdneToolStripMenuItem1";
			this->wspó³rzêdneToolStripMenuItem1->Size = System::Drawing::Size(142, 22);
			this->wspó³rzêdneToolStripMenuItem1->Text = L"Wspó³rzêdne";
			this->wspó³rzêdneToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::Wspó³rzêdneToolStripMenuItem1_Click);
			// 
			// osieToolStripMenuItem
			// 
			this->osieToolStripMenuItem->Name = L"osieToolStripMenuItem";
			this->osieToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->osieToolStripMenuItem->Text = L"Osie";
			this->osieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OsieToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::PomocToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->hScrollBar3);
			this->panel1->Controls->Add(this->hScrollBar4);
			this->panel1->Controls->Add(this->hScrollBar8);
			this->panel1->Controls->Add(this->hScrollBar9);
			this->panel1->Controls->Add(this->hScrollBar10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->hScrollBar5);
			this->panel1->Controls->Add(this->hScrollBar6);
			this->panel1->Controls->Add(this->hScrollBar7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->hScrollBar2);
			this->panel1->Controls->Add(this->hScrollBar1);
			this->panel1->Location = System::Drawing::Point(870, 511);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(545, 222);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel1_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(275, 188);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Dziesi¹te wahad³o: 10.0 [m]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(275, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Dziewi¹te wahad³o: 10.0 [m]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(275, 125);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Ósme wahad³o: 10.0 [m]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(279, 94);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(131, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Siódme wahad³o: 10.0 [m]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(275, 63);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(128, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Szóste wahad³o: 10.0 [m]";
			// 
			// hScrollBar3
			// 
			this->hScrollBar3->Location = System::Drawing::Point(431, 125);
			this->hScrollBar3->Maximum = 1010;
			this->hScrollBar3->Minimum = 1;
			this->hScrollBar3->Name = L"hScrollBar3";
			this->hScrollBar3->Size = System::Drawing::Size(108, 21);
			this->hScrollBar3->TabIndex = 17;
			this->hScrollBar3->Value = 100;
			this->hScrollBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar3_Scroll_1);
			// 
			// hScrollBar4
			// 
			this->hScrollBar4->Location = System::Drawing::Point(431, 94);
			this->hScrollBar4->Maximum = 1010;
			this->hScrollBar4->Minimum = 1;
			this->hScrollBar4->Name = L"hScrollBar4";
			this->hScrollBar4->Size = System::Drawing::Size(108, 21);
			this->hScrollBar4->TabIndex = 16;
			this->hScrollBar4->Value = 100;
			this->hScrollBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar4_Scroll_1);
			// 
			// hScrollBar8
			// 
			this->hScrollBar8->Location = System::Drawing::Point(430, 63);
			this->hScrollBar8->Maximum = 1010;
			this->hScrollBar8->Minimum = 1;
			this->hScrollBar8->Name = L"hScrollBar8";
			this->hScrollBar8->Size = System::Drawing::Size(108, 21);
			this->hScrollBar8->TabIndex = 15;
			this->hScrollBar8->Value = 100;
			this->hScrollBar8->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar8_Scroll);
			// 
			// hScrollBar9
			// 
			this->hScrollBar9->Location = System::Drawing::Point(431, 188);
			this->hScrollBar9->Maximum = 1010;
			this->hScrollBar9->Minimum = 1;
			this->hScrollBar9->Name = L"hScrollBar9";
			this->hScrollBar9->Size = System::Drawing::Size(108, 21);
			this->hScrollBar9->TabIndex = 14;
			this->hScrollBar9->Value = 100;
			this->hScrollBar9->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar9_Scroll);
			// 
			// hScrollBar10
			// 
			this->hScrollBar10->Location = System::Drawing::Point(431, 157);
			this->hScrollBar10->Maximum = 1010;
			this->hScrollBar10->Minimum = 1;
			this->hScrollBar10->Name = L"hScrollBar10";
			this->hScrollBar10->Size = System::Drawing::Size(108, 21);
			this->hScrollBar10->TabIndex = 13;
			this->hScrollBar10->Value = 100;
			this->hScrollBar10->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar10_Scroll);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Pi¹te wahad³o: 10.0 [m]";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Czwarte wahad³o: 10.0 [m]";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Trzecie wahad³o: 10.0 [m]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Drugie wahad³o: 10.0 [m]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Pierwsze wahad³o: 10.0 [m]";
			// 
			// hScrollBar5
			// 
			this->hScrollBar5->Location = System::Drawing::Point(152, 125);
			this->hScrollBar5->Maximum = 1010;
			this->hScrollBar5->Minimum = 1;
			this->hScrollBar5->Name = L"hScrollBar5";
			this->hScrollBar5->Size = System::Drawing::Size(108, 21);
			this->hScrollBar5->TabIndex = 7;
			this->hScrollBar5->Value = 100;
			this->hScrollBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar5_Scroll);
			// 
			// hScrollBar6
			// 
			this->hScrollBar6->Location = System::Drawing::Point(152, 94);
			this->hScrollBar6->Maximum = 1010;
			this->hScrollBar6->Minimum = 1;
			this->hScrollBar6->Name = L"hScrollBar6";
			this->hScrollBar6->Size = System::Drawing::Size(108, 21);
			this->hScrollBar6->TabIndex = 6;
			this->hScrollBar6->Value = 100;
			this->hScrollBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar6_Scroll);
			// 
			// hScrollBar7
			// 
			this->hScrollBar7->Location = System::Drawing::Point(151, 63);
			this->hScrollBar7->Maximum = 1010;
			this->hScrollBar7->Minimum = 1;
			this->hScrollBar7->Name = L"hScrollBar7";
			this->hScrollBar7->Size = System::Drawing::Size(108, 21);
			this->hScrollBar7->TabIndex = 5;
			this->hScrollBar7->Value = 100;
			this->hScrollBar7->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar7_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(219, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"D³ugoœci wahade³";
			// 
			// hScrollBar2
			// 
			this->hScrollBar2->Location = System::Drawing::Point(152, 188);
			this->hScrollBar2->Maximum = 1010;
			this->hScrollBar2->Minimum = 1;
			this->hScrollBar2->Name = L"hScrollBar2";
			this->hScrollBar2->Size = System::Drawing::Size(108, 21);
			this->hScrollBar2->TabIndex = 1;
			this->hScrollBar2->Value = 100;
			this->hScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar2_Scroll);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(152, 157);
			this->hScrollBar1->Maximum = 1010;
			this->hScrollBar1->Minimum = 1;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(108, 21);
			this->hScrollBar1->TabIndex = 0;
			this->hScrollBar1->Value = 100;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar1_Scroll);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Window;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->hScrollBar11);
			this->panel5->Controls->Add(this->hScrollBar12);
			this->panel5->Controls->Add(this->hScrollBar13);
			this->panel5->Controls->Add(this->hScrollBar14);
			this->panel5->Controls->Add(this->hScrollBar15);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->hScrollBar16);
			this->panel5->Controls->Add(this->hScrollBar17);
			this->panel5->Controls->Add(this->hScrollBar18);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->hScrollBar19);
			this->panel5->Controls->Add(this->hScrollBar20);
			this->panel5->Location = System::Drawing::Point(869, 511);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(545, 221);
			this->panel5->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(275, 188);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Dziesi¹te wahad³o: 1.0 [kg]";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(275, 157);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(140, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Dziewi¹te wahad³o: 1.0 [kg]";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(275, 125);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Ósme wahad³o: 1.0 [kg]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(279, 94);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(129, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Siódme wahad³o: 1.0 [kg]";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(275, 63);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(126, 13);
			this->label19->TabIndex = 18;
			this->label19->Text = L"Szóste wahad³o: 1.0 [kg]";
			// 
			// hScrollBar11
			// 
			this->hScrollBar11->Location = System::Drawing::Point(431, 125);
			this->hScrollBar11->Maximum = 1000;
			this->hScrollBar11->Minimum = 1;
			this->hScrollBar11->Name = L"hScrollBar11";
			this->hScrollBar11->Size = System::Drawing::Size(108, 21);
			this->hScrollBar11->TabIndex = 17;
			this->hScrollBar11->Value = 10;
			this->hScrollBar11->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar11_Scroll);
			// 
			// hScrollBar12
			// 
			this->hScrollBar12->Location = System::Drawing::Point(431, 94);
			this->hScrollBar12->Maximum = 1000;
			this->hScrollBar12->Minimum = 1;
			this->hScrollBar12->Name = L"hScrollBar12";
			this->hScrollBar12->Size = System::Drawing::Size(108, 21);
			this->hScrollBar12->TabIndex = 16;
			this->hScrollBar12->Value = 10;
			this->hScrollBar12->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar12_Scroll);
			// 
			// hScrollBar13
			// 
			this->hScrollBar13->Location = System::Drawing::Point(430, 63);
			this->hScrollBar13->Maximum = 1000;
			this->hScrollBar13->Minimum = 1;
			this->hScrollBar13->Name = L"hScrollBar13";
			this->hScrollBar13->Size = System::Drawing::Size(108, 21);
			this->hScrollBar13->TabIndex = 15;
			this->hScrollBar13->Value = 10;
			this->hScrollBar13->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar13_Scroll);
			// 
			// hScrollBar14
			// 
			this->hScrollBar14->Location = System::Drawing::Point(431, 188);
			this->hScrollBar14->Maximum = 1000;
			this->hScrollBar14->Minimum = 1;
			this->hScrollBar14->Name = L"hScrollBar14";
			this->hScrollBar14->Size = System::Drawing::Size(108, 21);
			this->hScrollBar14->TabIndex = 14;
			this->hScrollBar14->Value = 10;
			this->hScrollBar14->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar14_Scroll);
			// 
			// hScrollBar15
			// 
			this->hScrollBar15->Location = System::Drawing::Point(431, 157);
			this->hScrollBar15->Maximum = 1000;
			this->hScrollBar15->Minimum = 1;
			this->hScrollBar15->Name = L"hScrollBar15";
			this->hScrollBar15->Size = System::Drawing::Size(108, 21);
			this->hScrollBar15->TabIndex = 13;
			this->hScrollBar15->Value = 10;
			this->hScrollBar15->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar15_Scroll);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1, 188);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(118, 13);
			this->label20->TabIndex = 12;
			this->label20->Text = L"Pi¹te wahad³o: 1.0 [kg]";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1, 157);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(132, 13);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Czwarte wahad³o: 1.0 [kg]";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1, 125);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(129, 13);
			this->label22->TabIndex = 10;
			this->label22->Text = L"Trzecie wahad³o: 1.0 [kg]";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 94);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(125, 13);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Drugie wahad³o: 1.0 [kg]";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1, 63);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(136, 13);
			this->label24->TabIndex = 8;
			this->label24->Text = L"Pierwsze wahad³o: 1.0 [kg]";
			// 
			// hScrollBar16
			// 
			this->hScrollBar16->Location = System::Drawing::Point(152, 125);
			this->hScrollBar16->Maximum = 1000;
			this->hScrollBar16->Minimum = 1;
			this->hScrollBar16->Name = L"hScrollBar16";
			this->hScrollBar16->Size = System::Drawing::Size(108, 21);
			this->hScrollBar16->TabIndex = 7;
			this->hScrollBar16->Value = 10;
			this->hScrollBar16->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar16_Scroll);
			// 
			// hScrollBar17
			// 
			this->hScrollBar17->Location = System::Drawing::Point(152, 94);
			this->hScrollBar17->Maximum = 1000;
			this->hScrollBar17->Minimum = 1;
			this->hScrollBar17->Name = L"hScrollBar17";
			this->hScrollBar17->Size = System::Drawing::Size(108, 21);
			this->hScrollBar17->TabIndex = 6;
			this->hScrollBar17->Value = 10;
			this->hScrollBar17->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar17_Scroll);
			// 
			// hScrollBar18
			// 
			this->hScrollBar18->Location = System::Drawing::Point(151, 63);
			this->hScrollBar18->Maximum = 1000;
			this->hScrollBar18->Minimum = 1;
			this->hScrollBar18->Name = L"hScrollBar18";
			this->hScrollBar18->Size = System::Drawing::Size(108, 21);
			this->hScrollBar18->TabIndex = 5;
			this->hScrollBar18->Value = 10;
			this->hScrollBar18->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar18_Scroll);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(219, 6);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(99, 16);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Masy wahade³";
			// 
			// hScrollBar19
			// 
			this->hScrollBar19->Location = System::Drawing::Point(152, 188);
			this->hScrollBar19->Maximum = 1000;
			this->hScrollBar19->Minimum = 1;
			this->hScrollBar19->Name = L"hScrollBar19";
			this->hScrollBar19->Size = System::Drawing::Size(108, 21);
			this->hScrollBar19->TabIndex = 1;
			this->hScrollBar19->Value = 10;
			this->hScrollBar19->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar19_Scroll);
			// 
			// hScrollBar20
			// 
			this->hScrollBar20->Location = System::Drawing::Point(152, 157);
			this->hScrollBar20->Maximum = 1000;
			this->hScrollBar20->Minimum = 1;
			this->hScrollBar20->Name = L"hScrollBar20";
			this->hScrollBar20->Size = System::Drawing::Size(108, 21);
			this->hScrollBar20->TabIndex = 0;
			this->hScrollBar20->Value = 10;
			this->hScrollBar20->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar20_Scroll);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Window;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->label26);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Controls->Add(this->label28);
			this->panel6->Controls->Add(this->label29);
			this->panel6->Controls->Add(this->label30);
			this->panel6->Controls->Add(this->hScrollBar21);
			this->panel6->Controls->Add(this->hScrollBar22);
			this->panel6->Controls->Add(this->hScrollBar23);
			this->panel6->Controls->Add(this->hScrollBar24);
			this->panel6->Controls->Add(this->hScrollBar25);
			this->panel6->Controls->Add(this->label31);
			this->panel6->Controls->Add(this->label32);
			this->panel6->Controls->Add(this->label33);
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->label35);
			this->panel6->Controls->Add(this->hScrollBar26);
			this->panel6->Controls->Add(this->hScrollBar27);
			this->panel6->Controls->Add(this->hScrollBar28);
			this->panel6->Controls->Add(this->label36);
			this->panel6->Controls->Add(this->hScrollBar29);
			this->panel6->Controls->Add(this->hScrollBar30);
			this->panel6->Location = System::Drawing::Point(869, 511);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(545, 221);
			this->panel6->TabIndex = 24;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(275, 188);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(140, 13);
			this->label26->TabIndex = 22;
			this->label26->Text = L"Dziesi¹te wahad³o: 0.0 [rad]";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(275, 157);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(143, 13);
			this->label27->TabIndex = 21;
			this->label27->Text = L"Dziewi¹te wahad³o: 0.0 [rad]";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(275, 125);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(124, 13);
			this->label28->TabIndex = 20;
			this->label28->Text = L"Ósme wahad³o: 0.0 [rad]";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(279, 94);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(132, 13);
			this->label29->TabIndex = 19;
			this->label29->Text = L"Siódme wahad³o: 0.0 [rad]";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(275, 63);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(129, 13);
			this->label30->TabIndex = 18;
			this->label30->Text = L"Szóste wahad³o: 0.0 [rad]";
			// 
			// hScrollBar21
			// 
			this->hScrollBar21->Location = System::Drawing::Point(431, 125);
			this->hScrollBar21->Maximum = 638;
			this->hScrollBar21->Name = L"hScrollBar21";
			this->hScrollBar21->Size = System::Drawing::Size(108, 21);
			this->hScrollBar21->TabIndex = 17;
			this->hScrollBar21->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar21_Scroll);
			// 
			// hScrollBar22
			// 
			this->hScrollBar22->Location = System::Drawing::Point(431, 94);
			this->hScrollBar22->Maximum = 638;
			this->hScrollBar22->Name = L"hScrollBar22";
			this->hScrollBar22->Size = System::Drawing::Size(108, 21);
			this->hScrollBar22->TabIndex = 16;
			this->hScrollBar22->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar22_Scroll);
			// 
			// hScrollBar23
			// 
			this->hScrollBar23->Location = System::Drawing::Point(430, 63);
			this->hScrollBar23->Maximum = 638;
			this->hScrollBar23->Name = L"hScrollBar23";
			this->hScrollBar23->Size = System::Drawing::Size(108, 21);
			this->hScrollBar23->TabIndex = 15;
			this->hScrollBar23->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar23_Scroll);
			// 
			// hScrollBar24
			// 
			this->hScrollBar24->Location = System::Drawing::Point(431, 188);
			this->hScrollBar24->Maximum = 638;
			this->hScrollBar24->Name = L"hScrollBar24";
			this->hScrollBar24->Size = System::Drawing::Size(108, 21);
			this->hScrollBar24->TabIndex = 14;
			this->hScrollBar24->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar24_Scroll);
			// 
			// hScrollBar25
			// 
			this->hScrollBar25->Location = System::Drawing::Point(431, 157);
			this->hScrollBar25->Maximum = 638;
			this->hScrollBar25->Name = L"hScrollBar25";
			this->hScrollBar25->Size = System::Drawing::Size(108, 21);
			this->hScrollBar25->TabIndex = 13;
			this->hScrollBar25->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar25_Scroll);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(1, 188);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(121, 13);
			this->label31->TabIndex = 12;
			this->label31->Text = L"Pi¹te wahad³o: 0.0 [rad]";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(1, 157);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(135, 13);
			this->label32->TabIndex = 11;
			this->label32->Text = L"Czwarte wahad³o: 0.0 [rad]";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(1, 125);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(132, 13);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Trzecie wahad³o: 0.0 [rad]";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(5, 94);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(128, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"Drugie wahad³o: 0.0 [rad]";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1, 63);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(139, 13);
			this->label35->TabIndex = 8;
			this->label35->Text = L"Pierwsze wahad³o: 0.0 [rad]";
			// 
			// hScrollBar26
			// 
			this->hScrollBar26->Location = System::Drawing::Point(152, 125);
			this->hScrollBar26->Maximum = 638;
			this->hScrollBar26->Name = L"hScrollBar26";
			this->hScrollBar26->Size = System::Drawing::Size(108, 21);
			this->hScrollBar26->TabIndex = 7;
			this->hScrollBar26->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar26_Scroll);
			// 
			// hScrollBar27
			// 
			this->hScrollBar27->Location = System::Drawing::Point(152, 94);
			this->hScrollBar27->Maximum = 638;
			this->hScrollBar27->Name = L"hScrollBar27";
			this->hScrollBar27->Size = System::Drawing::Size(108, 21);
			this->hScrollBar27->TabIndex = 6;
			this->hScrollBar27->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar27_Scroll);
			// 
			// hScrollBar28
			// 
			this->hScrollBar28->Location = System::Drawing::Point(151, 63);
			this->hScrollBar28->Maximum = 638;
			this->hScrollBar28->Name = L"hScrollBar28";
			this->hScrollBar28->Size = System::Drawing::Size(108, 21);
			this->hScrollBar28->TabIndex = 5;
			this->hScrollBar28->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar28_Scroll);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label36->Location = System::Drawing::Point(155, 8);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(211, 16);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Po³o¿enia pocz¹tkowe wahade³";
			// 
			// hScrollBar29
			// 
			this->hScrollBar29->Location = System::Drawing::Point(152, 188);
			this->hScrollBar29->Maximum = 638;
			this->hScrollBar29->Name = L"hScrollBar29";
			this->hScrollBar29->Size = System::Drawing::Size(108, 21);
			this->hScrollBar29->TabIndex = 1;
			this->hScrollBar29->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar29_Scroll);
			// 
			// hScrollBar30
			// 
			this->hScrollBar30->Location = System::Drawing::Point(152, 157);
			this->hScrollBar30->Maximum = 638;
			this->hScrollBar30->Name = L"hScrollBar30";
			this->hScrollBar30->Size = System::Drawing::Size(108, 21);
			this->hScrollBar30->TabIndex = 0;
			this->hScrollBar30->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar30_Scroll);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Window;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->label38);
			this->panel7->Controls->Add(this->label39);
			this->panel7->Controls->Add(this->label40);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->hScrollBar31);
			this->panel7->Controls->Add(this->hScrollBar32);
			this->panel7->Controls->Add(this->hScrollBar33);
			this->panel7->Controls->Add(this->hScrollBar34);
			this->panel7->Controls->Add(this->hScrollBar35);
			this->panel7->Controls->Add(this->label42);
			this->panel7->Controls->Add(this->label43);
			this->panel7->Controls->Add(this->label44);
			this->panel7->Controls->Add(this->label45);
			this->panel7->Controls->Add(this->label46);
			this->panel7->Controls->Add(this->hScrollBar36);
			this->panel7->Controls->Add(this->hScrollBar37);
			this->panel7->Controls->Add(this->hScrollBar38);
			this->panel7->Controls->Add(this->label47);
			this->panel7->Controls->Add(this->hScrollBar39);
			this->panel7->Controls->Add(this->hScrollBar40);
			this->panel7->Controls->Add(this->label37);
			this->panel7->Location = System::Drawing::Point(870, 511);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(545, 221);
			this->panel7->TabIndex = 25;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(275, 157);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(146, 13);
			this->label38->TabIndex = 21;
			this->label38->Text = L"Dziewi¹te wahad³o: 0.0 [m/s]";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(275, 125);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(127, 13);
			this->label39->TabIndex = 20;
			this->label39->Text = L"Ósme wahad³o: 0.0 [m/s]";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(279, 94);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(135, 13);
			this->label40->TabIndex = 19;
			this->label40->Text = L"Siódme wahad³o: 0.0 [m/s]";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(275, 63);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(132, 13);
			this->label41->TabIndex = 18;
			this->label41->Text = L"Szóste wahad³o: 0.0 [m/s]";
			// 
			// hScrollBar31
			// 
			this->hScrollBar31->Location = System::Drawing::Point(431, 125);
			this->hScrollBar31->Maximum = 1100;
			this->hScrollBar31->Name = L"hScrollBar31";
			this->hScrollBar31->Size = System::Drawing::Size(108, 21);
			this->hScrollBar31->TabIndex = 17;
			this->hScrollBar31->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar31_Scroll);
			// 
			// hScrollBar32
			// 
			this->hScrollBar32->Location = System::Drawing::Point(431, 94);
			this->hScrollBar32->Maximum = 1100;
			this->hScrollBar32->Name = L"hScrollBar32";
			this->hScrollBar32->Size = System::Drawing::Size(108, 21);
			this->hScrollBar32->TabIndex = 16;
			this->hScrollBar32->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar32_Scroll);
			// 
			// hScrollBar33
			// 
			this->hScrollBar33->Location = System::Drawing::Point(430, 63);
			this->hScrollBar33->Maximum = 1100;
			this->hScrollBar33->Name = L"hScrollBar33";
			this->hScrollBar33->Size = System::Drawing::Size(108, 21);
			this->hScrollBar33->TabIndex = 15;
			this->hScrollBar33->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar33_Scroll);
			// 
			// hScrollBar34
			// 
			this->hScrollBar34->Location = System::Drawing::Point(431, 188);
			this->hScrollBar34->Maximum = 1100;
			this->hScrollBar34->Name = L"hScrollBar34";
			this->hScrollBar34->Size = System::Drawing::Size(108, 21);
			this->hScrollBar34->TabIndex = 14;
			this->hScrollBar34->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar34_Scroll);
			// 
			// hScrollBar35
			// 
			this->hScrollBar35->Location = System::Drawing::Point(431, 157);
			this->hScrollBar35->Maximum = 1100;
			this->hScrollBar35->Name = L"hScrollBar35";
			this->hScrollBar35->Size = System::Drawing::Size(108, 21);
			this->hScrollBar35->TabIndex = 13;
			this->hScrollBar35->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar35_Scroll);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(1, 188);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(124, 13);
			this->label42->TabIndex = 12;
			this->label42->Text = L"Pi¹te wahad³o: 0.0 [m/s]";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(1, 157);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(138, 13);
			this->label43->TabIndex = 11;
			this->label43->Text = L"Czwarte wahad³o: 0.0 [m/s]";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(1, 125);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(135, 13);
			this->label44->TabIndex = 10;
			this->label44->Text = L"Trzecie wahad³o: 0.0 [m/s]";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(5, 94);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(131, 13);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Drugie wahad³o: 0.0 [m/s]";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(1, 63);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(142, 13);
			this->label46->TabIndex = 8;
			this->label46->Text = L"Pierwsze wahad³o: 0.0 [m/s]";
			// 
			// hScrollBar36
			// 
			this->hScrollBar36->Location = System::Drawing::Point(152, 125);
			this->hScrollBar36->Maximum = 1100;
			this->hScrollBar36->Name = L"hScrollBar36";
			this->hScrollBar36->Size = System::Drawing::Size(108, 21);
			this->hScrollBar36->TabIndex = 7;
			this->hScrollBar36->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar36_Scroll);
			// 
			// hScrollBar37
			// 
			this->hScrollBar37->Location = System::Drawing::Point(152, 94);
			this->hScrollBar37->Maximum = 1100;
			this->hScrollBar37->Name = L"hScrollBar37";
			this->hScrollBar37->Size = System::Drawing::Size(108, 21);
			this->hScrollBar37->TabIndex = 6;
			this->hScrollBar37->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar37_Scroll);
			// 
			// hScrollBar38
			// 
			this->hScrollBar38->Location = System::Drawing::Point(151, 63);
			this->hScrollBar38->Maximum = 1100;
			this->hScrollBar38->Name = L"hScrollBar38";
			this->hScrollBar38->Size = System::Drawing::Size(108, 21);
			this->hScrollBar38->TabIndex = 5;
			this->hScrollBar38->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar38_Scroll);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label47->Location = System::Drawing::Point(182, 6);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(209, 16);
			this->label47->TabIndex = 4;
			this->label47->Text = L"Prêdkoœci pocz¹tkowe wahade³";
			// 
			// hScrollBar39
			// 
			this->hScrollBar39->Location = System::Drawing::Point(152, 188);
			this->hScrollBar39->Maximum = 1100;
			this->hScrollBar39->Name = L"hScrollBar39";
			this->hScrollBar39->Size = System::Drawing::Size(108, 21);
			this->hScrollBar39->TabIndex = 1;
			this->hScrollBar39->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar39_Scroll);
			// 
			// hScrollBar40
			// 
			this->hScrollBar40->Location = System::Drawing::Point(152, 157);
			this->hScrollBar40->Maximum = 1100;
			this->hScrollBar40->Name = L"hScrollBar40";
			this->hScrollBar40->Size = System::Drawing::Size(108, 21);
			this->hScrollBar40->TabIndex = 0;
			this->hScrollBar40->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar40_Scroll);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(275, 188);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(143, 13);
			this->label37->TabIndex = 22;
			this->label37->Text = L"Dziesi¹te wahad³o: 0.0 [m/s]";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::Window;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->label48);
			this->panel8->Controls->Add(this->label49);
			this->panel8->Controls->Add(this->label50);
			this->panel8->Controls->Add(this->label51);
			this->panel8->Controls->Add(this->label52);
			this->panel8->Controls->Add(this->hScrollBar41);
			this->panel8->Controls->Add(this->hScrollBar42);
			this->panel8->Controls->Add(this->hScrollBar43);
			this->panel8->Controls->Add(this->hScrollBar44);
			this->panel8->Controls->Add(this->hScrollBar45);
			this->panel8->Controls->Add(this->label53);
			this->panel8->Controls->Add(this->label54);
			this->panel8->Controls->Add(this->label55);
			this->panel8->Controls->Add(this->label56);
			this->panel8->Controls->Add(this->label57);
			this->panel8->Controls->Add(this->hScrollBar46);
			this->panel8->Controls->Add(this->hScrollBar47);
			this->panel8->Controls->Add(this->hScrollBar48);
			this->panel8->Controls->Add(this->label58);
			this->panel8->Controls->Add(this->hScrollBar49);
			this->panel8->Controls->Add(this->hScrollBar50);
			this->panel8->Location = System::Drawing::Point(869, 511);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(545, 220);
			this->panel8->TabIndex = 26;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(275, 188);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(119, 13);
			this->label48->TabIndex = 22;
			this->label48->Text = L"Dziesi¹te wahad³o: 0.0 ";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(275, 157);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(122, 13);
			this->label49->TabIndex = 21;
			this->label49->Text = L"Dziewi¹te wahad³o: 0.0 ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(275, 125);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(100, 13);
			this->label50->TabIndex = 20;
			this->label50->Text = L"Ósme wahad³o: 0.0";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(279, 94);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(111, 13);
			this->label51->TabIndex = 19;
			this->label51->Text = L"Siódme wahad³o: 0.0 ";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(275, 63);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(108, 13);
			this->label52->TabIndex = 18;
			this->label52->Text = L"Szóste wahad³o: 0.0 ";
			// 
			// hScrollBar41
			// 
			this->hScrollBar41->Location = System::Drawing::Point(431, 125);
			this->hScrollBar41->Maximum = 1010;
			this->hScrollBar41->Name = L"hScrollBar41";
			this->hScrollBar41->Size = System::Drawing::Size(108, 21);
			this->hScrollBar41->TabIndex = 17;
			this->hScrollBar41->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar41_Scroll);
			// 
			// hScrollBar42
			// 
			this->hScrollBar42->Location = System::Drawing::Point(431, 94);
			this->hScrollBar42->Maximum = 1010;
			this->hScrollBar42->Name = L"hScrollBar42";
			this->hScrollBar42->Size = System::Drawing::Size(108, 21);
			this->hScrollBar42->TabIndex = 16;
			this->hScrollBar42->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar42_Scroll);
			// 
			// hScrollBar43
			// 
			this->hScrollBar43->Location = System::Drawing::Point(430, 63);
			this->hScrollBar43->Maximum = 1010;
			this->hScrollBar43->Name = L"hScrollBar43";
			this->hScrollBar43->Size = System::Drawing::Size(108, 21);
			this->hScrollBar43->TabIndex = 15;
			this->hScrollBar43->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar43_Scroll);
			// 
			// hScrollBar44
			// 
			this->hScrollBar44->Location = System::Drawing::Point(431, 188);
			this->hScrollBar44->Maximum = 1010;
			this->hScrollBar44->Name = L"hScrollBar44";
			this->hScrollBar44->Size = System::Drawing::Size(108, 21);
			this->hScrollBar44->TabIndex = 14;
			this->hScrollBar44->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar44_Scroll);
			// 
			// hScrollBar45
			// 
			this->hScrollBar45->Location = System::Drawing::Point(431, 157);
			this->hScrollBar45->Maximum = 1010;
			this->hScrollBar45->Name = L"hScrollBar45";
			this->hScrollBar45->Size = System::Drawing::Size(108, 21);
			this->hScrollBar45->TabIndex = 13;
			this->hScrollBar45->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar45_Scroll);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(10, 188);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(97, 13);
			this->label53->TabIndex = 12;
			this->label53->Text = L"Pi¹te wahad³o: 0.0";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(8, 157);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(111, 13);
			this->label54->TabIndex = 11;
			this->label54->Text = L"Czwarte wahad³o: 0.0";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(7, 125);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(111, 13);
			this->label55->TabIndex = 10;
			this->label55->Text = L"Trzecie wahad³o: 0.0 ";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(10, 94);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(107, 13);
			this->label56->TabIndex = 9;
			this->label56->Text = L"Drugie wahad³o: 0.0 ";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(8, 63);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(118, 13);
			this->label57->TabIndex = 8;
			this->label57->Text = L"Pierwsze wahad³o: 0.0 ";
			// 
			// hScrollBar46
			// 
			this->hScrollBar46->Location = System::Drawing::Point(152, 125);
			this->hScrollBar46->Maximum = 1010;
			this->hScrollBar46->Name = L"hScrollBar46";
			this->hScrollBar46->Size = System::Drawing::Size(108, 21);
			this->hScrollBar46->TabIndex = 7;
			this->hScrollBar46->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar46_Scroll);
			// 
			// hScrollBar47
			// 
			this->hScrollBar47->Location = System::Drawing::Point(152, 94);
			this->hScrollBar47->Maximum = 1010;
			this->hScrollBar47->Name = L"hScrollBar47";
			this->hScrollBar47->Size = System::Drawing::Size(108, 21);
			this->hScrollBar47->TabIndex = 6;
			this->hScrollBar47->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar47_Scroll);
			// 
			// hScrollBar48
			// 
			this->hScrollBar48->Location = System::Drawing::Point(151, 63);
			this->hScrollBar48->Maximum = 1010;
			this->hScrollBar48->Name = L"hScrollBar48";
			this->hScrollBar48->Size = System::Drawing::Size(108, 21);
			this->hScrollBar48->TabIndex = 5;
			this->hScrollBar48->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar48_Scroll);
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label58->Location = System::Drawing::Point(196, 9);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(131, 16);
			this->label58->TabIndex = 4;
			this->label58->Text = L"T³umienie wahade³";
			// 
			// hScrollBar49
			// 
			this->hScrollBar49->Location = System::Drawing::Point(152, 188);
			this->hScrollBar49->Maximum = 1010;
			this->hScrollBar49->Name = L"hScrollBar49";
			this->hScrollBar49->Size = System::Drawing::Size(108, 21);
			this->hScrollBar49->TabIndex = 1;
			this->hScrollBar49->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar49_Scroll);
			// 
			// hScrollBar50
			// 
			this->hScrollBar50->Location = System::Drawing::Point(152, 157);
			this->hScrollBar50->Maximum = 1010;
			this->hScrollBar50->Name = L"hScrollBar50";
			this->hScrollBar50->Size = System::Drawing::Size(108, 21);
			this->hScrollBar50->TabIndex = 0;
			this->hScrollBar50->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar50_Scroll);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Window;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->panel16);
			this->panel10->Controls->Add(this->label70);
			this->panel10->Controls->Add(this->label71);
			this->panel10->Controls->Add(this->label72);
			this->panel10->Controls->Add(this->label73);
			this->panel10->Controls->Add(this->hScrollBar58);
			this->panel10->Controls->Add(this->hScrollBar61);
			this->panel10->Controls->Add(this->hScrollBar62);
			this->panel10->Controls->Add(this->hScrollBar63);
			this->panel10->Controls->Add(this->hScrollBar64);
			this->panel10->Controls->Add(this->label74);
			this->panel10->Controls->Add(this->label75);
			this->panel10->Controls->Add(this->label76);
			this->panel10->Controls->Add(this->label77);
			this->panel10->Controls->Add(this->hScrollBar65);
			this->panel10->Controls->Add(this->hScrollBar66);
			this->panel10->Controls->Add(this->label78);
			this->panel10->Controls->Add(this->hScrollBar67);
			this->panel10->Controls->Add(this->hScrollBar68);
			this->panel10->Controls->Add(this->label68);
			this->panel10->Location = System::Drawing::Point(869, 510);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(545, 221);
			this->panel10->TabIndex = 28;
			this->panel10->Visible = false;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Window;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->Controls->Add(this->label90);
			this->panel16->Controls->Add(this->label91);
			this->panel16->Controls->Add(this->label92);
			this->panel16->Controls->Add(this->label93);
			this->panel16->Controls->Add(this->hScrollBar73);
			this->panel16->Controls->Add(this->hScrollBar74);
			this->panel16->Controls->Add(this->hScrollBar75);
			this->panel16->Controls->Add(this->hScrollBar76);
			this->panel16->Controls->Add(this->hScrollBar77);
			this->panel16->Controls->Add(this->label94);
			this->panel16->Controls->Add(this->label95);
			this->panel16->Controls->Add(this->label96);
			this->panel16->Controls->Add(this->label97);
			this->panel16->Controls->Add(this->hScrollBar78);
			this->panel16->Controls->Add(this->hScrollBar79);
			this->panel16->Controls->Add(this->label98);
			this->panel16->Controls->Add(this->hScrollBar80);
			this->panel16->Controls->Add(this->hScrollBar81);
			this->panel16->Controls->Add(this->label99);
			this->panel16->Location = System::Drawing::Point(-2, 0);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(545, 221);
			this->panel16->TabIndex = 29;
			this->panel16->Visible = false;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(277, 170);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(119, 13);
			this->label90->TabIndex = 21;
			this->label90->Text = L"Dziewi¹te wahad³o: 1.0";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(277, 138);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(100, 13);
			this->label91->TabIndex = 20;
			this->label91->Text = L"Ósme wahad³o: 1.0";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(281, 107);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(108, 13);
			this->label92->TabIndex = 19;
			this->label92->Text = L"Siódme wahad³o: 1.0";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(277, 76);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(105, 13);
			this->label93->TabIndex = 18;
			this->label93->Text = L"Szóste wahad³o: 1.0";
			// 
			// hScrollBar73
			// 
			this->hScrollBar73->Location = System::Drawing::Point(433, 138);
			this->hScrollBar73->Maximum = 1010;
			this->hScrollBar73->Name = L"hScrollBar73";
			this->hScrollBar73->Size = System::Drawing::Size(108, 21);
			this->hScrollBar73->TabIndex = 17;
			this->hScrollBar73->Value = 100;
			// 
			// hScrollBar74
			// 
			this->hScrollBar74->Location = System::Drawing::Point(433, 107);
			this->hScrollBar74->Maximum = 1010;
			this->hScrollBar74->Name = L"hScrollBar74";
			this->hScrollBar74->Size = System::Drawing::Size(108, 21);
			this->hScrollBar74->TabIndex = 16;
			this->hScrollBar74->Value = 100;
			// 
			// hScrollBar75
			// 
			this->hScrollBar75->Location = System::Drawing::Point(432, 76);
			this->hScrollBar75->Maximum = 1010;
			this->hScrollBar75->Name = L"hScrollBar75";
			this->hScrollBar75->Size = System::Drawing::Size(108, 21);
			this->hScrollBar75->TabIndex = 15;
			this->hScrollBar75->Value = 100;
			// 
			// hScrollBar76
			// 
			this->hScrollBar76->Location = System::Drawing::Point(147, 56);
			this->hScrollBar76->Maximum = 1010;
			this->hScrollBar76->Name = L"hScrollBar76";
			this->hScrollBar76->Size = System::Drawing::Size(108, 21);
			this->hScrollBar76->TabIndex = 14;
			this->hScrollBar76->Value = 100;
			// 
			// hScrollBar77
			// 
			this->hScrollBar77->Location = System::Drawing::Point(433, 170);
			this->hScrollBar77->Maximum = 1010;
			this->hScrollBar77->Name = L"hScrollBar77";
			this->hScrollBar77->Size = System::Drawing::Size(108, 21);
			this->hScrollBar77->TabIndex = 13;
			this->hScrollBar77->Value = 100;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(5, 182);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(97, 13);
			this->label94->TabIndex = 12;
			this->label94->Text = L"Pi¹te wahad³o: 1.0";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(3, 151);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(111, 13);
			this->label95->TabIndex = 11;
			this->label95->Text = L"Czwarte wahad³o: 1.0";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(2, 119);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(108, 13);
			this->label96->TabIndex = 10;
			this->label96->Text = L"Trzecie wahad³o: 1.0";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(5, 88);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(104, 13);
			this->label97->TabIndex = 9;
			this->label97->Text = L"Drugie wahad³o: 1.0";
			// 
			// hScrollBar78
			// 
			this->hScrollBar78->Location = System::Drawing::Point(147, 119);
			this->hScrollBar78->Maximum = 1010;
			this->hScrollBar78->Name = L"hScrollBar78";
			this->hScrollBar78->Size = System::Drawing::Size(108, 21);
			this->hScrollBar78->TabIndex = 7;
			this->hScrollBar78->Value = 100;
			// 
			// hScrollBar79
			// 
			this->hScrollBar79->Location = System::Drawing::Point(147, 88);
			this->hScrollBar79->Maximum = 1010;
			this->hScrollBar79->Name = L"hScrollBar79";
			this->hScrollBar79->Size = System::Drawing::Size(108, 21);
			this->hScrollBar79->TabIndex = 6;
			this->hScrollBar79->Value = 100;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label98->Location = System::Drawing::Point(119, 10);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(316, 16);
			this->label98->TabIndex = 4;
			this->label98->Text = L"Wspó³czynniki sprzê¿enia z kolejnym wahad³em";
			// 
			// hScrollBar80
			// 
			this->hScrollBar80->Location = System::Drawing::Point(147, 182);
			this->hScrollBar80->Maximum = 1010;
			this->hScrollBar80->Name = L"hScrollBar80";
			this->hScrollBar80->Size = System::Drawing::Size(108, 21);
			this->hScrollBar80->TabIndex = 1;
			this->hScrollBar80->Value = 100;
			// 
			// hScrollBar81
			// 
			this->hScrollBar81->Location = System::Drawing::Point(147, 151);
			this->hScrollBar81->Maximum = 1010;
			this->hScrollBar81->Name = L"hScrollBar81";
			this->hScrollBar81->Size = System::Drawing::Size(108, 21);
			this->hScrollBar81->TabIndex = 0;
			this->hScrollBar81->Value = 100;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(3, 62);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(115, 13);
			this->label99->TabIndex = 22;
			this->label99->Text = L"Pierwsze wahad³o: 1.0";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(277, 170);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(119, 13);
			this->label70->TabIndex = 21;
			this->label70->Text = L"Dziewi¹te wahad³o: 1.0";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(277, 138);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(100, 13);
			this->label71->TabIndex = 20;
			this->label71->Text = L"Ósme wahad³o: 1.0";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(281, 107);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(108, 13);
			this->label72->TabIndex = 19;
			this->label72->Text = L"Siódme wahad³o: 1.0";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(277, 76);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(105, 13);
			this->label73->TabIndex = 18;
			this->label73->Text = L"Szóste wahad³o: 1.0";
			// 
			// hScrollBar58
			// 
			this->hScrollBar58->Location = System::Drawing::Point(433, 138);
			this->hScrollBar58->Maximum = 1010;
			this->hScrollBar58->Name = L"hScrollBar58";
			this->hScrollBar58->Size = System::Drawing::Size(108, 21);
			this->hScrollBar58->TabIndex = 17;
			this->hScrollBar58->Value = 100;
			this->hScrollBar58->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar58_Scroll);
			// 
			// hScrollBar61
			// 
			this->hScrollBar61->Location = System::Drawing::Point(433, 107);
			this->hScrollBar61->Maximum = 1010;
			this->hScrollBar61->Name = L"hScrollBar61";
			this->hScrollBar61->Size = System::Drawing::Size(108, 21);
			this->hScrollBar61->TabIndex = 16;
			this->hScrollBar61->Value = 100;
			this->hScrollBar61->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar61_Scroll);
			// 
			// hScrollBar62
			// 
			this->hScrollBar62->Location = System::Drawing::Point(432, 76);
			this->hScrollBar62->Maximum = 1010;
			this->hScrollBar62->Name = L"hScrollBar62";
			this->hScrollBar62->Size = System::Drawing::Size(108, 21);
			this->hScrollBar62->TabIndex = 15;
			this->hScrollBar62->Value = 100;
			this->hScrollBar62->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar62_Scroll);
			// 
			// hScrollBar63
			// 
			this->hScrollBar63->Location = System::Drawing::Point(147, 56);
			this->hScrollBar63->Maximum = 1010;
			this->hScrollBar63->Name = L"hScrollBar63";
			this->hScrollBar63->Size = System::Drawing::Size(108, 21);
			this->hScrollBar63->TabIndex = 14;
			this->hScrollBar63->Value = 100;
			this->hScrollBar63->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar63_Scroll);
			// 
			// hScrollBar64
			// 
			this->hScrollBar64->Location = System::Drawing::Point(433, 170);
			this->hScrollBar64->Maximum = 1010;
			this->hScrollBar64->Name = L"hScrollBar64";
			this->hScrollBar64->Size = System::Drawing::Size(108, 21);
			this->hScrollBar64->TabIndex = 13;
			this->hScrollBar64->Value = 100;
			this->hScrollBar64->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar64_Scroll);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(5, 182);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(97, 13);
			this->label74->TabIndex = 12;
			this->label74->Text = L"Pi¹te wahad³o: 1.0";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(3, 151);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(111, 13);
			this->label75->TabIndex = 11;
			this->label75->Text = L"Czwarte wahad³o: 1.0";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(2, 119);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(108, 13);
			this->label76->TabIndex = 10;
			this->label76->Text = L"Trzecie wahad³o: 1.0";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(5, 88);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(104, 13);
			this->label77->TabIndex = 9;
			this->label77->Text = L"Drugie wahad³o: 1.0";
			// 
			// hScrollBar65
			// 
			this->hScrollBar65->Location = System::Drawing::Point(147, 119);
			this->hScrollBar65->Maximum = 1010;
			this->hScrollBar65->Name = L"hScrollBar65";
			this->hScrollBar65->Size = System::Drawing::Size(108, 21);
			this->hScrollBar65->TabIndex = 7;
			this->hScrollBar65->Value = 100;
			this->hScrollBar65->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar65_Scroll);
			// 
			// hScrollBar66
			// 
			this->hScrollBar66->Location = System::Drawing::Point(147, 88);
			this->hScrollBar66->Maximum = 1010;
			this->hScrollBar66->Name = L"hScrollBar66";
			this->hScrollBar66->Size = System::Drawing::Size(108, 21);
			this->hScrollBar66->TabIndex = 6;
			this->hScrollBar66->Value = 100;
			this->hScrollBar66->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar66_Scroll);
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label78->Location = System::Drawing::Point(119, 10);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(316, 16);
			this->label78->TabIndex = 4;
			this->label78->Text = L"Wspó³czynniki sprzê¿enia z kolejnym wahad³em";
			// 
			// hScrollBar67
			// 
			this->hScrollBar67->Location = System::Drawing::Point(147, 182);
			this->hScrollBar67->Maximum = 1010;
			this->hScrollBar67->Name = L"hScrollBar67";
			this->hScrollBar67->Size = System::Drawing::Size(108, 21);
			this->hScrollBar67->TabIndex = 1;
			this->hScrollBar67->Value = 100;
			this->hScrollBar67->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar67_Scroll);
			// 
			// hScrollBar68
			// 
			this->hScrollBar68->Location = System::Drawing::Point(147, 151);
			this->hScrollBar68->Maximum = 1010;
			this->hScrollBar68->Name = L"hScrollBar68";
			this->hScrollBar68->Size = System::Drawing::Size(108, 21);
			this->hScrollBar68->TabIndex = 0;
			this->hScrollBar68->Value = 100;
			this->hScrollBar68->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar68_Scroll);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(3, 62);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(115, 13);
			this->label68->TabIndex = 22;
			this->label68->Text = L"Pierwsze wahad³o: 1.0";
			this->label68->Click += gcnew System::EventHandler(this, &MyForm::Label68_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::Window;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->checkBox34);
			this->panel9->Controls->Add(this->checkBox33);
			this->panel9->Controls->Add(this->checkBox32);
			this->panel9->Controls->Add(this->checkBox31);
			this->panel9->Controls->Add(this->checkBox30);
			this->panel9->Controls->Add(this->checkBox29);
			this->panel9->Controls->Add(this->checkBox28);
			this->panel9->Controls->Add(this->label59);
			this->panel9->Controls->Add(this->label61);
			this->panel9->Controls->Add(this->label62);
			this->panel9->Controls->Add(this->label63);
			this->panel9->Controls->Add(this->hScrollBar51);
			this->panel9->Controls->Add(this->hScrollBar52);
			this->panel9->Controls->Add(this->hScrollBar53);
			this->panel9->Controls->Add(this->hScrollBar54);
			this->panel9->Controls->Add(this->hScrollBar55);
			this->panel9->Controls->Add(this->label64);
			this->panel9->Controls->Add(this->label65);
			this->panel9->Controls->Add(this->label66);
			this->panel9->Controls->Add(this->label67);
			this->panel9->Controls->Add(this->hScrollBar56);
			this->panel9->Controls->Add(this->hScrollBar57);
			this->panel9->Controls->Add(this->label69);
			this->panel9->Controls->Add(this->hScrollBar59);
			this->panel9->Controls->Add(this->hScrollBar60);
			this->panel9->Controls->Add(this->label60);
			this->panel9->Location = System::Drawing::Point(869, 512);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(545, 222);
			this->panel9->TabIndex = 27;
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->Location = System::Drawing::Point(9, 6);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(86, 17);
			this->checkBox34->TabIndex = 29;
			this->checkBox34->Text = L"checkBox34";
			this->checkBox34->UseVisualStyleBackColor = true;
			this->checkBox34->Visible = false;
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Location = System::Drawing::Point(453, 7);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(86, 17);
			this->checkBox33->TabIndex = 28;
			this->checkBox33->Text = L"checkBox33";
			this->checkBox33->UseVisualStyleBackColor = true;
			this->checkBox33->Visible = false;
			this->checkBox33->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox33_CheckedChanged);
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Location = System::Drawing::Point(421, 30);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(86, 17);
			this->checkBox32->TabIndex = 27;
			this->checkBox32->Text = L"checkBox32";
			this->checkBox32->UseVisualStyleBackColor = true;
			this->checkBox32->Visible = false;
			this->checkBox32->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox32_CheckedChanged_1);
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(321, 43);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(86, 17);
			this->checkBox31->TabIndex = 26;
			this->checkBox31->Text = L"checkBox31";
			this->checkBox31->UseVisualStyleBackColor = true;
			this->checkBox31->Visible = false;
			this->checkBox31->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox31_CheckedChanged_1);
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(222, 43);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(86, 17);
			this->checkBox30->TabIndex = 25;
			this->checkBox30->Text = L"checkBox30";
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->Visible = false;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox30_CheckedChanged_1);
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(132, 43);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(86, 17);
			this->checkBox29->TabIndex = 24;
			this->checkBox29->Text = L"checkBox29";
			this->checkBox29->UseVisualStyleBackColor = true;
			this->checkBox29->Visible = false;
			this->checkBox29->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox29_CheckedChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(24, 30);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(86, 17);
			this->checkBox28->TabIndex = 23;
			this->checkBox28->Text = L"checkBox28";
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->Visible = false;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox28_CheckedChanged);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(275, 188);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(101, 13);
			this->label59->TabIndex = 22;
			this->label59->Text = L"Linka dziewi¹ta: 1.0";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(277, 125);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(90, 13);
			this->label61->TabIndex = 20;
			this->label61->Text = L"Linka siódma: 1.0";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(276, 94);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(87, 13);
			this->label62->TabIndex = 19;
			this->label62->Text = L"Linka szósta: 1.0";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(276, 63);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(83, 13);
			this->label63->TabIndex = 18;
			this->label63->Text = L"Linka pi¹ta : 1.0";
			// 
			// hScrollBar51
			// 
			this->hScrollBar51->Location = System::Drawing::Point(431, 125);
			this->hScrollBar51->Maximum = 1010;
			this->hScrollBar51->Name = L"hScrollBar51";
			this->hScrollBar51->Size = System::Drawing::Size(108, 21);
			this->hScrollBar51->TabIndex = 17;
			this->hScrollBar51->Value = 100;
			this->hScrollBar51->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar51_Scroll);
			// 
			// hScrollBar52
			// 
			this->hScrollBar52->Location = System::Drawing::Point(431, 94);
			this->hScrollBar52->Maximum = 1010;
			this->hScrollBar52->Name = L"hScrollBar52";
			this->hScrollBar52->Size = System::Drawing::Size(108, 21);
			this->hScrollBar52->TabIndex = 16;
			this->hScrollBar52->Value = 100;
			this->hScrollBar52->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar52_Scroll);
			// 
			// hScrollBar53
			// 
			this->hScrollBar53->Location = System::Drawing::Point(430, 63);
			this->hScrollBar53->Maximum = 1010;
			this->hScrollBar53->Name = L"hScrollBar53";
			this->hScrollBar53->Size = System::Drawing::Size(108, 21);
			this->hScrollBar53->TabIndex = 15;
			this->hScrollBar53->Value = 100;
			this->hScrollBar53->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar53_Scroll);
			// 
			// hScrollBar54
			// 
			this->hScrollBar54->Location = System::Drawing::Point(431, 188);
			this->hScrollBar54->Maximum = 1010;
			this->hScrollBar54->Name = L"hScrollBar54";
			this->hScrollBar54->Size = System::Drawing::Size(108, 21);
			this->hScrollBar54->TabIndex = 14;
			this->hScrollBar54->Value = 100;
			this->hScrollBar54->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar54_Scroll);
			// 
			// hScrollBar55
			// 
			this->hScrollBar55->Location = System::Drawing::Point(431, 157);
			this->hScrollBar55->Maximum = 1010;
			this->hScrollBar55->Name = L"hScrollBar55";
			this->hScrollBar55->Size = System::Drawing::Size(108, 21);
			this->hScrollBar55->TabIndex = 13;
			this->hScrollBar55->Value = 100;
			this->hScrollBar55->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar55_Scroll);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(10, 168);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(94, 13);
			this->label64->TabIndex = 12;
			this->label64->Text = L"Linka czwarta: 1.0";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(11, 137);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(88, 13);
			this->label65->TabIndex = 11;
			this->label65->Text = L"Linka trzecia: 1.0";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(11, 105);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(84, 13);
			this->label66->TabIndex = 10;
			this->label66->Text = L"Linka druga: 1.0";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(10, 74);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(98, 13);
			this->label67->TabIndex = 9;
			this->label67->Text = L"Linka pierwsza: 1.0";
			// 
			// hScrollBar56
			// 
			this->hScrollBar56->Location = System::Drawing::Point(152, 103);
			this->hScrollBar56->Maximum = 1010;
			this->hScrollBar56->Name = L"hScrollBar56";
			this->hScrollBar56->Size = System::Drawing::Size(108, 21);
			this->hScrollBar56->TabIndex = 7;
			this->hScrollBar56->Value = 100;
			this->hScrollBar56->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar56_Scroll);
			// 
			// hScrollBar57
			// 
			this->hScrollBar57->Location = System::Drawing::Point(152, 72);
			this->hScrollBar57->Maximum = 1010;
			this->hScrollBar57->Name = L"hScrollBar57";
			this->hScrollBar57->Size = System::Drawing::Size(108, 21);
			this->hScrollBar57->TabIndex = 6;
			this->hScrollBar57->Value = 100;
			this->hScrollBar57->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar57_Scroll);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label69->Location = System::Drawing::Point(219, 8);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(107, 16);
			this->label69->TabIndex = 4;
			this->label69->Text = L"Sta³e c dla linki";
			// 
			// hScrollBar59
			// 
			this->hScrollBar59->Location = System::Drawing::Point(152, 166);
			this->hScrollBar59->Maximum = 1010;
			this->hScrollBar59->Name = L"hScrollBar59";
			this->hScrollBar59->Size = System::Drawing::Size(108, 21);
			this->hScrollBar59->TabIndex = 1;
			this->hScrollBar59->Value = 100;
			this->hScrollBar59->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar59_Scroll);
			// 
			// hScrollBar60
			// 
			this->hScrollBar60->Location = System::Drawing::Point(152, 135);
			this->hScrollBar60->Maximum = 1010;
			this->hScrollBar60->Name = L"hScrollBar60";
			this->hScrollBar60->Size = System::Drawing::Size(108, 21);
			this->hScrollBar60->TabIndex = 0;
			this->hScrollBar60->Value = 100;
			this->hScrollBar60->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar60_Scroll);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(277, 157);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(82, 13);
			this->label60->TabIndex = 21;
			this->label60->Text = L"Linka ósma: 1.0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(4, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Parametry wahade³";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(870, 368);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(545, 137);
			this->panel2->TabIndex = 11;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->button4);
			this->panel11->Controls->Add(this->textBox6);
			this->panel11->Controls->Add(this->button5);
			this->panel11->Controls->Add(this->textBox7);
			this->panel11->Controls->Add(this->checkBox10);
			this->panel11->Controls->Add(this->label82);
			this->panel11->Controls->Add(this->label81);
			this->panel11->Controls->Add(this->hScrollBar70);
			this->panel11->Controls->Add(this->hScrollBar69);
			this->panel11->Controls->Add(this->label80);
			this->panel11->Controls->Add(this->label79);
			this->panel11->Controls->Add(this->button3);
			this->panel11->Controls->Add(this->textBox2);
			this->panel11->Controls->Add(this->button2);
			this->panel11->Controls->Add(this->textBox1);
			this->panel11->Location = System::Drawing::Point(-2, 37);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(546, 98);
			this->panel11->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(123, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 20);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Kolor kuli";
			this->button4->UseCompatibleTextRendering = true;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(127, 65);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(72, 20);
			this->textBox6->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(19, 65);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 20);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Kolor kuli";
			this->button5->UseCompatibleTextRendering = true;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(23, 65);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(67, 20);
			this->textBox7->TabIndex = 12;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Checked = true;
			this->checkBox10->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox10->Enabled = false;
			this->checkBox10->Location = System::Drawing::Point(353, 35);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(89, 17);
			this->checkBox10->TabIndex = 11;
			this->checkBox10->Text = L"W³¹cz siatkê";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->Visible = false;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox10_CheckedChanged);
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(394, 48);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(57, 13);
			this->label82->TabIndex = 10;
			this->label82->Text = L"Szerokoœæ";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(233, 46);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(57, 13);
			this->label81->TabIndex = 9;
			this->label81->Text = L"Wysokoœæ";
			// 
			// hScrollBar70
			// 
			this->hScrollBar70->Location = System::Drawing::Point(458, 46);
			this->hScrollBar70->Minimum = 5;
			this->hScrollBar70->Name = L"hScrollBar70";
			this->hScrollBar70->Size = System::Drawing::Size(80, 17);
			this->hScrollBar70->TabIndex = 8;
			this->hScrollBar70->Value = 15;
			this->hScrollBar70->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar70_Scroll);
			// 
			// hScrollBar69
			// 
			this->hScrollBar69->Location = System::Drawing::Point(298, 45);
			this->hScrollBar69->Minimum = 1;
			this->hScrollBar69->Name = L"hScrollBar69";
			this->hScrollBar69->Size = System::Drawing::Size(80, 17);
			this->hScrollBar69->TabIndex = 7;
			this->hScrollBar69->Value = 1;
			this->hScrollBar69->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar69_Scroll);
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label80->Location = System::Drawing::Point(335, 10);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(120, 16);
			this->label80->TabIndex = 6;
			this->label80->Text = L"Skalowanie siatki";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label79->Location = System::Drawing::Point(45, 10);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(133, 16);
			this->label79->TabIndex = 4;
			this->label79->Text = L"Ustawienia kolorów";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(123, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 20);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Kolor siatki";
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(19, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 20);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Kolor t³a";
			this->button2->UseCompatibleTextRendering = true;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(205, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Parametry uk³adu";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Window;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->checkBox9);
			this->panel3->Controls->Add(this->checkBox7);
			this->panel3->Controls->Add(this->checkBox8);
			this->panel3->Controls->Add(this->checkBox5);
			this->panel3->Controls->Add(this->checkBox4);
			this->panel3->Controls->Add(this->checkBox3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(719, 511);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(145, 220);
			this->panel3->TabIndex = 12;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel3_Paint);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(14, 187);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(78, 17);
			this->checkBox9->TabIndex = 17;
			this->checkBox9->Text = L"Sprzê¿enie";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox9_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(14, 156);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(73, 17);
			this->checkBox7->TabIndex = 15;
			this->checkBox7->Text = L"T³umienie";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(14, 124);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(73, 17);
			this->checkBox8->TabIndex = 14;
			this->checkBox8->Text = L"Prêdkoœci";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox8_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(14, 94);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(74, 17);
			this->checkBox5->TabIndex = 13;
			this->checkBox5->Text = L"Po³o¿enia";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(14, 65);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(51, 17);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"Masy";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(14, 34);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(69, 17);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"D³ugoœci";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox3_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(858, 278);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(87, 17);
			this->checkBox6->TabIndex = 16;
			this->checkBox6->Text = L"Sprzê¿enie 1";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox6_CheckedChanged);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->checkBox12);
			this->panel4->Controls->Add(this->checkBox2);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(719, 427);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(145, 78);
			this->panel4->TabIndex = 13;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(8, 39);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(128, 17);
			this->checkBox12->TabIndex = 3;
			this->checkBox12->Text = L"Ustawienia wykresów";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox12_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(8, 13);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(110, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Parametry uk³adu";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox2_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(25, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 1;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(802, 342);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 29;
			this->textBox3->Text = L"q";
			this->textBox3->WordWrap = false;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(753, 291);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(86, 17);
			this->checkBox11->TabIndex = 30;
			this->checkBox11->Text = L"checkBox11";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->Visible = false;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox11_CheckedChanged);
			this->checkBox11->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::CheckBox11_CheckStateChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(721, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(695, 328);
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PictureBox3_Paint);
			this->pictureBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PictureBox3_MouseClick);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PictureBox3_MouseMove);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::Window;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->panel15);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->label87);
			this->panel12->Location = System::Drawing::Point(870, 369);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(545, 136);
			this->panel12->TabIndex = 32;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel15->Controls->Add(this->label83);
			this->panel15->Location = System::Drawing::Point(403, -1);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(142, 40);
			this->panel15->TabIndex = 5;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label83->Location = System::Drawing::Point(30, 9);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(83, 16);
			this->label83->TabIndex = 4;
			this->label83->Text = L"Skalowanie";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->checkBox26);
			this->panel13->Controls->Add(this->checkBox25);
			this->panel13->Controls->Add(this->checkBox21);
			this->panel13->Controls->Add(this->checkBox22);
			this->panel13->Controls->Add(this->checkBox23);
			this->panel13->Controls->Add(this->checkBox24);
			this->panel13->Controls->Add(this->checkBox17);
			this->panel13->Controls->Add(this->checkBox18);
			this->panel13->Controls->Add(this->checkBox19);
			this->panel13->Controls->Add(this->checkBox20);
			this->panel13->Controls->Add(this->checkBox16);
			this->panel13->Controls->Add(this->checkBox15);
			this->panel13->Controls->Add(this->checkBox14);
			this->panel13->Controls->Add(this->checkBox13);
			this->panel13->Location = System::Drawing::Point(-2, 39);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(546, 97);
			this->panel13->TabIndex = 3;
			this->panel13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel13_Paint);
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Controls->Add(this->label85);
			this->panel14->Controls->Add(this->hScrollBar72);
			this->panel14->Controls->Add(this->label84);
			this->panel14->Controls->Add(this->hScrollBar71);
			this->panel14->Location = System::Drawing::Point(403, -2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(140, 100);
			this->panel14->TabIndex = 14;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(28, 50);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(85, 13);
			this->label85->TabIndex = 3;
			this->label85->Text = L"Szerokoœæ (oœ x)";
			// 
			// hScrollBar72
			// 
			this->hScrollBar72->Location = System::Drawing::Point(13, 71);
			this->hScrollBar72->Maximum = 500;
			this->hScrollBar72->Minimum = 1;
			this->hScrollBar72->Name = L"hScrollBar72";
			this->hScrollBar72->Size = System::Drawing::Size(105, 19);
			this->hScrollBar72->TabIndex = 2;
			this->hScrollBar72->Value = 100;
			this->hScrollBar72->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar72_Scroll);
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(30, 4);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(85, 13);
			this->label84->TabIndex = 1;
			this->label84->Text = L"Wysokoœæ (oœ y)";
			// 
			// hScrollBar71
			// 
			this->hScrollBar71->Location = System::Drawing::Point(15, 25);
			this->hScrollBar71->Maximum = 1000;
			this->hScrollBar71->Minimum = 1;
			this->hScrollBar71->Name = L"hScrollBar71";
			this->hScrollBar71->Size = System::Drawing::Size(105, 19);
			this->hScrollBar71->TabIndex = 0;
			this->hScrollBar71->Value = 700;
			this->hScrollBar71->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::HScrollBar71_Scroll);
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(277, 76);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(126, 17);
			this->checkBox26->TabIndex = 13;
			this->checkBox26->Text = L"Dziesi¹tego wahad³a";
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox26_CheckedChanged);
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(155, 76);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(107, 17);
			this->checkBox25->TabIndex = 12;
			this->checkBox25->Text = L"Pi¹tego wahad³a";
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox25_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(277, 59);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(129, 17);
			this->checkBox21->TabIndex = 11;
			this->checkBox21->Text = L"Dziewi¹tego wahad³a";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox21_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(277, 41);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(110, 17);
			this->checkBox22->TabIndex = 10;
			this->checkBox22->Text = L"Ósmego wahad³a";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox22_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(277, 23);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(118, 17);
			this->checkBox23->TabIndex = 9;
			this->checkBox23->Text = L"Siódmego wahad³a";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox23_CheckedChanged);
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(277, 5);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(115, 17);
			this->checkBox24->TabIndex = 8;
			this->checkBox24->Text = L"Szóstego wahad³a";
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox24_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(155, 58);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(121, 17);
			this->checkBox17->TabIndex = 7;
			this->checkBox17->Text = L"Czwartego wahad³a";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox17_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(155, 40);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(118, 17);
			this->checkBox18->TabIndex = 6;
			this->checkBox18->Text = L"Trzeciego wahad³a";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox18_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(155, 22);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(114, 17);
			this->checkBox19->TabIndex = 5;
			this->checkBox19->Text = L"Drugiego wahad³a";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox19_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(154, 4);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(125, 17);
			this->checkBox20->TabIndex = 4;
			this->checkBox20->Text = L"Pierwszego wahad³a";
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox20_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(7, 66);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(112, 17);
			this->checkBox16->TabIndex = 3;
			this->checkBox16->Text = L"Przestrzeñ fazowa";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox16_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(7, 48);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(112, 17);
			this->checkBox15->TabIndex = 2;
			this->checkBox15->Text = L"Energia ca³kowita";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox15_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(7, 30);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(116, 17);
			this->checkBox14->TabIndex = 1;
			this->checkBox14->Text = L"Energia kinetyczna";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox14_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(7, 11);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(120, 17);
			this->checkBox13->TabIndex = 0;
			this->checkBox13->Text = L"Energia potencjalna";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox13_CheckedChanged);
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label87->Location = System::Drawing::Point(128, 10);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(145, 16);
			this->label87->TabIndex = 0;
			this->label87->Text = L"Ustawienia wykresów";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(738, 357);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 33;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(739, 331);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 34;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox5_TextChanged);
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::White;
			this->label86->Location = System::Drawing::Point(1196, 44);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(135, 13);
			this->label86->TabIndex = 35;
			this->label86->Text = L"(Czas; Energia) = (0.0 ; 0.0)";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(25, 46);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(44, 15);
			this->label88->TabIndex = 36;
			this->label88->Text = L"label88";
			this->label88->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 25;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::Timer2_Tick_1);
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(82, 46);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(86, 17);
			this->checkBox27->TabIndex = 37;
			this->checkBox27->Text = L"checkBox27";
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->Visible = false;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::SystemColors::Window;
			this->label89->Font = (gcnew System::Drawing::Font(L"Magneto", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label89->Location = System::Drawing::Point(788, 4);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(76, 16);
			this->label89->TabIndex = 6;
			this->label89->Text = L"Obliczenia";
			this->label89->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1424, 744);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"DPulum";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		//Program rozwi¹zuj¹cy równanie ró¿niczkowe ruchu 10 t³umionych wahade³ sprzê¿onych ze sob¹ link¹ 
		
		//zmienne pomocniczne 
		double i = 0;
		int changeInterval = 10;

		String^ path;

		//zmienne zwiekszaj¹ce argument tablicy -> timer.tick
		int j = 0;
		int reset;

		//zmiennie czasowe
		double czasp, czask = 0;

		//krok czasowy do tablic time w timer->interval*0.001
		double krokczasowy;

		//krok czasowy metody RK4
		double dt = 0.1;

		//wspó³rzêdne punktów do obliczeñ d³ugoœci, ró¿nic amplitud, przesuniêæ czasowych
		double getmousex1 = 0, getmousey1 = 0, getmousex2 = 0, getmousey2 = 0;

		bool wspolrzedne1 = false, wspolrzedne2 = false;

		int pixelx = 0, pixely = 0;

		//zmienne steruj¹ce ekranem 
		//animacji
		//oœ x lewo, oœ x prawo, oœ y góra,oœ y dó³
		double xl = -15, xp = 15, yl = -15, yp = 15;
		
		//wykresu
		//wykres oœ x lewo
		double ekranwykxl = -10;

		//wykres oœ x prawo
		double ekranwykxp = 100;

		//wykres oœ y dó³
		double ekranwykyd = -90;

		//wykres oœ y góra
		double ekranwykyg = 700;

		//zmienne pomocniczne do rysowania wykresu
		double wxl = -10;
		double wxp = 100;
		double	wyd = -90;
		double wyg = 700;

		//klasy przeliczaj¹ce wartoœci
		//pictureBox1 animacja
		Ekran^ EkranAnimacji = gcnew Ekran(xl, xp, yp, yl);

		//skalowanie animacji
		double WysokoscSiatki, SzerokoscSiatki=3, GestoscSiatki = 40;

		//pictureBox3 wykres
		Ekran^ EkranWykresu = gcnew Ekran(wxl,wxp,wyd,wyg);

		//mo¿liwoœæ zmiany gridu, plp pochylenie linii poziomych
		double plp=20.5,plpion= 20;

		//Wahad³a i ich uk³ady
		double xlzmiana1, ylzmiana1, xlzmiana2, ylzmiana2;
		//Wahad³o pierwsze 2.55 1.1
		Wahadla^ PierwszeWah = gcnew Wahadla();
			Ekran^ EkranPierwszego = gcnew Ekran(xl-2.45, xp-2.45, yp+4.8, yl+4.8);

		Wahadla^ DrugieWah = gcnew Wahadla();
			Ekran^ EkranDrugiego = gcnew Ekran(xl - 2, xp - 2, yp + 5, yl +5);

		Wahadla^ TrzecieWah = gcnew Wahadla();
			Ekran^ EkranTrzeciego = gcnew Ekran(xl - 1.55, xp - 1.55, yp + 5.2, yl + 5.2);

		Wahadla^ CzwarteWah = gcnew Wahadla();
			Ekran^ EkranCzwartego = gcnew Ekran(xl - 1.15, xp - 1.15, yp + 5.4, yl + 5.4);

		Wahadla^ PiateWah = gcnew Wahadla();
			Ekran^ EkranPiatego = gcnew Ekran(xl - 0.7, xp - 0.7, yp + 5.6, yl + 5.6);
			
		Wahadla^ SzosteWah = gcnew Wahadla();
			Ekran^ EkranSzostego = gcnew Ekran(xl - 0.35, xp - 0.35, yp + 5.8, yl + 5.8);

		Wahadla^ SiodmeWah = gcnew Wahadla();
			Ekran^ EkranSiodmego = gcnew Ekran(xl +0.1, xp + 0.1, yp + 6, yl + 6);

		Wahadla^ OsmeWah = gcnew Wahadla();
			Ekran^ EkranOsmego = gcnew Ekran(xl +0.55, xp + 0.55, yp + 6.2, yl + 6.2);

		Wahadla^ DziewiateWah = gcnew Wahadla();
			Ekran^ EkranDziewiatego = gcnew Ekran(xl + 1, xp + 1, yp + 6.4, yl + 6.4);

		Wahadla^ DziesiateWah = gcnew Wahadla();
			Ekran^ EkranDziesiatego = gcnew Ekran(xl + 1.45, xp + 1.45, yp + 6.6, yl + 6.6);

		//tworzenie obiektów pozwalaj¹cych na przypisanie wartoœci metod do zmiennych globalnych (Timer->Rk4)
		
		Runge^ RuchPierwszego = gcnew Runge();
			Runge^ RuchDrugiego = gcnew Runge();
				Runge^ RuchTrzeciego = gcnew Runge();
					Runge^ RuchCzwartego = gcnew Runge();
						Runge^ RuchPiatego = gcnew Runge();
							Runge^ RuchSzostego = gcnew Runge();
								Runge^ RuchSiodmego = gcnew Runge();
									Runge^ RuchOsmego = gcnew Runge();
										Runge^ RuchDziewiatego = gcnew Runge();
											Runge^ RuchDziesiatego = gcnew Runge();

		//obiekt typu WspKartezjanskie -> zamiana wspó³rzêdnych biegunowych na kartezjañskie
		WspKartezjanskie^ PrzeliczBK = gcnew WspKartezjanskie();

		//obiekty wykresów i tablice z wynikami
		//Poszczególnych wahade³
		//energie potencjalne
		const int WielkoscTablic = 4000;

		TabliceEp^ PierwszeWahEp = gcnew TabliceEp();
			double* PierwszeWahTabEp1 = new double[ WielkoscTablic];
			double* PierwszeWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ DrugieWahEp = gcnew TabliceEp();
			double* DrugieWahTabEp1 = new double[ WielkoscTablic];
			double* DrugieWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ TrzecieWahEp = gcnew TabliceEp();
			double* TrzecieWahTabEp1 = new double[ WielkoscTablic];
			double* TrzecieWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ CzwarteWahEp = gcnew TabliceEp();
			double* CzwarteWahTabEp1 = new double[ WielkoscTablic];
			double* CzwarteWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ PiateWahEp = gcnew TabliceEp();
			double* PiateWahTabEp1 = new double[ WielkoscTablic];
			double* PiateWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ SzosteWahEp = gcnew TabliceEp();
			double* SzosteWahTabEp1 = new double[ WielkoscTablic];
			double* SzosteWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ SiodmeWahEp = gcnew TabliceEp();
			double* SiodmeWahTabEp1 = new double[ WielkoscTablic];
			double* SiodmeWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ OsmeWahEp = gcnew TabliceEp();
			double* OsmeWahTabEp1 = new double[ WielkoscTablic];
			double* OsmeWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ DziewiateWahEp = gcnew TabliceEp();
			double* DziewiateWahTabEp1 = new double[ WielkoscTablic];
			double* DziewiateWahTabEp2 = new double[ WielkoscTablic];

		TabliceEp^ DziesiateWahEp = gcnew TabliceEp();
			double* DziesiateWahTabEp1 = new double[ WielkoscTablic];
			double* DziesiateWahTabEp2 = new double[ WielkoscTablic];

		//energie kinetyczne
		TabliceEk^ PierwszeWahEk = gcnew TabliceEk();
			double* PierwszeWahTabEk1 = new double[ WielkoscTablic];
			double* PierwszeWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ DrugieWahEk = gcnew TabliceEk();
			double* DrugieWahTabEk1 = new double[ WielkoscTablic];
			double* DrugieWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ TrzecieWahEk = gcnew TabliceEk();
			double* TrzecieWahTabEk1 = new double[ WielkoscTablic];
			double* TrzecieWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ CzwarteWahEk = gcnew TabliceEk();
			double* CzwarteWahTabEk1 = new double[ WielkoscTablic];
			double* CzwarteWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ PiateWahEk = gcnew TabliceEk();
			double* PiateWahTabEk1 = new double[ WielkoscTablic];
			double* PiateWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ SzosteWahEk = gcnew TabliceEk();
			double* SzosteWahTabEk1 = new double[ WielkoscTablic];
			double* SzosteWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ SiodmeWahEk = gcnew TabliceEk();
			double* SiodmeWahTabEk1 = new double[ WielkoscTablic];
			double* SiodmeWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ OsmeWahEk = gcnew TabliceEk();
			double* OsmeWahTabEk1 = new double[ WielkoscTablic];
			double* OsmeWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ DziewiateWahEk = gcnew TabliceEk();
			double* DziewiateWahTabEk1 = new double[ WielkoscTablic];
			double* DziewiateWahTabEk2 = new double[ WielkoscTablic];

		TabliceEk^ DziesiateWahEk = gcnew TabliceEk();
			double* DziesiateWahTabEk1 = new double[ WielkoscTablic];
			double* DziesiateWahTabEk2 = new double[ WielkoscTablic];

		//energie ca³kowite
		TabliceEc^ PierwszeWahEc = gcnew TabliceEc();
			double* PierwszeWahTabEc1 = new double[ WielkoscTablic];
			double* PierwszeWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ DrugieWahEc = gcnew TabliceEc();
			double* DrugieWahTabEc1 = new double[ WielkoscTablic];
			double* DrugieWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ TrzecieWahEc = gcnew TabliceEc();
			double* TrzecieWahTabEc1 = new double[ WielkoscTablic];
			double* TrzecieWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ CzwarteWahEc = gcnew TabliceEc();
			double* CzwarteWahTabEc1 = new double[ WielkoscTablic];
			double* CzwarteWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ PiateWahEc = gcnew TabliceEc();
			double* PiateWahTabEc1 = new double[ WielkoscTablic];
			double* PiateWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ SzosteWahEc = gcnew TabliceEc();
			double* SzosteWahTabEc1 = new double[ WielkoscTablic];
			double* SzosteWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ SiodmeWahEc = gcnew TabliceEc();
			double* SiodmeWahTabEc1 = new double[ WielkoscTablic];
			double* SiodmeWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ OsmeWahEc = gcnew TabliceEc();
			double* OsmeWahTabEc1 = new double[ WielkoscTablic];
			double* OsmeWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ DziewiateWahEc = gcnew TabliceEc();
			double* DziewiateWahTabEc1 = new double[ WielkoscTablic];
			double* DziewiateWahTabEc2 = new double[ WielkoscTablic];

		TabliceEc^ DziesiateWahEc = gcnew TabliceEc();
			double* DziesiateWahTabEc1 = new double[ WielkoscTablic];
			double* DziesiateWahTabEc2 = new double[ WielkoscTablic];

		//Wspólne energie
		TabliceEp^ AllWahEp = gcnew TabliceEp();
		double* AllWahTabEp1 = new double[ WielkoscTablic];
		double* AllWahTabEp2 = new double[ WielkoscTablic];

		TabliceEk^ AllWahEk = gcnew TabliceEk();
		double* AllWahTabEk1 = new double[ WielkoscTablic];
		double* AllWahTabEk2 = new double[ WielkoscTablic];

		TabliceEc^ AllWahEc = gcnew TabliceEc();
		double* AllWahTabEc1 = new double[ WielkoscTablic];
		double* AllWahTabEc2 = new double[ WielkoscTablic];

		//czas
		double* time1 = new double[ WielkoscTablic];
		double* time2 = new double[ WielkoscTablic];

		//Tablice do rysowania przestrzeni fazowej
		double* PrzFazPierwszegox1 = new double[ WielkoscTablic];
			double* PrzFazPierwszegox2 = new double[ WielkoscTablic];
		double* PrzFazPierwszegoy1 = new double[ WielkoscTablic];
			double* PrzFazPierwszegoy2 = new double[ WielkoscTablic];

		double* PrzFazDrugiegox1 = new double[ WielkoscTablic];
			double* PrzFazDrugiegox2 = new double[ WielkoscTablic];
		double* PrzFazDrugiegoy1 = new double[ WielkoscTablic];
			double* PrzFazDrugiegoy2 = new double[ WielkoscTablic];

		double* PrzFazTrzeciegox1 = new double[ WielkoscTablic];
			double* PrzFazTrzeciegox2 = new double[ WielkoscTablic];
		double* PrzFazTrzeciegoy1 = new double[ WielkoscTablic];
			double* PrzFazTrzeciegoy2 = new double[ WielkoscTablic];

		double* PrzFazCzwartegox1 = new double[ WielkoscTablic];
			double* PrzFazCzwartegox2 = new double[ WielkoscTablic];
		double* PrzFazCzwartegoy1 = new double[ WielkoscTablic];
			double* PrzFazCzwartegoy2 = new double[ WielkoscTablic];

		double* PrzFazPiategox1 = new double[ WielkoscTablic];
			double* PrzFazPiategox2 = new double[ WielkoscTablic];
		double* PrzFazPiategoy1 = new double[ WielkoscTablic];
			double* PrzFazPiategoy2 = new double[ WielkoscTablic];

		double* PrzFazSzostegox1 = new double[ WielkoscTablic];
			double* PrzFazSzostegox2 = new double[ WielkoscTablic];
		double* PrzFazSzostegoy1 = new double[ WielkoscTablic];
			double* PrzFazSzostegoy2 = new double[ WielkoscTablic];

		double* PrzFazSiodmegox1 = new double[ WielkoscTablic];
			double* PrzFazSiodmegox2 = new double[ WielkoscTablic];
		double* PrzFazSiodmegoy1 = new double[ WielkoscTablic];
			double* PrzFazSiodmegoy2 = new double[ WielkoscTablic];

		double* PrzFazOsmegox1 = new double[ WielkoscTablic];
			double* PrzFazOsmegox2 = new double[ WielkoscTablic];
		double* PrzFazOsmegoy1 = new double[ WielkoscTablic];
			double* PrzFazOsmegoy2 = new double[ WielkoscTablic];

		double* PrzFazDziewiategox1 = new double[ WielkoscTablic];
			double* PrzFazDziewiategox2 = new double[ WielkoscTablic];
		double* PrzFazDziewiategoy1 = new double[ WielkoscTablic];
			double* PrzFazDziewiategoy2 = new double[ WielkoscTablic];

		double* PrzFazDziesiategox1 = new double[ WielkoscTablic];
			double* PrzFazDziesiategox2 = new double[ WielkoscTablic];
		double* PrzFazDziesiategoy1 = new double[ WielkoscTablic];
			double* PrzFazDziesiategoy2 = new double[ WielkoscTablic];

			//zmienne logiczne do w³¹czania obiektów animacji
			bool wlaczLinke = true;
			bool wlaczPierwszeWah = true;
			bool wlaczDrugieWah = true;
			bool wlaczTrzecieWah = true;
			bool wlaczCzwarteWah = true;
			bool wlaczPiateWah = true;
			bool wlaczSzosteWah = true;
			bool wlaczSiodmeWah = true;
			bool wlaczOsmeWah = true;
			bool wlaczDziewiateWah = true;
			bool wlaczDziesiateWah = true;
			
			bool wlaczOsie = true;

		//zmienna w której przechowywana jest sciezka do zapisu 
//Zapis->odczyt sciezki 
		public: 
			 static void OdczytPliku()
		
		{
				 //przygotowanie do zapisu
				 if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
				 {
					 File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
				 }

			Stream^ strumien;
			SaveFileDialog^ oknosciezki = gcnew SaveFileDialog;

			oknosciezki->Filter = "Bitmap Image (.bmp)|*.bmp|Text Files | *.txt";
				oknosciezki->FilterIndex = 2;
					oknosciezki->RestoreDirectory = true;
						oknosciezki->CreatePrompt = false;
							oknosciezki->OverwritePrompt = true;
								oknosciezki->AddExtension = true;
									oknosciezki->InitialDirectory = "c:\\users\\public\\pictures";

			if (oknosciezki->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((strumien = oknosciezki->OpenFile()) != nullptr)
				{

					StreamWriter^ pliksciezki = gcnew StreamWriter("c:\\users\\public\\pictures\\tymczasowyzapis.txt");

					pliksciezki->Flush();

					pliksciezki->WriteLine(Path::GetFullPath(oknosciezki->FileName));

					pliksciezki->Close();
					strumien->Close();
				}

				else
				{
					MessageBox::Show("Nie podano œcie¿ki!");
					strumien->Close();

				}

				
			}

		}
		
		
	private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//pocz¹tkowe parametry wahade³
	//d³ugoœci	
		PierwszeWah->length = 10;
			hScrollBar7->Value = 1000;
		DrugieWah->length = 9.9;
			hScrollBar6->Value = 990;
		TrzecieWah->length = 9.8;
			hScrollBar5->Value = 980;
		CzwarteWah->length = 9.7;
			hScrollBar1->Value = 970;
		PiateWah->length = 9.6;
			hScrollBar2->Value = 960;
		SzosteWah->length = 9.5;
			hScrollBar8->Value = 950;
		SiodmeWah->length = 9.4;
			hScrollBar4->Value = 940;
		OsmeWah->length = 9.3;
			hScrollBar3->Value = 930;
		DziewiateWah->length = 9.2;
			hScrollBar10->Value = 920;
		DziesiateWah->length = 9.1;
			hScrollBar9->Value = 910;

	//masy
		PierwszeWah->mass = 1;
			hScrollBar18->Value = 100;
		DrugieWah->mass = 1;
			hScrollBar17->Value = 100;
		TrzecieWah->mass = 1;
			hScrollBar16->Value = 100;
		CzwarteWah->mass = 1;
			hScrollBar20->Value = 100;
		PiateWah->mass = 1;
			hScrollBar19->Value = 100;
		SzosteWah->mass = 1;
			hScrollBar13->Value = 100;
		SiodmeWah->mass = 1;
			hScrollBar12->Value = 100;
		OsmeWah->mass = 1;
			hScrollBar11->Value = 100;
		DziewiateWah->mass = 1;
			hScrollBar15->Value = 100;
		DziesiateWah->mass = 1;
			hScrollBar14->Value = 100;

	//po³o¿enia y
		PierwszeWah->nextposy = 2.5;
			hScrollBar28->Value = 250;
		DrugieWah->nextposy = 2.5;
			hScrollBar27->Value = 250;
		TrzecieWah->nextposy = 2.5;
			hScrollBar26->Value = 250;
		CzwarteWah->nextposy = 2.5;
			hScrollBar30->Value = 250;
		PiateWah->nextposy = 2.5;
			hScrollBar29->Value = 250;
		SzosteWah->nextposy = 2.5;
			hScrollBar23->Value = 250;
		SiodmeWah->nextposy = 2.5;
			hScrollBar22->Value = 250;
		OsmeWah->nextposy = 2.5;
			hScrollBar21->Value = 250;
		DziewiateWah->nextposy = 2.5;
			hScrollBar25->Value = 250;
		DziesiateWah->nextposy = 2.5;
			hScrollBar24->Value = 250;

	//po³o¿enia x
		PierwszeWah->nextposx = 0;
		DrugieWah->nextposx = 0;
		TrzecieWah->nextposx = 0;
		CzwarteWah->nextposx = 0;
		PiateWah->nextposx = 0;
		SzosteWah->nextposx = 0;
		SiodmeWah->nextposx = 0;
		OsmeWah->nextposx = 0;
		DziewiateWah->nextposx = 0;
		DziesiateWah->nextposx = 0;

	//prêdkoœci
		PierwszeWah->nextvelocity = 0;
			hScrollBar38->Value = 0;
		DrugieWah->nextvelocity = 0;
			hScrollBar37->Value = 0;
		TrzecieWah->nextvelocity = 0;
			hScrollBar36->Value = 0;
		CzwarteWah->nextvelocity = 0;
			hScrollBar40->Value = 0;
		PiateWah->nextvelocity = 0;
			hScrollBar39->Value = 0;
		SzosteWah->nextvelocity = 0;
			hScrollBar33->Value = 0;
		SiodmeWah->nextvelocity = 0;
			hScrollBar32->Value = 0;
		OsmeWah->nextvelocity = 0;
			hScrollBar31->Value = 0;
		DziewiateWah->nextvelocity = 0;
			hScrollBar35->Value = 0;
		DziesiateWah->nextvelocity = 0;
			hScrollBar34->Value = 0;

	//t³umienie
		PierwszeWah->suppresion = 0.05;
			hScrollBar48->Value = 5;
		DrugieWah->suppresion = 0.05;
			hScrollBar47->Value = 5;
		TrzecieWah->suppresion = 0.05;
			hScrollBar46->Value = 5;
		CzwarteWah->suppresion = 0.05;
			hScrollBar50->Value = 5;
		PiateWah->suppresion = 0.05;
			hScrollBar49->Value = 5;
		SzosteWah->suppresion = 0.05;
			hScrollBar43->Value = 5;
		SiodmeWah->suppresion = 0.05;
			hScrollBar42->Value = 5;
		OsmeWah->suppresion = 0.05;
			hScrollBar41->Value = 5;
		DziewiateWah->suppresion = 0.05;
			hScrollBar45->Value = 5;
		DziesiateWah->suppresion = 0.05;
			hScrollBar44->Value = 5;



				//sprzê¿enie z poprzednim wahad³em
			DrugieWah->prevcoupling = 0.1;
			hScrollBar57->Value = 10;
			TrzecieWah->prevcoupling = 0.1;
			hScrollBar56->Value = 10;
			CzwarteWah->prevcoupling = 0.1;
			hScrollBar60->Value = 10;
			PiateWah->prevcoupling = 0.1;
			hScrollBar59->Value = 10;
			SzosteWah->prevcoupling = 0.1;
			hScrollBar53->Value = 10;
			SiodmeWah->prevcoupling = 0.1;
			hScrollBar52->Value = 10;
			OsmeWah->prevcoupling = 0.1;
			hScrollBar51->Value = 10;
			DziewiateWah->prevcoupling = 0.1;
			hScrollBar55->Value = 10;
			DziesiateWah->prevcoupling = 0.1;
			hScrollBar54->Value = 10;

			//sprzê¿enie z nastêpnym wahad³em
			PierwszeWah->nextcoupling = 0.1;
			hScrollBar63->Value = 10;
			DrugieWah->nextcoupling = 0.1;
			hScrollBar66->Value =10;
			TrzecieWah->nextcoupling = 0.1;
			hScrollBar65->Value = 10;
			CzwarteWah->nextcoupling = 0.1;
			hScrollBar68->Value = 10;
			PiateWah->nextcoupling = 0.1;
			hScrollBar67->Value = 10;
			SzosteWah->nextcoupling = 0.1;
			hScrollBar62->Value = 10;
			SiodmeWah->nextcoupling = 0.1;
			hScrollBar61->Value = 10;
			OsmeWah->nextcoupling = 0.1;
			hScrollBar58->Value = 10;
			DziewiateWah->nextcoupling = 0.1;
			hScrollBar64->Value = 10;

			//ustawienia wychyleñ pocz¹tkowych
			PierwszeWah->wychylenie = PierwszeWah->nextposy;
			DrugieWah->wychylenie = DrugieWah->nextposy;
			TrzecieWah->wychylenie = TrzecieWah->nextposy;
			CzwarteWah->wychylenie = CzwarteWah->nextposy;
			PiateWah->wychylenie = PiateWah->nextposy;
			SzosteWah->wychylenie = SzosteWah->nextposy;
			SiodmeWah->wychylenie = SiodmeWah->nextposy;
			OsmeWah->wychylenie = OsmeWah->nextposy;
			DziewiateWah->wychylenie = DziewiateWah->nextposy;
			DziesiateWah->wychylenie = DziesiateWah->nextposy;
			
			//ustawienia aplikacji
			timer1->Interval = 25;

	//pierwszy panel widoczny -> d³ugoœci (najwa¿niejszy parametr przy DP)
	panel1->BringToFront();
		panel5->Visible = false;
	panel6->Visible = false;
		panel7->Visible = false;
	panel8->Visible = false;
		panel9->Visible = false;
	panel10->Visible = false;

	checkBox2->Checked = true;
		checkBox3->Checked = true;
			checkBox10->Checked = true;

	textBox1->BackColor = System::Drawing::Color::Black;
		textBox2->BackColor = System::Drawing::Color::White;
			textBox6->BackColor = System::Drawing::Color::AliceBlue;
				textBox7->BackColor = System::Drawing::Color::DarkBlue;

}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox1->Checked == false)
	{
		checkBox1->Checked = true;
		this->button1->Text = "STOP";
		this->button1->ForeColor = System::Drawing::Color::Red;
	}
	else
	{
		checkBox1->Checked = false;
		this->button1->Text = "START";
		this->button1->ForeColor = System::Drawing::Color::Green;
	}

}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = checkBox1->Checked;
}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
		 //animacja wahad³a
private: System::Void PictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//tworzenie obiektu graficznego
	Graphics^ grafika = e->Graphics;
	//wybór koloru
	pictureBox1->BackColor = textBox1->BackColor;
//	grafika->Clear(tlo);//BlueViolet

	//Dobór kolorów poszczególnych elementów
	Pen^ Uklad3d = gcnew Pen(textBox2->BackColor);
	Pen^ pret = gcnew Pen(System::Drawing::Color::Gray);
	Pen^ pret2 = gcnew Pen(System::Drawing::Color::DarkGray);
	Pen^ linka = gcnew Pen(System::Drawing::Color::Cornsilk);
	Pen^ sruba = gcnew Pen(System::Drawing::Color::LightSteelBlue);

	//kolory kuli
	

	//tworzenie pêdzli gradientowych 
	//kula pierwsza
	Point kula1d = Point(EkranPierwszego->SzerEkr(PierwszeWah->x - 1, pictureBox1->Width), EkranPierwszego->WysEkr(-PierwszeWah->y + 1, pictureBox1->Height));
	Point kula1g = Point(EkranPierwszego->SzerEkr(PierwszeWah->x + 2, pictureBox1->Width), EkranPierwszego->WysEkr(-PierwszeWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula1 = gcnew LinearGradientBrush(kula1d, kula1g, textBox6->BackColor, textBox7->BackColor);

	Point kula2d = Point(EkranDrugiego->SzerEkr(DrugieWah->x - 1, pictureBox1->Width), EkranDrugiego->WysEkr(-DrugieWah->y + 1, pictureBox1->Height));
	Point kula2g = Point(EkranDrugiego->SzerEkr(DrugieWah->x + 2, pictureBox1->Width), EkranDrugiego->WysEkr(-DrugieWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula2 = gcnew LinearGradientBrush(kula2d, kula2g, textBox6->BackColor, textBox7->BackColor);

	Point kula3d = Point(EkranTrzeciego->SzerEkr(TrzecieWah->x - 1, pictureBox1->Width), EkranTrzeciego->WysEkr(-TrzecieWah->y + 1, pictureBox1->Height));
	Point kula3g = Point(EkranTrzeciego->SzerEkr(TrzecieWah->x + 2, pictureBox1->Width), EkranTrzeciego->WysEkr(-TrzecieWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula3 = gcnew LinearGradientBrush(kula3d, kula3g, textBox6->BackColor, textBox7->BackColor);

	Point kula4d = Point(EkranCzwartego->SzerEkr(CzwarteWah->x - 1, pictureBox1->Width), EkranCzwartego->WysEkr(-CzwarteWah->y + 1, pictureBox1->Height));
	Point kula4g = Point(EkranCzwartego->SzerEkr(CzwarteWah->x + 2, pictureBox1->Width), EkranCzwartego->WysEkr(-CzwarteWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula4 = gcnew LinearGradientBrush(kula4d, kula4g, textBox6->BackColor, textBox7->BackColor);

	Point kula5d = Point(EkranPiatego->SzerEkr(PiateWah->x - 1, pictureBox1->Width), EkranPiatego->WysEkr(-PiateWah->y + 1, pictureBox1->Height));
	Point kula5g = Point(EkranPiatego->SzerEkr(PiateWah->x + 2, pictureBox1->Width), EkranPiatego->WysEkr(-PiateWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula5 = gcnew LinearGradientBrush(kula5d, kula5g, textBox6->BackColor, textBox7->BackColor);

	Point kula6d = Point(EkranSzostego->SzerEkr(SzosteWah->x - 1, pictureBox1->Width), EkranSzostego->WysEkr(-SzosteWah->y + 1, pictureBox1->Height));
	Point kula6g = Point(EkranSzostego->SzerEkr(SzosteWah->x + 2, pictureBox1->Width), EkranSzostego->WysEkr(-SzosteWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula6 = gcnew LinearGradientBrush(kula6d, kula6g, textBox6->BackColor, textBox7->BackColor);

	Point kula7d = Point(EkranSiodmego->SzerEkr(SiodmeWah->x - 1, pictureBox1->Width), EkranSzostego->WysEkr(-SiodmeWah->y + 1, pictureBox1->Height));
	Point kula7g = Point(EkranSiodmego->SzerEkr(SiodmeWah->x + 2, pictureBox1->Width), EkranSzostego->WysEkr(-SiodmeWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula7 = gcnew LinearGradientBrush(kula7d, kula7g, textBox6->BackColor, textBox7->BackColor);

	Point kula8d = Point(EkranOsmego->SzerEkr(OsmeWah->x - 1, pictureBox1->Width), EkranOsmego->WysEkr(-OsmeWah->y + 1, pictureBox1->Height));
	Point kula8g = Point(EkranOsmego->SzerEkr(OsmeWah->x + 2, pictureBox1->Width), EkranOsmego->WysEkr(-OsmeWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula8 = gcnew LinearGradientBrush(kula8d, kula8g, textBox6->BackColor, textBox7->BackColor);

	Point kula9d = Point(EkranDziewiatego->SzerEkr(DziewiateWah->x - 1, pictureBox1->Width), EkranDziewiatego->WysEkr(-DziewiateWah->y + 1, pictureBox1->Height));
	Point kula9g = Point(EkranDziewiatego->SzerEkr(DziewiateWah->x + 2, pictureBox1->Width), EkranDziewiatego->WysEkr(-DziewiateWah->y + 1, pictureBox1->Height));
	
	LinearGradientBrush^ Kula9 = gcnew LinearGradientBrush(kula9d, kula9g, textBox6->BackColor, textBox7->BackColor);

	Point kula10d = Point(EkranDziesiatego->SzerEkr(DziesiateWah->x - 1, pictureBox1->Width), EkranDziesiatego->WysEkr(-DziesiateWah->y + 1, pictureBox1->Height));
	Point kula10g = Point(EkranDziesiatego->SzerEkr(DziesiateWah->x + 2, pictureBox1->Width), EkranDziesiatego->WysEkr(-DziesiateWah->y + 1, pictureBox1->Height));

	LinearGradientBrush^ Kula10 = gcnew LinearGradientBrush(kula10d, kula10g, textBox6->BackColor, textBox7->BackColor);

	//górny bok ceownika
	Point bok1 = Point(EkranAnimacji->SzerEkr(6, pictureBox1->Width), EkranAnimacji->WysEkr(-2, pictureBox1->Height));
	Point bok2 = Point(EkranAnimacji->SzerEkr(0, pictureBox1->Width), EkranAnimacji->WysEkr(-10, pictureBox1->Height));

	LinearGradientBrush^ GradientBelki = gcnew LinearGradientBrush(bok1, bok2, Color::DarkGray, Color::Gray);
	//pen gradient belki pgb
	Pen^ pgb = gcnew Pen(GradientBelki);

	//rozmiar
	pret->Width = 2;
	pret2->Width = 2;
	sruba->Width = 3;
	linka->Width = 2;
	pgb->Width = 20;


	if (checkBox10->Checked == true)
	{
		//zmienna steruj¹ca funkcj¹ 1/x, rysowanie gridu
		int xzmienna = 2;

		//Grid
		for (int iter = 1; iter < GestoscSiatki; iter++)
		{

			if (iter <13)
			{
				//linie poziome
				grafika->DrawLine(Uklad3d, EkranAnimacji->SzerEkr(-15, pictureBox1->Width), EkranAnimacji->WysEkr((plp + WysokoscSiatki * iter) / xzmienna, pictureBox1->Height),
					EkranAnimacji->SzerEkr(15, pictureBox1->Width), EkranAnimacji->WysEkr((plp-3 + WysokoscSiatki * iter) / xzmienna, pictureBox1->Height));
			
			}
			//-14 + SzerokoscSiatki * iter - 15 + SzerokoscSiatki * iter * xzmienna, pictureBox1->Width     EkranAnimacji->SzerEkr(-14 + SzerokoscSiatki * iter, pictureBox1->Width), EkranAnimacji->WysEkr((plp + WysokoscSiatki * 11) / 11-1, pictureBox1->Height

			//linie pionowe
			grafika->DrawLine(Uklad3d, EkranAnimacji->SzerEkr( SzerokoscSiatki * iter - 15 + SzerokoscSiatki * iter * xzmienna, pictureBox1->Width), EkranAnimacji->WysEkr(15, pictureBox1->Height),
				EkranAnimacji->SzerEkr(-14 + SzerokoscSiatki * iter, pictureBox1->Width), EkranAnimacji->WysEkr((plp-3 + WysokoscSiatki * 11) / 12,pictureBox1->Height));
		
			xzmienna++;
		}
	}
	//œrodek uk³adu
	//grafika->FillEllipse(Brushes::Red, EkranAnimacji->SzerEkr(0, pictureBox1->Width), EkranAnimacji->WysEkr(0, pictureBox1->Height), 8, 8);
	

		//linka ³¹cz¹ca wahad³a
	if (wlaczLinke == true)
	{
		grafika->DrawLine(linka, EkranPierwszego->SzerEkr(0, pictureBox1->Width), EkranPierwszego->WysEkr(0, pictureBox1->Height), EkranDziesiatego->SzerEkr(0, pictureBox1->Width), EkranDziesiatego->WysEkr(0, pictureBox1->Height));
	}

	if (DziesiateWah->nextposy >= 2 || DziewiateWah->nextposy >= 2 || OsmeWah->nextposy >= 2 || SiodmeWah->nextposy >= 2 || SzosteWah->nextposy >= 2 || PiateWah->nextposy >= 2 || CzwarteWah->nextposy >= 2 || TrzecieWah->nextposy >= 2 || DrugieWah->nextposy >= 2 || PierwszeWah->nextposy >= 2)
	{
		//zawieszenie wahade³ - prêt 
		if (checkBox34->Checked == false)
		{
			grafika->DrawEllipse(sruba, EkranDziesiatego->SzerEkr(0, pictureBox1->Width), EkranDziesiatego->WysEkr(-0.1, pictureBox1->Height), 7, 7);
			//body	
			grafika->DrawLine(pgb, EkranAnimacji->SzerEkr(2.8, pictureBox1->Width), EkranAnimacji->WysEkr(-5.6, pictureBox1->Height), EkranAnimacji->SzerEkr(-1, pictureBox1->Width), EkranAnimacji->WysEkr(-7.3, pictureBox1->Height));

			pret->Width = 20;
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2.15, pictureBox1->Width), EkranAnimacji->WysEkr(-5.4, pictureBox1->Height), EkranAnimacji->SzerEkr(-1.55, pictureBox1->Width), EkranAnimacji->WysEkr(-7.2, pictureBox1->Height));



			//ty³
			grafika->FillRectangle(Brushes::Gray, EkranAnimacji->SzerEkr(-1.8, pictureBox1->Width), EkranAnimacji->WysEkr(-7.65, pictureBox1->Height), 25, 20);

			//przód
			grafika->FillRectangle(Brushes::DimGray, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height), 25, 20);

			//obramowanie
			pret->Width = 2;
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height), EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height));
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5, pictureBox1->Height), EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.8, pictureBox1->Height));
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.8, pictureBox1->Height), EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5, pictureBox1->Height));

			//zawieszenie pierwszy plan
			grafika->DrawLine(sruba, EkranAnimacji->SzerEkr(2.45, pictureBox1->Width), EkranAnimacji->WysEkr(-5.7, pictureBox1->Height), EkranAnimacji->SzerEkr(2.45, pictureBox1->Width), EkranAnimacji->WysEkr(-4.75, pictureBox1->Height));
			grafika->DrawEllipse(sruba, EkranAnimacji->SzerEkr(2.3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.1, pictureBox1->Height), 7, 7);
		}

	}
	//rysowanie wahade³
	//Dziesi¹te wahad³o
	if (wlaczDziesiateWah == true)
	{
		grafika->DrawLine(linka, EkranDziesiatego->SzerEkr(0, pictureBox1->Width), EkranDziesiatego->WysEkr(0, pictureBox1->Height), EkranDziesiatego->SzerEkr(DziesiateWah->x, pictureBox1->Width), EkranDziesiatego->WysEkr(-DziesiateWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula10, EkranDziesiatego->SzerEkr(DziesiateWah->x - 0.5, pictureBox1->Width), EkranDziesiatego->WysEkr(-DziesiateWah->y, pictureBox1->Height), 23, 23);
	}

	//Dziewi¹te wahad³o
	if (wlaczDziewiateWah == true)
	{
		grafika->DrawLine(linka, EkranDziewiatego->SzerEkr(0, pictureBox1->Width), EkranDziewiatego->WysEkr(0, pictureBox1->Height), EkranDziewiatego->SzerEkr(DziewiateWah->x, pictureBox1->Width), EkranDziewiatego->WysEkr(-DziewiateWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula9, EkranDziewiatego->SzerEkr(DziewiateWah->x - 0.5, pictureBox1->Width), EkranDziewiatego->WysEkr(-DziewiateWah->y, pictureBox1->Height), 24, 24);
	}
	//Ósme wahad³o
	if (wlaczOsmeWah == true)
	{
		grafika->DrawLine(linka, EkranOsmego->SzerEkr(0, pictureBox1->Width), EkranOsmego->WysEkr(0, pictureBox1->Height), EkranOsmego->SzerEkr(OsmeWah->x, pictureBox1->Width), EkranOsmego->WysEkr(-OsmeWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula8, EkranOsmego->SzerEkr(OsmeWah->x - 0.5, pictureBox1->Width), EkranOsmego->WysEkr(-OsmeWah->y, pictureBox1->Height), 25, 25);
	}
	if (wlaczSiodmeWah == true)
	{
		//Siódme wahad³o
		grafika->DrawLine(linka, EkranSiodmego->SzerEkr(0, pictureBox1->Width), EkranSiodmego->WysEkr(0, pictureBox1->Height), EkranSiodmego->SzerEkr(SiodmeWah->x, pictureBox1->Width), EkranSiodmego->WysEkr(-SiodmeWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula7, EkranSiodmego->SzerEkr(SiodmeWah->x - 0.5, pictureBox1->Width), EkranSiodmego->WysEkr(-SiodmeWah->y, pictureBox1->Height), 26, 26);
	}
		//Szóste wahad³o
	if (wlaczSzosteWah == true)
	{
		grafika->DrawLine(linka, EkranSzostego->SzerEkr(0, pictureBox1->Width), EkranSzostego->WysEkr(0, pictureBox1->Height), EkranSzostego->SzerEkr(SzosteWah->x, pictureBox1->Width), EkranSzostego->WysEkr(-SzosteWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula6, EkranSzostego->SzerEkr(SzosteWah->x - 0.5, pictureBox1->Width), EkranSzostego->WysEkr(-SzosteWah->y, pictureBox1->Height), 27, 27);
	}
	//Pi¹te wahad³o
	if (wlaczPiateWah == true)
	{
		grafika->DrawLine(linka, EkranPiatego->SzerEkr(0, pictureBox1->Width), EkranPiatego->WysEkr(0, pictureBox1->Height), EkranPiatego->SzerEkr(PiateWah->x, pictureBox1->Width), EkranPiatego->WysEkr(-PiateWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula5, EkranPiatego->SzerEkr(PiateWah->x - 0.5, pictureBox1->Width), EkranPiatego->WysEkr(-PiateWah->y, pictureBox1->Height), 27, 27);
	}
	//Czwarte wahad³o
	if (wlaczCzwarteWah == true)
	{
		grafika->DrawLine(linka, EkranCzwartego->SzerEkr(0, pictureBox1->Width), EkranCzwartego->WysEkr(0, pictureBox1->Height), EkranCzwartego->SzerEkr(CzwarteWah->x, pictureBox1->Width), EkranCzwartego->WysEkr(-CzwarteWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula4, EkranCzwartego->SzerEkr(CzwarteWah->x - 0.5, pictureBox1->Width), EkranCzwartego->WysEkr(-CzwarteWah->y, pictureBox1->Height), 28, 28);
	}
	//Trzecie wahad³o
	if (wlaczTrzecieWah == true)
	{
		grafika->DrawLine(linka, EkranTrzeciego->SzerEkr(0, pictureBox1->Width), EkranTrzeciego->WysEkr(0, pictureBox1->Height), EkranTrzeciego->SzerEkr(TrzecieWah->x, pictureBox1->Width), EkranTrzeciego->WysEkr(-TrzecieWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula3, EkranTrzeciego->SzerEkr(TrzecieWah->x - 0.5, pictureBox1->Width), EkranTrzeciego->WysEkr(-TrzecieWah->y, pictureBox1->Height), 29, 29);
	}
	//Drugie wahad³o
	if (wlaczDrugieWah == true)
	{
		grafika->DrawLine(linka, EkranDrugiego->SzerEkr(0, pictureBox1->Width), EkranDrugiego->WysEkr(0, pictureBox1->Height), EkranDrugiego->SzerEkr(DrugieWah->x, pictureBox1->Width), EkranDrugiego->WysEkr(-DrugieWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula2, EkranDrugiego->SzerEkr(DrugieWah->x - 0.5, pictureBox1->Width), EkranDrugiego->WysEkr(-DrugieWah->y, pictureBox1->Height), 29, 29);
	}
	//Pierwsze wahad³o
	if (wlaczPierwszeWah == true)
	{
		grafika->DrawLine(linka, EkranPierwszego->SzerEkr(0, pictureBox1->Width), EkranPierwszego->WysEkr(0, pictureBox1->Height), EkranPierwszego->SzerEkr(PierwszeWah->x, pictureBox1->Width), EkranPierwszego->WysEkr(-PierwszeWah->y + 0.2, pictureBox1->Height));

		grafika->FillEllipse(Kula1, EkranPierwszego->SzerEkr(PierwszeWah->x - 0.5, pictureBox1->Width), EkranPierwszego->WysEkr(-PierwszeWah->y, pictureBox1->Height), 30, 30);
	}

	if (DziesiateWah->nextposy <= 2 || DziewiateWah->nextposy <= 2 || OsmeWah->nextposy <= 2 || SiodmeWah->nextposy <= 2 || SzosteWah->nextposy <= 2 || PiateWah->nextposy <= 2 || CzwarteWah->nextposy <= 2 || TrzecieWah->nextposy <= 2 || DrugieWah->nextposy <= 2 || PierwszeWah->nextposy <= 2)
	{
		//zawieszenie wahade³ - prêt 
		if (checkBox34->Checked == false)
		{
		
			grafika->DrawEllipse(sruba, EkranDziesiatego->SzerEkr(0, pictureBox1->Width), EkranDziesiatego->WysEkr(-0.1, pictureBox1->Height), 7, 7);
			
			//body	
			grafika->DrawLine(pgb, EkranAnimacji->SzerEkr(2.8, pictureBox1->Width), EkranAnimacji->WysEkr(-5.6, pictureBox1->Height), EkranAnimacji->SzerEkr(-1, pictureBox1->Width), EkranAnimacji->WysEkr(-7.3, pictureBox1->Height));

			pret->Width = 20;
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2.15, pictureBox1->Width), EkranAnimacji->WysEkr(-5.4, pictureBox1->Height), EkranAnimacji->SzerEkr(-1.55, pictureBox1->Width), EkranAnimacji->WysEkr(-7.2, pictureBox1->Height));

			//ty³
			grafika->FillRectangle(Brushes::Gray, EkranAnimacji->SzerEkr(-1.8, pictureBox1->Width), EkranAnimacji->WysEkr(-7.65, pictureBox1->Height), 25, 20);

			//przód
			grafika->FillRectangle(Brushes::DimGray, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height), 25, 20);

			//obramowanie
			pret->Width = 2;
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height), EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.9, pictureBox1->Height));
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5, pictureBox1->Height), EkranAnimacji->SzerEkr(3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.8, pictureBox1->Height));
			grafika->DrawLine(pret, EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5.8, pictureBox1->Height), EkranAnimacji->SzerEkr(2, pictureBox1->Width), EkranAnimacji->WysEkr(-5, pictureBox1->Height));

			//zawieszenie pierwszy plan
			grafika->DrawLine(sruba, EkranAnimacji->SzerEkr(2.45, pictureBox1->Width), EkranAnimacji->WysEkr(-5.7, pictureBox1->Height), EkranAnimacji->SzerEkr(2.45, pictureBox1->Width), EkranAnimacji->WysEkr(-4.75, pictureBox1->Height));
			grafika->DrawEllipse(sruba, EkranAnimacji->SzerEkr(2.3, pictureBox1->Width), EkranAnimacji->WysEkr(-5.1, pictureBox1->Height), 7, 7);
		}

	}


}
		 //wykresy energii/przestrzeni fazowych
private: System::Void PictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
		 //Parametry wahade³ pocz¹tek
		 //d³ugoœci
private: System::Void HScrollBar7_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->length = hScrollBar7->Value * 0.01;
	label5->Text = L"Pierwsze wahad³o: " + PierwszeWah->length.ToString("0.00") + L" [m]";
	PierwszeWah->x = PierwszeWah->length * sin(PierwszeWah->nextposy);
	PierwszeWah->y = PierwszeWah->length * cos(PierwszeWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar6_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->length = hScrollBar6->Value * 0.01;
	label6->Text = L"Drugie wahad³o: " + DrugieWah->length.ToString("0.00") + L" [m]";
	DrugieWah->x = DrugieWah->length * sin(DrugieWah->nextposy);
	DrugieWah->y = DrugieWah->length * cos(DrugieWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar5_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->length = hScrollBar5->Value * 0.01;
	label7->Text = L"Trzecie wahad³o: " + TrzecieWah->length.ToString("0.00") + L" [m]";
	TrzecieWah->x = TrzecieWah->length * sin(TrzecieWah->nextposy);
	TrzecieWah->y = TrzecieWah->length * cos(TrzecieWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->length = hScrollBar1->Value * 0.01;
	label8->Text = L"Czwarte wahad³o: " + CzwarteWah->length.ToString("0.00") + L" [m]";
	CzwarteWah->x = CzwarteWah->length * sin(CzwarteWah->nextposy);
	CzwarteWah->y = CzwarteWah->length * cos(CzwarteWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->length = hScrollBar2->Value * 0.01;
	label9->Text = L"Pi¹te wahad³o: " + PiateWah->length.ToString("0.00") + L" [m]";
	PiateWah->x = PiateWah->length * sin(PiateWah->nextposy);
	PiateWah->y = PiateWah->length * cos(PiateWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar4_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

}
private: System::Void HScrollBar3_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void HScrollBar8_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->length = hScrollBar8->Value * 0.01;
	label14->Text = L"Szóste wahad³o: " + SzosteWah->length.ToString("0.00") + L" [m]";
	SzosteWah->x = SzosteWah->length * sin(SzosteWah->nextposy);
	SzosteWah->y = SzosteWah->length * cos(SzosteWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar10_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->length = hScrollBar10->Value * 0.01;
	label11->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->length.ToString("0.00") + L" [m]";
	DziewiateWah->x = DziewiateWah->length * sin(DziewiateWah->nextposy);
	DziewiateWah->y = DziewiateWah->length * cos(DziewiateWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar9_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->length = hScrollBar9->Value * 0.01;
	label10->Text = L"Dziesi¹te wahad³o: " + DziesiateWah->length.ToString("0.00") + L" [m]";
	DziesiateWah->x = DziesiateWah->length * sin(DziesiateWah->nextposy);
	DziesiateWah->y = DziesiateWah->length * cos(DziesiateWah->nextposy);
	pictureBox1->Invalidate();
}
		 //masy
private: System::Void HScrollBar18_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->mass = hScrollBar18->Value * 0.01;
	label24->Text = L"Pierwsze wahad³o: " + PierwszeWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar17_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->mass = hScrollBar17->Value * 0.01;
	label23->Text = L"Drugie wahad³o: " + DrugieWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar16_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->mass = hScrollBar16->Value * 0.01;
	label22->Text = L"Trzecie wahad³o: " + TrzecieWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar20_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->mass = hScrollBar20->Value * 0.01;
	label21->Text = L"Czwarte wahad³o: " + CzwarteWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar19_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->mass = hScrollBar19->Value * 0.01;
	label20->Text = L"Pi¹te wahad³o: " + PiateWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar13_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->mass = hScrollBar13->Value * 0.01;
	label19->Text = L"Szóste wahad³o: " + SzosteWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar12_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->mass = hScrollBar12->Value * 0.01;
	label18->Text = L"Siódme wahad³o: " + SiodmeWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar11_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->mass = hScrollBar11->Value * 0.01;
	label17->Text = L"Ósme wahad³o: " + OsmeWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar15_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->mass = hScrollBar15->Value * 0.01;
		label16->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->mass.ToString("0.00") + L" [kg]";
}
private: System::Void HScrollBar14_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->mass = hScrollBar14->Value * 0.01;
		label15->Text = L"Dziesi¹te wahad³o: " + DziesiateWah->mass.ToString("0.00") + L" [kg]";
}
		 //po³o¿enia
private: System::Void HScrollBar28_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->nextposy = hScrollBar28->Value * 0.01;
	PierwszeWah->wychylenie = PierwszeWah->nextposy;
		label35->Text = L"Pierwsze wahad³o: " + PierwszeWah->nextposy.ToString("0.00") + L" [rad]";

		PierwszeWah->x = PierwszeWah->length * sin(PierwszeWah->nextposy);
		PierwszeWah->y = PierwszeWah->length * cos(PierwszeWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar27_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->nextposy = hScrollBar27->Value * 0.01;
	DrugieWah->wychylenie = DrugieWah->nextposy;
		label34->Text = L"Drugie wahad³o: " + DrugieWah->nextposy.ToString("0.00") + L" [rad]";

		DrugieWah->x = DrugieWah->length * sin(DrugieWah->nextposy);
		DrugieWah->y = DrugieWah->length * cos(DrugieWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar26_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->nextposy = hScrollBar26->Value * 0.01;
	TrzecieWah->wychylenie = TrzecieWah->nextposy;
		label33->Text = L"Trzecie wahad³o: " + TrzecieWah->nextposy.ToString("0.00") + L" [rad]";

		TrzecieWah->x = TrzecieWah->length * sin(TrzecieWah->nextposy);
		TrzecieWah->y = TrzecieWah->length * cos(TrzecieWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar30_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->nextposy = hScrollBar30->Value * 0.01;
	CzwarteWah->wychylenie = CzwarteWah->nextposy;
		label32->Text = L"Czwarte wahad³o: " + CzwarteWah->nextposy.ToString("0.00") + L" [rad]";

		CzwarteWah->x = CzwarteWah->length * sin(CzwarteWah->nextposy);
		CzwarteWah->y = CzwarteWah->length * cos(CzwarteWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar29_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->nextposy = hScrollBar29->Value * 0.01;
	PiateWah->wychylenie = PiateWah->nextposy;
		label31->Text = L"Pi¹te wahad³o: " + PiateWah->nextposy.ToString("0.00") + L" [rad]";

		PiateWah->x = PiateWah->length * sin(PiateWah->nextposy);
		PiateWah->y = PiateWah->length * cos(PiateWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar23_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->nextposy = hScrollBar23->Value * 0.01;
	SzosteWah->wychylenie = SzosteWah->nextposy;
		label30->Text = L"Szóste wahad³o: " + SzosteWah->nextposy.ToString("0.00") + L" [rad]";

		SzosteWah->x = SzosteWah->length * sin(SzosteWah->nextposy);
		SzosteWah->y = SzosteWah->length * cos(SzosteWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar22_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->nextposy = hScrollBar22->Value * 0.01;
	SiodmeWah->wychylenie = SiodmeWah->nextposy;
		label29->Text = L"Siódme wahad³o: " + SiodmeWah->nextposy.ToString("0.00") + L" [rad]";

		SiodmeWah->x = SiodmeWah->length * sin(SiodmeWah->nextposy);
		SiodmeWah->y = SiodmeWah->length * cos(SiodmeWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar21_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->nextposy = hScrollBar21->Value * 0.01;
	OsmeWah->wychylenie = OsmeWah->nextposy;
		label28->Text = L"Ósme wahad³o: " + OsmeWah->nextposy.ToString("0.00") + L" [rad]";

		OsmeWah->x = OsmeWah->length * sin(OsmeWah->nextposy);
		OsmeWah->y = OsmeWah->length * cos(OsmeWah->nextposy);

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar25_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->nextposy = hScrollBar25->Value * 0.01;
	DziewiateWah->wychylenie = DziewiateWah->nextposy;
		label27->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->nextposy.ToString("0.00") + L" [rad]";

		DziewiateWah->x = DziewiateWah->length * sin(DziewiateWah->nextposy);
		DziewiateWah->y = DziewiateWah->length * cos(DziewiateWah->nextposy);
	
		pictureBox1->Invalidate();
}
private: System::Void HScrollBar24_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->nextposy = hScrollBar24->Value * 0.01;
	DziesiateWah->wychylenie = DziesiateWah->nextposy;
		label26->Text = L"Dziesi¹te wahad³o: " + DziesiateWah->nextposy.ToString("0.00") + L" [rad]";

		DziesiateWah->x = DziesiateWah->length * sin(DziesiateWah->nextposy);
		DziesiateWah->y = DziesiateWah->length * cos(DziesiateWah->nextposy);

	pictureBox1->Invalidate();
}
		 //prêdkoœci
private: System::Void HScrollBar38_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->prevvelocity = hScrollBar38->Value * 0.01;
	label46->Text = L"Pierwsze wahad³o: " + PierwszeWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar37_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->prevvelocity = hScrollBar37->Value * 0.01;
	label45->Text = L"Drugie wahad³o: " + DrugieWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar36_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->prevvelocity = hScrollBar36->Value * 0.01;
	label44->Text = L"Trzecie wahad³o: " + TrzecieWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar40_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->prevvelocity = hScrollBar40->Value * 0.01;
	label43->Text = L"Czwarte wahad³o: " + CzwarteWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar39_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->prevvelocity = hScrollBar39->Value * 0.01;
	label42->Text = L"Pi¹te wahad³o: " + PiateWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar33_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->prevvelocity = hScrollBar33->Value * 0.01;
	label41->Text = L"Szóste wahad³o: " + SzosteWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar32_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->nextvelocity = hScrollBar32->Value * 0.01;
	label40->Text = L"Siódme wahad³o: " + SiodmeWah->nextvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar31_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->prevvelocity = hScrollBar31->Value * 0.01;
	label39->Text = L"Ósme wahad³o: " + OsmeWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar35_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->prevvelocity = hScrollBar35->Value * 0.01;
	label38->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar34_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->prevvelocity = hScrollBar34->Value * 0.01;
	label37->Text = L"Dziesi¹te wahad³o: " + DziesiateWah->prevvelocity.ToString("0.00") + L" [m/s]";

	pictureBox1->Invalidate();
}
		 //t³umienie
private: System::Void HScrollBar48_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->suppresion = hScrollBar48->Value * 0.01;
	label57->Text = L"Pierwsze wahad³o: " + PierwszeWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar47_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->suppresion = hScrollBar47->Value * 0.01;
	label56->Text = L"Drugie wahad³o: " + DrugieWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar46_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->suppresion = hScrollBar46->Value * 0.01;
	label55->Text = L"Trzecie wahad³o: " + TrzecieWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar50_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->suppresion = hScrollBar50->Value * 0.01;
	label54->Text = L"Czwarte wahad³o: " + CzwarteWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar49_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->suppresion = hScrollBar49->Value * 0.01;
	label53->Text = L"Pi¹te wahad³o: " + PiateWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar43_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->suppresion = hScrollBar43->Value * 0.01;
	label52->Text = L"Szóste wahad³o: " + SzosteWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar42_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->suppresion = hScrollBar42->Value * 0.01;
	label51->Text = L"Siódme wahad³o: " + SiodmeWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar41_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->suppresion = hScrollBar41->Value * 0.01;
	label50->Text = L"Ósme wahad³o: " + OsmeWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar45_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->suppresion = hScrollBar45->Value * 0.01;
	label49->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar44_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->suppresion = hScrollBar44->Value * 0.01;
	label48->Text = L"Dziesi¹te wahad³o: " + DziesiateWah->suppresion.ToString("0.00");

	pictureBox1->Invalidate();
}
		 //sprzê¿enie z poprzednim wahad³em
private: System::Void HScrollBar57_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->prevcoupling = hScrollBar57->Value * 0.01;
	PierwszeWah->nextcoupling = hScrollBar57->Value * 0.01;
	label67->Text = L"Pierwsza linka: " + DrugieWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar56_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->prevcoupling = hScrollBar56->Value * 0.01;
	DrugieWah->nextcoupling = hScrollBar56->Value * 0.01;

	label66->Text = L"Druga linka: " + TrzecieWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar60_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->prevcoupling = hScrollBar60->Value * 0.01;
	TrzecieWah->nextcoupling = hScrollBar60->Value * 0.01;
	label65->Text = L"Trzecia linka: " + CzwarteWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar59_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->prevcoupling = hScrollBar59->Value * 0.01;
	CzwarteWah->nextcoupling = hScrollBar59->Value * 0.01;
	label64->Text = L"Czwarta linka: " + PiateWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar53_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->prevcoupling = hScrollBar53->Value * 0.01;
	PiateWah->nextcoupling = hScrollBar53->Value * 0.01;
	label63->Text = L"Pi¹ta linka: " + SzosteWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar52_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->prevcoupling = hScrollBar52->Value * 0.01;
	SzosteWah->nextcoupling = hScrollBar52->Value * 0.01;
	label62->Text = L"Szósta linka: " + SiodmeWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar51_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->prevcoupling = hScrollBar51->Value * 0.01;
	SiodmeWah->nextcoupling = hScrollBar51->Value * 0.01;
	label61->Text = L"Siódma linka: " + OsmeWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar55_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->prevcoupling = hScrollBar55->Value * 0.01;
	OsmeWah->nextcoupling = hScrollBar55->Value * 0.01;
	label60->Text = L"Ósma linka: " + DziewiateWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar54_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziesiateWah->prevcoupling = hScrollBar54->Value * 0.01;
	DziewiateWah->nextcoupling = hScrollBar54->Value * 0.01;
	label59->Text = L"Dziewi¹ta linka: " + DziesiateWah->prevcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
		 //wspó³czynnik sprzê¿enia z kolejnym wahad³em
private: System::Void HScrollBar63_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PierwszeWah->nextcoupling = hScrollBar63->Value * 0.01;
	label68->Text = L"Dziesi¹ta linka: " + PierwszeWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar66_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DrugieWah->nextcoupling = hScrollBar66->Value * 0.01;
	label77->Text = L"Drugie wahad³o: " + DrugieWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar65_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	TrzecieWah->nextcoupling = hScrollBar65->Value * 0.01;
	label76->Text = L"Trzecie wahad³o: " + TrzecieWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar68_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	CzwarteWah->nextcoupling = hScrollBar68->Value * 0.01;
	label75->Text = L"Czwarte wahad³o: " + CzwarteWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar67_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	PiateWah->nextcoupling = hScrollBar67->Value * 0.01;
	label74->Text = L"Pi¹te wahad³o: " + PiateWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar62_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SzosteWah->nextcoupling = hScrollBar62->Value * 0.01;
	label73->Text = L"Szóste wahad³o: " + SzosteWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar61_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->nextcoupling = hScrollBar61->Value * 0.01;
	label72->Text = L"Siódme wahad³o: " + SiodmeWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar58_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->nextcoupling = hScrollBar58->Value * 0.01;
	label71->Text = L"Ósme wahad³o: " + OsmeWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void HScrollBar64_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	DziewiateWah->nextcoupling = hScrollBar64->Value * 0.01;
	label70->Text = L"Dziewi¹te wahad³o: " + DziewiateWah->nextcoupling.ToString("0.00");

	pictureBox1->Invalidate();
}
private: System::Void CheckedListBox1_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
}
private: System::Void CheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//d³ugoœci
	if (this->checkBox3->Checked == true)
	{		
		checkBox5->Checked = false;
		checkBox4->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;

		panel1->BringToFront();
		panel5->Visible = false;
		panel6->Visible = false;
		panel7->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;
	}

}
private: System::Void CheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//masy
	if (this->checkBox4->Checked == true)
	{
		checkBox5->Checked = false;
		checkBox3->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;

		panel5->Visible = true;
		panel5->BringToFront();
		panel6->Visible = false;
		panel7->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;	
	}

}
private: System::Void CheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//po³o¿enie
	if (this->checkBox5->Checked == true)
	{
		checkBox4->Checked = false;
		checkBox3->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;

		panel6->Visible = true;
		panel6->BringToFront();
		panel6->Refresh();
		panel5->Visible = false;
		panel7->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;
	}
}
private: System::Void CheckBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//prêdkoœci
	if (this->checkBox8->Checked == true)
	{
		checkBox4->Checked = false;
		checkBox3->Checked = false;
		checkBox5->Checked = false;
		checkBox7->Checked = false;
		checkBox6->Checked = false;
		checkBox9->Checked = false;

		panel7->Visible = true;
		panel7->BringToFront();
		panel5->Visible = false;
		panel6->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;
	}
}
private: System::Void CheckBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//t³umienie
	if (this->checkBox7->Checked == true)
	{
		checkBox4->Checked = false;
		checkBox3->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;

		panel8->Visible = true;
		panel8->BringToFront();
		panel5->Visible = false;
		panel7->Visible = false;
		panel6->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;
	}
}
private: System::Void CheckBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void CheckBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	//wspó³czynnik sprzê¿enia z poprzednim wahad³em
	if (this->checkBox9->Checked == true)
	{
		checkBox5->Checked = false;
		checkBox4->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox3->Checked = false;

		panel9->Visible = true;
		panel9->BringToFront();
		panel5->Visible = false;
		panel7->Visible = false;
		panel8->Visible = false;
		panel10->Visible = false;
		panel6->Visible = false;
	}
}
private: System::Void Label68_Click(System::Object^ sender, System::EventArgs^ e) {
}
		 
//ustawienia animacji
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//textbox1 -> kolor t³a

	ColorDialog^ Paleta = gcnew ColorDialog;
	
	Paleta->AllowFullOpen = true;
	Paleta->ShowHelp = true;

	Paleta->Color = textBox1->BackColor;

	if (Paleta->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		textBox1->BackColor = Paleta->Color;
	}

	pictureBox1->Invalidate();

}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
//textbox2 -> kolor siatki
	
	ColorDialog^ Paleta = gcnew ColorDialog;

	Paleta->AllowFullOpen = true;
	Paleta->ShowHelp = true;

	Paleta->Color = textBox2->BackColor;

	if (Paleta->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		textBox2->BackColor = Paleta->Color;
	}

	pictureBox1->Invalidate();

}
private: System::Void HScrollBar69_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
//wysokoœæ
	WysokoscSiatki = hScrollBar69->Value*0.1;
	
		pictureBox1->Invalidate();
}
private: System::Void HScrollBar70_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
//szerokoœæ
	SzerokoscSiatki = hScrollBar70->Value*0.1;
	
		pictureBox1->Invalidate();
}
private: System::Void CheckBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
//siatka
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar4_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	SiodmeWah->length = hScrollBar4->Value * 0.01;
	label13->Text = L"Siódme wahad³o: " + SiodmeWah->length.ToString("0.00") + L" [m]";
	SiodmeWah->x = SiodmeWah->length * sin(SiodmeWah->nextposy);
	SiodmeWah->y = SiodmeWah->length * cos(SiodmeWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void HScrollBar3_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	OsmeWah->length = hScrollBar3->Value * 0.01;
	label12->Text = L"Ósme wahad³o: " + OsmeWah->length.ToString("0.00") + L" [m]";
	OsmeWah->x = OsmeWah->length * sin(OsmeWah->nextposy);
	OsmeWah->y = OsmeWah->length * cos(OsmeWah->nextposy);
	pictureBox1->Invalidate();
}
private: System::Void Timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void CheckBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void CheckBox11_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Timer3_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
	//czasy
	czasp = czask;

	//po³o¿enie x
	PierwszeWah->prevposx = PierwszeWah->nextposx;
	DrugieWah->prevposx = DrugieWah->nextposx;
	TrzecieWah->prevposx = TrzecieWah->nextposx;
	CzwarteWah->prevposx = CzwarteWah->nextposx;
	PiateWah->prevposx = PiateWah->nextposx;
	SzosteWah->prevposx = SzosteWah->nextposx;
	SiodmeWah->prevposx = SiodmeWah->nextposx;
	OsmeWah->prevposx = OsmeWah->nextposx;
	DziewiateWah->prevposx = DziewiateWah->nextposx;
	DziesiateWah->prevposx = DziesiateWah->nextposx;

	//po³o¿enie y
	PierwszeWah->prevposy = PierwszeWah->nextposy;
	DrugieWah->prevposy = DrugieWah->nextposy;
	TrzecieWah->prevposy = TrzecieWah->nextposy;
	CzwarteWah->prevposy = CzwarteWah->nextposy;
	PiateWah->prevposy = PiateWah->nextposy;
	SzosteWah->prevposy = SzosteWah->nextposy;
	SiodmeWah->prevposy = SiodmeWah->nextposy;
	OsmeWah->prevposy = OsmeWah->nextposy;
	DziewiateWah->prevposy = DziewiateWah->nextposy;
	DziesiateWah->prevposy = DziesiateWah->nextposy;

	//prêdkoœci
	PierwszeWah->prevvelocity = PierwszeWah->nextvelocity;
	DrugieWah->prevvelocity = DrugieWah->nextvelocity;
	TrzecieWah->prevvelocity = TrzecieWah->nextvelocity;
	CzwarteWah->prevvelocity = CzwarteWah->nextvelocity;
	PiateWah->prevvelocity = PiateWah->nextvelocity;
	SzosteWah->prevvelocity = SzosteWah->nextvelocity;
	SiodmeWah->prevvelocity = SiodmeWah->nextvelocity;
	OsmeWah->prevvelocity = OsmeWah->nextvelocity;
	DziewiateWah->prevvelocity = DziewiateWah->nextvelocity;
	DziesiateWah->prevvelocity = DziesiateWah->nextvelocity;

	//obliczanie wartoœci nastêpnych prêdkoœci
	PierwszeWah->nextvelocity = RuchPierwszego->Rk4Ve(PierwszeWah->prevposx, PierwszeWah->prevvelocity);
	DrugieWah->nextvelocity = RuchDrugiego->Rk4Ve(DrugieWah->prevposx, DrugieWah->prevvelocity);
	TrzecieWah->nextvelocity = RuchTrzeciego->Rk4Ve(TrzecieWah->prevposx, TrzecieWah->prevvelocity);
	CzwarteWah->nextvelocity = RuchCzwartego->Rk4Ve(CzwarteWah->prevposx, CzwarteWah->prevvelocity);
	PiateWah->nextvelocity = RuchPiatego->Rk4Ve(PiateWah->prevposx, PiateWah->prevvelocity);
	SzosteWah->nextvelocity = RuchSzostego->Rk4Ve(SzosteWah->prevposx, SzosteWah->prevvelocity);
	SiodmeWah->nextvelocity = RuchSiodmego->Rk4Ve(SiodmeWah->prevposx, SiodmeWah->prevvelocity);
	OsmeWah->nextvelocity = RuchOsmego->Rk4Ve(OsmeWah->prevposx, OsmeWah->prevvelocity);
	DziewiateWah->nextvelocity = RuchDziewiatego->Rk4Ve(DziewiateWah->prevposx, DziewiateWah->prevvelocity);
	DziesiateWah->nextvelocity = RuchDziesiatego->Rk4Ve(DziesiateWah->prevposx, DziesiateWah->prevvelocity);

	//obliczanie wartoœci zmiany po³o¿enia x i y biegunowych
	//testr z k1w
	PierwszeWah->nextposx = RuchPierwszego->Rk4AcX(PierwszeWah->prevposx, PierwszeWah->prevposy, czasp, PierwszeWah->suppresion, PierwszeWah->length, PierwszeWah->mass, PierwszeWah->nextcoupling, DrugieWah->nextposy, 0, 0);
	PierwszeWah->nextposy = RuchPierwszego->Rk4AcY();

	DrugieWah->nextposx = RuchDrugiego->Rk4AcX(DrugieWah->prevposx, DrugieWah->prevposy, czasp, DrugieWah->suppresion, DrugieWah->length, DrugieWah->mass,DrugieWah->nextcoupling, TrzecieWah->nextposy, DrugieWah->prevcoupling, PierwszeWah->nextposy);
	DrugieWah->nextposy = RuchDrugiego->Rk4AcY();

	TrzecieWah->nextposx = RuchTrzeciego->Rk4AcX(TrzecieWah->prevposx, TrzecieWah->prevposy, czasp, TrzecieWah->suppresion, TrzecieWah->length, TrzecieWah->mass, TrzecieWah->nextcoupling, CzwarteWah->nextposy, TrzecieWah->prevcoupling, DrugieWah->nextposy);
	TrzecieWah->nextposy = RuchTrzeciego->Rk4AcY();

	CzwarteWah->nextposx = RuchCzwartego->Rk4AcX(CzwarteWah->prevposx, CzwarteWah->prevposy, czasp, CzwarteWah->suppresion, CzwarteWah->length, CzwarteWah->mass, CzwarteWah->nextcoupling, PiateWah->nextposy, CzwarteWah->prevcoupling, TrzecieWah->nextposy);
	CzwarteWah->nextposy = RuchCzwartego->Rk4AcY();

	PiateWah->nextposx = RuchPiatego->Rk4AcX(PiateWah->prevposx, PiateWah->prevposy, czasp, PiateWah->suppresion, PiateWah->length, PiateWah->mass, PiateWah->nextcoupling, SzosteWah->nextposy, PiateWah->prevcoupling, CzwarteWah->nextposy);
	PiateWah->nextposy = RuchPiatego->Rk4AcY();

	SzosteWah->nextposx = RuchSzostego->Rk4AcX(SzosteWah->prevposx, SzosteWah->prevposy, czasp, SzosteWah->suppresion, SzosteWah->length, SzosteWah->mass, SzosteWah->nextcoupling, SiodmeWah->nextposy, SzosteWah->prevcoupling, PiateWah->nextposy);
	SzosteWah->nextposy = RuchSzostego->Rk4AcY();

	SiodmeWah->nextposx = RuchSiodmego->Rk4AcX(SiodmeWah->prevposx, SiodmeWah->prevposy, czasp, SiodmeWah->suppresion, SiodmeWah->length, SiodmeWah->mass, SiodmeWah->nextcoupling, OsmeWah->nextposy, SiodmeWah->prevcoupling, SzosteWah->nextposy);
	SiodmeWah->nextposy = RuchSiodmego->Rk4AcY();

	OsmeWah->nextposx = RuchOsmego->Rk4AcX(OsmeWah->prevposx, OsmeWah->prevposy, czasp, OsmeWah->suppresion, OsmeWah->length, OsmeWah->mass, OsmeWah->nextcoupling, DziewiateWah->nextposy, OsmeWah->prevcoupling, SiodmeWah->nextposy);
	OsmeWah->nextposy = RuchOsmego->Rk4AcY();

	DziewiateWah->nextposx = RuchDziewiatego->Rk4AcX(DziewiateWah->prevposx, DziewiateWah->prevposy, czasp, DziewiateWah->suppresion, DziewiateWah->length, DziewiateWah->mass, DziewiateWah->nextcoupling, DziesiateWah->nextposy, DziewiateWah->prevcoupling, OsmeWah->nextposy);
	DziewiateWah->nextposy = RuchDziewiatego->Rk4AcY();

	DziesiateWah->nextposx = RuchDziesiatego->Rk4AcX(DziesiateWah->prevposx, DziesiateWah->prevposy, czasp, DziesiateWah->suppresion, DziesiateWah->length, DziesiateWah->mass, 0,0, DziesiateWah->prevcoupling, DziewiateWah->nextposy);
	DziesiateWah->nextposy = RuchDziesiatego->Rk4AcY();

	//zmiana wspó³rzêdnych Biegunowych -> Kartezjanskie
	PierwszeWah->x = PrzeliczBK->WspX(PierwszeWah->length, PierwszeWah->nextposy);
	PierwszeWah->y = PrzeliczBK->WspY(PierwszeWah->length, PierwszeWah->nextposy);

	DrugieWah->x = PrzeliczBK->WspX(DrugieWah->length, DrugieWah->nextposy);
	DrugieWah->y = PrzeliczBK->WspY(DrugieWah->length, DrugieWah->nextposy);

	TrzecieWah->x = PrzeliczBK->WspX(TrzecieWah->length, TrzecieWah->nextposy);
	TrzecieWah->y = PrzeliczBK->WspY(TrzecieWah->length, TrzecieWah->nextposy);

	CzwarteWah->x = PrzeliczBK->WspX(CzwarteWah->length, CzwarteWah->nextposy);
	CzwarteWah->y = PrzeliczBK->WspY(CzwarteWah->length, CzwarteWah->nextposy);

	PiateWah->x = PrzeliczBK->WspX(PiateWah->length, PiateWah->nextposy);
	PiateWah->y = PrzeliczBK->WspY(PiateWah->length, PiateWah->nextposy);

	SzosteWah->x = PrzeliczBK->WspX(SzosteWah->length, SzosteWah->nextposy);
	SzosteWah->y = PrzeliczBK->WspY(SzosteWah->length, SzosteWah->nextposy);

	SiodmeWah->x = PrzeliczBK->WspX(SiodmeWah->length, SiodmeWah->nextposy);
	SiodmeWah->y = PrzeliczBK->WspY(SiodmeWah->length, SiodmeWah->nextposy);

	OsmeWah->x = PrzeliczBK->WspX(OsmeWah->length, OsmeWah->nextposy);
	OsmeWah->y = PrzeliczBK->WspY(OsmeWah->length, OsmeWah->nextposy);

	DziewiateWah->x = PrzeliczBK->WspX(DziewiateWah->length, DziewiateWah->nextposy);
	DziewiateWah->y = PrzeliczBK->WspY(DziewiateWah->length, DziewiateWah->nextposy);

	DziesiateWah->x = PrzeliczBK->WspX(DziesiateWah->length, DziesiateWah->nextposy);
	DziesiateWah->y = PrzeliczBK->WspY(DziesiateWah->length, DziesiateWah->nextposy);
	
	//Energie 
	//energia potencjalna
	if (j <  WielkoscTablic)
	{
		PierwszeWahEp->EnergiaPot(PierwszeWah->prevposy, PierwszeWah->nextposy, PierwszeWah->length, PierwszeWah->mass);

		PierwszeWahTabEp1[j] = PierwszeWahEp->Ep1;
		PierwszeWahTabEp2[j] = PierwszeWahEp->Ep2;

		DrugieWahEp->EnergiaPot(DrugieWah->prevposy, DrugieWah->nextposy, DrugieWah->length, DrugieWah->mass);

		DrugieWahTabEp1[j] = DrugieWahEp->Ep1;
		DrugieWahTabEp2[j] = DrugieWahEp->Ep2;

		TrzecieWahEp->EnergiaPot(TrzecieWah->prevposy, TrzecieWah->nextposy, TrzecieWah->length, TrzecieWah->mass);

		TrzecieWahTabEp1[j] = TrzecieWahEp->Ep1;
		TrzecieWahTabEp2[j] = TrzecieWahEp->Ep2;

		CzwarteWahEp->EnergiaPot(CzwarteWah->prevposy, CzwarteWah->nextposy, CzwarteWah->length, CzwarteWah->mass);

		CzwarteWahTabEp1[j] = CzwarteWahEp->Ep1;
		CzwarteWahTabEp2[j] = CzwarteWahEp->Ep2;

		PiateWahEp->EnergiaPot(PiateWah->prevposy, PiateWah->nextposy, PiateWah->length, PiateWah->mass);

		PiateWahTabEp1[j] = PiateWahEp->Ep1;
		PiateWahTabEp2[j] = PiateWahEp->Ep2;

		SzosteWahEp->EnergiaPot(SzosteWah->prevposy, SzosteWah->nextposy, SzosteWah->length, SzosteWah->mass);

		SzosteWahTabEp1[j] = SzosteWahEp->Ep1;
		SzosteWahTabEp2[j] = SzosteWahEp->Ep2;

		SiodmeWahEp->EnergiaPot(SiodmeWah->prevposy, SiodmeWah->nextposy, SiodmeWah->length, SiodmeWah->mass);

		SiodmeWahTabEp1[j] = SiodmeWahEp->Ep1;
		SiodmeWahTabEp2[j] = SiodmeWahEp->Ep2;

		OsmeWahEp->EnergiaPot(OsmeWah->prevposy, OsmeWah->nextposy, OsmeWah->length, OsmeWah->mass);

		OsmeWahTabEp1[j] = OsmeWahEp->Ep1;
		OsmeWahTabEp2[j] = OsmeWahEp->Ep2;

		DziewiateWahEp->EnergiaPot(DziewiateWah->prevposy, DziewiateWah->nextposy, DziewiateWah->length, DziewiateWah->mass);

		DziewiateWahTabEp1[j] = DziewiateWahEp->Ep1;
		DziewiateWahTabEp2[j] = DziewiateWahEp->Ep2;

		DziesiateWahEp->EnergiaPot(DziesiateWah->prevposy, DziesiateWah->nextposy, DziesiateWah->length, DziesiateWah->mass);

		DziesiateWahTabEp1[j] = DziesiateWahEp->Ep1;
		DziesiateWahTabEp2[j] = DziesiateWahEp->Ep2;

		//energia kinetyczna
		PierwszeWahEk->EnergiaKin(PierwszeWah->prevposx, PierwszeWah->nextposx, PierwszeWah->length, PierwszeWah->mass);

		PierwszeWahTabEk1[j] = PierwszeWahEk->Ek1;
		PierwszeWahTabEk2[j] = PierwszeWahEk->Ek2;

		DrugieWahEk->EnergiaKin(DrugieWah->prevposx, DrugieWah->nextposx,  DrugieWah->length, DrugieWah->mass);

		DrugieWahTabEk1[j] = DrugieWahEk->Ek1;
		DrugieWahTabEk2[j] = DrugieWahEk->Ek2;

		TrzecieWahEk->EnergiaKin(TrzecieWah->prevposx, TrzecieWah->nextposx,  TrzecieWah->length, TrzecieWah->mass);

		TrzecieWahTabEk1[j] = TrzecieWahEk->Ek1;
		TrzecieWahTabEk2[j] = TrzecieWahEk->Ek2;

		CzwarteWahEk->EnergiaKin(CzwarteWah->prevposx, CzwarteWah->nextposx, CzwarteWah->length, CzwarteWah->mass);

		CzwarteWahTabEk1[j] = CzwarteWahEk->Ek1;
		CzwarteWahTabEk2[j] = CzwarteWahEk->Ek2;

		PiateWahEk->EnergiaKin(PiateWah->prevposx, PiateWah->nextposx,  PiateWah->length, PiateWah->mass);

		PiateWahTabEk1[j] = PiateWahEk->Ek1;
		PiateWahTabEk2[j] = PiateWahEk->Ek2;

		SzosteWahEk->EnergiaKin(SzosteWah->prevposx, SzosteWah->nextposx,  SzosteWah->length, SzosteWah->mass);

		SzosteWahTabEk1[j] = SzosteWahEk->Ek1;
		SzosteWahTabEk2[j] = SzosteWahEk->Ek2;

		SiodmeWahEk->EnergiaKin(SiodmeWah->prevposx, SiodmeWah->nextposx,  SiodmeWah->length, SiodmeWah->mass);

		SiodmeWahTabEk1[j] = SiodmeWahEk->Ek1;
		SiodmeWahTabEk2[j] = SiodmeWahEk->Ek2;

		OsmeWahEk->EnergiaKin(OsmeWah->prevposx, OsmeWah->nextposx,  OsmeWah->length, OsmeWah->mass);

		OsmeWahTabEk1[j] = OsmeWahEk->Ek1;
		OsmeWahTabEk2[j] = OsmeWahEk->Ek2;

		DziewiateWahEk->EnergiaKin(DziewiateWah->prevposx, DziewiateWah->nextposx,  DziewiateWah->length, DziewiateWah->mass);

		DziewiateWahTabEk1[j] = DziewiateWahEk->Ek1;
		DziewiateWahTabEk2[j] = DziewiateWahEk->Ek2;

		DziesiateWahEk->EnergiaKin(DziesiateWah->prevposx, DziesiateWah->nextposx,  DziesiateWah->length, DziesiateWah->mass);

		DziesiateWahTabEk1[j] = DziesiateWahEk->Ek1;
		DziesiateWahTabEk2[j] = DziesiateWahEk->Ek2;

		//energia ca³kowita
		PierwszeWahEc->EnergiaCal(PierwszeWahEp->Ep1, PierwszeWahEp->Ep2, PierwszeWahEk->Ek1, PierwszeWahEk->Ek2);

		PierwszeWahTabEc1[j] = PierwszeWahEc->Ec1;
		PierwszeWahTabEc2[j] = PierwszeWahEc->Ec2;

		DrugieWahEc->EnergiaCal(DrugieWahEp->Ep1, DrugieWahEp->Ep2, DrugieWahEk->Ek1, DrugieWahEk->Ek2);

		DrugieWahTabEc1[j] = DrugieWahEc->Ec1;
		DrugieWahTabEc2[j] = DrugieWahEc->Ec2;

		TrzecieWahEc->EnergiaCal(TrzecieWahEp->Ep1, TrzecieWahEp->Ep2, TrzecieWahEk->Ek1, TrzecieWahEk->Ek2);

		TrzecieWahTabEc1[j] = TrzecieWahEc->Ec1;
		TrzecieWahTabEc2[j] = TrzecieWahEc->Ec2;

		CzwarteWahEc->EnergiaCal(CzwarteWahEp->Ep1, CzwarteWahEp->Ep2, CzwarteWahEk->Ek1, CzwarteWahEk->Ek2);

		CzwarteWahTabEc1[j] = CzwarteWahEc->Ec1;
		CzwarteWahTabEc2[j] = CzwarteWahEc->Ec2;

		PiateWahEc->EnergiaCal(PiateWahEp->Ep1, PiateWahEp->Ep2, PiateWahEk->Ek1, PiateWahEk->Ek2);

		PiateWahTabEc1[j] = PiateWahEc->Ec1;
		PiateWahTabEc2[j] = PiateWahEc->Ec2;

		SzosteWahEc->EnergiaCal(SzosteWahEp->Ep1, SzosteWahEp->Ep2, SzosteWahEk->Ek1, SzosteWahEk->Ek2);

		SzosteWahTabEc1[j] = SzosteWahEc->Ec1;
		SzosteWahTabEc2[j] = SzosteWahEc->Ec2;

		SiodmeWahEc->EnergiaCal(SiodmeWahEp->Ep1, SiodmeWahEp->Ep2, SiodmeWahEk->Ek1, SiodmeWahEk->Ek2);

		SiodmeWahTabEc1[j] = SiodmeWahEc->Ec1;
		SiodmeWahTabEc2[j] = SiodmeWahEc->Ec2;

		OsmeWahEc->EnergiaCal(OsmeWahEp->Ep1, OsmeWahEp->Ep2, OsmeWahEk->Ek1, OsmeWahEk->Ek2);

		OsmeWahTabEc1[j] = OsmeWahEc->Ec1;
		OsmeWahTabEc2[j] = OsmeWahEc->Ec2;

		DziewiateWahEc->EnergiaCal(DziewiateWahEp->Ep1, DziewiateWahEp->Ep2, DziewiateWahEk->Ek1, DziewiateWahEk->Ek2);

		DziewiateWahTabEc1[j] = DziewiateWahEc->Ec1;
		DziewiateWahTabEc2[j] = DziewiateWahEc->Ec2;

		DziesiateWahEc->EnergiaCal(DziesiateWahEp->Ep1, DziesiateWahEp->Ep2, DziesiateWahEk->Ek1, DziesiateWahEk->Ek2);

		DziesiateWahTabEc1[j] = DziesiateWahEc->Ec1;
		DziesiateWahTabEc2[j] = DziesiateWahEc->Ec2;

		//Energie potencjalne, kinetyczne, ca³kowite dla wszystkich wahade³ (ca³y uk³ad)
		AllWahTabEp1[j] = PierwszeWahEp->Ep1 + DrugieWahEp->Ep1 + TrzecieWahEp->Ep1 + CzwarteWahEp->Ep1 + PiateWahEp->Ep1 + SzosteWahEp->Ep1 + SiodmeWahEp->Ep1 + OsmeWahEp->Ep1 + DziewiateWahEp->Ep1 + DziesiateWahEp->Ep1;
		AllWahTabEp2[j] = PierwszeWahEp->Ep2 + DrugieWahEp->Ep2 + TrzecieWahEp->Ep2 + CzwarteWahEp->Ep2 + PiateWahEp->Ep2 + SzosteWahEp->Ep2 + SiodmeWahEp->Ep2 + OsmeWahEp->Ep2 + DziewiateWahEp->Ep2 + DziesiateWahEp->Ep2;

		AllWahTabEk1[j] = PierwszeWahEk->Ek1 + DrugieWahEk->Ek1 + TrzecieWahEk->Ek1 + CzwarteWahEk->Ek1 + PiateWahEk->Ek1 + SzosteWahEk->Ek1 + SiodmeWahEk->Ek1 + OsmeWahEk->Ek1 + DziewiateWahEk->Ek1 + DziesiateWahEk->Ek1;
		AllWahTabEk2[j] = PierwszeWahEk->Ek2 + DrugieWahEk->Ek2 + TrzecieWahEk->Ek2 + CzwarteWahEk->Ek2 + PiateWahEk->Ek2 + SzosteWahEk->Ek2 + SiodmeWahEk->Ek2 + OsmeWahEk->Ek2 + DziewiateWahEk->Ek2 + DziesiateWahEk->Ek2;

		AllWahTabEc1[j] = PierwszeWahEc->Ec1 + DrugieWahEc->Ec1 + TrzecieWahEc->Ec1 + CzwarteWahEc->Ec1 + PiateWahEc->Ec1 + SzosteWahEc->Ec1 + SiodmeWahEc->Ec1 + OsmeWahEc->Ec1 + DziewiateWahEc->Ec1 + DziesiateWahEc->Ec1;
		AllWahTabEc2[j] = PierwszeWahEc->Ec2 + DrugieWahEc->Ec2 + TrzecieWahEc->Ec2 + CzwarteWahEc->Ec2 + PiateWahEc->Ec2 + SzosteWahEc->Ec2 + SiodmeWahEc->Ec2 + OsmeWahEc->Ec2 + DziewiateWahEc->Ec2 + DziesiateWahEc->Ec2;


		//przestrzenie fazowe
		//Tablice do rysowania przestrzeni fazowej
		PrzFazPierwszegox1[j] = PierwszeWah->prevposy-3.14;
		PrzFazPierwszegox2[j] = PierwszeWah->nextposy-3.14;
		PrzFazPierwszegoy1[j] = PierwszeWah->prevposx;
		PrzFazPierwszegoy2[j] = PierwszeWah->nextposx;

		PrzFazDrugiegox1[j] = DrugieWah->prevposy-3.14;
		PrzFazDrugiegox2[j] = DrugieWah->nextposy-3.14;
		PrzFazDrugiegoy1[j] = DrugieWah->prevposx;
		PrzFazDrugiegoy2[j] = DrugieWah->nextposx;

		PrzFazTrzeciegox1[j] = TrzecieWah->prevposy-3.14;
		PrzFazTrzeciegox2[j] = TrzecieWah->nextposy-3.14;
		PrzFazTrzeciegoy1[j] = TrzecieWah->prevposx;
		PrzFazTrzeciegoy2[j] = TrzecieWah->nextposx;

		PrzFazCzwartegox1[j] = CzwarteWah->prevposy-3.14;
		PrzFazCzwartegox2[j] = CzwarteWah->nextposy-3.14;
		PrzFazCzwartegoy1[j] = CzwarteWah->prevposx;
		PrzFazCzwartegoy2[j] = CzwarteWah->nextposx;

		PrzFazPiategox1[j] = PiateWah->prevposy-3.14;
		PrzFazPiategox2[j] = PiateWah->nextposy-3.14;
		PrzFazPiategoy1[j] = PiateWah->prevposx;
		PrzFazPiategoy2[j] = PiateWah->nextposx;

		PrzFazSzostegox1[j] = SzosteWah->prevposy-3.14;
		PrzFazSzostegox2[j] = SzosteWah->nextposy-3.14;
		PrzFazSzostegoy1[j] = SzosteWah->prevposx;
		PrzFazSzostegoy2[j] = SzosteWah->nextposx;

		PrzFazSiodmegox1[j] = SiodmeWah->prevposy-3.14;
		PrzFazSiodmegox2[j] = SiodmeWah->nextposy-3.14;
		PrzFazSiodmegoy1[j] = SiodmeWah->prevposx;
		PrzFazSiodmegoy2[j] = SiodmeWah->nextposx;

		PrzFazOsmegox1[j] = OsmeWah->prevposy-3.14;
		PrzFazOsmegox2[j] = OsmeWah->nextposy-3.14;
		PrzFazOsmegoy1[j] = OsmeWah->prevposx;
		PrzFazOsmegoy2[j] = OsmeWah->nextposx;

		PrzFazDziewiategox1[j] = DziewiateWah->prevposy-3.14;
		PrzFazDziewiategox2[j] = DziewiateWah->nextposy-3.14;
		PrzFazDziewiategoy1[j] = DziewiateWah->prevposx;
		PrzFazDziewiategoy2[j] = DziewiateWah->nextposx;

		PrzFazDziesiategox1[j] = DziesiateWah->prevposy-3.14;
		PrzFazDziesiategox2[j] = DziesiateWah->nextposy-3.14;
		PrzFazDziesiategoy1[j] = DziesiateWah->prevposx;
		PrzFazDziesiategoy2[j] = DziesiateWah->nextposx;

		//wzrost kroku czasowego;
		//tablice czasu
		 //wartoœæ pocz¹tkowa
		time1[j] = czasp;

		//czas timera w ms -> na sekundy (oœ x wykresów)
		krokczasowy = timer1->Interval * 0.001;
		czask = czasp + krokczasowy;
		time2[j] = czask;
	}
	else
	{
		//resetowanie tablic

		for (int z = 0; z <  WielkoscTablic; z++)
		{
			//energie potencjalne
			PierwszeWahTabEp1[z] = 0;
			PierwszeWahTabEp2[z] = 0;
			DrugieWahTabEp1[z] = 0;
			DrugieWahTabEp2[z] = 0;
			TrzecieWahTabEp1[z] = 0;
			TrzecieWahTabEp2[z] = 0;
			CzwarteWahTabEp1[z] = 0;
			CzwarteWahTabEp2[z] = 0;
			PiateWahTabEp1[z] = 0;
			PiateWahTabEp2[z] = 0;
			SzosteWahTabEp1[z] = 0;
			SzosteWahTabEp2[z] = 0;
			SiodmeWahTabEp1[z] = 0;
			SiodmeWahTabEp2[z] = 0;
			OsmeWahTabEp1[z] = 0;
			OsmeWahTabEp2[z] = 0;
			DziewiateWahTabEp1[z] = 0;
			DziewiateWahTabEp2[z] = 0;
			DziesiateWahTabEp1[z] = 0;
			DziesiateWahTabEp2[z] = 0;

			//energie kinetyczna
			PierwszeWahTabEk1[z] = 0;
			PierwszeWahTabEk2[z] = 0;
			DrugieWahTabEk1[z] = 0;
			DrugieWahTabEk2[z] = 0;
			TrzecieWahTabEk1[z] = 0;
			TrzecieWahTabEk2[z] = 0;
			CzwarteWahTabEk1[z] = 0;
			CzwarteWahTabEk2[z] = 0;
			PiateWahTabEk1[z] = 0;
			PiateWahTabEk2[z] = 0;
			SzosteWahTabEk1[z] = 0;
			SzosteWahTabEk2[z] = 0;
			SiodmeWahTabEk1[z] = 0;
			SiodmeWahTabEk2[z] = 0;
			OsmeWahTabEk1[z] = 0;
			OsmeWahTabEk2[z] = 0;
			DziewiateWahTabEk1[z] = 0;
			DziewiateWahTabEk2[z] = 0;
			DziesiateWahTabEk1[z] = 0;
			DziesiateWahTabEk2[z] = 0;

			//energie ca³kowite
			PierwszeWahTabEc1[z] = 0;
			PierwszeWahTabEc2[z] = 0;
			DrugieWahTabEc1[z] = 0;
			DrugieWahTabEc2[z] = 0;
			TrzecieWahTabEc1[z] = 0;
			TrzecieWahTabEc2[z] = 0;
			CzwarteWahTabEc1[z] = 0;
			CzwarteWahTabEc2[z] = 0;
			PiateWahTabEc1[z] = 0;
			PiateWahTabEc2[z] = 0;
			SzosteWahTabEc1[z] = 0;
			SzosteWahTabEc2[z] = 0;
			SiodmeWahTabEc1[z] = 0;
			SiodmeWahTabEc2[z] = 0;
			OsmeWahTabEc1[z] = 0;
			OsmeWahTabEc2[z] = 0;
			DziewiateWahTabEc1[z] = 0;
			DziewiateWahTabEc2[z] = 0;
			DziesiateWahTabEc1[z] = 0;
			DziesiateWahTabEc2[z] = 0;

			//Wspólne energie
			AllWahTabEp1[z] = 0;
			AllWahTabEp2[z] = 0;
			AllWahTabEk1[z] = 0;
			AllWahTabEk2[z] = 0;
			AllWahTabEc1[z] = 0;
			AllWahTabEc2[z] = 0;

			//czas
			time1[z] = 0;
			time2[z] = 0;

			//Tablice do rysowania przestrzeni fazowej
			PrzFazPierwszegox1[z] = 0;
			PrzFazPierwszegox2[z] = 0;
			PrzFazPierwszegoy1[z] = 0;
			PrzFazPierwszegoy2[z] = 0;

			PrzFazDrugiegox1[z] = 0;
			PrzFazDrugiegox2[z] = 0;
			PrzFazDrugiegoy1[z] = 0;
			PrzFazDrugiegoy2[z] = 0;

			PrzFazTrzeciegox1[z] = 0;
			PrzFazTrzeciegox2[z] = 0;
			PrzFazTrzeciegoy1[z] = 0;
			PrzFazTrzeciegoy2[z] = 0;

			PrzFazCzwartegox1[z] = 0;
			PrzFazCzwartegox2[z] = 0;
			PrzFazCzwartegoy1[z] = 0;
			PrzFazCzwartegoy2[z] = 0;

			PrzFazPiategox1[z] = 0;
			PrzFazPiategox2[z] = 0;
			PrzFazPiategoy1[z] = 0;
			PrzFazPiategoy2[z] = 0;

			PrzFazSzostegox1[z] = 0;
			PrzFazSzostegox2[z] = 0;
			PrzFazSzostegoy1[z] = 0;
			PrzFazSzostegoy2[z] = 0;

			PrzFazSiodmegox1[z] = 0;
			PrzFazSiodmegox2[z] = 0;
			PrzFazSiodmegoy1[z] = 0;
			PrzFazSiodmegoy2[z] = 0;

			PrzFazOsmegox1[z] = 0;
			PrzFazOsmegox2[z] = 0;
			PrzFazOsmegoy1[z] = 0;
			PrzFazOsmegoy2[z] = 0;

			PrzFazDziewiategox1[z] = 0;
			PrzFazDziewiategox2[z] = 0;
			PrzFazDziewiategoy1[z] = 0;
			PrzFazDziewiategoy2[z] = 0;

			PrzFazDziesiategox1[z] = 0;
			PrzFazDziesiategox2[z] = 0;
			PrzFazDziesiategoy1[z] = 0;
			PrzFazDziesiategoy2[z] = 0;

		}

		j = -1;
		czask = 0;
	
		}

		j++;


	pictureBox1->Invalidate();
	pictureBox3->Invalidate();
}
private: System::Void ResetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//pocz¹tkowe parametry wahade³
		//d³ugoœci	
	PierwszeWah->length = 10;
	hScrollBar7->Value = 1000;
	DrugieWah->length = 9.9;
	hScrollBar6->Value = 990;
	TrzecieWah->length = 9.8;
	hScrollBar5->Value = 980;
	CzwarteWah->length = 9.7;
	hScrollBar1->Value = 970;
	PiateWah->length = 9.6;
	hScrollBar2->Value = 960;
	SzosteWah->length = 9.5;
	hScrollBar8->Value = 950;
	SiodmeWah->length = 9.4;
	hScrollBar4->Value = 940;
	OsmeWah->length = 9.3;
	hScrollBar3->Value = 930;
	DziewiateWah->length = 9.2;
	hScrollBar10->Value = 920;
	DziesiateWah->length = 9.1;
	hScrollBar9->Value = 910;

	//masy
	PierwszeWah->mass = 1;
	hScrollBar18->Value = 100;
	DrugieWah->mass = 1;
	hScrollBar17->Value = 100;
	TrzecieWah->mass = 1;
	hScrollBar16->Value = 100;
	CzwarteWah->mass = 1;
	hScrollBar20->Value = 100;
	PiateWah->mass = 1;
	hScrollBar19->Value = 100;
	SzosteWah->mass = 1;
	hScrollBar13->Value = 100;
	SiodmeWah->mass = 1;
	hScrollBar12->Value = 100;
	OsmeWah->mass = 1;
	hScrollBar11->Value = 100;
	DziewiateWah->mass = 1;
	hScrollBar15->Value = 100;
	DziesiateWah->mass = 1;
	hScrollBar14->Value = 100;

	//po³o¿enia y
	PierwszeWah->nextposy = 2.5;
	hScrollBar28->Value = 250;
	DrugieWah->nextposy = 2.5;
	hScrollBar27->Value = 250;
	TrzecieWah->nextposy = 2.5;
	hScrollBar26->Value = 250;
	CzwarteWah->nextposy = 2.5;
	hScrollBar30->Value = 250;
	PiateWah->nextposy = 2.5;
	hScrollBar29->Value = 250;
	SzosteWah->nextposy = 2.5;
	hScrollBar23->Value = 250;
	SiodmeWah->nextposy = 2.5;
	hScrollBar22->Value = 250;
	OsmeWah->nextposy = 2.5;
	hScrollBar21->Value = 250;
	DziewiateWah->nextposy = 2.5;
	hScrollBar25->Value = 250;
	DziesiateWah->nextposy = 2.5;
	hScrollBar24->Value = 250;

	//po³o¿enia x
	PierwszeWah->nextposx = 0;
	DrugieWah->nextposx = 0;
	TrzecieWah->nextposx = 0;
	CzwarteWah->nextposx = 0;
	PiateWah->nextposx = 0;
	SzosteWah->nextposx = 0;
	SiodmeWah->nextposx = 0;
	OsmeWah->nextposx = 0;
	DziewiateWah->nextposx = 0;
	DziesiateWah->nextposx = 0;

	//prêdkoœci
	PierwszeWah->nextvelocity = 0;
	hScrollBar38->Value = 0;
	DrugieWah->nextvelocity = 0;
	hScrollBar37->Value = 0;
	TrzecieWah->nextvelocity = 0;
	hScrollBar36->Value = 0;
	CzwarteWah->nextvelocity = 0;
	hScrollBar40->Value = 0;
	PiateWah->nextvelocity = 0;
	hScrollBar39->Value = 0;
	SzosteWah->nextvelocity = 0;
	hScrollBar33->Value = 0;
	SiodmeWah->nextvelocity = 0;
	hScrollBar32->Value = 0;
	OsmeWah->nextvelocity = 0;
	hScrollBar31->Value = 0;
	DziewiateWah->nextvelocity = 0;
	hScrollBar35->Value = 0;
	DziesiateWah->nextvelocity = 0;
	hScrollBar34->Value = 0;

	//t³umienie
	PierwszeWah->suppresion = 0.05;
	hScrollBar48->Value = 5;
	DrugieWah->suppresion = 0.05;
	hScrollBar47->Value = 5;
	TrzecieWah->suppresion = 0.05;
	hScrollBar46->Value = 5;
	CzwarteWah->suppresion = 0.05;
	hScrollBar50->Value = 5;
	PiateWah->suppresion = 0.05;
	hScrollBar49->Value = 5;
	SzosteWah->suppresion = 0.05;
	hScrollBar43->Value = 5;
	SiodmeWah->suppresion = 0.05;
	hScrollBar42->Value = 5;
	OsmeWah->suppresion = 0.05;
	hScrollBar41->Value = 5;
	DziewiateWah->suppresion = 0.05;
	hScrollBar45->Value = 5;
	DziesiateWah->suppresion = 0.05;
	hScrollBar44->Value = 5;



	//sprzê¿enie z poprzednim wahad³em
	DrugieWah->prevcoupling = 0.1;
	hScrollBar57->Value = 10;
	TrzecieWah->prevcoupling = 0.1;
	hScrollBar56->Value = 10;
	CzwarteWah->prevcoupling = 0.1;
	hScrollBar60->Value = 10;
	PiateWah->prevcoupling = 0.1;
	hScrollBar59->Value = 10;
	SzosteWah->prevcoupling = 0.1;
	hScrollBar53->Value = 10;
	SiodmeWah->prevcoupling = 0.1;
	hScrollBar52->Value = 10;
	OsmeWah->prevcoupling = 0.1;
	hScrollBar51->Value = 10;
	DziewiateWah->prevcoupling = 0.1;
	hScrollBar55->Value = 10;
	DziesiateWah->prevcoupling = 0.1;
	hScrollBar54->Value = 10;

	//sprzê¿enie z nastêpnym wahad³em
	PierwszeWah->nextcoupling = 0.1;
	hScrollBar63->Value = 10;
	DrugieWah->nextcoupling = 0.1;
	hScrollBar66->Value = 10;
	TrzecieWah->nextcoupling = 0.1;
	hScrollBar65->Value = 10;
	CzwarteWah->nextcoupling = 0.1;
	hScrollBar68->Value = 10;
	PiateWah->nextcoupling = 0.1;
	hScrollBar67->Value = 10;
	SzosteWah->nextcoupling = 0.1;
	hScrollBar62->Value = 10;
	SiodmeWah->nextcoupling = 0.1;
	hScrollBar61->Value = 10;
	OsmeWah->nextcoupling = 0.1;
	hScrollBar58->Value = 10;
	DziewiateWah->nextcoupling = 0.1;
	hScrollBar64->Value = 10;

	//ustawienia wychyleñ pocz¹tkowych
	PierwszeWah->wychylenie = PierwszeWah->nextposy;
	DrugieWah->wychylenie = DrugieWah->nextposy;
	TrzecieWah->wychylenie = TrzecieWah->nextposy;
	CzwarteWah->wychylenie = CzwarteWah->nextposy;
	PiateWah->wychylenie = PiateWah->nextposy;
	SzosteWah->wychylenie = SzosteWah->nextposy;
	SiodmeWah->wychylenie = SiodmeWah->nextposy;
	OsmeWah->wychylenie = OsmeWah->nextposy;
	DziewiateWah->wychylenie = DziewiateWah->nextposy;
	DziesiateWah->wychylenie = DziesiateWah->nextposy;

	//reset wykresów
	for (int z = 0; z < WielkoscTablic; z++)
	{
		//energie potencjalne
		PierwszeWahTabEp1[z] = 0;
		PierwszeWahTabEp2[z] = 0;
		DrugieWahTabEp1[z] = 0;
		DrugieWahTabEp2[z] = 0;
		TrzecieWahTabEp1[z] = 0;
		TrzecieWahTabEp2[z] = 0;
		CzwarteWahTabEp1[z] = 0;
		CzwarteWahTabEp2[z] = 0;
		PiateWahTabEp1[z] = 0;
		PiateWahTabEp2[z] = 0;
		SzosteWahTabEp1[z] = 0;
		SzosteWahTabEp2[z] = 0;
		SiodmeWahTabEp1[z] = 0;
		SiodmeWahTabEp2[z] = 0;
		OsmeWahTabEp1[z] = 0;
		OsmeWahTabEp2[z] = 0;
		DziewiateWahTabEp1[z] = 0;
		DziewiateWahTabEp2[z] = 0;
		DziesiateWahTabEp1[z] = 0;
		DziesiateWahTabEp2[z] = 0;

		//energie kinetyczna
		PierwszeWahTabEk1[z] = 0;
		PierwszeWahTabEk2[z] = 0;
		DrugieWahTabEk1[z] = 0;
		DrugieWahTabEk2[z] = 0;
		TrzecieWahTabEk1[z] = 0;
		TrzecieWahTabEk2[z] = 0;
		CzwarteWahTabEk1[z] = 0;
		CzwarteWahTabEk2[z] = 0;
		PiateWahTabEk1[z] = 0;
		PiateWahTabEk2[z] = 0;
		SzosteWahTabEk1[z] = 0;
		SzosteWahTabEk2[z] = 0;
		SiodmeWahTabEk1[z] = 0;
		SiodmeWahTabEk2[z] = 0;
		OsmeWahTabEk1[z] = 0;
		OsmeWahTabEk2[z] = 0;
		DziewiateWahTabEk1[z] = 0;
		DziewiateWahTabEk2[z] = 0;
		DziesiateWahTabEk1[z] = 0;
		DziesiateWahTabEk2[z] = 0;

		//energie ca³kowite
		PierwszeWahTabEc1[z] = 0;
		PierwszeWahTabEc2[z] = 0;
		DrugieWahTabEc1[z] = 0;
		DrugieWahTabEc2[z] = 0;
		TrzecieWahTabEc1[z] = 0;
		TrzecieWahTabEc2[z] = 0;
		CzwarteWahTabEc1[z] = 0;
		CzwarteWahTabEc2[z] = 0;
		PiateWahTabEc1[z] = 0;
		PiateWahTabEc2[z] = 0;
		SzosteWahTabEc1[z] = 0;
		SzosteWahTabEc2[z] = 0;
		SiodmeWahTabEc1[z] = 0;
		SiodmeWahTabEc2[z] = 0;
		OsmeWahTabEc1[z] = 0;
		OsmeWahTabEc2[z] = 0;
		DziewiateWahTabEc1[z] = 0;
		DziewiateWahTabEc2[z] = 0;
		DziesiateWahTabEc1[z] = 0;
		DziesiateWahTabEc2[z] = 0;

		//Wspólne energie
		AllWahTabEp1[z] = 0;
		AllWahTabEp2[z] = 0;
		AllWahTabEk1[z] = 0;
		AllWahTabEk2[z] = 0;
		AllWahTabEc1[z] = 0;
		AllWahTabEc2[z] = 0;

		//czas
		time1[z] = 0;
		time2[z] = 0;

		//Tablice do rysowania przestrzeni fazowej
		PrzFazPierwszegox1[z] = 0;
		PrzFazPierwszegox2[z] = 0;
		PrzFazPierwszegoy1[z] = 0;
		PrzFazPierwszegoy2[z] = 0;

		PrzFazDrugiegox1[z] = 0;
		PrzFazDrugiegox2[z] = 0;
		PrzFazDrugiegoy1[z] = 0;
		PrzFazDrugiegoy2[z] = 0;

		PrzFazTrzeciegox1[z] = 0;
		PrzFazTrzeciegox2[z] = 0;
		PrzFazTrzeciegoy1[z] = 0;
		PrzFazTrzeciegoy2[z] = 0;

		PrzFazCzwartegox1[z] = 0;
		PrzFazCzwartegox2[z] = 0;
		PrzFazCzwartegoy1[z] = 0;
		PrzFazCzwartegoy2[z] = 0;

		PrzFazPiategox1[z] = 0;
		PrzFazPiategox2[z] = 0;
		PrzFazPiategoy1[z] = 0;
		PrzFazPiategoy2[z] = 0;

		PrzFazSzostegox1[z] = 0;
		PrzFazSzostegox2[z] = 0;
		PrzFazSzostegoy1[z] = 0;
		PrzFazSzostegoy2[z] = 0;

		PrzFazSiodmegox1[z] = 0;
		PrzFazSiodmegox2[z] = 0;
		PrzFazSiodmegoy1[z] = 0;
		PrzFazSiodmegoy2[z] = 0;

		PrzFazOsmegox1[z] = 0;
		PrzFazOsmegox2[z] = 0;
		PrzFazOsmegoy1[z] = 0;
		PrzFazOsmegoy2[z] = 0;

		PrzFazDziewiategox1[z] = 0;
		PrzFazDziewiategox2[z] = 0;
		PrzFazDziewiategoy1[z] = 0;
		PrzFazDziewiategoy2[z] = 0;

		PrzFazDziesiategox1[z] = 0;
		PrzFazDziesiategox2[z] = 0;
		PrzFazDziesiategoy1[z] = 0;
		PrzFazDziesiategoy2[z] = 0;

	}

	j = -1;
	czask = 0;

	//ustawienia aplikacji
	timer1->Interval = 25;

	//pierwszy panel widoczny -> d³ugoœci (najwa¿niejszy parametr przy DP)
	panel1->BringToFront();
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;

	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox10->Checked = true;

	//kolory
	textBox1->BackColor = System::Drawing::Color::Black;
		textBox2->BackColor = System::Drawing::Color::White;
			textBox6->BackColor = System::Drawing::Color::AliceBlue;
				textBox7->BackColor = System::Drawing::Color::DarkBlue;
	
	MyForm::BackColor = System::Drawing::SystemColors::GradientInactiveCaption;

	checkBox34->Checked = false;

	wlaczOsie = true;
		wlaczLinke = true;
			wlaczPierwszeWah = true;
				wlaczDrugieWah = true;
					wlaczTrzecieWah = true;
						wlaczCzwarteWah = true;
							wlaczPiateWah = true;
								wlaczSzosteWah = true;
									wlaczSiodmeWah = true;
										wlaczOsmeWah = true;
											wlaczDziewiateWah = true;
												wlaczDziesiateWah = true;

	pictureBox1->Invalidate();
		pictureBox3->Invalidate();
	
}
private: System::Void PictureBox3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//Wykresy Energii
	//tworzenie obiektu graficznego
	Graphics^ grafika = e->Graphics;

	//wybór koloru
	
	grafika->Clear(Color::White);

	//ustawienia pen
	Pen^ Czarny = gcnew Pen(System::Drawing::Color::Black);

	//energia potencjalna
	Pen^ PenEp = gcnew Pen(System::Drawing::Color::FromArgb(255, 255, 51, 51));

	//Energia kinetyczna
	Pen^ PenEk = gcnew Pen(System::Drawing::Color::FromArgb(255, 153, 0,0));

	//Energia ca³kowita
	Pen^ PenEc = gcnew Pen(System::Drawing::Color::FromArgb(255, 51, 0, 0));

	//ustawienia czcionki
	System::Drawing::Font^ FontOsi = gcnew System::Drawing::Font("Times New Roman", 13);
	System::Drawing::Font^ FontSiatki = gcnew System::Drawing::Font("Times New Roman", 8);
	SolidBrush^ KCzcionki = gcnew SolidBrush(Color::Black);
	StringFormat^ Format1 = gcnew StringFormat;
	Format1->FormatFlags = StringFormatFlags::DirectionVertical;
	StringFormat^ Format2 = gcnew StringFormat;

	//Rysowanie osi i siatki
	if (wlaczOsie == true)
	{
		//osie
		Czarny->EndCap = Drawing2D::LineCap::ArrowAnchor;
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(wxl, pictureBox3->Width), EkranWykresu->WysEkr(0, pictureBox3->Height), EkranWykresu->SzerEkr(0.99 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0, pictureBox3->Width), EkranWykresu->WysEkr(wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0, pictureBox3->Width), EkranWykresu->WysEkr(wyg, pictureBox3->Height));
		Czarny->EndCap = Drawing2D::LineCap::NoAnchor;

		//siatka wykresu 
		//y
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyg, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyg, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyg, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyg, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyg, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyg, pictureBox3->Height));

		//x
		//wyliczanie jednej sekundy na podstawie zmiany intervalu timer'a
		double ilwsek = 0;

		for (double iter; iter < 1000; iter += timer1->Interval)
		{
			ilwsek++;
		}

		double sekunda = timer1->Interval * 0.001 * ilwsek;

		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.1 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.1 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));

		//grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(10*sekunda, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(10*sekunda, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));

		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.2 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.2 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.3 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.3 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.4 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.4 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.5 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.5 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.6 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.6 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.7 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.7 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.8 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.8 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.9 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.9 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(-0.15 * wyd, pictureBox3->Height));


		//oznaczenia osi i siatki
		e->Graphics->DrawString("Energia [J]", FontOsi, KCzcionki, EkranWykresu->SzerEkr(wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.95 * wyg, pictureBox3->Height), Format1);
		e->Graphics->DrawString("Czas [s]", FontOsi, KCzcionki, EkranWykresu->SzerEkr(0.85 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.4 * wyd, pictureBox3->Height), Format2);

		e->Graphics->DrawString("0", FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.2 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.1 * wyd, pictureBox3->Height), Format2);

		//y
		e->Graphics->DrawString(System::Convert::ToString(0.15 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.17 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.32 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.45 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.47 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.62 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.75 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.77 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.68 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.92 * wyg, pictureBox3->Height), Format2);

		//x
		e->Graphics->DrawString(System::Convert::ToString(0.1 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.09 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.2 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.19 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.29 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.4 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.39 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.5 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.49 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.59 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.7 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.69 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.8 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.79 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.89 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);

	}
	//Energia potencjalna
	if (checkBox13->Checked == true)
	{

		if (checkBox20->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PierwszeWahTabEp1[j], pictureBox3->Height) , EkranWykresu->SzerEkr(time2[j], pictureBox3->Width),EkranWykresu->WysEkr(PierwszeWahTabEp2[j],pictureBox3->Height));
			}
		}
			PenEp->Color = System::Drawing::Color::FromArgb(255, 255, 153, 51);
		
		if (checkBox19->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEp2[j], pictureBox3->Height));
			}
		}

			
			PenEp->Color = System::Drawing::Color::FromArgb(255, 255,255,51);

		if (checkBox18->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255,153,255,51);

		if (checkBox17->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255, 51, 255,51);

		if (checkBox25->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255, 51,255,153);

		if (checkBox24->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255, 51,255,255);

		if (checkBox23->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255, 51,153,255);

		if (checkBox22->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255, 51,51,255);

		if (checkBox21->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEp2[j], pictureBox3->Height));
			}
		}

			PenEp->Color = System::Drawing::Color::FromArgb(255,153,51,255);	

		if (checkBox26->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEp2[j], pictureBox3->Height));
			}
		}

		PenEp->Color = System::Drawing::Color::Red;

		if (checkBox29->Checked == true)
		{
			for (int j = 0; j < WielkoscTablic; j++) {
				grafika->DrawLine(PenEp, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEp1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEp2[j], pictureBox3->Height));
			}
		}

	}
	
	//Energia kinetyczna
	if (checkBox14->Checked == true)
	{

		if (checkBox20->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PierwszeWahTabEk1[j], pictureBox3->Height), 
					EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(PierwszeWahTabEk2[j], pictureBox3->Height));

			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255,153,76,0);

		if (checkBox19->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 153, 153,0);

		if (checkBox18->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 76, 153,0);

		if (checkBox17->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 0, 153,0);

		if (checkBox25->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 0, 153,76);

		if (checkBox24->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 0, 153, 153);

		if (checkBox23->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 0, 76, 153);

		if (checkBox22->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 0, 0, 153);

		if (checkBox21->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::FromArgb(255, 76, 0, 153);

		if (checkBox26->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEk2[j], pictureBox3->Height));
			}
		}

		PenEk->Color = System::Drawing::Color::Blue;

		if (checkBox30->Checked == true)
		{
			for (int j = 0; j < WielkoscTablic; j++) {
				grafika->DrawLine(PenEk, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEk1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEk2[j], pictureBox3->Height));
			}
		}
	}

	//Energia ca³kowita
	if (checkBox15->Checked == true)
	{


		if (checkBox20->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PierwszeWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(PierwszeWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 51,25,0);

		if (checkBox19->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DrugieWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 51,51,0);

		if (checkBox18->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(TrzecieWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 25,51,0);

		if (checkBox17->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(CzwarteWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 0,51,0);

		if (checkBox25->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(PiateWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 0,51,25);

		if (checkBox24->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SzosteWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255,0,51,51);

		if (checkBox23->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(SiodmeWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 0,25,51);

		if (checkBox22->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(OsmeWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 0,0,51);

		if (checkBox21->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziewiateWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::FromArgb(255, 25,0,51);

		if (checkBox26->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(DziesiateWahTabEc2[j], pictureBox3->Height));
			}
		}

		PenEc->Color = System::Drawing::Color::ForestGreen;

		if (checkBox31->Checked == true)
		{
			for (int j = 0; j < WielkoscTablic; j++) {
				grafika->DrawLine(PenEc, EkranWykresu->SzerEkr(time1[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEc1[j], pictureBox3->Height), EkranWykresu->SzerEkr(time2[j], pictureBox3->Width), EkranWykresu->WysEkr(AllWahTabEc2[j], pictureBox3->Height));
			}
		}

	}

	//Przestrzenie Faz
	if (checkBox16->Checked == true)
	{
		label86->Text = "(Po³o¿enie ; Przyspieszenie) = (0.0 ; 0.0)";
		//Przestrzeñ faz
		Pen^ PenPrzFaz = gcnew Pen(System::Drawing::Color::Red);

		grafika->Clear(System::Drawing::Color::White);
		
		Czarny->EndCap = Drawing2D::LineCap::ArrowAnchor;
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(wxl, pictureBox3->Width), EkranWykresu->WysEkr(0, pictureBox3->Height), EkranWykresu->SzerEkr(wxp, pictureBox3->Width), EkranWykresu->WysEkr(0, pictureBox3->Height));
		grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0, pictureBox3->Width), EkranWykresu->WysEkr(wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0, pictureBox3->Width), EkranWykresu->WysEkr(wyg, pictureBox3->Height));
		Czarny->EndCap = Drawing2D::LineCap::NoAnchor;

		//siatka wykresu 
		if (wlaczOsie == true)
		{
			//y
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyg, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.3 * wyd, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.45 * wyd, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.6 * wyd, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.75 * wyd, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.01 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.01 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.9 * wyd, pictureBox3->Height));


			//x
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.15 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.15 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.3 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.3 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.45 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.45 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.6 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.6 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.75 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.75 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.9 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.9 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.15 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.15 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.3 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.3 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.45 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.45 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.6 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.6 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.75 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.75 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));
			grafika->DrawLine(Czarny, EkranWykresu->SzerEkr(0.9 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), EkranWykresu->SzerEkr(0.9 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyg, pictureBox3->Height));


			//oznaczenia osi i siatki
			System::Drawing::Font^ CzcionkaPrzFaz = gcnew System::Drawing::Font("Times New Roman", 11);
			System::Drawing::Font^ indeksgorny = gcnew System::Drawing::Font("Times New Roman", 7);

			e->Graphics->DrawString("Prêdkoœæ [rad/s]", CzcionkaPrzFaz, KCzcionki, EkranWykresu->SzerEkr(wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.95 * wyg, pictureBox3->Height), Format1);
			e->Graphics->DrawString("Po³o¿enie [rad]", CzcionkaPrzFaz, KCzcionki, EkranWykresu->SzerEkr(0.7 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyd, pictureBox3->Height), Format2);

			e->Graphics->DrawString("0", FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.04 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.02 * wyd, pictureBox3->Height), Format2);

			//e->Graphics->DrawString("2", indeksgorny, KCzcionki, EkranWykresu->SzerEkr(0.98 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.15 * wyg, pictureBox3->Height), Format1);

		}

		//y
		e->Graphics->DrawString(System::Convert::ToString(0.15 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.19 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1* wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.34 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.45 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.49 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.64 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.75 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.79 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9 * ekranwykyg), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.94 * wyg, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.15 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.11 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.26 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.45 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.41 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.56 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.75 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.71 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9 * ekranwykyd), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.1 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.86 * wyd, pictureBox3->Height), Format2);
		//x
		e->Graphics->DrawString(System::Convert::ToString(0.15 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.11 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.26 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.45 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.41 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.56 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.75 * ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.71 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9* ekranwykxp), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.86 * wxp, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.15 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.19 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.3 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.34 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.45 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.49 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.6 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.64 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.75 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.79 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);
		e->Graphics->DrawString(System::Convert::ToString(0.9 * ekranwykxl), FontSiatki, KCzcionki, EkranWykresu->SzerEkr(0.94 * wxl, pictureBox3->Width), EkranWykresu->WysEkr(0.05 * wyd, pictureBox3->Height), Format2);

		


		if (checkBox20->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazPierwszegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazPierwszegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazPierwszegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazPierwszegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::DodgerBlue;

		if (checkBox19->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazDrugiegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDrugiegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazDrugiegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDrugiegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::DarkGreen;

		if (checkBox18->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazTrzeciegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazTrzeciegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazTrzeciegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazTrzeciegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::BurlyWood;

		if (checkBox17->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazCzwartegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazCzwartegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazCzwartegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazCzwartegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::Indigo;

		if (checkBox25->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazPiategox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazPiategoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazPiategox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazPiategoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::Crimson;

		if (checkBox24->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazSzostegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazSzostegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazSzostegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazSzostegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::DarkOrange;

		if (checkBox23->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazSiodmegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazSiodmegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazSiodmegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazSiodmegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::MediumTurquoise;

		if (checkBox22->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazOsmegox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazOsmegoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazOsmegox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazOsmegoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::Sienna;

		if (checkBox21->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazDziewiategox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDziewiategoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazDziewiategox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDziewiategoy2[j], pictureBox3->Height));
			}
		}

		PenPrzFaz->Color = System::Drawing::Color::LawnGreen;

		if (checkBox26->Checked == true)
		{
			for (int j = 0; j <  WielkoscTablic; j++) {
				grafika->DrawLine(PenPrzFaz, EkranWykresu->SzerEkr(PrzFazDziesiategox1[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDziesiategoy1[j], pictureBox3->Height), EkranWykresu->SzerEkr(PrzFazDziesiategox2[j], pictureBox3->Width), EkranWykresu->WysEkr(PrzFazDziesiategoy2[j], pictureBox3->Height));
			}
		}

	}

	//rysowanie po wykresie i odmierzanie
	Pen^ rysowanie = gcnew Pen(System::Drawing::Color::DarkOrange);
	Pen^ punkt = gcnew Pen(System::Drawing::Color::DarkGoldenrod);

	if (checkBox32->Checked == true)
	{
		grafika->DrawEllipse(punkt, EkranWykresu->SzerEkr(getmousex1, pictureBox3->Width), EkranWykresu->WysEkr(getmousey1, pictureBox3->Height), 3, 3);
		
		if (wspolrzedne1 == true && wspolrzedne2 == false)
		{
			grafika->DrawLine(rysowanie, EkranWykresu->SzerEkr(getmousex1, pictureBox3->Width), EkranWykresu->WysEkr(getmousey1, pictureBox3->Height), pixelx, pixely);

		}
		else
		{
			grafika->DrawLine(rysowanie, EkranWykresu->SzerEkr(getmousex1, pictureBox3->Width), EkranWykresu->WysEkr(getmousey1, pictureBox3->Height), EkranWykresu->SzerEkr(getmousex2, pictureBox3->Width), EkranWykresu->WysEkr(getmousey2, pictureBox3->Height));
		}
			grafika->DrawEllipse(punkt, EkranWykresu->SzerEkr(getmousex2, pictureBox3->Width), EkranWykresu->WysEkr(getmousey2, pictureBox3->Height), 3, 3);
	
	}



}
private: System::Void Panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	Graphics^ grafika = e->Graphics;
	Pen^ Red = gcnew Pen(System::Drawing::Color::Red);
	Red->Width = 3;

	//wstawiæ foto, improve this s
	grafika->DrawLine(Red, 125,46,150,46);
	grafika->DrawLine(Red, 135, 58, 150, 47);
	grafika->DrawLine(Red, 135, 35, 150, 47);
}
private: System::Void CheckBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (checkBox12->Checked == true)
	{
		panel12->Visible = true;
		panel12->BringToFront();
		
		panel2->Visible = false;
		checkBox2->Checked = false;
	}



}
private: System::Void CheckBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox13->Checked == true)
	{
		checkBox16->Checked = false;
	}

	pictureBox3->Invalidate();
}
private: System::Void CheckBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox14->Checked == true)
	{
		checkBox16->Checked = false;
	}


	pictureBox3->Invalidate();
}
private: System::Void CheckBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox15->Checked == true)
	{
		checkBox16->Checked = false;
	}

	pictureBox3->Invalidate();
}
private: System::Void CheckBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (checkBox16->Checked == true)
	{
		checkBox15->Checked = false;
		checkBox14->Checked = false;
		checkBox13->Checked = false;
	}


	wxl = -4;
	wxp = 4;
	wyd = -4;
	wyg = 4;

	ekranwykxl = wxl;
	ekranwykxp = wxp;
	ekranwykyg = wyg;
	ekranwykyd = wyd;

	EkranWykresu->ChValueX(ekranwykxl, ekranwykxp);
	EkranWykresu->ChValueY(ekranwykyd, ekranwykyg);

	pictureBox3->Invalidate();
}
private: System::Void CheckBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}
private: System::Void CheckBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Invalidate();
}

//skalowanie wykresów
private: System::Void HScrollBar71_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

		if (checkBox16->Checked == true)
{
	wyg = hScrollBar71->Value*0.01;
	wyd = - wyg;

	ekranwykyg = wyg;
	ekranwykyd = wyd;


	EkranWykresu->ChValueY(ekranwykyd, ekranwykyg);
}
else
{
	wyg = hScrollBar71->Value;
	wyd = -0.13 * wyg;

	ekranwykyg = wyg;
	ekranwykyd = wyd;


	EkranWykresu->ChValueY(ekranwykyd, ekranwykyg);
}

	pictureBox3->Invalidate();

}
private: System::Void HScrollBar72_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

		if (checkBox16->Checked == true)
		{

			wxp = hScrollBar72->Value*0.01;
			wxl = -wxp;

			ekranwykxl = wxl;
			ekranwykxp = wxp;

			EkranWykresu->ChValueX(ekranwykxl, ekranwykxp);
		}
		else
		{
			wxp = hScrollBar72->Value;
			wxl = -0.1 * wxp;

			ekranwykxl = wxl;
			ekranwykxp = wxp;

			EkranWykresu->ChValueX(ekranwykxl, ekranwykxp);
		}


	pictureBox3->Invalidate();
}
private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true)
	{
		panel2->Visible = true;
		panel2->BringToFront();

		panel12->Visible = false;
		checkBox12->Checked = false;
	}
}
private: System::Void TextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	int pixelx = e->X, pixely = e->Y;
		double realx = EkranWykresu->RealSzer(pixelx,pictureBox3->Width), realy= EkranWykresu->RealWys(pixely,pictureBox3->Height);
	
	if (checkBox16->Checked == true)
	{
		label86->Text = L"(Po³o¿enie; Przyspieszenie) = (" + realx.ToString("F2") + L"; " + realy.ToString("F2") + L")"; 
	}
	else
	{
		label86->Text = L"(Czas; Energia) = (" + realx.ToString("F2") + L"; " + realy.ToString("F2") + L")";
	}

}
private: System::Void WykresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//tworzenie obiektu graficznego przenosz¹cego informacjê pikselow¹ do bitmapy
	Bitmap^ Obraz = gcnew Bitmap(pictureBox3->Width-5, pictureBox3->Height-5);

	Graphics^ grafika = Graphics::FromImage(Obraz);

		System::Drawing::Rectangle okno = pictureBox3->RectangleToScreen(pictureBox3->ClientRectangle);

				Point punkt = Point(0, 0);

	grafika->CopyFromScreen(okno.Location, punkt, pictureBox3->Size);

	//pobieranie œcie¿ki do zapisu wykorzystuj¹c funkcje OdczytPliku
	Thread^ WatekOdczytu = gcnew Thread(gcnew ThreadStart(OdczytPliku));
	WatekOdczytu->TrySetApartmentState(ApartmentState::STA);

	WatekOdczytu->Start();

	WatekOdczytu->Join();

	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{

	FileStream^ Odczyt = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapis.txt", FileMode::Open);
		StreamReader^ odczytSciezki = gcnew StreamReader(Odczyt);

			Obraz->Save(odczytSciezki->ReadLine());

			Odczyt->Close();
				odczytSciezki->Close();

	}

	Thread::Sleep(0);

	//usuwanie pliku tymczasowyzapis.txt s³u¿¹cy do przekierowania œcie¿ki odczyt->zapis
	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{
		File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
	}

}
private: System::Void PictureBox1_BackColorChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//1 kolor kuli
	//t7
	ColorDialog^ Paleta = gcnew ColorDialog;

	Paleta->AllowFullOpen = true;
		Paleta->ShowHelp = true;

	Paleta->Color = textBox7->BackColor;

	if (Paleta->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		textBox7->BackColor = Paleta->Color;
	}

	pictureBox1->Invalidate();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//2 kolor
	//t6
	ColorDialog^ Paleta = gcnew ColorDialog;

	Paleta->AllowFullOpen = true;
		Paleta->ShowHelp = true;

	Paleta->Color = textBox6->BackColor;

	if (Paleta->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		textBox6->BackColor = Paleta->Color;
	}

	pictureBox1->Invalidate();
}
private: System::Void PomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//pomoc
	Form^ Pomoc = gcnew Form;
		Pomoc->Icon = System::Drawing::SystemIcons::Question;
			Pomoc->AutoSize = true;
				Pomoc->Name = "Pomoc";

	Pomoc->Show();

	//w³aœciwoœci okienka
	Pomoc->Width = 500;
		Pomoc->Height = 500;

		Label^ tekstpomocy = gcnew Label();
		
		tekstpomocy->Text = "Panel nazwany Parametry wahade³ znajduj¹cy siê po prawej stronie od animacji," + Environment::NewLine +
			"pozwala na wybór pomiêdzy poszczególnymi parametrami wahade³. Chc¹c rozpocz¹æ symulacje " + Environment::NewLine +
			"sprzê¿onych wahade³ nale¿y dobraæ parametry dla ka¿dego z nich. Poprzez zaznaczenie checkboxów o nazwie" + Environment::NewLine +
			"Sprzê¿enie 1  oraz „Sprzê¿enie 2” mo¿liwe bêdzie wybranie odpowiednio sta³ej cn linki po³¹czonej z poprzednim wahad³em" + Environment::NewLine +
			"i sta³ej cn+1 dla linki po³¹czonej z kolejnym.  Po dobraniu ka¿dego parametru dla wszystkich wahade³ mo¿na" + Environment::NewLine +
			"nacisn¹æ przycisk „START” do rozpoczêcia symulacji." + Environment::NewLine + Environment::NewLine +

			"Po zaznaczeniu checkboxu Ustawienia wykresu znajduj¹cego siê pod" + Environment::NewLine +
			"przyciskiem rozpoczynaj¹cym symulacje, mo¿na dokonaæ wyboru wyrysowania poszczególnych energii wahade³" + Environment::NewLine +
			"jak i ich przestrzeni fazowej.Pozwala to na dowolne ich porównywanie.Tak jak w poprzednich aplikacjach" + Environment::NewLine +
			"istnieje tu mo¿liwoœæ skalowania wykresu." + Environment::NewLine + Environment::NewLine +

			"W panelu Parametry uk³adu jest mo¿liwoœæ zmiany kolorystyki animacji." + Environment::NewLine +
			"Kule rysowane s¹ funkcj¹ liniowego gradientu dziêki temu mo¿na dobraæ dwa kolory dla wahade³." + Environment::NewLine +
			"Tak¿e mo¿na zmieniaæ kolor siatki jak i t³a animacji.W tej zak³adce mo¿na równie¿ dostosowaæ szerokoœæ jak i wysokoœæ rysowanej na animacji siatki. " + Environment::NewLine +
			"Menu sk³ada siê z kilku czêœci.Zak³adka Plik wi¹¿e siê z restartowaniem parametrów aplikacji, zamkniêciem jej " + Environment::NewLine +
			"oraz zapisu poszczególnych okien, wyników, wykonanych pomiarów jak i automatycznie utworzonej legendy. " + Environment::NewLine +
			"Legenda dostosowujê siê do wybranych na wykresie energii.W kolejnej zak³adce Narzêdzia znajduj¹ siê dodatkowe funkcje programu." + Environment::NewLine +
			"Animacja w której mo¿na zwiêkszaæ lub zmniejszaæ interwa³ timera.„Podgl¹d pomiarów”, który wyœwietla aktualne wyniki dla uk³adu i poszczególnych wahade³." + Environment::NewLine +
			"Nastêpnie znajduj¹ siê narzêdzia dotycz¹ce wykresu : wyœwietlanie energii kinetycznej, potencjalnej i ca³kowitej dla ca³ego uk³adu, która jest liczona " + Environment::NewLine +
			"jako suma wyników energii dla poszczególnych wahade³, wyœwietlanie legendy  oraz mo¿liwoœæ dokonania pomiaru.W zak³adce „Widok” mo¿na wy³¹czyæ / w³¹czyæ " + Environment::NewLine +
			"wyœwietlanie poszczególnych elementów programów takich jak : animacja(belki, linki, siatki i poszczególnych wahade³), t³o aplikacji, wspó³rzêdnych i osi wykresu." + Environment::NewLine +
			"Ka¿de wahad³o ma swój uk³ad odniesienia przesuniêty wzglêdem uk³adu pierwszego wahad³a.Równania RK4 obliczane jest dla ka¿dego wahad³a uwzglêdniaj¹c" + Environment::NewLine +
			"pozycjê poprzedniego.Krok h dla algorytmu RK4 wynosi 0, 1. W³aœciwoœæ Interval dla timera ustawiona zosta³a na 25 milisekund." + Environment::NewLine +
			"Na samym koñcu wyliczone wartoœci k¹tazamieniane s¹ na wspó³rzêdne biegunowe."
			+ Environment::NewLine + Environment::NewLine +
			"Autor: £ukasz Nowicki WIMiFT Fizyka Techniczna" + Environment::NewLine +
			"Politechnika Poznañska 2020";
			
		tekstpomocy->Location = System::Drawing::Point(10, 10);
		tekstpomocy->AutoSize = true;
		
		Pomoc->Controls->Add(tekstpomocy);
}
private: System::Void WyjdŸToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//zakoñcz
	Application::Exit();
}
private: System::Void AnimacjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//zapis animacji
/*	if(checkBox27->Checked == true)
	{
		checkBox27->Checked = false;
			//timer2->Enabled = true;
				

	}
	else
	{
		checkBox27->Checked = true;
	
		timer2->Interval = timer1->Interval;


			label88->Visible = true;

			label88->Text = "Trwa zapis...";
			label88->BackColor = pictureBox1->BackColor;

			if (pictureBox1->BackColor == System::Drawing::Color::Black)
			{
				label88->ForeColor = System::Drawing::Color::LimeGreen;
			}

			else
			{
				label88->ForeColor = System::Drawing::Color::Black;
			}

			timer2->Enabled = true;


	}*/
	
}
private: System::Void ParametryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//zapis parametrów

	Pomiar^ WynikiEnergii = gcnew Pomiar();

	//pobieranie œcie¿ki do zapisu wykorzystuj¹c funkcje OdczytPliku
	Thread^ WatekOdczytu = gcnew Thread(gcnew ThreadStart(OdczytPliku));
	WatekOdczytu->TrySetApartmentState(ApartmentState::STA);

	WatekOdczytu->Start();

	WatekOdczytu->Join();

	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{

	FileStream^ Odczyt = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapis.txt", FileMode::Open);
	StreamReader^ odczytSciezki = gcnew StreamReader(Odczyt);

	StreamWriter^ pliksciezki = gcnew StreamWriter(odczytSciezki->ReadLine());

	pliksciezki->Write("Pomiary wahade³ dla zadanych parametrów: "+
		Environment::NewLine +
		"\r\nWyniki uzyskane dla ca³ego uk³adu:"+
			"\r\nEnergia ca³kowita uk³adu:" + WynikiEnergii->Average(AllWahTabEc1, j) +
				"\r\nEnergia potencjalna uk³adu:" + WynikiEnergii->Average(AllWahTabEp1, j) +
					"\r\nEnergia kinetyczna uk³adu:" + WynikiEnergii->Average(AllWahTabEk1, j) +
		
		Environment::NewLine +
		"\r\nPierwsze wahad³o: " +
			"\r\nD³ugoœæ: " + PierwszeWah->length + "[m]" +
				"\r\nMasa: " + PierwszeWah->mass + "[kg]"+
					"\r\nWychylenie: " + PierwszeWah->nextposy + "[rad]"+
						"\r\nT³umienie: " + PierwszeWah->suppresion +

		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(PierwszeWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(PierwszeWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(PierwszeWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(PierwszeWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(PierwszeWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(PierwszeWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(PierwszeWahTabEk1, j) + "[J]" +	
										"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazPierwszegoy1,j) + "[rad/s]"+

		Environment::NewLine +
		"\r\nDrugie wahad³o: " +
			"\r\nD³ugoœæ: " + DrugieWah->length + "[m]" +
				"\r\nMasa: " + DrugieWah->mass + "[kg]" +
					"\r\nWychylenie: " + DrugieWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + DrugieWah->suppresion +
			
		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DrugieWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DrugieWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DrugieWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DrugieWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DrugieWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DrugieWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DrugieWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazDrugiegoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nTrzecie wahad³o: " +
			"\r\nD³ugoœæ: " + TrzecieWah->length + "[m]" +
				"\r\nMasa: " + TrzecieWah->mass + "[kg]" +
					"\r\nWychylenie: " + TrzecieWah->nextposy + "[rad]" +
						"\r\nT³umienie: " + TrzecieWah->suppresion + 
			
		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(TrzecieWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(TrzecieWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(TrzecieWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(TrzecieWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(TrzecieWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(TrzecieWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(TrzecieWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazTrzeciegoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nCzwarte wahad³o: " +
			"\r\nD³ugoœæ: " + CzwarteWah->length + "[m]" +
				"\r\nMasa: " + CzwarteWah->mass + "[kg]" +
					"\r\nWychylenie: " + CzwarteWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + CzwarteWah->suppresion +
		
		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(CzwarteWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(CzwarteWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(CzwarteWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(CzwarteWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(CzwarteWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(CzwarteWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(CzwarteWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazCzwartegoy1, j) + "[rad/s]" +
		
		Environment::NewLine +
		"\r\nPiate wahad³o: " +
			"\r\nD³ugoœæ: " + PiateWah->length + "[m]" +
				"\r\nMasa: " + PiateWah->mass + "[kg]" +
					"\r\nWychylenie: " + PiateWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + PiateWah->suppresion +
			
		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(PiateWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(PiateWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(PiateWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(PiateWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(PiateWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(PiateWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(PiateWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazPiategoy1, j) + "[rad/s]" +	
		Environment::NewLine +
		"\r\nSzoste wahad³o: " +
			"\r\nD³ugoœæ: " + SzosteWah->length + "[m]" +
				"\r\nMasa: " + SzosteWah->mass + "[kg]" +
					"\r\nWychylenie: " + SzosteWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + SzosteWah->suppresion +
		
		Environment::NewLine +
		"\r\nUzyskane wyniki: " +
			"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(SzosteWahTabEc1, j) + "[J]" +
				"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(SzosteWahTabEp1, j) + "[J]" +
					"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(SzosteWahTabEp1, j) + "[J]" +
						"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(SzosteWahTabEp1, j) + "[J]" +
							"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(SzosteWahTabEk1, j) + "[J]" +
								"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(SzosteWahTabEk1, j) + "[J]" +
									"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(SzosteWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna prêdkoœæ:: " + WynikiEnergii->Max(PrzFazSzostegoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nSiodme wahad³o: " +
			"\r\nD³ugoœæ: " + SiodmeWah->length + "[m]" +
				"\r\nMasa: " + SiodmeWah->mass + "[kg]" +
					"\r\nWychylenie: " + SiodmeWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + SiodmeWah->suppresion +
			
		Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(SiodmeWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(SiodmeWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(SiodmeWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(SiodmeWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(SiodmeWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(SiodmeWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(SiodmeWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazSiodmegoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nOsme wahad³o: " +
			"\r\nD³ugoœæ: " + OsmeWah->length + "[m]" +
				"\r\nMasa: " + OsmeWah->mass + "[kg]" +
					"\r\nWychylenie: " + OsmeWah->nextposy  + "[rad]" +
						"\r\nT³umienie: " + OsmeWah->suppresion +
			
		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(OsmeWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(OsmeWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(OsmeWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(OsmeWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(OsmeWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(OsmeWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(OsmeWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazOsmegoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nDziewiate wahad³o: " +
			"\r\nD³ugoœæ: " + DziewiateWah->length + "[m]" +
				"\r\nMasa: " + DziewiateWah->mass + "[kg]" +
					"\r\nWychylenie: " + DziewiateWah->nextposy + "[rad]" +
						"\r\nT³umienie: " + DziewiateWah->suppresion +
		
		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DziewiateWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DziewiateWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DziewiateWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DziewiateWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DziewiateWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DziewiateWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DziewiateWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazDziewiategoy1, j) + "[rad/s]" +
		Environment::NewLine +
		"\r\nDziesiate wahad³o: " +
			"\r\nD³ugoœæ: " + DziesiateWah->length + "[m]" +
				"\r\nMasa: " + DziesiateWah->mass + "[kg]" +
					"\r\nWychylenie: " + DziesiateWah->nextposy + "[rad]" +
						"\r\nT³umienie: " + DziesiateWah->suppresion +
		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DziesiateWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DziesiateWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DziesiateWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DziesiateWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DziesiateWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DziesiateWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DziesiateWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ:: " + WynikiEnergii->Max(PrzFazDziesiategoy1, j) + "[rad/s]" +
				Environment::NewLine
				);
	
	
		Odczyt->Close();
			odczytSciezki->Close();
				pliksciezki->Close();
			
}

	Thread::Sleep(0);

	//usuwanie pliku tymczasowyzapis.txt s³u¿¹cy do przekierowania œcie¿ki odczyt->zapis
	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{
		File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
	}


}
private: System::Void Timer2_Tick_1(System::Object^ sender, System::EventArgs^ e) {
/*	//opisaæ
	//zapis animacji
	//do odwrotu readline zmienia siê z timerem w pliku tymczasowym i dodaje frame do enkodera, a wiec moze usuwac na biezaco?

			//tworzenie obiektu graficznego przenosz¹cego informacjê pikselow¹ do bitmapy ze wzrostem nazwy œcie¿ki
	GifBitmapEncoder^ Enkoder = gcnew GifBitmapEncoder();

	Bitmap^ Obraz = gcnew Bitmap(pictureBox1->Width - 2, pictureBox1->Height - 2);

	Graphics^ grafika = Graphics::FromImage(Obraz);

	System::Drawing::Rectangle okno = pictureBox1->RectangleToScreen(pictureBox1->ClientRectangle);

	Point punkt = Point(0, 0);

	grafika->CopyFromScreen(okno.Location, punkt, pictureBox1->Size);


	Obraz->Save("c:\\users\\public\\pictures\\Animacja.bmp");

	//if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
//	{
		
		//pobieranie œcie¿ki do zapisu wykorzystuj¹c funkcje OdczytPliku
		//FileStream^ Odczyt = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapis.txt", FileMode::Open);
	//	StreamReader^ odczytSciezki = gcnew StreamReader(Odczyt);


		FileStream^ bmp= gcnew FileStream("c:\\users\\public\\pictures\\Animacja.bmp", FileMode::Open);

			Enkoder->Frames->Add(BitmapFrame::Create(bmp));

/*		StreamWriter^ sciezkagifu = gcnew StreamWriter("c:\\users\\public\\pictures\\tymczasowyzapisgif.txt");

		sciezkagifu->WriteLine();
		sciezkagifu->Flush();

		FileStream^ Odczytgifu = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapisgif.txt", FileMode::Open);
		StreamReader^ odczytzapisgifu = gcnew StreamReader(Odczytgifu);
		//blad odczytsciezki - > readline
		FileStream^ Frame = gcnew FileStream(odczytzapisgifu->ReadLine, FileMode::Open);

				Enkoder->Frames->Add(BitmapFrame::Create(Frame));
			
			
				//File::Delete("c:\\users\\public\\pictures\\Animacja.gif");
	bmp->Close(); 

	if (checkBox27->Checked == false)
	{
		
		FileStream^ ZapisGif = gcnew FileStream("c:\\users\\public\\pictures\\Animacja.gif", FileMode::Create);
			Enkoder->Save(ZapisGif);


	//	Odczyt->Close();
	//	odczytSciezki->Close();

	//	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	//	{
	//		File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
	//	}

		label88->Visible = false;
		
		//wzr = 0;

		Thread::Sleep(0);
		timer2->Stop();
	}

	//Odczyt->Close();
//	odczytSciezki->Close();

	//}
	//else
//	{
//		MessageBox::Show("Wybierz miejsce zapisu!");
//		timer2->Stop();

//	}
	//wzr++ ;*/

}

private: System::Void CheckBox30_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox31_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox32_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void CheckBox29_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox30_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox31_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void EnergiaPotencjalnaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox29->Checked == true)
	{
		checkBox29->Checked = false;
		checkBox13->Checked = false;
			 }
	else
	{
		checkBox29->Checked = true;
		checkBox13->Checked = true;
	}

		 }
private: System::Void EnergiaKinetycznaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox30->Checked == true)
	{
		checkBox30->Checked = false;
		checkBox14->Checked = false;
	}
	else
	{
		checkBox30->Checked = true;
		checkBox14->Checked = true;
	}
}
private: System::Void EnergiaCa³kowitaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox31->Checked == true)
	{
		checkBox31->Checked = false;
		checkBox15->Checked = false;
	}
	else
	{
		checkBox31->Checked = true;
		checkBox15->Checked = true;
	}

}
private: System::Void LegendaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Form^ Legenda = gcnew Form;

	//Form properties
	Legenda->Text = "Legenda";
	Legenda->Icon = System::Drawing::SystemIcons::Information;

	System::Drawing::Font^ FontLegendy = gcnew System::Drawing::Font("Times New Roman", 12);

	int iloscAktywnych = 0;

	int zliczanie = 0;

	int beetweenHeight = 0;

	int pozycjaY = 0;

	//zliczanie elementów
	if (checkBox13->Checked == true)
	{

		if (checkBox20->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox19->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox18->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox17->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox25->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox24->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox23->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox22->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox21->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox26->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox29->Checked == true)
		{
			zliczanie += 1;
		}

	}

	//Energia kinetyczna
	if (checkBox14->Checked == true)
	{

		if (checkBox20->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox19->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox18->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox17->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox25->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox24->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox23->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox22->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox21->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox26->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox30->Checked == true)
		{
			zliczanie += 1;
		}
	}

	//Energia ca³kowita
	if (checkBox15->Checked == true)
	{


		if (checkBox20->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox19->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox18->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox17->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox25->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox24->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox23->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox22->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox21->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox26->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox31->Checked == true)
		{
			zliczanie += 1;
		}

	}

	//przestrzenie faz
	if (checkBox16->Checked == true)
	{


		if (checkBox20->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox19->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox18->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox17->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox25->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox24->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox23->Checked == true)
		{
			zliczanie += 1;
		}

		if (checkBox22->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox21->Checked == true)
		{
			zliczanie += 1;
		}



		if (checkBox26->Checked == true)
		{
			zliczanie += 1;
		}


		if (checkBox31->Checked == true)
		{
			zliczanie += 1;
		}

	}

	//ustawienia wielkoœci form Legendy
		//zliczanie = 5;
	Legenda->Size = System::Drawing::Size(350, (zliczanie + 2) * 40);


	if (zliczanie + 2 != 0)
	{
		beetweenHeight = Legenda->Height / (zliczanie + 2);
	}

	//dodawanie poszczególnych oznaczeñ legendy
	//Energia potencjalna
	if (checkBox13->Checked == true)
	{
		//pierwsze wahad³o
		if (checkBox20->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 255, 51, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna pierwszego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//drugie wahad³o

		if (checkBox19->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 255, 153, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna drugiego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//trzecie wahad³o
		if (checkBox18->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 255, 255, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna trzeciego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//czwarte wahad³o
		if (checkBox17->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 153, 255, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna czwartego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//piate wahad³o
		if (checkBox25->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPierwszegoWah = gcnew Panel;
			oknoEpPierwszegoWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPierwszegoWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPierwszegoWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 255, 51);

			Label^ labelEpPierwszegoWah = gcnew Label;
			labelEpPierwszegoWah->Font = FontLegendy;
			labelEpPierwszegoWah->Text = "Energia potencjalna pi¹tego wahad³a";
			labelEpPierwszegoWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPierwszegoWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPierwszegoWah);
			Legenda->Controls->Add(labelEpPierwszegoWah);

		}

		//szoste wahad³o
		if (checkBox24->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 255, 153);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna szóstego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//siodme wahad³o
		if (checkBox23->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 255, 255);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna siódmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//osme wahad³o
		if (checkBox22->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 153, 255);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna ósmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziewiate wahad³o
		if (checkBox21->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 51, 255);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna dziewi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziesiate wahad³o
		if (checkBox26->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::FromArgb(255, 153, 51, 255);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna dziesi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);
		}

		//ca³y uk³ad
		if (checkBox29->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPWah = gcnew Panel;
			oknoEpPWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPWah->BackColor = System::Drawing::Color::Red;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia potencjalna ca³oœci uk³adu";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEpPWah);
			Legenda->Controls->Add(labelEpPWah);
		}

	}

	//energia kinetyczna
	if (checkBox14->Checked == true)
	{
		//pierwsze wahad³o
		if (checkBox20->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 153, 0, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna pierwszego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//drugie wahad³o

		if (checkBox19->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 153, 76, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna drugiego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//trzecie wahad³o
		if (checkBox18->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 153, 153, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna trzeciego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//czwarte wahad³o
		if (checkBox17->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 76, 153, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna czwartego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//piate wahad³o
		if (checkBox25->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPierwszegoWah = gcnew Panel;
			oknoEpPierwszegoWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPierwszegoWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPierwszegoWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 153, 0);

			Label^ labelEpPierwszegoWah = gcnew Label;
			labelEpPierwszegoWah->Font = FontLegendy;
			labelEpPierwszegoWah->Text = "Energia kinetyczna pi¹tego wahad³a";
			labelEpPierwszegoWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPierwszegoWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPierwszegoWah);
			Legenda->Controls->Add(labelEpPierwszegoWah);

		}

		//szoste wahad³o
		if (checkBox24->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 153, 76);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna szóstego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//siodme wahad³o
		if (checkBox23->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 153, 153);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna siódmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//osme wahad³o
		if (checkBox22->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 76, 153);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna ósmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziewiate wahad³o
		if (checkBox21->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 0, 153);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna dziewi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziesiate wahad³o
		if (checkBox26->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::FromArgb(255, 76, 0, 153);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna dziesi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);
		}

		//Ek uk³adu
		if (checkBox30->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::Blue;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia kinetyczna ca³oœci uk³adu";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);
		}

	}

	//energia ca³kowita
	if (checkBox15->Checked == true)
	{
		//pierwsze wahad³o
		if (checkBox20->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 0, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita pierwszego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//drugie wahad³o

		if (checkBox19->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 25, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita drugiego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//trzecie wahad³o
		if (checkBox18->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 51, 51, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita trzeciego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//czwarte wahad³o
		if (checkBox17->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 25, 51, 0);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita czwartego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//piate wahad³o
		if (checkBox25->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPierwszegoWah = gcnew Panel;
			oknoEpPierwszegoWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPierwszegoWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPierwszegoWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 51, 0);

			Label^ labelEpPierwszegoWah = gcnew Label;
			labelEpPierwszegoWah->Font = FontLegendy;
			labelEpPierwszegoWah->Text = "Energia ca³kowita pi¹tego wahad³a";
			labelEpPierwszegoWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPierwszegoWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPierwszegoWah);
			Legenda->Controls->Add(labelEpPierwszegoWah);

		}

		//szoste wahad³o
		if (checkBox24->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 51, 25);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita szóstego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//siodme wahad³o
		if (checkBox23->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 51, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita siódmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//osme wahad³o
		if (checkBox22->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 25, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita ósmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziewiate wahad³o
		if (checkBox21->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 0, 0, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita dziewi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziesiate wahad³o
		if (checkBox26->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::FromArgb(255, 25, 0, 51);

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita dziesi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);
		}

		//ca³kowita wahad³o
		if (checkBox31->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEcWah = gcnew Panel;
			oknoEcWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEcWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEcWah->BackColor = System::Drawing::Color::ForestGreen;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Energia ca³kowita ca³oœci uk³adu";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEcWah);
			Legenda->Controls->Add(labelEpPWah);
		}

	}

	//Przestrzeñ faz
	if (checkBox16->Checked == true)
	{
		//pierwsze wahad³o
		if (checkBox20->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::Red;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa pierwszego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//drugie wahad³o

		if (checkBox19->Checked == true)
		{

			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::DodgerBlue;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa drugiego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//trzecie wahad³o
		if (checkBox18->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::DarkGreen;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa trzeciego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//czwarte wahad³o
		if (checkBox17->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::BurlyWood;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa czwartego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//piate wahad³o
		if (checkBox25->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEpPierwszegoWah = gcnew Panel;
			oknoEpPierwszegoWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEpPierwszegoWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEpPierwszegoWah->BackColor = System::Drawing::Color::Indigo;

			Label^ labelEpPierwszegoWah = gcnew Label;
			labelEpPierwszegoWah->Font = FontLegendy;
			labelEpPierwszegoWah->Text = "Przestrzeñ fazowa pi¹tego wahad³a";
			labelEpPierwszegoWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPierwszegoWah->AutoSize = true;

			Legenda->Controls->Add(oknoEpPierwszegoWah);
			Legenda->Controls->Add(labelEpPierwszegoWah);

		}

		//szoste wahad³o
		if (checkBox24->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::Crimson;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa szóstego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//siodme wahad³o
		if (checkBox23->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::DarkOrange;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa siódmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//osme wahad³o
		if (checkBox22->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::MediumTurquoise;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa ósmego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziewiate wahad³o
		if (checkBox21->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::Sienna;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa dziewi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;

			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);

		}

		//dziesiate wahad³o
		if (checkBox26->Checked == true)
		{


			iloscAktywnych += 1;

			Panel^ oknoEkWah = gcnew Panel;
			oknoEkWah->Size = System::Drawing::Size(10, 10);;

			pozycjaY = iloscAktywnych * beetweenHeight;

			oknoEkWah->Location = System::Drawing::Point(10, pozycjaY);
			oknoEkWah->BackColor = System::Drawing::Color::LawnGreen;

			Label^ labelEpPWah = gcnew Label;
			labelEpPWah->Font = FontLegendy;
			labelEpPWah->Text = "Przestrzeñ fazowa dziesi¹tego wahad³a";
			labelEpPWah->Location = System::Drawing::Point(25, pozycjaY - 5);
			labelEpPWah->AutoSize = true;


			Legenda->Controls->Add(oknoEkWah);
			Legenda->Controls->Add(labelEpPWah);
		}

	}

	Legenda->Show();

	//zapis
	if (checkBox33->Checked == true)
	{

		//tworzenie obiektu graficznego przenosz¹cego informacjê pikselow¹ do bitmapy
		Bitmap^ Obraz = gcnew Bitmap(Legenda->Width, Legenda->Height);

		System::Drawing::Rectangle okno = System::Drawing::Rectangle(0,0,350, (zliczanie + 2) * 40);

		Legenda->DrawToBitmap(Obraz, okno);

		//pobieranie œcie¿ki do zapisu wykorzystuj¹c funkcje OdczytPliku

		Thread^ WatekOdczytu = gcnew Thread(gcnew ThreadStart(OdczytPliku));
		WatekOdczytu->TrySetApartmentState(ApartmentState::STA);

		WatekOdczytu->Start();

		WatekOdczytu->Join();

		if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
		{

			FileStream^ Odczyt = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapis.txt", FileMode::Open);
			StreamReader^ odczytSciezki = gcnew StreamReader(Odczyt);

			Obraz->Save(odczytSciezki->ReadLine());

			Odczyt->Close();
			odczytSciezki->Close();

		}

		Thread::Sleep(0);

		//usuwanie pliku tymczasowyzapis.txt s³u¿¹cy do przekierowania œcie¿ki odczyt->zapis
		if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
		{
			File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
		}

		Legenda->Close();
		checkBox33->Checked = false;
	}
	

	//zerowanie zmiennych
	zliczanie = 0;
	iloscAktywnych = 0;
}
private: System::Void Podgl¹dPomiarówToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Form^ PodgladPomiarow = gcnew Form;
		PodgladPomiarow->Text = "Podgl¹d pomiarów";
			PodgladPomiarow->Icon = System::Drawing::SystemIcons::Information;

	PodgladPomiarow->Show();
	//currentargTablicy -> aktualny krok Timera ( j )
	Pomiar^ WynikiEnergii = gcnew Pomiar();

	//w³aœciwoœci okienka
	PodgladPomiarow->Width = 1000;
	PodgladPomiarow->Height = 950;

	//PodgladPomiarow->Icon = MessageBoxIcon::Question;

//kontrolki
	Label^ Pomiary = gcnew Label();

	Pomiary->AutoSize = true;
	Pomiary->Location = System::Drawing::Point(10, 15);

	System::Drawing::Font^ FontLabel = gcnew System::Drawing::Font("Times New Roman", 8);

	Pomiary->Font = FontLabel;

	Pomiary->Text = "Pomiary wahade³ dla zadanych parametrów: " +
		Environment::NewLine +
			"\r\nWyniki uzyskane dla ca³ego uk³adu:" +
				"\r\nEnergia ca³kowita uk³adu:" + WynikiEnergii->Average(AllWahTabEc1, j) +
					"\r\nEnergia potencjalna uk³adu:" + WynikiEnergii->Average(AllWahTabEp1, j) +
						"\r\nEnergia kinetyczna uk³adu:" + WynikiEnergii->Average(AllWahTabEk1, j) +

		Environment::NewLine +
			"\r\nPierwsze wahad³o: " +
				"\r\nD³ugoœæ: " + PierwszeWah->length + "[m]" +
					"\r\nMasa: " + PierwszeWah->mass + "[kg]" +
						"\r\nWychylenie: " + PierwszeWah->nextposy + "[rad]" +
							"\r\nT³umienie: " + PierwszeWah->suppresion +

		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(PierwszeWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(PierwszeWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(PierwszeWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(PierwszeWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(PierwszeWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(PierwszeWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(PierwszeWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazPierwszegoy1, j) + "[rad/s]" +

		Environment::NewLine +
			"\r\nDrugie wahad³o: " +
				"\r\nD³ugoœæ: " + DrugieWah->length + "[m]" +
					"\r\nMasa: " + DrugieWah->mass + "[kg]" +
						"\r\nWychylenie: " + DrugieWah->nextposy + "[rad]" +
							"\r\nT³umienie: " + DrugieWah->suppresion +

		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DrugieWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DrugieWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DrugieWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DrugieWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DrugieWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DrugieWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DrugieWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazDrugiegoy1, j) + "[rad/s]" +
		Environment::NewLine +
			"\r\nTrzecie wahad³o: " +
				"\r\nD³ugoœæ: " + TrzecieWah->length + "[m]" +
					"\r\nMasa: " + TrzecieWah->mass + "[kg]" +
						"\r\nWychylenie: " + TrzecieWah->nextposy + "rad" +
							"\r\nT³umienie: " + TrzecieWah->suppresion +

		Environment::NewLine +
			"\r\nUzyskane wyniki: " +
				"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(TrzecieWahTabEc1, j) + "[J]" +
					"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(TrzecieWahTabEp1, j) + "[J]" +
						"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(TrzecieWahTabEp1, j) + "[J]" +
							"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(TrzecieWahTabEp1, j) + "[J]" +
								"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(TrzecieWahTabEk1, j) + "[J]" +
									"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(TrzecieWahTabEk1, j) + "[J]" +
										"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(TrzecieWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazTrzeciegoy1, j) + "[rad/s]" +
		Environment::NewLine;


	Label^ Pomiary2 = gcnew Label;

	Pomiary2->Font = FontLabel;
		Pomiary2->Location = System::Drawing::Point(300, 15);
			Pomiary2->AutoSize = true;
	
			Pomiary2->Text =
				"\r\nCzwarte wahad³o: " +
					"\r\nD³ugoœæ: " + CzwarteWah->length + "[m]" +
						"\r\nMasa: " + CzwarteWah->mass + "[kg]" +
							"\r\nWychylenie: " + CzwarteWah->nextposy + "[rad]" +
								"\r\nT³umienie: " + CzwarteWah->suppresion +
	
				Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(CzwarteWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(CzwarteWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(CzwarteWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(CzwarteWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(CzwarteWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(CzwarteWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(CzwarteWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ:: " + WynikiEnergii->Max(PrzFazCzwartegoy1, j) + "[rad/s]" +
														"\r\nPiate wahad³o: " +
															"\r\nD³ugoœæ: " + PiateWah->length + "[m]" +
																"\r\nMasa: " + PiateWah->mass + "[kg]" +
																	"\r\nWychylenie: " + PiateWah->nextposy + "[rad]" +
																		"\r\nT³umienie: " + PiateWah->suppresion +

				Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(PiateWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(PiateWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(PiateWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(PiateWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(PiateWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(PiateWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(PiateWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazPiategoy1, j) + "[rad/s]" +
				Environment::NewLine +
					"\r\nSzoste wahad³o: " +
						"\r\nD³ugoœæ: " + SzosteWah->length + "[m]" +
							"\r\nMasa: " + SzosteWah->mass + "[kg]" +
								"\r\nWychylenie: " + SzosteWah->nextposy  + "[rad]" +
									"\r\nT³umienie: " + SzosteWah->suppresion +

				Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(SzosteWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(SzosteWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(SzosteWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(SzosteWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(SzosteWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(SzosteWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(SzosteWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazSzostegoy1, j) + "[rad/s]" +
				Environment::NewLine +
					"\r\nSiodme wahad³o: " +
						"\r\nD³ugoœæ: " + SiodmeWah->length + "[m]" +
							"\r\nMasa: " + SiodmeWah->mass + "[kg]" +
								"\r\nWychylenie: " + SiodmeWah->nextposy + "[rad]" +
									"\r\nT³umienie: " + SiodmeWah->suppresion +

				Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(SiodmeWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(SiodmeWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(SiodmeWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(SiodmeWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(SiodmeWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(SiodmeWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(SiodmeWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazSiodmegoy1, j) + "[rad/s]" +
				Environment::NewLine;


		Label^ Pomiary3 = gcnew Label;

			Pomiary3->Font = FontLabel;
				Pomiary3->Location = System::Drawing::Point(600, 15);
					Pomiary3->AutoSize = true;

			Pomiary3->Text = "\r\nOsme wahad³o: " +
				"\r\nD³ugoœæ: " + OsmeWah->length + "[m]" +
					"\r\nMasa: " + OsmeWah->mass + "[kg]" +
						"\r\nWychylenie: " + OsmeWah->nextposy  + "[rad]" +
							"\r\nT³umienie: " + OsmeWah->suppresion +

				Environment::NewLine +
					"\r\nUzyskane wyniki: " +
						"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(OsmeWahTabEc1, j) + "[J]" +
							"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(OsmeWahTabEp1, j) + "[J]" +
								"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(OsmeWahTabEp1, j) + "[J]" +
									"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(OsmeWahTabEp1, j) + "[J]" +
										"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(OsmeWahTabEk1, j) + "[J]" +
											"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(OsmeWahTabEk1, j) + "[J]" +
												"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(OsmeWahTabEk1, j) + "[J]" +
													"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazOsmegoy1, j) + "[rad/s]"+
				Environment::NewLine +
					"\r\nDziewiate wahad³o: " +
						"\r\nD³ugoœæ: " + DziewiateWah->length + "[m]" +
							"\r\nMasa: " + DziewiateWah->mass + "[kg]" +
								"\r\nWychylenie: " + DziewiateWah->nextposy+ "[rad]" +
									"\r\nT³umienie: " + DziewiateWah->suppresion +

			Environment::NewLine +
				"\r\nUzyskane wyniki: " +
					"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DziewiateWahTabEc1, j) + "[J]" +
						"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DziewiateWahTabEp1, j) + "[J]" +
							"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DziewiateWahTabEp1, j) + "[J]" +
								"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DziewiateWahTabEp1, j) + "[J]" +
									"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DziewiateWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DziewiateWahTabEk1, j) + "[J]" +
											"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DziewiateWahTabEk1, j) + "[J]" +
												"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazDziewiategoy1, j) + "[rad/s]" +
			Environment::NewLine +
				"\r\nDziesiate wahad³o: " +
					"\r\nD³ugoœæ: " + DziesiateWah->length + "[m]" +
						"\r\nMasa: " + DziesiateWah->mass + "[kg]" +
							"\r\nWychylenie: " + DziesiateWah->nextposy  + "[rad]" +
								"\r\nT³umienie: " + DziesiateWah->suppresion +
		
			Environment::NewLine +
				"\r\nUzyskane wyniki: " +
					"\r\nEnergia ca³kowita: " + WynikiEnergii->Average(DziesiateWahTabEc1, j) + "[J]" +
						"\r\nŒrednia energia potencjalna: " + WynikiEnergii->Average(DziesiateWahTabEp1, j) + "[J]" +
							"\r\nMaksymalna energia potencjalna: " + WynikiEnergii->Max(DziesiateWahTabEp1, j) + "[J]" +
								"\r\nMinimalna energia potencjalna: " + WynikiEnergii->Min(DziesiateWahTabEp1, j) + "[J]" +
									"\r\nŒrednia energia kinetyczna: " + WynikiEnergii->Average(DziesiateWahTabEk1, j) + "[J]" +
										"\r\nMaksymalna energia kinetyczna: " + WynikiEnergii->Max(DziesiateWahTabEk1, j) + "[J]" +
											"\r\nMinimalna energia kinetyczna: " + WynikiEnergii->Min(DziesiateWahTabEk1, j) + "[J]" +
												"\r\nMaksymalna prêdkoœæ: " + WynikiEnergii->Max(PrzFazDziesiategoy1, j) + "[rad/s]" +
			Environment::NewLine;
			
PodgladPomiarow->Controls->Add(Pomiary);
	PodgladPomiarow->Controls->Add(Pomiary2);
		PodgladPomiarow->Controls->Add(Pomiary3);

}
private: System::Void Poka¿WektoryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RysujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//mouse click-> mouse capture changed -> get info about current position-> calculate distance in time-> phase shift

	if (checkBox32->Checked == true)
	{
		checkBox32->Checked = false;
	}
	else
	{
		checkBox32->Checked = true;
	}

}
private: System::Void PrzyspieszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval -= changeInterval;

}
private: System::Void ZwolnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval += changeInterval;
}

private: System::Void LegendêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		checkBox33->Checked = true;
		
		legendaToolStripMenuItem->PerformClick();

}
private: System::Void CheckBox32_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void PomiarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//zapisz pomiar

	//pobieranie œcie¿ki do zapisu wykorzystuj¹c funkcje OdczytPliku
	Thread^ WatekOdczytu = gcnew Thread(gcnew ThreadStart(OdczytPliku));
	WatekOdczytu->TrySetApartmentState(ApartmentState::STA);

	WatekOdczytu->Start();

	WatekOdczytu->Join();

	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{

		FileStream^ Odczyt = gcnew FileStream("c:\\users\\public\\pictures\\tymczasowyzapis.txt", FileMode::Open);
		StreamReader^ odczytSciezki = gcnew StreamReader(Odczyt);

		StreamWriter^ pliksciezki = gcnew StreamWriter(odczytSciezki->ReadLine());

		pliksciezki->Write("Pomiary wykresów: " +
			Environment::NewLine +
			label89->Text+
			Environment::NewLine
		);


		Odczyt->Close();
		odczytSciezki->Close();
		pliksciezki->Close();

	}

	Thread::Sleep(0);

	//usuwanie pliku tymczasowyzapis.txt s³u¿¹cy do przekierowania œcie¿ki odczyt->zapis
	if (File::Exists("c:\\users\\public\\pictures\\tymczasowyzapis.txt"))
	{
		File::Delete("c:\\users\\public\\pictures\\tymczasowyzapis.txt");
	}

}
private: System::Void CheckBox33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void PictureBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	double Amplituda = 0, przesuniecieFazowe = 0;
	
	if (checkBox32->Checked == true)
	{
		pixelx = e->X;
		pixely = e->Y;

		if (wspolrzedne1 == true && wspolrzedne2 == true)
		{

			wspolrzedne1 = false;
				wspolrzedne2 = false;
		
				getmousex2 = getmousex1 = getmousey2 = getmousey1 = 0;
		}

		if (wspolrzedne1 == true && wspolrzedne2 == false)
		{
				label89->Text = "";
			getmousex2 = EkranWykresu->RealSzer(pixelx, pictureBox3->Width);
				getmousey2 = EkranWykresu->RealWys(pixely, pictureBox3->Height);

				pictureBox3->Invalidate();

				label89->Visible = true;
				label89->BringToFront();

				if (getmousey1 >= getmousey2)
				{
					Amplituda = getmousey1 - getmousey2;
				}
				else
				{
					Amplituda = getmousey2 - getmousey1;
				}

				if (getmousex1 >= getmousex2)
				{
					przesuniecieFazowe = getmousex1 - getmousex2;
				}
				else
				{
					przesuniecieFazowe = getmousex2 - getmousex1;
				}

				label89->Text = "Obliczenia-> Róznica miêdzy punktami osi x: " + przesuniecieFazowe.ToString("0.000") + "   " + "Róznica miêdzy punktami osi y: " + Amplituda.ToString("0.000");

			wspolrzedne2 = true;
		}

		if (wspolrzedne1 == false && wspolrzedne2 == false)
		{
			label89->Text = "";
			getmousex1 = EkranWykresu->RealSzer(pixelx, pictureBox3->Width);
				getmousey1 = EkranWykresu->RealWys(pixely, pictureBox3->Height);

				pictureBox3->Invalidate();
		
			wspolrzedne1 = true;
		}

	}

}
private: System::Void Poka¿WektoryToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void BelkaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox34->Checked == true)
	{
		checkBox34->Checked = false;
	}
	else
	{
		checkBox34->Checked = true;
	}

	pictureBox1->Invalidate();
}

private: System::Void Wspó³rzêdneToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Dziewi¹ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczDziewiateWah == true)
	{
		wlaczDziewiateWah = false;
	}
	else
	{
		wlaczDziewiateWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void T³oToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	ColorDialog^ Paleta = gcnew ColorDialog;

	Paleta->AllowFullOpen = true;
	Paleta->ShowHelp = true;

	Paleta->Color = MyForm::BackColor;

	if (Paleta->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		MyForm::BackColor = Paleta->Color;
	}
}
private: System::Void BelkaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox34->Checked == true)
	{
		checkBox34->Checked = false;
	}
	else
	{
		checkBox34->Checked = true;
	}

	pictureBox1->Invalidate();
}
private: System::Void SiatkaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox10->Checked == true)
	{
		checkBox10->Checked = false;
	}
	else
	{
		checkBox10->Checked = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void Wahad³aToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PierwszeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczPierwszeWah == true)
	{
		wlaczPierwszeWah = false;
	}
	else
	{
		wlaczPierwszeWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void DrugieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczDrugieWah == true)
	{
		wlaczDrugieWah = false;
	}
	else
	{
		wlaczDrugieWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void TrzecieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczTrzecieWah == true)
	{
		wlaczTrzecieWah = false;
	}
	else
	{
		wlaczTrzecieWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void CzwarteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczCzwarteWah == true)
	{
		wlaczCzwarteWah = false;
	}
	else
	{
		wlaczCzwarteWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void Pi¹teToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczPiateWah == true)
	{
		wlaczPiateWah = false;
	}
	else
	{
		wlaczPiateWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void SzósteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczSzosteWah == true)
	{
		wlaczSzosteWah = false;
	}
	else
	{
		wlaczSzosteWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void SiódmeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczSiodmeWah == true)
	{
		wlaczSiodmeWah = false;
	}
	else
	{
		wlaczSiodmeWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void ÓsmeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczOsmeWah == true)
	{
		wlaczOsmeWah = false;
	}
	else
	{
		wlaczOsmeWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void Dziesi¹teToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczDziesiateWah == true)
	{
		wlaczDziesiateWah = false;
	}
	else
	{
		wlaczDziesiateWah = true;
	}
	pictureBox1->Invalidate();
}
private: System::Void LinkaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczLinke == false)
	{
		wlaczLinke = true;
	}
	else
	{
		wlaczLinke = false;
	}

	pictureBox1->Invalidate();
}
private: System::Void Wspó³rzêdneToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label86->Visible == true)
	{
		label86->Visible = false;
	}
	else
	{
		label86->Visible = true;
	}

	pictureBox3->Invalidate();
}
private: System::Void OsieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wlaczOsie == true)
	{
		wlaczOsie = false;
	}
	else
	{
		wlaczOsie = true;
	}

	pictureBox3->Invalidate();
}


};
}
