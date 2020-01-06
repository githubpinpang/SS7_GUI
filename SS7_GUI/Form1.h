#pragma once
#include "stdAfx.h"
#include "help.h"
#include "CRUD.h"

namespace SS7_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		
		static int Second;
		static int Minute;
		String^ Sec;
	private: System::Windows::Forms::Button^  button2;
			 String^ Min;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  Time;

	private: System::ComponentModel::IContainer^  components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(199, 307);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Location = System::Drawing::Point(135, 1);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(28, 13);
			this->Time->TabIndex = 2;
			this->Time->Text = L"0 : 0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 49);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SS7_Database";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 326);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 help^ hlp = gcnew help();
					 hlp-> ShowDialog();
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Second++;
				 if(Second == 60)
				 {
					 Second = 0;
				 Minute++;
				 }
				 Sec = Convert::ToString(Second);
				 Min = Convert::ToString(Minute);
				 Time->Text = Min + ":" + Sec;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->Hide();
				 CRUD^ crd = gcnew CRUD();
					 crd-> ShowDialog();
		 }
};
}

