#pragma once
#include "IssueBook.h";
#include "Login.h";
#include "Return.h";
#include "MMember.h";
#include "Author.h";
#include "Books.h";
namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void)
		{
			InitializeComponent();
			populate_report();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ MembersBT;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ issuedBooksLbl;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ totalBooksLbl;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ totolMemberslbl;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ ReturnedBooksLbl;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->totolMemberslbl = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ReturnedBooksLbl = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->issuedBooksLbl = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->totalBooksLbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MembersBT = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(118, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 35);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Library Managment System";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(228, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(795, 640);
			this->panel2->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->totolMemberslbl);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Location = System::Drawing::Point(536, 260);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(232, 114);
			this->panel6->TabIndex = 8;
			// 
			// totolMemberslbl
			// 
			this->totolMemberslbl->AutoSize = true;
			this->totolMemberslbl->BackColor = System::Drawing::Color::Transparent;
			this->totolMemberslbl->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totolMemberslbl->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->totolMemberslbl->Location = System::Drawing::Point(102, 61);
			this->totolMemberslbl->Name = L"totolMemberslbl";
			this->totolMemberslbl->Size = System::Drawing::Size(29, 34);
			this->totolMemberslbl->TabIndex = 6;
			this->totolMemberslbl->Text = L"*";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label10->Location = System::Drawing::Point(24, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 27);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Total Members";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Gainsboro;
			this->panel5->Controls->Add(this->ReturnedBooksLbl);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(152, 260);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(232, 114);
			this->panel5->TabIndex = 7;
			// 
			// ReturnedBooksLbl
			// 
			this->ReturnedBooksLbl->AutoSize = true;
			this->ReturnedBooksLbl->BackColor = System::Drawing::Color::Transparent;
			this->ReturnedBooksLbl->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnedBooksLbl->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ReturnedBooksLbl->Location = System::Drawing::Point(102, 61);
			this->ReturnedBooksLbl->Name = L"ReturnedBooksLbl";
			this->ReturnedBooksLbl->Size = System::Drawing::Size(29, 34);
			this->ReturnedBooksLbl->TabIndex = 6;
			this->ReturnedBooksLbl->Text = L"*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(23, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(206, 27);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Returned Books";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gainsboro;
			this->panel4->Controls->Add(this->issuedBooksLbl);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(536, 116);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(232, 114);
			this->panel4->TabIndex = 7;
			// 
			// issuedBooksLbl
			// 
			this->issuedBooksLbl->AutoSize = true;
			this->issuedBooksLbl->BackColor = System::Drawing::Color::Transparent;
			this->issuedBooksLbl->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issuedBooksLbl->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->issuedBooksLbl->Location = System::Drawing::Point(102, 61);
			this->issuedBooksLbl->Name = L"issuedBooksLbl";
			this->issuedBooksLbl->Size = System::Drawing::Size(29, 34);
			this->issuedBooksLbl->TabIndex = 6;
			this->issuedBooksLbl->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label6->Location = System::Drawing::Point(35, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Issued Books";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gainsboro;
			this->panel3->Controls->Add(this->totalBooksLbl);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(152, 116);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(232, 114);
			this->panel3->TabIndex = 5;
			// 
			// totalBooksLbl
			// 
			this->totalBooksLbl->AutoSize = true;
			this->totalBooksLbl->BackColor = System::Drawing::Color::Transparent;
			this->totalBooksLbl->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalBooksLbl->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->totalBooksLbl->Location = System::Drawing::Point(102, 61);
			this->totalBooksLbl->Name = L"totalBooksLbl";
			this->totalBooksLbl->Size = System::Drawing::Size(29, 34);
			this->totalBooksLbl->TabIndex = 6;
			this->totalBooksLbl->Text = L"*";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(38, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Total Books";
			// 
			// MembersBT
			// 
			this->MembersBT->BackColor = System::Drawing::SystemColors::Highlight;
			this->MembersBT->FlatAppearance->BorderSize = 0;
			this->MembersBT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MembersBT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MembersBT->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->MembersBT->Location = System::Drawing::Point(-8, 204);
			this->MembersBT->Name = L"MembersBT";
			this->MembersBT->Size = System::Drawing::Size(237, 38);
			this->MembersBT->TabIndex = 0;
			this->MembersBT->Text = L"Manage Members";
			this->MembersBT->UseVisualStyleBackColor = false;
			this->MembersBT->Click += gcnew System::EventHandler(this, &HomePage::MembersBT_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button1->Location = System::Drawing::Point(-8, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Issue Books";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomePage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button2->Location = System::Drawing::Point(-8, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(237, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Return Books";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &HomePage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button3->Location = System::Drawing::Point(-8, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(237, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Manage Books";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &HomePage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button4->Location = System::Drawing::Point(-8, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(237, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Manage Author";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &HomePage::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->MembersBT);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(229, 640);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomePage::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(69, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ayesha";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button5->Location = System::Drawing::Point(-8, 545);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(237, 38);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &HomePage::button5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(755, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(28, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 640);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HomePage";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	String^ connectionString = "Data Source=DESKTOP-8BL3MIG;Initial Catalog=LibararyDB;Integrated Security=True;Encrypt=False";


private: System::Void MembersBT_Click(System::Object^ sender, System::EventArgs^ e) {
	LibraryProject::MMember^ mmember = gcnew MMember();
	mmember->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LibraryProject::IssueBook^ issueBook = gcnew IssueBook();
	issueBook->Show();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LibraryProject::Return^ h = gcnew Return();
	h->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	LibraryProject::Author^ MAuthor = gcnew Author();
	MAuthor->Show();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	LibraryProject::Books^ MBook = gcnew Books();
	MBook->Show();
}
private: void populate_report() {
	GetMemberCount();
	GetBooksCount();
	GetIssuedBooksCount();
	GetReturnedBooksCount();
}
	 private: void GetMemberCount() {

		 String^ query = L"SELECT COUNT(member_id) FROM members";

		 SqlConnection^ connection = gcnew SqlConnection(connectionString);
		 SqlCommand^ command = gcnew SqlCommand(query, connection);

		 try
		 {
			 connection->Open();
			 int memberCount = (int)command->ExecuteScalar();
			 this->totolMemberslbl->Text = memberCount.ToString();
		 }
		 catch (Exception^ ex)
		 {
			 MessageBox::Show(ex->Message);
		 }
		 finally
		 {
			 if (connection->State == ConnectionState::Open)
			 {
				 connection->Close();
			 }
		 }
	 }
	 
	private: void GetBooksCount() {
		String^ query = L"SELECT COUNT(b.book_id) FROM books b LEFT JOIN authors a ON b.author_id = a.author_id;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		try
		{
			connection->Open();
			int memberCount = (int)command->ExecuteScalar();
			this->totalBooksLbl->Text = memberCount.ToString();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
		}
	}
	private: void GetReturnedBooksCount() {
		String^ query = L"SELECT COUNT(irb.issue_id) "
			L"FROM issue_return_books irb "
			L"JOIN books b ON irb.book_id = b.book_id "
			L"JOIN members m ON irb.member_id = m.member_id "
			L"WHERE irb.return_date IS NOT NULL;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		try
		{
			connection->Open();
			int returnedBooksCount = (int)command->ExecuteScalar();
			this->ReturnedBooksLbl->Text = returnedBooksCount.ToString();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
		}
	}

	private: void GetIssuedBooksCount() {
		String^ query = L"SELECT COUNT(irb.issue_id) "
			L"FROM issue_return_books irb "
			L"JOIN books b ON irb.book_id = b.book_id "
			L"JOIN members m ON irb.member_id = m.member_id "
			L"WHERE irb.return_date IS NULL;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		try
		{
			connection->Open();
			int issuedBooksCount = (int)command->ExecuteScalar();
			this->issuedBooksLbl->Text = issuedBooksCount.ToString();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
		}
	}

};
}
