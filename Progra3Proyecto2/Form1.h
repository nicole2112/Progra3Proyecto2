#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelGeneral;
	protected:

	private: System::Windows::Forms::Button^ botonSumar;
	private: System::Windows::Forms::Panel^ panelContainer;


	private: System::Windows::Forms::Button^ botonRestar;
	private: System::Windows::Forms::Button^ botonMultiplicar;
	private: System::Windows::Forms::Button^ botonDeterminante;
	private: System::Windows::Forms::Label^ labelGeneral;
	private: System::Windows::Forms::Button^ botonAbrirMatrizA;
	private: System::Windows::Forms::OpenFileDialog^ fileMatrizA;



	private: System::Windows::Forms::DataGridView^ gridViewA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::TextBox^ textPathnameA;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;

















	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->botonDeterminante = (gcnew System::Windows::Forms::Button());
			this->botonMultiplicar = (gcnew System::Windows::Forms::Button());
			this->botonRestar = (gcnew System::Windows::Forms::Button());
			this->botonSumar = (gcnew System::Windows::Forms::Button());
			this->panelContainer = (gcnew System::Windows::Forms::Panel());
			this->textPathnameA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->botonAbrirMatrizA = (gcnew System::Windows::Forms::Button());
			this->labelGeneral = (gcnew System::Windows::Forms::Label());
			this->fileMatrizA = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelGeneral->SuspendLayout();
			this->panelContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewA))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGeneral
			// 
			this->panelGeneral->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelGeneral->Controls->Add(this->label3);
			this->panelGeneral->Controls->Add(this->botonDeterminante);
			this->panelGeneral->Controls->Add(this->botonMultiplicar);
			this->panelGeneral->Controls->Add(this->botonRestar);
			this->panelGeneral->Controls->Add(this->botonSumar);
			this->panelGeneral->Location = System::Drawing::Point(0, 95);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(181, 561);
			this->panelGeneral->TabIndex = 0;
			this->panelGeneral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// botonDeterminante
			// 
			this->botonDeterminante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDeterminante->Location = System::Drawing::Point(37, 393);
			this->botonDeterminante->Name = L"botonDeterminante";
			this->botonDeterminante->Size = System::Drawing::Size(100, 38);
			this->botonDeterminante->TabIndex = 3;
			this->botonDeterminante->Text = L"Det A";
			this->botonDeterminante->UseVisualStyleBackColor = true;
			this->botonDeterminante->Click += gcnew System::EventHandler(this, &Form1::botonDeterminante_Click);
			// 
			// botonMultiplicar
			// 
			this->botonMultiplicar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMultiplicar->Location = System::Drawing::Point(37, 316);
			this->botonMultiplicar->Name = L"botonMultiplicar";
			this->botonMultiplicar->Size = System::Drawing::Size(100, 42);
			this->botonMultiplicar->TabIndex = 2;
			this->botonMultiplicar->Text = L"A x B";
			this->botonMultiplicar->UseVisualStyleBackColor = true;
			this->botonMultiplicar->Click += gcnew System::EventHandler(this, &Form1::botonMultiplicar_Click);
			// 
			// botonRestar
			// 
			this->botonRestar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonRestar->Location = System::Drawing::Point(37, 241);
			this->botonRestar->Name = L"botonRestar";
			this->botonRestar->Size = System::Drawing::Size(100, 42);
			this->botonRestar->TabIndex = 1;
			this->botonRestar->Text = L"A - B";
			this->botonRestar->UseVisualStyleBackColor = true;
			this->botonRestar->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// botonSumar
			// 
			this->botonSumar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSumar->Location = System::Drawing::Point(37, 165);
			this->botonSumar->Name = L"botonSumar";
			this->botonSumar->Size = System::Drawing::Size(100, 42);
			this->botonSumar->TabIndex = 0;
			this->botonSumar->Text = L"A + B";
			this->botonSumar->UseVisualStyleBackColor = true;
			this->botonSumar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panelContainer
			// 
			this->panelContainer->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panelContainer->Controls->Add(this->textPathnameA);
			this->panelContainer->Controls->Add(this->label1);
			this->panelContainer->Controls->Add(this->gridViewA);
			this->panelContainer->Controls->Add(this->botonAbrirMatrizA);
			this->panelContainer->Controls->Add(this->labelGeneral);
			this->panelContainer->Location = System::Drawing::Point(179, 97);
			this->panelContainer->Margin = System::Windows::Forms::Padding(2);
			this->panelContainer->Name = L"panelContainer";
			this->panelContainer->Size = System::Drawing::Size(658, 559);
			this->panelContainer->TabIndex = 1;
			this->panelContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// textPathnameA
			// 
			this->textPathnameA->Location = System::Drawing::Point(29, 131);
			this->textPathnameA->Margin = System::Windows::Forms::Padding(2);
			this->textPathnameA->Name = L"textPathnameA";
			this->textPathnameA->Size = System::Drawing::Size(168, 20);
			this->textPathnameA->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 100);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Matriz A";
			// 
			// gridViewA
			// 
			this->gridViewA->AllowUserToAddRows = false;
			this->gridViewA->AllowUserToDeleteRows = false;
			this->gridViewA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridViewA->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->gridViewA->Location = System::Drawing::Point(333, 86);
			this->gridViewA->Margin = System::Windows::Forms::Padding(2);
			this->gridViewA->Name = L"gridViewA";
			this->gridViewA->ReadOnly = true;
			this->gridViewA->RowHeadersWidth = 51;
			this->gridViewA->RowTemplate->Height = 24;
			this->gridViewA->Size = System::Drawing::Size(188, 144);
			this->gridViewA->TabIndex = 2;
			this->gridViewA->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->FillWeight = 50;
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 50;
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 60;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 50;
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 60;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 50;
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 60;
			// 
			// Column5
			// 
			this->Column5->FillWeight = 50;
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 60;
			// 
			// botonAbrirMatrizA
			// 
			this->botonAbrirMatrizA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonAbrirMatrizA->Location = System::Drawing::Point(194, 126);
			this->botonAbrirMatrizA->Margin = System::Windows::Forms::Padding(2);
			this->botonAbrirMatrizA->Name = L"botonAbrirMatrizA";
			this->botonAbrirMatrizA->Size = System::Drawing::Size(37, 27);
			this->botonAbrirMatrizA->TabIndex = 1;
			this->botonAbrirMatrizA->Text = L"...";
			this->botonAbrirMatrizA->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->botonAbrirMatrizA->UseVisualStyleBackColor = true;
			this->botonAbrirMatrizA->Click += gcnew System::EventHandler(this, &Form1::botonAbrirArchivo_Click);
			// 
			// labelGeneral
			// 
			this->labelGeneral->AutoSize = true;
			this->labelGeneral->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGeneral->Location = System::Drawing::Point(22, 15);
			this->labelGeneral->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelGeneral->Name = L"labelGeneral";
			this->labelGeneral->Size = System::Drawing::Size(234, 37);
			this->labelGeneral->TabIndex = 0;
			this->labelGeneral->Text = L"Ingresar matrices";
			this->labelGeneral->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGeneral->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// fileMatrizA
			// 
			this->fileMatrizA->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(837, 100);
			this->panel1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(202, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(444, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CALCULADORA DE MATRICES";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Operaciones";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 656);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelContainer);
			this->Controls->Add(this->panelGeneral);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculadora de Matrices";
			this->panelGeneral->ResumeLayout(false);
			this->panelGeneral->PerformLayout();
			this->panelContainer->ResumeLayout(false);
			this->panelContainer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewA))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Sumar Matrices";
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Restar Matrices";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void botonMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Multiplicar Matrices";
	}
	private: System::Void botonDeterminante_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Determinante de Matriz";
	}
	private: System::Void botonAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textPathnameA->Clear();
		//this->textboxMatriz->Clear(); //limpiar antes de abrir nuevo archivo
		this->fileMatrizA->Filter = "Txt Files (*.txt)|*.txt";

		if (fileMatrizA->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //validar que se seleccionara archivo
		String^ pth = fileMatrizA->FileName;

		this->textPathnameA->Text = pth;
			///*array<String^>^ myarr = File::ReadAllLines(pth);

			//for each (String ^ ST in myarr) {
			//	textboxMatriz->AppendText(ST + "\n");
			//}*/

			//// get lines from the text file
			//StreamReader^ file = gcnew StreamReader(pth);
			//array<String^>^ lines = File::ReadAllLines(pth);
			//array<String^>^ values;

			//for each(String^ i in lines)
			//{
			//	values = lines->ToString()->Split(' ');

			//	if (lines->ToString()->Contains(" "))
			//		this->gridViewA->Columns->Add();

			//	if (lines->ToString()->Contains("\n"))
			//		this->gridViewA->Rows->Add();
			//	/*string[] row = new string[values.Length];

			//	for (int j = 0; j < values.Length; j++)
			//	{
			//		row[j] = values[j].Trim();
			//	}
			//	table.Rows.Add(row);*/

			//}
		}

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
