#pragma once

#include "BinaryExpression.h"
#include "ErrorHandling.h"
#include "UnaryExpression.h"
#include "Evaluator.hpp"
#include "History.h"
#include <msclr/marshal_cppstd.h>
#include <sstream>

double Ans = 0;
bool flag = false; // Flag untuk mengecek apakah tombol = ditekan
bool flagmr = false; // Flag untuk mengecek apakah tombol mr ditekan
string ekspresi = "";
History<double>* Hist = new History<double>();

namespace TubesOOP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ Button_7;
	private: System::Windows::Forms::Button^ Button_8;
	private: System::Windows::Forms::Button^ Button_9;
	private: System::Windows::Forms::Button^ Button_4;
	private: System::Windows::Forms::Button^ Button_5;
	private: System::Windows::Forms::Button^ Button_6;
	private: System::Windows::Forms::Button^ Button_1;
	private: System::Windows::Forms::Button^ Button_2;
	private: System::Windows::Forms::Button^ Button_3;
	private: System::Windows::Forms::Button^ Button_0;
	private: System::Windows::Forms::Button^ Button_Tan;

	private: System::Windows::Forms::Button^ Button_Dot;
	private: System::Windows::Forms::Button^ Button_Plus;
	private: System::Windows::Forms::Button^ Button_Minus;
	private: System::Windows::Forms::Button^ Button_Multiply;
	private: System::Windows::Forms::Button^ Button_Divide;
	private: System::Windows::Forms::Button^ Button_Sqrt;
	private: System::Windows::Forms::Button^ Button_Equal;
	private: System::Windows::Forms::Button^ Button_Clear;
	private: System::Windows::Forms::TextBox^ Layar_Hasil;
	private: System::Windows::Forms::Button^ Button_MC;
	private: System::Windows::Forms::Button^ Button_MR;

	private: System::Windows::Forms::Button^ Button_Ans;
	private: System::Windows::Forms::Button^ Button_Sin;
	private: System::Windows::Forms::Button^ Button_Cos;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Button_7 = (gcnew System::Windows::Forms::Button());
			this->Button_8 = (gcnew System::Windows::Forms::Button());
			this->Button_9 = (gcnew System::Windows::Forms::Button());
			this->Button_4 = (gcnew System::Windows::Forms::Button());
			this->Button_5 = (gcnew System::Windows::Forms::Button());
			this->Button_6 = (gcnew System::Windows::Forms::Button());
			this->Button_1 = (gcnew System::Windows::Forms::Button());
			this->Button_2 = (gcnew System::Windows::Forms::Button());
			this->Button_3 = (gcnew System::Windows::Forms::Button());
			this->Button_0 = (gcnew System::Windows::Forms::Button());
			this->Button_Tan = (gcnew System::Windows::Forms::Button());
			this->Button_Dot = (gcnew System::Windows::Forms::Button());
			this->Button_Plus = (gcnew System::Windows::Forms::Button());
			this->Button_Minus = (gcnew System::Windows::Forms::Button());
			this->Button_Multiply = (gcnew System::Windows::Forms::Button());
			this->Button_Divide = (gcnew System::Windows::Forms::Button());
			this->Button_Sqrt = (gcnew System::Windows::Forms::Button());
			this->Button_Equal = (gcnew System::Windows::Forms::Button());
			this->Button_Clear = (gcnew System::Windows::Forms::Button());
			this->Layar_Hasil = (gcnew System::Windows::Forms::TextBox());
			this->Button_MC = (gcnew System::Windows::Forms::Button());
			this->Button_MR = (gcnew System::Windows::Forms::Button());
			this->Button_Ans = (gcnew System::Windows::Forms::Button());
			this->Button_Sin = (gcnew System::Windows::Forms::Button());
			this->Button_Cos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Button_7
			// 
			this->Button_7->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_7->Location = System::Drawing::Point(12, 151);
			this->Button_7->Name = L"Button_7";
			this->Button_7->Size = System::Drawing::Size(72, 59);
			this->Button_7->TabIndex = 2;
			this->Button_7->Text = L"7";
			this->Button_7->UseVisualStyleBackColor = true;
			this->Button_7->Click += gcnew System::EventHandler(this, &MyForm::Button_7_Click);
			// 
			// Button_8
			// 
			this->Button_8->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_8->Location = System::Drawing::Point(101, 151);
			this->Button_8->Name = L"Button_8";
			this->Button_8->Size = System::Drawing::Size(72, 59);
			this->Button_8->TabIndex = 3;
			this->Button_8->Text = L"8";
			this->Button_8->UseVisualStyleBackColor = true;
			this->Button_8->Click += gcnew System::EventHandler(this, &MyForm::Button_8_Click);
			// 
			// Button_9
			// 
			this->Button_9->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Button_9->Location = System::Drawing::Point(188, 151);
			this->Button_9->Name = L"Button_9";
			this->Button_9->Size = System::Drawing::Size(72, 59);
			this->Button_9->TabIndex = 4;
			this->Button_9->Text = L"9";
			this->Button_9->UseVisualStyleBackColor = true;
			this->Button_9->Click += gcnew System::EventHandler(this, &MyForm::Button_9_Click);
			// 
			// Button_4
			// 
			this->Button_4->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_4->Location = System::Drawing::Point(12, 233);
			this->Button_4->Name = L"Button_4";
			this->Button_4->Size = System::Drawing::Size(72, 59);
			this->Button_4->TabIndex = 5;
			this->Button_4->Text = L"4";
			this->Button_4->UseVisualStyleBackColor = true;
			this->Button_4->Click += gcnew System::EventHandler(this, &MyForm::Button_4_Click);
			// 
			// Button_5
			// 
			this->Button_5->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_5->Location = System::Drawing::Point(101, 233);
			this->Button_5->Name = L"Button_5";
			this->Button_5->Size = System::Drawing::Size(72, 59);
			this->Button_5->TabIndex = 6;
			this->Button_5->Text = L"5";
			this->Button_5->UseVisualStyleBackColor = true;
			this->Button_5->Click += gcnew System::EventHandler(this, &MyForm::Button_5_Click);
			// 
			// Button_6
			// 
			this->Button_6->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_6->Location = System::Drawing::Point(188, 233);
			this->Button_6->Name = L"Button_6";
			this->Button_6->Size = System::Drawing::Size(72, 59);
			this->Button_6->TabIndex = 7;
			this->Button_6->Text = L"6";
			this->Button_6->UseVisualStyleBackColor = true;
			this->Button_6->Click += gcnew System::EventHandler(this, &MyForm::Button_6_Click);
			// 
			// Button_1
			// 
			this->Button_1->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_1->Location = System::Drawing::Point(12, 310);
			this->Button_1->Name = L"Button_1";
			this->Button_1->Size = System::Drawing::Size(72, 59);
			this->Button_1->TabIndex = 8;
			this->Button_1->Text = L"1";
			this->Button_1->UseVisualStyleBackColor = true;
			this->Button_1->Click += gcnew System::EventHandler(this, &MyForm::Button_1_Click);
			// 
			// Button_2
			// 
			this->Button_2->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_2->Location = System::Drawing::Point(101, 310);
			this->Button_2->Name = L"Button_2";
			this->Button_2->Size = System::Drawing::Size(72, 59);
			this->Button_2->TabIndex = 9;
			this->Button_2->Text = L"2";
			this->Button_2->UseVisualStyleBackColor = true;
			this->Button_2->Click += gcnew System::EventHandler(this, &MyForm::Button_2_Click);
			// 
			// Button_3
			// 
			this->Button_3->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_3->Location = System::Drawing::Point(188, 310);
			this->Button_3->Name = L"Button_3";
			this->Button_3->Size = System::Drawing::Size(72, 59);
			this->Button_3->TabIndex = 10;
			this->Button_3->Text = L"3";
			this->Button_3->UseVisualStyleBackColor = true;
			this->Button_3->Click += gcnew System::EventHandler(this, &MyForm::Button_3_Click);
			// 
			// Button_0
			// 
			this->Button_0->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_0->Location = System::Drawing::Point(12, 381);
			this->Button_0->Name = L"Button_0";
			this->Button_0->Size = System::Drawing::Size(72, 59);
			this->Button_0->TabIndex = 11;
			this->Button_0->Text = L"0";
			this->Button_0->UseVisualStyleBackColor = true;
			this->Button_0->Click += gcnew System::EventHandler(this, &MyForm::Button_0_Click);
			// 
			// Button_Tan
			// 
			this->Button_Tan->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Button_Tan->Location = System::Drawing::Point(363, 310);
			this->Button_Tan->Name = L"Button_Tan";
			this->Button_Tan->Size = System::Drawing::Size(72, 59);
			this->Button_Tan->TabIndex = 12;
			this->Button_Tan->Text = L"TAN";
			this->Button_Tan->UseVisualStyleBackColor = true;
			this->Button_Tan->Click += gcnew System::EventHandler(this, &MyForm::Button_Tan_Click);
			// 
			// Button_Dot
			// 
			this->Button_Dot->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Dot->Location = System::Drawing::Point(101, 381);
			this->Button_Dot->Name = L"Button_Dot";
			this->Button_Dot->Size = System::Drawing::Size(72, 59);
			this->Button_Dot->TabIndex = 13;
			this->Button_Dot->Text = L".";
			this->Button_Dot->UseVisualStyleBackColor = true;
			this->Button_Dot->Click += gcnew System::EventHandler(this, &MyForm::Button_Dot_Click);
			// 
			// Button_Plus
			// 
			this->Button_Plus->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Plus->Location = System::Drawing::Point(276, 310);
			this->Button_Plus->Name = L"Button_Plus";
			this->Button_Plus->Size = System::Drawing::Size(72, 59);
			this->Button_Plus->TabIndex = 14;
			this->Button_Plus->Text = L"+";
			this->Button_Plus->UseVisualStyleBackColor = true;
			this->Button_Plus->Click += gcnew System::EventHandler(this, &MyForm::Button_Plus_Click);
			// 
			// Button_Minus
			// 
			this->Button_Minus->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Minus->Location = System::Drawing::Point(276, 233);
			this->Button_Minus->Name = L"Button_Minus";
			this->Button_Minus->Size = System::Drawing::Size(72, 59);
			this->Button_Minus->TabIndex = 15;
			this->Button_Minus->Text = L"-";
			this->Button_Minus->UseVisualStyleBackColor = true;
			this->Button_Minus->Click += gcnew System::EventHandler(this, &MyForm::Button_Minus_Click);
			// 
			// Button_Multiply
			// 
			this->Button_Multiply->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Multiply->Location = System::Drawing::Point(276, 151);
			this->Button_Multiply->Name = L"Button_Multiply";
			this->Button_Multiply->Size = System::Drawing::Size(72, 59);
			this->Button_Multiply->TabIndex = 16;
			this->Button_Multiply->Text = L"x";
			this->Button_Multiply->UseVisualStyleBackColor = true;
			this->Button_Multiply->Click += gcnew System::EventHandler(this, &MyForm::Button_Multiply_Click);
			// 
			// Button_Divide
			// 
			this->Button_Divide->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Divide->Location = System::Drawing::Point(276, 381);
			this->Button_Divide->Name = L"Button_Divide";
			this->Button_Divide->Size = System::Drawing::Size(72, 59);
			this->Button_Divide->TabIndex = 17;
			this->Button_Divide->Text = L":";
			this->Button_Divide->UseVisualStyleBackColor = true;
			this->Button_Divide->Click += gcnew System::EventHandler(this, &MyForm::Button_Divide_Click);
			// 
			// Button_Sqrt
			// 
			this->Button_Sqrt->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Sqrt->Location = System::Drawing::Point(363, 381);
			this->Button_Sqrt->Name = L"Button_Sqrt";
			this->Button_Sqrt->Size = System::Drawing::Size(72, 59);
			this->Button_Sqrt->TabIndex = 18;
			this->Button_Sqrt->Text = L"√";
			this->Button_Sqrt->UseVisualStyleBackColor = true;
			this->Button_Sqrt->Click += gcnew System::EventHandler(this, &MyForm::Button_Sqrt_Click);
			// 
			// Button_Equal
			// 
			this->Button_Equal->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Equal->Location = System::Drawing::Point(188, 381);
			this->Button_Equal->Name = L"Button_Equal";
			this->Button_Equal->Size = System::Drawing::Size(72, 60);
			this->Button_Equal->TabIndex = 19;
			this->Button_Equal->Text = L"=";
			this->Button_Equal->UseVisualStyleBackColor = true;
			this->Button_Equal->Click += gcnew System::EventHandler(this, &MyForm::Button_Equal_Click);
			// 
			// Button_Clear
			// 
			this->Button_Clear->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Clear->Location = System::Drawing::Point(451, 381);
			this->Button_Clear->Name = L"Button_Clear";
			this->Button_Clear->Size = System::Drawing::Size(72, 59);
			this->Button_Clear->TabIndex = 20;
			this->Button_Clear->Text = L"CLEAR";
			this->Button_Clear->UseVisualStyleBackColor = true;
			this->Button_Clear->Click += gcnew System::EventHandler(this, &MyForm::Button_Clear_Click);
			// 
			// Layar_Hasil
			// 
			this->Layar_Hasil->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N R", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Layar_Hasil->Location = System::Drawing::Point(12, 19);
			this->Layar_Hasil->Multiline = true;
			this->Layar_Hasil->Name = L"Layar_Hasil";
			this->Layar_Hasil->ReadOnly = true;
			this->Layar_Hasil->Size = System::Drawing::Size(511, 113);
			this->Layar_Hasil->TabIndex = 21;
			// 
			// Button_MC
			// 
			this->Button_MC->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_MC->Location = System::Drawing::Point(451, 151);
			this->Button_MC->Name = L"Button_MC";
			this->Button_MC->Size = System::Drawing::Size(72, 59);
			this->Button_MC->TabIndex = 22;
			this->Button_MC->Text = L"MC";
			this->Button_MC->UseVisualStyleBackColor = true;
			this->Button_MC->Click += gcnew System::EventHandler(this, &MyForm::Button_MC_Click);
			// 
			// Button_MR
			// 
			this->Button_MR->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_MR->Location = System::Drawing::Point(451, 233);
			this->Button_MR->Name = L"Button_MR";
			this->Button_MR->Size = System::Drawing::Size(72, 59);
			this->Button_MR->TabIndex = 23;
			this->Button_MR->Text = L"MR";
			this->Button_MR->UseVisualStyleBackColor = true;
			this->Button_MR->Click += gcnew System::EventHandler(this, &MyForm::Button_MR_Click);
			// 
			// Button_Ans
			// 
			this->Button_Ans->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Ans->Location = System::Drawing::Point(451, 310);
			this->Button_Ans->Name = L"Button_Ans";
			this->Button_Ans->Size = System::Drawing::Size(72, 59);
			this->Button_Ans->TabIndex = 25;
			this->Button_Ans->Text = L"ANS";
			this->Button_Ans->UseVisualStyleBackColor = true;
			this->Button_Ans->Click += gcnew System::EventHandler(this, &MyForm::Button_Ans_Click);
			// 
			// Button_Sin
			// 
			this->Button_Sin->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Sin->Location = System::Drawing::Point(363, 151);
			this->Button_Sin->Name = L"Button_Sin";
			this->Button_Sin->Size = System::Drawing::Size(72, 59);
			this->Button_Sin->TabIndex = 26;
			this->Button_Sin->Text = L"SIN";
			this->Button_Sin->UseVisualStyleBackColor = true;
			this->Button_Sin->Click += gcnew System::EventHandler(this, &MyForm::Button_Sin_Click);
			// 
			// Button_Cos
			// 
			this->Button_Cos->Font = (gcnew System::Drawing::Font(L"Kozuka Mincho Pr6N H", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Cos->Location = System::Drawing::Point(363, 233);
			this->Button_Cos->Name = L"Button_Cos";
			this->Button_Cos->Size = System::Drawing::Size(72, 59);
			this->Button_Cos->TabIndex = 27;
			this->Button_Cos->Text = L"COS";
			this->Button_Cos->UseVisualStyleBackColor = true;
			this->Button_Cos->Click += gcnew System::EventHandler(this, &MyForm::Button_Cos_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(540, 453);
			this->Controls->Add(this->Button_Cos);
			this->Controls->Add(this->Button_Sin);
			this->Controls->Add(this->Button_Ans);
			this->Controls->Add(this->Button_MR);
			this->Controls->Add(this->Button_MC);
			this->Controls->Add(this->Layar_Hasil);
			this->Controls->Add(this->Button_Clear);
			this->Controls->Add(this->Button_Equal);
			this->Controls->Add(this->Button_Sqrt);
			this->Controls->Add(this->Button_Divide);
			this->Controls->Add(this->Button_Multiply);
			this->Controls->Add(this->Button_Minus);
			this->Controls->Add(this->Button_Plus);
			this->Controls->Add(this->Button_Dot);
			this->Controls->Add(this->Button_Tan);
			this->Controls->Add(this->Button_0);
			this->Controls->Add(this->Button_3);
			this->Controls->Add(this->Button_2);
			this->Controls->Add(this->Button_1);
			this->Controls->Add(this->Button_6);
			this->Controls->Add(this->Button_5);
			this->Controls->Add(this->Button_4);
			this->Controls->Add(this->Button_9);
			this->Controls->Add(this->Button_8);
			this->Controls->Add(this->Button_7);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"Calculator OOP";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		// BUTTON UNTUK OPERASI TAMBAHAN

		private: System::Void Button_Equal_Click(System::Object^ sender, System::EventArgs^ e) {
			flag = true;
			string input = ekspresi;
			Evaluator<double, double>* Eval = new Evaluator<double, double>();
			ekspresi = "";
			try {
				double result = Eval->solveExpression(input);
				Layar_Hasil->Text = gcnew String(result.ToString());
				Ans = result;
			}
			catch (BaseError * err) {
				Layar_Hasil->Text = gcnew String(err->getMessage().c_str());
			}
		}

		private: System::Void Button_MC_Click(System::Object^ sender, System::EventArgs^ e) {
			Hist->mc(Ans);
		}

		private: System::Void Button_MR_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				double get = Hist->mr();
				ostringstream strs;
				strs << get;
				string temp = strs.str();
				if (Layar_Hasil->Text->Contains("ERROR") || flag) {
					Layar_Hasil->Text = gcnew String(get.ToString());
					flag = false;
				}
				else {
					String^ temps = gcnew String(get.ToString());
					Layar_Hasil->Text = Layar_Hasil->Text + temps;
				}
				ekspresi = ekspresi + temp;
			}
			catch (BaseError * err) {
				Layar_Hasil->Text = gcnew String(err->getMessage().c_str());
			}
		}

		private: System::Void Button_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
			Layar_Hasil->Text = "";
			ekspresi = "";
			Hist->clear();
		}

		private: System::Void Button_Ans_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "Ans";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + gcnew String(Ans.ToString());
			}
			ostringstream strs;
			strs << Ans;
			string temp = strs.str();
			ekspresi = ekspresi + temp;
		}

			   // BUTTON UNTUK OPERASI ARITMATIKA

		private: System::Void Button_Plus_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR")) {
				Layar_Hasil->Text = "+";
			}
			else if (flag) {
				flag = false;
				Layar_Hasil->Text = "Ans+";
				ostringstream strs;
				strs << Ans;
				string temp = strs.str();
				ekspresi = ekspresi + temp;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "+";
			}
			ekspresi = ekspresi + "+";
		}

		private: System::Void Button_Minus_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR")) {
				Layar_Hasil->Text = "-";

			}
			else if (flag) {
				flag = false;
				Layar_Hasil->Text = "Ans-";
				ostringstream strs;
				strs << Ans;
				string temp = strs.str();
				ekspresi = ekspresi + temp;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "-";
			}
			if (ekspresi.length() == 0) {
				ekspresi = "~";
			}
			else {
				if (ekspresi.back() == '+' || ekspresi.back() == '-' || ekspresi.back() == '*' || ekspresi.back() == '/' || ekspresi.back() == '_' || ekspresi.back() == '$' || ekspresi.back() == '#' || ekspresi.back() == '@') {
					ekspresi = ekspresi + "~";
				}
				else {
					ekspresi = ekspresi + "-";
				}
			}
		}

		private: System::Void Button_Multiply_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR")) {
				Layar_Hasil->Text = "x";
			}
			else if (flag) {
				flag = false;
				Layar_Hasil->Text = "Ansx";
				ostringstream strs;
				strs << Ans;
				string temp = strs.str();
				ekspresi = ekspresi + temp;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "x";
			}
			ekspresi = ekspresi + "*";
		}

		private: System::Void Button_Divide_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR")) {
				Layar_Hasil->Text = "/";

			}
			else if (flag) {
				flag = false;
				Layar_Hasil->Text = "Ans/";
				ostringstream strs;
				strs << Ans;
				string temp = strs.str();
				ekspresi = ekspresi + temp;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "/";
			}
			ekspresi = ekspresi + "/";
		}

		private: System::Void Button_Sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "Sqrt";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "Sqrt";
			}
			ekspresi = ekspresi + "_";
		}

		private: System::Void Button_Dot_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = ".";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + ".";
			}
			ekspresi = ekspresi + ".";
		}

		private: System::Void Button_Sin_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "Sin";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "Sin";
			}
			ekspresi = ekspresi + "$";
		}

		private: System::Void Button_Cos_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "Cos";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "Cos";
			}
			ekspresi = ekspresi + "#";
		}

		private: System::Void Button_Tan_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "Tan";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "Tan";
			}
			ekspresi = ekspresi + "@";
		}

			   // BUTTON UNTUK ANGKA

		private: System::Void Button_0_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "0";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "0";
			}
			ekspresi = ekspresi + "0";
		}

		private: System::Void Button_1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "1";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "1";
			}
			ekspresi = ekspresi + "1";
		}

		private: System::Void Button_2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "2";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "2";
			}
			ekspresi = ekspresi + "2";
		}

		private: System::Void Button_3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "3";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "3";
			}
			ekspresi = ekspresi + "3";
		}

		private: System::Void Button_4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "4";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "4";
			}
			ekspresi = ekspresi + "4";
		}

		private: System::Void Button_5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "5";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "5";
			}
			ekspresi = ekspresi + "5";
		}

		private: System::Void Button_6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "6";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "6";
			}
			ekspresi = ekspresi + "6";
		}

		private: System::Void Button_7_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "7";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "7";
			}
			ekspresi = ekspresi + "7";
		}

		private: System::Void Button_8_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "8";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "8";
			}
			ekspresi = ekspresi + "8";
		}

		private: System::Void Button_9_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Layar_Hasil->Text->Contains("ERROR") || flag) {
				Layar_Hasil->Text = "9";
				flag = false;
			}
			else {
				Layar_Hasil->Text = Layar_Hasil->Text + "9";
			}
			ekspresi = ekspresi + "9";
		}

			   // UNTUK LAYAR

		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// do nothing
		}
	};
}
