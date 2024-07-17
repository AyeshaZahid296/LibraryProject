#pragma once

namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Return
	/// </summary>
	public ref class Return : public System::Windows::Forms::Form
	{
	public:
		Return(void)
		{

			InitializeComponent();
			populateReturnDt();
			populateMember_id(); //  member 

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Return()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ bookName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ memberName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ bookSt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ IssueDt;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ IssueBtn;


	private: System::Windows::Forms::DateTimePicker^ ReturnDt;
	private: System::Windows::Forms::Button^ ClearBtn;
	private: System::Windows::Forms::ComboBox^ memberIdCb;
	private: System::Windows::Forms::ComboBox^ bookIdCb;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Return::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bookName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->memberName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bookSt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->IssueDt = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->IssueBtn = (gcnew System::Windows::Forms::Button());
			this->ReturnDt = (gcnew System::Windows::Forms::DateTimePicker());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->memberIdCb = (gcnew System::Windows::Forms::ComboBox());
			this->bookIdCb = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->bookName);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->memberName);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->bookSt);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->IssueDt);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->IssueBtn);
			this->panel1->Controls->Add(this->ReturnDt);
			this->panel1->Controls->Add(this->ClearBtn);
			this->panel1->Controls->Add(this->memberIdCb);
			this->panel1->Controls->Add(this->bookIdCb);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1023, 640);
			this->panel1->TabIndex = 22;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(27, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Return::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(971, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(28, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Return::pictureBox1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(418, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 34);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Return Book";
			// 
			// bookName
			// 
			this->bookName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookName->Enabled = false;
			this->bookName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookName->Location = System::Drawing::Point(370, 276);
			this->bookName->Name = L"bookName";
			this->bookName->Size = System::Drawing::Size(556, 28);
			this->bookName->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(150, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Member Id";
			// 
			// memberName
			// 
			this->memberName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->memberName->Enabled = false;
			this->memberName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memberName->Location = System::Drawing::Point(370, 146);
			this->memberName->Name = L"memberName";
			this->memberName->Size = System::Drawing::Size(556, 28);
			this->memberName->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(149, 481);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Return Date\r\n";
			// 
			// bookSt
			// 
			this->bookSt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookSt->Enabled = false;
			this->bookSt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookSt->Location = System::Drawing::Point(370, 342);
			this->bookSt->Name = L"bookSt";
			this->bookSt->Size = System::Drawing::Size(556, 28);
			this->bookSt->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(150, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Issue Date";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(150, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 25);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Book Status";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(150, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Book Id";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(150, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Member Name";
			// 
			// IssueDt
			// 
			this->IssueDt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->IssueDt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IssueDt->Location = System::Drawing::Point(370, 412);
			this->IssueDt->Name = L"IssueDt";
			this->IssueDt->Size = System::Drawing::Size(556, 28);
			this->IssueDt->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label6->Location = System::Drawing::Point(150, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Book Name";
			// 
			// IssueBtn
			// 
			this->IssueBtn->BackColor = System::Drawing::SystemColors::Highlight;
			this->IssueBtn->FlatAppearance->BorderSize = 0;
			this->IssueBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->IssueBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IssueBtn->ForeColor = System::Drawing::Color::White;
			this->IssueBtn->Location = System::Drawing::Point(558, 561);
			this->IssueBtn->Name = L"IssueBtn";
			this->IssueBtn->Size = System::Drawing::Size(154, 33);
			this->IssueBtn->TabIndex = 8;
			this->IssueBtn->Text = L"Return";
			this->IssueBtn->UseVisualStyleBackColor = false;
			this->IssueBtn->Click += gcnew System::EventHandler(this, &Return::IssueBtn_Click_1);
			// 
			// ReturnDt
			// 
			this->ReturnDt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReturnDt->Enabled = false;
			this->ReturnDt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnDt->Location = System::Drawing::Point(370, 479);
			this->ReturnDt->Name = L"ReturnDt";
			this->ReturnDt->Size = System::Drawing::Size(556, 28);
			this->ReturnDt->TabIndex = 14;
			// 
			// ClearBtn
			// 
			this->ClearBtn->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClearBtn->FlatAppearance->BorderSize = 0;
			this->ClearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearBtn->ForeColor = System::Drawing::Color::White;
			this->ClearBtn->Location = System::Drawing::Point(304, 561);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(154, 33);
			this->ClearBtn->TabIndex = 10;
			this->ClearBtn->Text = L"Clear";
			this->ClearBtn->UseVisualStyleBackColor = false;
			// 
			// memberIdCb
			// 
			this->memberIdCb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->memberIdCb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memberIdCb->FormattingEnabled = true;
			this->memberIdCb->Location = System::Drawing::Point(370, 92);
			this->memberIdCb->Name = L"memberIdCb";
			this->memberIdCb->Size = System::Drawing::Size(556, 30);
			this->memberIdCb->TabIndex = 11;
			this->memberIdCb->Text = L"Select Member Id";
			this->memberIdCb->SelectedIndexChanged += gcnew System::EventHandler(this, &Return::memberIdCb_SelectedIndexChanged);
			// 
			// bookIdCb
			// 
			this->bookIdCb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookIdCb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookIdCb->FormattingEnabled = true;
			this->bookIdCb->Location = System::Drawing::Point(370, 198);
			this->bookIdCb->Name = L"bookIdCb";
			this->bookIdCb->Size = System::Drawing::Size(556, 30);
			this->bookIdCb->TabIndex = 12;
			this->bookIdCb->Text = L"Select Book Id";
			this->bookIdCb->SelectedIndexChanged += gcnew System::EventHandler(this, &Return::bookIdCb_SelectedIndexChanged);
			// 
			// Return
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 640);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Return";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Return";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectionString = "Data Source=DESKTOP-8BL3MIG;Initial Catalog=LibararyDB;Integrated Security=True;Encrypt=False";




		//private: void populateMemberIdCb()
		//{
		//	try
		//	{
		//		String^ query = "SELECT member_id FROM members;";
		//		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		//		SqlCommand^ command = gcnew SqlCommand(query, connection);

		//		connection->Open();
		//		SqlDataReader^ reader = command->ExecuteReader();
		//		while (reader->Read())
		//		{
		//			memberIdCb->Items->Add(reader->GetInt32(0));// Add member ID to the ComboBox

		//		}
		//		reader->Close();
		//		connection->Close();
		//	}
		//	catch (Exception^ ex)
		//	{
		//		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//	}

	
private:void  populate() {
	populateBookIdCb();
	/*populateMemberIdCb();*/
}
private: void populateBookIdCb()
{
	int memberId = Convert::ToInt32(memberIdCb->SelectedItem);
	try
	{
		String^ query = "SELECT irb.book_id FROM issue_return_books irb JOIN members m ON irb.member_id = m.member_id JOIN books b ON irb.member_id= @m_id;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@m_id", memberId);
		connection->Open();
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read())
		{
			bookIdCb->Items->Add(reader->GetInt32(0));
		}
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: void GetMemberName() {
	try
	{
		int memberId = Convert::ToInt32(memberIdCb->SelectedItem);
		String^ query = "SELECT CONCAT(first_name, ' ', last_name) AS name FROM members WHERE member_id = @memberId";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@memberId", memberId);

		connection->Open();
		Object^ result = command->ExecuteScalar();

		if (result != nullptr) {
			memberName->Text = result->ToString();
		}
		else {
			memberName->Text = "";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: void GetBookTitle(int id) {
	try
	{
		String^ query = "SELECT title FROM books WHERE book_id = @bookId;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@bookId", id);

		connection->Open();
		Object^ result = command->ExecuteScalar();

		if (result != nullptr) {
			bookName->Text = result->ToString();
		}
		else {
			bookName->Text = "";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: void GetBookStatus(int id) {
	try
	{
		String^ query = "SELECT status FROM books WHERE book_id = @bookId;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@bookId", id);

		connection->Open();
		Object^ result = command->ExecuteScalar();

		if (result != nullptr) {
			bookSt->Text = result->ToString();
		}
		else {
			bookSt->Text = "";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
	   //private: void CalculateDueDate() {
	   //	// Assuming  issue after 14 days
	   //	int dueDays = 14;
	   //	DateTime issueDate = IssueDt->Value;
	   //	DateTime dueDate = issueDate.AddDays(dueDays);
	   //	ReturnDt->Value = dueDate;
	   //}

private: void Clear_Form() {
	memberIdCb->SelectedIndex = -1; // Clear memberIdCb selection
	bookIdCb->SelectedIndex = -1; // Clear bookIdCb selection
	ReturnDt->Value = DateTime::Now; // Reset IssueDt to current date
	bookName->Clear(); // Clear bookName TextBox
	bookSt->Clear(); // Clear bookSt TextBox
	memberName->Clear(); // Clear memberName TextBox
	IssueDt->Enabled = false; // Disable IssueDt initially
}
private: void Issue() {
	if (memberIdCb->SelectedIndex == -1 || bookIdCb->SelectedIndex == -1 || bookSt->Text != "available") {
		MessageBox::Show("Please ensure all fields are filled.", "Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// Retrieve selected member ID and book ID
		int memberId = Convert::ToInt32(memberIdCb->SelectedItem);
		int bookId = Convert::ToInt32(bookIdCb->SelectedItem);
		DateTime issueDate = IssueDt->Value;
		DateTime dueDate = ReturnDt->Value;

		// Query to insert the issued book information
		String^ issueQuery = "INSERT INTO issue_return_books (member_id, book_id, issue_date) VALUES (@memberId, @bookId, @issueDate);";
		// Query to update the book status
		String^ updateBookQuery = "UPDATE books SET status = 'issued' WHERE book_id = @bookId;";

		// Establish connection to the database
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Execute the issue query
		SqlCommand^ issueCommand = gcnew SqlCommand(issueQuery, connection);
		issueCommand->Parameters->AddWithValue("@memberId", memberId);
		issueCommand->Parameters->AddWithValue("@bookId", bookId);
		issueCommand->Parameters->AddWithValue("@issueDate", issueDate);
		issueCommand->ExecuteNonQuery();

		// Execute the update book status query
		SqlCommand^ updateBookCommand = gcnew SqlCommand(updateBookQuery, connection);
		updateBookCommand->Parameters->AddWithValue("@bookId", bookId);
		updateBookCommand->ExecuteNonQuery();

		connection->Close();

		// Display success message
		MessageBox::Show("Book issued successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Clear the form
		Clear_Form();
		populateBookIdCb(); // Re-populate the book combo box to update the available books
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}



private:void  populateMember_id() {
	try
	{
		String^ query = "SELECT m.member_id FROM issue_return_books irb JOIN members m ON irb.member_id = m.member_id JOIN books b ON irb.book_id = b.book_id;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		connection->Open();
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read())
		{
			memberIdCb->Items->Add(reader->GetInt32(0));// Add member ID to the ComboBox

		}
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void memberIdCb_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	GetMemberName();
	populateBookIdCb();
}
private: System::Void ClearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Clear_Form();
}
private: System::Void bookIdCb_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	int bookId = Convert::ToInt32(bookIdCb->SelectedItem);
	int memberId = Convert::ToInt32(memberIdCb->SelectedItem);
	GetBookTitle(bookId);
	GetBookStatus(bookId);
	GetIssueDate(memberId, bookId);
}
private: void GetIssueDate(int memberId, int bookId)
{
	try
	{
		String^ query = "SELECT irb.issue_date "
			"FROM issue_return_books irb "
			"JOIN members m ON irb.member_id = m.member_id "
			"JOIN books b ON irb.book_id = b.book_id "
			"WHERE irb.member_id = @memberId AND irb.book_id = @bookId;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@memberId", memberId);
		command->Parameters->AddWithValue("@bookId", bookId);
		connection->Open();
		Object^ result = command->ExecuteScalar();
		connection->Close();
		if (result != nullptr)
		{
			IssueDt->Value = Convert::ToDateTime(result);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}private: void populateReturnDt() {
	ReturnDt->Value = DateTime::Now;
}

private: System::Void IssueBtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void memberIdCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	GetMemberName();
	populateBookIdCb();
}
private: System::Void bookIdCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int bookId = Convert::ToInt32(bookIdCb->SelectedItem);
	int memberId = Convert::ToInt32(memberIdCb->SelectedItem);
	GetBookTitle(bookId);
	GetBookStatus(bookId);
	GetIssueDate(memberId, bookId);
}
private: System::Void IssueBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
