#pragma once
#include"ArregloCirculo.h"
#include <vector>


namespace SEMANA10_PROGRA2_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			listacir = new CArregloCirculo();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Graphics ^gr;
		CArregloCirculo * listacir;

		/*Graphics ^gr;
		vector<CCirculo*> vectorcir;
		CCirculo  *objcir;*/


	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 362);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	/*	//Crando el canvas
		Graphics ^ gr = this->CreateGraphics();

		//Creadno un lapicero
		Pen ^ lapicero1 = gcnew Pen(Color::Red, 3);
		gr->DrawLine(lapicero1, 10, 10, 50, 50);
		//delete lapicero1;

		Pen ^ lapicero2 = gcnew Pen(Color::Blue, 3);
		gr->DrawLine(lapicero2, 50, 10, 10, 50);
		delete lapicero2;

		//Cmabiando el color del lapicero
		lapicero1->Color = Color::Green;

		gr->DrawLine(lapicero1, 200, 200, 700, 700);


		gr->DrawLine(Pens::Brown, 50, 50, 100, 50);

		//Creadno una brocha para rellenar
		SolidBrush^brocha = gcnew SolidBrush(Color::DarkGreen);
		gr->FillRectangle(brocha, 90, 40, 45, 45);
		gr->DrawRectangle(lapicero1, 90, 40, 45, 45);
		delete lapicero1;

		gr->FillEllipse(Brushes::DarkRed, 30, 40, 45, 45);
		gr->DrawEllipse(Pens::Black, 30, 40, 45, 45);
		delete brocha;

		Pen ^miLapiz = gcnew Pen(Color::FromArgb(255, 50, 0 ), 10);
		miLapiz->LineJoin = Drawing2D::LineJoin::Round;
		miLapiz->DashStyle = Drawing2D::DashStyle::Dash;
		gr->DrawRectangle(miLapiz, 65, 15, 200, 200);

		Drawing::Font ^miFuente = gcnew Drawing::Font("Arial Black", 15);
		gr->DrawString("Hola mundo", miFuente, Brushes::Black, 35, 70);

		int num = 0;
		gr->DrawString(num.ToString(), miFuente, Brushes::Yellow, 90, 95);
		*/
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		//gr = this->CreateGraphics();


	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		gr = this->CreateGraphics();
		gr->Clear(Color::Red);
		listacir->mostrar(gr);
		listacir->mover(gr);
		delete gr;
	}
private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (e->KeyChar=='C')
	{
		listacir->insertar();
	}


}
private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
}
};
}
