#pragma once

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
	private: System::Windows::Forms::RichTextBox^ textboxMatriz;
	private: System::Windows::Forms::Button^ botonAbrirArchivo;
	private: System::Windows::Forms::OpenFileDialog^ fileMatriz;






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
			this->labelGeneral = (gcnew System::Windows::Forms::Label());
			this->botonAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->textboxMatriz = (gcnew System::Windows::Forms::RichTextBox());
			this->fileMatriz = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panelGeneral->SuspendLayout();
			this->panelContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGeneral
			// 
			this->panelGeneral->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelGeneral->Controls->Add(this->botonDeterminante);
			this->panelGeneral->Controls->Add(this->botonMultiplicar);
			this->panelGeneral->Controls->Add(this->botonRestar);
			this->panelGeneral->Controls->Add(this->botonSumar);
			this->panelGeneral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelGeneral->Location = System::Drawing::Point(0, 0);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(4);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(352, 795);
			this->panelGeneral->TabIndex = 0;
			this->panelGeneral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// botonDeterminante
			// 
			this->botonDeterminante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDeterminante->Location = System::Drawing::Point(69, 536);
			this->botonDeterminante->Margin = System::Windows::Forms::Padding(4);
			this->botonDeterminante->Name = L"botonDeterminante";
			this->botonDeterminante->Size = System::Drawing::Size(209, 52);
			this->botonDeterminante->TabIndex = 3;
			this->botonDeterminante->Text = L"Determinante";
			this->botonDeterminante->UseVisualStyleBackColor = true;
			this->botonDeterminante->Click += gcnew System::EventHandler(this, &Form1::botonDeterminante_Click);
			// 
			// botonMultiplicar
			// 
			this->botonMultiplicar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMultiplicar->Location = System::Drawing::Point(69, 428);
			this->botonMultiplicar->Margin = System::Windows::Forms::Padding(4);
			this->botonMultiplicar->Name = L"botonMultiplicar";
			this->botonMultiplicar->Size = System::Drawing::Size(209, 52);
			this->botonMultiplicar->TabIndex = 2;
			this->botonMultiplicar->Text = L"Multiplicación";
			this->botonMultiplicar->UseVisualStyleBackColor = true;
			this->botonMultiplicar->Click += gcnew System::EventHandler(this, &Form1::botonMultiplicar_Click);
			// 
			// botonRestar
			// 
			this->botonRestar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonRestar->Location = System::Drawing::Point(69, 310);
			this->botonRestar->Margin = System::Windows::Forms::Padding(4);
			this->botonRestar->Name = L"botonRestar";
			this->botonRestar->Size = System::Drawing::Size(209, 52);
			this->botonRestar->TabIndex = 1;
			this->botonRestar->Text = L"Resta";
			this->botonRestar->UseVisualStyleBackColor = true;
			this->botonRestar->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// botonSumar
			// 
			this->botonSumar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSumar->Location = System::Drawing::Point(69, 172);
			this->botonSumar->Margin = System::Windows::Forms::Padding(4);
			this->botonSumar->Name = L"botonSumar";
			this->botonSumar->Size = System::Drawing::Size(209, 52);
			this->botonSumar->TabIndex = 0;
			this->botonSumar->Text = L"Suma";
			this->botonSumar->UseVisualStyleBackColor = true;
			this->botonSumar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panelContainer
			// 
			this->panelContainer->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panelContainer->Controls->Add(this->textboxMatriz);
			this->panelContainer->Controls->Add(this->botonAbrirArchivo);
			this->panelContainer->Controls->Add(this->labelGeneral);
			this->panelContainer->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelContainer->Location = System::Drawing::Point(351, 0);
			this->panelContainer->Name = L"panelContainer";
			this->panelContainer->Size = System::Drawing::Size(695, 795);
			this->panelContainer->TabIndex = 1;
			this->panelContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// labelGeneral
			// 
			this->labelGeneral->AutoSize = true;
			this->labelGeneral->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGeneral->Location = System::Drawing::Point(188, 110);
			this->labelGeneral->Name = L"labelGeneral";
			this->labelGeneral->Size = System::Drawing::Size(315, 46);
			this->labelGeneral->TabIndex = 0;
			this->labelGeneral->Text = L"Insertar matrices";
			this->labelGeneral->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGeneral->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// botonAbrirArchivo
			// 
			this->botonAbrirArchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->botonAbrirArchivo->Location = System::Drawing::Point(241, 579);
			this->botonAbrirArchivo->Name = L"botonAbrirArchivo";
			this->botonAbrirArchivo->Size = System::Drawing::Size(236, 47);
			this->botonAbrirArchivo->TabIndex = 1;
			this->botonAbrirArchivo->Text = L"Abrir Archivos";
			this->botonAbrirArchivo->UseVisualStyleBackColor = true;
			this->botonAbrirArchivo->Click += gcnew System::EventHandler(this, &Form1::botonAbrirArchivo_Click);
			// 
			// textboxMatriz
			// 
			this->textboxMatriz->Location = System::Drawing::Point(90, 206);
			this->textboxMatriz->Name = L"textboxMatriz";
			this->textboxMatriz->Size = System::Drawing::Size(532, 326);
			this->textboxMatriz->TabIndex = 2;
			this->textboxMatriz->Text = L"";
			// 
			// fileMatriz
			// 
			this->fileMatriz->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 795);
			this->Controls->Add(this->panelContainer);
			this->Controls->Add(this->panelGeneral);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculadora de Matrices";
			this->panelGeneral->ResumeLayout(false);
			this->panelContainer->ResumeLayout(false);
			this->panelContainer->PerformLayout();
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

		this->textboxMatriz->Clear(); //limpiar antes de abrir nuevo archivo
		this->fileMatriz->Filter = "Txt Files (*.txt)|*.txt";

		if (fileMatriz->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //validar que se seleccionara archivo
			String^ pth = fileMatriz->FileName;

			array<String^>^ myarr = File::ReadAllLines(pth);

			for each (String ^ ST in myarr) {
				textboxMatriz->AppendText(ST + "\n");
			}
		}

	}
};
}
