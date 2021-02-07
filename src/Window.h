#pragma once

namespace VijenerCryptorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ file_ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exit_ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutApp_ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ word_textBox;
	private: System::Windows::Forms::TextBox^ key_textBox;
	private: System::Windows::Forms::Button^ encrypt_button;
	private: System::Windows::Forms::Button^ decrypt_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ result_textBox;
	private: System::Windows::Forms::ComboBox^ alphabet_comboBox;


	private: System::Windows::Forms::Label^ label4;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Window::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->file_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutApp_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->word_textBox = (gcnew System::Windows::Forms::TextBox());
			this->key_textBox = (gcnew System::Windows::Forms::TextBox());
			this->encrypt_button = (gcnew System::Windows::Forms::Button());
			this->decrypt_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->result_textBox = (gcnew System::Windows::Forms::TextBox());
			this->alphabet_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->file_ToolStripMenuItem,
					this->aboutApp_ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// file_ToolStripMenuItem
			// 
			this->file_ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exit_ToolStripMenuItem });
			this->file_ToolStripMenuItem->Name = L"file_ToolStripMenuItem";
			this->file_ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->file_ToolStripMenuItem->Text = L"Файл";
			// 
			// exit_ToolStripMenuItem
			// 
			this->exit_ToolStripMenuItem->Name = L"exit_ToolStripMenuItem";
			this->exit_ToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->exit_ToolStripMenuItem->Text = L"Выход";
			this->exit_ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::exit_ToolStripMenuItem_Click);
			// 
			// aboutApp_ToolStripMenuItem
			// 
			this->aboutApp_ToolStripMenuItem->Name = L"aboutApp_ToolStripMenuItem";
			this->aboutApp_ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->aboutApp_ToolStripMenuItem->Text = L"О программе";
			this->aboutApp_ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::aboutApp_ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Слово: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ключ: ";
			// 
			// word_textBox
			// 
			this->word_textBox->Location = System::Drawing::Point(12, 64);
			this->word_textBox->Name = L"word_textBox";
			this->word_textBox->Size = System::Drawing::Size(260, 20);
			this->word_textBox->TabIndex = 3;
			// 
			// key_textBox
			// 
			this->key_textBox->Location = System::Drawing::Point(12, 103);
			this->key_textBox->Name = L"key_textBox";
			this->key_textBox->Size = System::Drawing::Size(138, 20);
			this->key_textBox->TabIndex = 4;
			// 
			// encrypt_button
			// 
			this->encrypt_button->Location = System::Drawing::Point(12, 129);
			this->encrypt_button->Name = L"encrypt_button";
			this->encrypt_button->Size = System::Drawing::Size(92, 23);
			this->encrypt_button->TabIndex = 5;
			this->encrypt_button->Text = L"Зашифровать";
			this->encrypt_button->UseVisualStyleBackColor = true;
			this->encrypt_button->Click += gcnew System::EventHandler(this, &Window::encrypt_button_Click);
			// 
			// decrypt_button
			// 
			this->decrypt_button->Location = System::Drawing::Point(110, 129);
			this->decrypt_button->Name = L"decrypt_button";
			this->decrypt_button->Size = System::Drawing::Size(92, 23);
			this->decrypt_button->TabIndex = 6;
			this->decrypt_button->Text = L"Расшифровать";
			this->decrypt_button->UseVisualStyleBackColor = true;
			this->decrypt_button->Click += gcnew System::EventHandler(this, &Window::decrypt_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Результат: ";
			// 
			// result_textBox
			// 
			this->result_textBox->Location = System::Drawing::Point(12, 180);
			this->result_textBox->Name = L"result_textBox";
			this->result_textBox->Size = System::Drawing::Size(260, 20);
			this->result_textBox->TabIndex = 8;
			// 
			// alphabet_comboBox
			// 
			this->alphabet_comboBox->FormattingEnabled = true;
			this->alphabet_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Кирилица", L"Латиница" });
			this->alphabet_comboBox->Location = System::Drawing::Point(198, 36);
			this->alphabet_comboBox->Name = L"alphabet_comboBox";
			this->alphabet_comboBox->Size = System::Drawing::Size(74, 21);
			this->alphabet_comboBox->Sorted = true;
			this->alphabet_comboBox->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(138, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Алфавит:";
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 221);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->alphabet_comboBox);
			this->Controls->Add(this->result_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->decrypt_button);
			this->Controls->Add(this->encrypt_button);
			this->Controls->Add(this->key_textBox);
			this->Controls->Add(this->word_textBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 260);
			this->MinimumSize = System::Drawing::Size(300, 260);
			this->Name = L"Window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vijener cryptor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void exit_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutApp_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	//
	private: System::Void encrypt_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void decrypt_button_Click(System::Object^ sender, System::EventArgs^ e);


	};
}
