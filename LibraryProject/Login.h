#pragma once
#include "HomePage.h"
namespace LibraryProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ userName;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel.BackgroundImage")));
			this->panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel->Controls->Add(this->pictureBox1);
			this->panel->Controls->Add(this->userName);
			this->panel->Controls->Add(this->button1);
			this->panel->Controls->Add(this->password);
			this->panel->Controls->Add(this->label3);
			this->panel->Controls->Add(this->label2);
			this->panel->Controls->Add(this->label1);
			this->panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(1072, 645);
			this->panel->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1032, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(28, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Login::pictureBox1_Click);
			// 
			// userName
			// 
			this->userName->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->Location = System::Drawing::Point(626, 254);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(283, 32);
			this->userName->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(626, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(283, 36);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(626, 364);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(283, 32);
			this->password->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(621, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(621, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(551, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Library Managment System";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 645);
			this->Controls->Add(this->panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Login_();
}
	
	private: Void Login_() {
		// Ensure both fields are filled
		if (userName->Text == "" || password->Text == "") {
			MessageBox::Show("Please ensure all fields are filled.", "Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		String^ correctUsername = "admin";
		String^ correctPassword = "admin";
		if (userName->Text == correctUsername && password->Text == correctPassword) {
			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			HomePage^ homePage = gcnew HomePage();
			homePage->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
