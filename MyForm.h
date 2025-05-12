#pragma once

namespace Lb10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(103, 45);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 295);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(98, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Читати з файла";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(523, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(462, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 27);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Добуток чисел, кратних 3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(568, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 27);
			this->label2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(470, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(275, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Записати в файл";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(889, 476);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname = "numbers.txt";
		if (File::Exists(fname)) {
			StreamReader^ reader = File::OpenText(fname);

			textBox1->Clear();

			String^ fileContent = reader->ReadToEnd();

			array<String^>^ numbers = fileContent->Split(' ');

			for (int i = 0; i < numbers->Length; i++) {
				textBox1->AppendText(numbers[i] + Environment::NewLine);
			}

			reader->Close();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int product = 1;

	for (int i = 0; i < textBox1->Lines->Length; i++)
	{
		int number;
		if (int::TryParse(textBox1->Lines[i], number))
		{
			if (number % 3 == 0)
			{
				product *= number;
			}
		}
	}

	label2->Text = Convert::ToString(product);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "output.txt";
	StreamWriter^ writer = File::CreateText(fileName);

	int product = 1;

	for (int i = 0; i < textBox1->Lines->Length; i++) {
		int number;
		if (int::TryParse(textBox1->Lines[i], number)) {
			if (number % 3 == 0) {
				product *= number;
				writer->WriteLine(number);
			}
		}
	}

	writer->WriteLine("Добуток чисел, кратних 3: " + Convert::ToString(product));
	writer->Close();

	MessageBox::Show("Числа, кратні 3, та їх добуток було записано у файл " + fileName);
}
};
}
