#pragma once

#include <Windows.h>
#include<iostream>
#include <sql.h>
#include <sqltypes.h>
#include <sqlext.h>



namespace SS7_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
//using namespace Sql::Data::SqlClient;

	/// <summary>
	/// Summary for CRUD
	/// </summary>
	public ref class CRUD : public System::Windows::Forms::Form
	{
	
	public:
		CRUD(void)
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
		~CRUD()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridView^  dataGridView1;











	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Called_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Calling_No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IMSI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Target_Country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mcc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mnc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LAC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cell_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sms_Message;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Phone_no;




















	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CRUD::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Called_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Calling_No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IMSI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Target_Country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mcc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mnc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LAC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cell_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sms_Message = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone_no = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(565, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CRUD::button2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(143, 12);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(153, 20);
			this->textBox10->TabIndex = 21;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &CRUD::textBox10_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(39, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Target Number:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {this->Called_No, 
				this->Calling_No, this->IMSI, this->Target_Country, this->Mcc, this->Mnc, this->LAC, this->Cell_ID, this->Sms_Message, this->Phone_no});
			this->dataGridView1->Location = System::Drawing::Point(12, 217);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(778, 116);
			this->dataGridView1->TabIndex = 23;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUD::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(315, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"/";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(344, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"IMEI";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(390, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 26;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(100, 49);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(610, 150);
			this->dataGridView2->TabIndex = 27;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUD::dataGridView2_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CRUD::button1_Click);
			// 
			// Called_No
			// 
			this->Called_No->HeaderText = L"Called_No";
			this->Called_No->Name = L"Called_No";
			// 
			// Calling_No
			// 
			this->Calling_No->HeaderText = L"Calling_No";
			this->Calling_No->Name = L"Calling_No";
			// 
			// IMSI
			// 
			this->IMSI->HeaderText = L"IMSI";
			this->IMSI->Name = L"IMSI";
			// 
			// Target_Country
			// 
			this->Target_Country->HeaderText = L"Target_Country";
			this->Target_Country->Name = L"Target_Country";
			// 
			// Mcc
			// 
			this->Mcc->HeaderText = L"MCC";
			this->Mcc->Name = L"Mcc";
			// 
			// Mnc
			// 
			this->Mnc->HeaderText = L"MNC";
			this->Mnc->Name = L"Mnc";
			// 
			// LAC
			// 
			this->LAC->HeaderText = L"LAC";
			this->LAC->Name = L"LAC";
			// 
			// Cell_ID
			// 
			this->Cell_ID->HeaderText = L"Cell_ID";
			this->Cell_ID->Name = L"Cell_ID";
			// 
			// Sms_Message
			// 
			this->Sms_Message->HeaderText = L"Sms_Message";
			this->Sms_Message->Name = L"Sms_Message";
			// 
			// Phone_no
			// 
			this->Phone_no->HeaderText = L"Phone_no";
			this->Phone_no->Name = L"Phone_no";
			// 
			// CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(850, 413);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"CRUD";
			this->Text = L"CRUD";
			this->Load += gcnew System::EventHandler(this, &CRUD::CRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
/*    SQLHANDLE sqlConnectionHandle = NULL;
    SQLHANDLE sqlStatementHandle  = NULL;
    SQLHANDLE sqlEnvHandle  = NULL;
	SQLRETURN retcode = 0;
	char SQLQUERY[] = "SELECT * FROM people"; 

	 if(SQL_SUCCESS!=SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlenvhandle))
        goto FINISHED;
    if(SQL_SUCCESS!=SQLSetEnvAttr(sqlenvhandle,SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0)) 
        goto FINISHED;
    
    if(SQL_SUCCESS!=SQLAllocHandle(SQL_HANDLE_DBC, sqlenvhandle, &sqlconnectionhandle))
        goto FINISHED;
    SQLCHAR retconstring[1024]; */
			 String^ target_val = textBox10->Text;
			
			  SqlConnection^ sqlcon = gcnew SqlConnection("Data Source=DELL3050\SQLEXPRESS;Initial Catalog=SS7;Integrated Security=True;Trusted_Connection=True;");
		 SqlCommand^ sqlcmd = gcnew SqlCommand("SELECT * FROM Edata ;", sqlcon);
			  // SqlCommand^ sqlcmd = gcnew SqlCommand("SELECT * FROM Edata WHERE Called_No = '"+target_val+"' OR Calling_No = '"+target_val+"'  ;", sqlcon);
			  
			   SqlDataReader^ myreader;
//Called_No, Calling_No, IMSI,Target_Country, MCC, MNC,LAC,Cell_ID,Latitude, Longitude, Sms_Message
			  try
			  {
				  SqlDataAdapter ^ sda =  gcnew SqlDataAdapter();
				  sda -> SelectCommand = sqlcmd;
				  DataTable^ gudataset = gcnew DataTable();
				  sda->Fill(gudataset);
				  BindingSource^ bsource = gcnew BindingSource();
				  bsource-> DataSource = gudataset;
				  dataGridView2 -> DataSource = bsource;
				  sda->Update(gudataset);
			  }
			  catch(Exception^ex)
			  {
			  MessageBox::Show(ex->Message);
			  }


		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void CRUD_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conString = "Data Source=DELL3050\SQLEXPRESS;Initial Catalog=SS7;Integrated Security=True";
			 SqlConnection^ con = gcnew SqlConnection("Data Source=DELL3050\SQLEXPRESS;Initial Catalog=SS7;Integrated Security=True;");//;Trusted_Connection=True;
			con->Open();
			 String^ name ="aa"; 
			String ^ email = "gmail";
			// String^ called = 
			 //SqlCommand^ sqlcmd = gcnew SqlCommand("INSERT into Edata values('"+name+"', '"+email+"', conString)")
			 for(int i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
			 {
				
			//SqlCommand^  sqlcmd = gcnew S23qlCommand("INSERT into Edata values('"+name+"', '"+email+"');", con);
	 SqlCommand^ sqlcmd = gcnew SqlCommand("insert into Edata(Called_no, Calling_no, IMSI,Target_Country,MCC,MNC,LAC,Cell_ID,Sms_Message) values('"+dataGridView1->Rows[i]->Cells[0]->Value+"', '"+dataGridView1->Rows[i]->Cells[1]->Value+"','"+dataGridView1->Rows[i]->Cells[2]->Value+"', '"+dataGridView1->Rows[i]->Cells[3]->Value+"', '"+dataGridView1->Rows[i]->Cells[4]->Value+"', '"+dataGridView1->Rows[i]->Cells[5]->Value+"', '"+dataGridView1->Rows[i]->Cells[6]->Value+"', '"+dataGridView1->Rows[i]->Cells[7]->Value+"', '"+dataGridView1->Rows[i]->Cells[8]->Value+"');", con);
			 sqlcmd->ExecuteNonQuery();
			 }
			   MessageBox::Show( " Saved!" );
		 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}
