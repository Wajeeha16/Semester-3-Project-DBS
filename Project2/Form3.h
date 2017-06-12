#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  StudentID_txt;
	private: System::Windows::Forms::TextBox^  EquipmentID_txt;
	private: System::Windows::Forms::TextBox^  BorrowDate_txt;
	private: System::Windows::Forms::TextBox^  ReturnDate_txt;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StudentID_txt = (gcnew System::Windows::Forms::TextBox());
			this->EquipmentID_txt = (gcnew System::Windows::Forms::TextBox());
			this->BorrowDate_txt = (gcnew System::Windows::Forms::TextBox());
			this->ReturnDate_txt = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(289, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(716, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 524);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(138, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Borrow";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"StudentID";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"EquipmentID";
			this->label2->Click += gcnew System::EventHandler(this, &Form3::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 244);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Borrow Date";
			this->label3->Click += gcnew System::EventHandler(this, &Form3::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Return Date";
			// 
			// StudentID_txt
			// 
			this->StudentID_txt->Location = System::Drawing::Point(138, 147);
			this->StudentID_txt->Name = L"StudentID_txt";
			this->StudentID_txt->Size = System::Drawing::Size(132, 20);
			this->StudentID_txt->TabIndex = 8;
			// 
			// EquipmentID_txt
			// 
			this->EquipmentID_txt->Location = System::Drawing::Point(138, 194);
			this->EquipmentID_txt->Name = L"EquipmentID_txt";
			this->EquipmentID_txt->Size = System::Drawing::Size(132, 20);
			this->EquipmentID_txt->TabIndex = 9;
			// 
			// BorrowDate_txt
			// 
			this->BorrowDate_txt->Location = System::Drawing::Point(138, 241);
			this->BorrowDate_txt->Name = L"BorrowDate_txt";
			this->BorrowDate_txt->Size = System::Drawing::Size(132, 20);
			this->BorrowDate_txt->TabIndex = 10;
			// 
			// ReturnDate_txt
			// 
			this->ReturnDate_txt->Location = System::Drawing::Point(138, 287);
			this->ReturnDate_txt->Name = L"ReturnDate_txt";
			this->ReturnDate_txt->Size = System::Drawing::Size(132, 20);
			this->ReturnDate_txt->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(473, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Show Equipment Information";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(393, 147);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(347, 187);
			this->dataGridView1->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(496, 351);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Show Borrow Details";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(393, 380);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(347, 118);
			this->dataGridView2->TabIndex = 15;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(816, 575);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->ReturnDate_txt);
			this->Controls->Add(this->BorrowDate_txt);
			this->Controls->Add(this->EquipmentID_txt);
			this->Controls->Add(this->StudentID_txt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form3";
			this->Text = L"Borrow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ constring = L"datasource=localhost;port=3306;username=root;password=root"; 
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into madlabs.borrow_details (StudentID, EquipmentID, Borrow_date, Return_date) values('"+this->StudentID_txt->Text+"' , '"+this->EquipmentID_txt->Text+"' , '"+this->BorrowDate_txt->Text+"' , '"+this->ReturnDate_txt->Text+"') ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 
					 MessageBox::Show("The equipment is successfully borrowed from Basic Electronics Lab. Your key is 1234. You may collect the equipment from the lab.");

					 while(myReader->Read())
					 {
						
					 }
					 
				 }
				 catch(Exception^ ex)
				 {
                    MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: void Fillcombo(void){
			 String^ constring = L"datasource=localhost;port=3306;username=root;password=root"; 
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from madlabs.equipment ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 
					

					 while(myReader->Read())
					 {
						/*String^ eID;
						eID = myReader->GetString("EquipmentID");
						listBox1->Items->Add(eID);*/
					 }
					 
				 }
				 catch(Exception^ ex)
				 {
                    MessageBox::Show(ex->Message);
				 }
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			     String^ constring = L"datasource=localhost;port=3306;username=root;password=root"; 
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from madlabs.equipment ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					sda->SelectCommand = cmdDataBase;
					DataTable^ dbdataset = gcnew DataTable();
					sda->Fill(dbdataset);
					BindingSource^ bSource = gcnew BindingSource();

					bSource->DataSource = dbdataset;
					dataGridView1->DataSource = bSource;
					sda->Update(dbdataset);

				 }
				 catch(Exception^ ex)
				 {
                    MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			     String^ constring = L"datasource=localhost;port=3306;username=root;password=root"; 
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from madlabs.borrow_details ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {
					MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					sda->SelectCommand = cmdDataBase;
					DataTable^ dbdataset = gcnew DataTable();
					sda->Fill(dbdataset);
					BindingSource^ bSource = gcnew BindingSource();

					bSource->DataSource = dbdataset;
					dataGridView2->DataSource = bSource;
					sda->Update(dbdataset);

				 }
				 catch(Exception^ ex)
				 {
                    MessageBox::Show(ex->Message);
				 }
		 }
};
}
