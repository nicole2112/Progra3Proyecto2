#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

#include "MatrixList.h"

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
	private:
		String^ pathMatrixA;
		String^ pathMatrixB;
		Node* headMatrizA;
		Node* headMatrizB;
		int A_m, A_n;
		int B_m, B_n;
		Node* headResultado;

	private: System::Windows::Forms::Label^ iconoIgualdad;
	private: System::Windows::Forms::DataGridView^ gridViewResultado;
	private: System::Windows::Forms::Button^ botonGuardarMatrizRes;
	private: System::Windows::Forms::TextBox^ textFileResultado;
	private: System::Windows::Forms::Label^ labelMatrizResultante;

	private: System::Windows::Forms::Label^ iconoOperacion;
	private: System::Windows::Forms::Label^ iconoDetA;

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
	private: System::Windows::Forms::Button^ botonIngresar;

	protected:


	private: System::Windows::Forms::Panel^ panelContainer;


	private: System::Windows::Forms::Button^ botonRestar;
	private: System::Windows::Forms::Button^ botonMultiplicar;
	private: System::Windows::Forms::Button^ botonDeterminante;
	private: System::Windows::Forms::Label^ labelGeneral;
	private: System::Windows::Forms::Button^ botonAbrirMatrizA;
	private: System::Windows::Forms::OpenFileDialog^ fileMatriz;


	private: System::Windows::Forms::DataGridView^ gridViewA;

	private: System::Windows::Forms::TextBox^ textPathnameA;
	private: System::Windows::Forms::Label^ labelMatrizA;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textPathnameB;
	private: System::Windows::Forms::Label^ labelMatrizB;


	private: System::Windows::Forms::Button^ botonAbrirMatrizB;
	private: System::Windows::Forms::DataGridView^ gridViewB;
private: System::Windows::Forms::Button^ botonSumar;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->botonSumar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->botonDeterminante = (gcnew System::Windows::Forms::Button());
			this->botonMultiplicar = (gcnew System::Windows::Forms::Button());
			this->botonRestar = (gcnew System::Windows::Forms::Button());
			this->botonIngresar = (gcnew System::Windows::Forms::Button());
			this->panelContainer = (gcnew System::Windows::Forms::Panel());
			this->botonGuardarMatrizRes = (gcnew System::Windows::Forms::Button());
			this->textFileResultado = (gcnew System::Windows::Forms::TextBox());
			this->labelMatrizResultante = (gcnew System::Windows::Forms::Label());
			this->gridViewResultado = (gcnew System::Windows::Forms::DataGridView());
			this->iconoIgualdad = (gcnew System::Windows::Forms::Label());
			this->iconoOperacion = (gcnew System::Windows::Forms::Label());
			this->gridViewB = (gcnew System::Windows::Forms::DataGridView());
			this->textPathnameB = (gcnew System::Windows::Forms::TextBox());
			this->labelMatrizB = (gcnew System::Windows::Forms::Label());
			this->botonAbrirMatrizB = (gcnew System::Windows::Forms::Button());
			this->textPathnameA = (gcnew System::Windows::Forms::TextBox());
			this->labelMatrizA = (gcnew System::Windows::Forms::Label());
			this->gridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->botonAbrirMatrizA = (gcnew System::Windows::Forms::Button());
			this->labelGeneral = (gcnew System::Windows::Forms::Label());
			this->fileMatriz = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->iconoDetA = (gcnew System::Windows::Forms::Label());
			this->panelGeneral->SuspendLayout();
			this->panelContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewResultado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewA))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGeneral
			// 
			this->panelGeneral->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panelGeneral->Controls->Add(this->botonSumar);
			this->panelGeneral->Controls->Add(this->label3);
			this->panelGeneral->Controls->Add(this->botonDeterminante);
			this->panelGeneral->Controls->Add(this->botonMultiplicar);
			this->panelGeneral->Controls->Add(this->botonRestar);
			this->panelGeneral->Controls->Add(this->botonIngresar);
			this->panelGeneral->Location = System::Drawing::Point(0, 117);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(4);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(241, 690);
			this->panelGeneral->TabIndex = 0;
			this->panelGeneral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// botonSumar
			// 
			this->botonSumar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSumar->Location = System::Drawing::Point(49, 208);
			this->botonSumar->Margin = System::Windows::Forms::Padding(4);
			this->botonSumar->Name = L"botonSumar";
			this->botonSumar->Size = System::Drawing::Size(133, 52);
			this->botonSumar->TabIndex = 5;
			this->botonSumar->Text = L"A + B";
			this->botonSumar->UseVisualStyleBackColor = true;
			this->botonSumar->Click += gcnew System::EventHandler(this, &Form1::botonIngresar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(43, 142);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Operaciones";
			// 
			// botonDeterminante
			// 
			this->botonDeterminante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDeterminante->Location = System::Drawing::Point(49, 502);
			this->botonDeterminante->Margin = System::Windows::Forms::Padding(4);
			this->botonDeterminante->Name = L"botonDeterminante";
			this->botonDeterminante->Size = System::Drawing::Size(133, 47);
			this->botonDeterminante->TabIndex = 3;
			this->botonDeterminante->Text = L"Det A";
			this->botonDeterminante->UseVisualStyleBackColor = true;
			this->botonDeterminante->Click += gcnew System::EventHandler(this, &Form1::botonDeterminante_Click);
			// 
			// botonMultiplicar
			// 
			this->botonMultiplicar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMultiplicar->Location = System::Drawing::Point(49, 407);
			this->botonMultiplicar->Margin = System::Windows::Forms::Padding(4);
			this->botonMultiplicar->Name = L"botonMultiplicar";
			this->botonMultiplicar->Size = System::Drawing::Size(133, 52);
			this->botonMultiplicar->TabIndex = 2;
			this->botonMultiplicar->Text = L"A x B";
			this->botonMultiplicar->UseVisualStyleBackColor = true;
			this->botonMultiplicar->Click += gcnew System::EventHandler(this, &Form1::botonMultiplicar_Click);
			// 
			// botonRestar
			// 
			this->botonRestar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonRestar->Location = System::Drawing::Point(49, 315);
			this->botonRestar->Margin = System::Windows::Forms::Padding(4);
			this->botonRestar->Name = L"botonRestar";
			this->botonRestar->Size = System::Drawing::Size(133, 52);
			this->botonRestar->TabIndex = 1;
			this->botonRestar->Text = L"A - B";
			this->botonRestar->UseVisualStyleBackColor = true;
			this->botonRestar->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// botonIngresar
			// 
			this->botonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonIngresar->Location = System::Drawing::Point(52, 62);
			this->botonIngresar->Margin = System::Windows::Forms::Padding(4);
			this->botonIngresar->Name = L"botonIngresar";
			this->botonIngresar->Size = System::Drawing::Size(133, 52);
			this->botonIngresar->TabIndex = 0;
			this->botonIngresar->Text = L"Ingresar Matrices";
			this->botonIngresar->UseVisualStyleBackColor = true;
			this->botonIngresar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panelContainer
			// 
			this->panelContainer->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panelContainer->Controls->Add(this->iconoDetA);
			this->panelContainer->Controls->Add(this->botonGuardarMatrizRes);
			this->panelContainer->Controls->Add(this->textFileResultado);
			this->panelContainer->Controls->Add(this->labelMatrizResultante);
			this->panelContainer->Controls->Add(this->gridViewResultado);
			this->panelContainer->Controls->Add(this->iconoIgualdad);
			this->panelContainer->Controls->Add(this->iconoOperacion);
			this->panelContainer->Controls->Add(this->gridViewB);
			this->panelContainer->Controls->Add(this->textPathnameB);
			this->panelContainer->Controls->Add(this->labelMatrizB);
			this->panelContainer->Controls->Add(this->botonAbrirMatrizB);
			this->panelContainer->Controls->Add(this->textPathnameA);
			this->panelContainer->Controls->Add(this->labelMatrizA);
			this->panelContainer->Controls->Add(this->gridViewA);
			this->panelContainer->Controls->Add(this->botonAbrirMatrizA);
			this->panelContainer->Controls->Add(this->labelGeneral);
			this->panelContainer->Location = System::Drawing::Point(239, 119);
			this->panelContainer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelContainer->Name = L"panelContainer";
			this->panelContainer->Size = System::Drawing::Size(877, 688);
			this->panelContainer->TabIndex = 1;
			this->panelContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// botonGuardarMatrizRes
			// 
			this->botonGuardarMatrizRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->botonGuardarMatrizRes->Location = System::Drawing::Point(688, 573);
			this->botonGuardarMatrizRes->Name = L"botonGuardarMatrizRes";
			this->botonGuardarMatrizRes->Size = System::Drawing::Size(84, 37);
			this->botonGuardarMatrizRes->TabIndex = 14;
			this->botonGuardarMatrizRes->Text = L"Guardar";
			this->botonGuardarMatrizRes->UseVisualStyleBackColor = true;
			this->botonGuardarMatrizRes->Visible = false;
			this->botonGuardarMatrizRes->Click += gcnew System::EventHandler(this, &Form1::botonGuardarMatrizRes_Click);
			// 
			// textFileResultado
			// 
			this->textFileResultado->Location = System::Drawing::Point(442, 545);
			this->textFileResultado->Name = L"textFileResultado";
			this->textFileResultado->Size = System::Drawing::Size(330, 22);
			this->textFileResultado->TabIndex = 13;
			this->textFileResultado->Visible = false;
			// 
			// labelMatrizResultante
			// 
			this->labelMatrizResultante->AutoSize = true;
			this->labelMatrizResultante->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelMatrizResultante->Location = System::Drawing::Point(438, 500);
			this->labelMatrizResultante->Name = L"labelMatrizResultante";
			this->labelMatrizResultante->Size = System::Drawing::Size(334, 23);
			this->labelMatrizResultante->TabIndex = 12;
			this->labelMatrizResultante->Text = L"Nombre de archivo para matriz resultante:";
			this->labelMatrizResultante->Visible = false;
			// 
			// gridViewResultado
			// 
			this->gridViewResultado->AllowUserToAddRows = false;
			this->gridViewResultado->AllowUserToDeleteRows = false;
			this->gridViewResultado->AllowUserToResizeColumns = false;
			this->gridViewResultado->AllowUserToResizeRows = false;
			this->gridViewResultado->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->gridViewResultado->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridViewResultado->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gridViewResultado->ColumnHeadersHeight = 29;
			this->gridViewResultado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gridViewResultado->ColumnHeadersVisible = false;
			this->gridViewResultado->Cursor = System::Windows::Forms::Cursors::Default;
			this->gridViewResultado->Location = System::Drawing::Point(487, 257);
			this->gridViewResultado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gridViewResultado->MultiSelect = false;
			this->gridViewResultado->Name = L"gridViewResultado";
			this->gridViewResultado->ReadOnly = true;
			this->gridViewResultado->RowHeadersVisible = false;
			this->gridViewResultado->RowHeadersWidth = 51;
			this->gridViewResultado->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			this->gridViewResultado->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->gridViewResultado->RowTemplate->Height = 24;
			this->gridViewResultado->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->gridViewResultado->ShowCellToolTips = false;
			this->gridViewResultado->ShowEditingIcon = false;
			this->gridViewResultado->Size = System::Drawing::Size(297, 177);
			this->gridViewResultado->TabIndex = 11;
			// 
			// iconoIgualdad
			// 
			this->iconoIgualdad->AutoSize = true;
			this->iconoIgualdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconoIgualdad->ForeColor = System::Drawing::SystemColors::ControlText;
			this->iconoIgualdad->Location = System::Drawing::Point(370, 347);
			this->iconoIgualdad->Name = L"iconoIgualdad";
			this->iconoIgualdad->Size = System::Drawing::Size(44, 46);
			this->iconoIgualdad->TabIndex = 10;
			this->iconoIgualdad->Text = L"=";
			// 
			// iconoOperacion
			// 
			this->iconoOperacion->AutoSize = true;
			this->iconoOperacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconoOperacion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->iconoOperacion->Location = System::Drawing::Point(88, 347);
			this->iconoOperacion->Name = L"iconoOperacion";
			this->iconoOperacion->Size = System::Drawing::Size(0, 46);
			this->iconoOperacion->TabIndex = 9;
			// 
			// gridViewB
			// 
			this->gridViewB->AllowUserToAddRows = false;
			this->gridViewB->AllowUserToDeleteRows = false;
			this->gridViewB->AllowUserToResizeColumns = false;
			this->gridViewB->AllowUserToResizeRows = false;
			this->gridViewB->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->gridViewB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridViewB->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gridViewB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridViewB->ColumnHeadersVisible = false;
			this->gridViewB->Cursor = System::Windows::Forms::Cursors::Default;
			this->gridViewB->Location = System::Drawing::Point(86, 429);
			this->gridViewB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gridViewB->MultiSelect = false;
			this->gridViewB->Name = L"gridViewB";
			this->gridViewB->ReadOnly = true;
			this->gridViewB->RowHeadersVisible = false;
			this->gridViewB->RowHeadersWidth = 51;
			this->gridViewB->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			this->gridViewB->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->gridViewB->RowTemplate->Height = 24;
			this->gridViewB->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->gridViewB->ShowCellToolTips = false;
			this->gridViewB->ShowEditingIcon = false;
			this->gridViewB->Size = System::Drawing::Size(284, 177);
			this->gridViewB->TabIndex = 8;
			// 
			// textPathnameB
			// 
			this->textPathnameB->Location = System::Drawing::Point(442, 530);
			this->textPathnameB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textPathnameB->Name = L"textPathnameB";
			this->textPathnameB->ReadOnly = true;
			this->textPathnameB->Size = System::Drawing::Size(296, 22);
			this->textPathnameB->TabIndex = 7;
			// 
			// labelMatrizB
			// 
			this->labelMatrizB->AutoSize = true;
			this->labelMatrizB->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMatrizB->Location = System::Drawing::Point(555, 455);
			this->labelMatrizB->Name = L"labelMatrizB";
			this->labelMatrizB->Size = System::Drawing::Size(91, 27);
			this->labelMatrizB->TabIndex = 6;
			this->labelMatrizB->Text = L"Matriz B";
			// 
			// botonAbrirMatrizB
			// 
			this->botonAbrirMatrizB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonAbrirMatrizB->Location = System::Drawing::Point(735, 524);
			this->botonAbrirMatrizB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonAbrirMatrizB->Name = L"botonAbrirMatrizB";
			this->botonAbrirMatrizB->Size = System::Drawing::Size(49, 33);
			this->botonAbrirMatrizB->TabIndex = 5;
			this->botonAbrirMatrizB->Text = L"...";
			this->botonAbrirMatrizB->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->botonAbrirMatrizB->UseVisualStyleBackColor = true;
			this->botonAbrirMatrizB->Click += gcnew System::EventHandler(this, &Form1::button1_Click_3);
			// 
			// textPathnameA
			// 
			this->textPathnameA->Location = System::Drawing::Point(442, 231);
			this->textPathnameA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textPathnameA->Name = L"textPathnameA";
			this->textPathnameA->ReadOnly = true;
			this->textPathnameA->Size = System::Drawing::Size(296, 22);
			this->textPathnameA->TabIndex = 4;
			// 
			// labelMatrizA
			// 
			this->labelMatrizA->AutoSize = true;
			this->labelMatrizA->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMatrizA->Location = System::Drawing::Point(555, 156);
			this->labelMatrizA->Name = L"labelMatrizA";
			this->labelMatrizA->Size = System::Drawing::Size(93, 27);
			this->labelMatrizA->TabIndex = 3;
			this->labelMatrizA->Text = L"Matriz A";
			// 
			// gridViewA
			// 
			this->gridViewA->AllowUserToAddRows = false;
			this->gridViewA->AllowUserToDeleteRows = false;
			this->gridViewA->AllowUserToResizeColumns = false;
			this->gridViewA->AllowUserToResizeRows = false;
			this->gridViewA->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->gridViewA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridViewA->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gridViewA->ColumnHeadersHeight = 29;
			this->gridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gridViewA->ColumnHeadersVisible = false;
			this->gridViewA->Cursor = System::Windows::Forms::Cursors::Default;
			this->gridViewA->Location = System::Drawing::Point(86, 130);
			this->gridViewA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gridViewA->MultiSelect = false;
			this->gridViewA->Name = L"gridViewA";
			this->gridViewA->ReadOnly = true;
			this->gridViewA->RowHeadersVisible = false;
			this->gridViewA->RowHeadersWidth = 51;
			this->gridViewA->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			this->gridViewA->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->gridViewA->RowTemplate->Height = 24;
			this->gridViewA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->gridViewA->ShowCellToolTips = false;
			this->gridViewA->ShowEditingIcon = false;
			this->gridViewA->Size = System::Drawing::Size(284, 177);
			this->gridViewA->TabIndex = 2;
			// 
			// botonAbrirMatrizA
			// 
			this->botonAbrirMatrizA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonAbrirMatrizA->Location = System::Drawing::Point(735, 225);
			this->botonAbrirMatrizA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonAbrirMatrizA->Name = L"botonAbrirMatrizA";
			this->botonAbrirMatrizA->Size = System::Drawing::Size(49, 33);
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
			this->labelGeneral->Location = System::Drawing::Point(88, 36);
			this->labelGeneral->Name = L"labelGeneral";
			this->labelGeneral->Size = System::Drawing::Size(284, 45);
			this->labelGeneral->TabIndex = 0;
			this->labelGeneral->Text = L"Ingresar Matrices";
			this->labelGeneral->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGeneral->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// fileMatriz
			// 
			this->fileMatriz->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1116, 123);
			this->panel1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(269, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(549, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CALCULADORA DE MATRICES";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			
			// 
			// iconoDetA
			// 
			this->iconoDetA->AutoSize = true;
			this->iconoDetA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconoDetA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->iconoDetA->Location = System::Drawing::Point(430, 347);
			this->iconoDetA->Name = L"iconoDetA";
			this->iconoDetA->Size = System::Drawing::Size(44, 46);
			this->iconoDetA->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 807);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelContainer);
			this->Controls->Add(this->panelGeneral);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculadora de Matrices";
			this->panelGeneral->ResumeLayout(false);
			this->panelGeneral->PerformLayout();
			this->panelContainer->ResumeLayout(false);
			this->panelContainer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewResultado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewA))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   //BOTÓN INGRESAR MATRICES
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Ingresar Matrices";

		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();

		this->iconoOperacion->Text = L"";
		this->iconoIgualdad->Text = L"";

		this->labelMatrizA->Visible = 1;
		this->textPathnameA->Visible = 1;
		this->botonAbrirMatrizA->Visible = 1;

		this->labelMatrizB->Visible = 1;
		this->textPathnameB->Visible = 1;
		this->botonAbrirMatrizB->Visible = 1;
		this->gridViewB->Visible = 1;

		this->iconoDetA->Visible = 0;

		this->labelMatrizResultante->Visible = 0;
		this->textFileResultado->Visible = 0;
		this->botonGuardarMatrizRes->Visible = 0;
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
		   //BOTÓN SUMAR MATRICES
	private: System::Void botonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();
		this->textFileResultado->Clear();
		this->headResultado = nullptr;

		if (this->pathMatrixA == nullptr || this->pathMatrixB == nullptr) {
			MessageBox::Show("Asegurese de seleccionar matrices\npara realizar operaciones");
			return;
		}

		if (this->A_m == 0 || this->B_n == 0) { //validar que ambas matrices estén correctas para relizar operación
			MessageBox::Show("Matrices no son válidas\nIngrese matriz nuevamente.");
			return;
		}

		//Función que devuelve la suma de las matrices
		MatrixList C = C.addition(this->headMatrizA, this->headMatrizB, this->A_m, this->A_n, this->B_m, this->B_n);

		//Mostrar nueva matriz con el resultado en pantalla
		if (C.getM() == 0) {
			MessageBox::Show("Dimensiones de matrices\n no son válidas.");
			return;
		}

		this->labelGeneral->Text = "Sumar Matrices";
		this->iconoOperacion->Text = L"+";
		this->iconoIgualdad->Text = L"=";

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;

		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;

		this->iconoDetA->Visible = false;

		this->gridViewB->Visible = true;
		this->labelMatrizResultante->Visible = true;
		this->textFileResultado->Visible = true;
		this->botonGuardarMatrizRes->Visible = true;

		llenarMatrizResultado(C); //si todo sale bien, llenar la matriz resultado con el resultado

		this->headResultado = C.getHead();

	}
		   //BOTÓN RESTAR MATRICES
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();
		this->textFileResultado->Clear();
		this->headResultado = nullptr;

		if (this->pathMatrixA == nullptr || this->pathMatrixB == nullptr) {
			MessageBox::Show("Asegurese de seleccionar matrices\npara realizar operaciones");
			return;
		}

		if (this->A_m == 0 || this->B_n == 0) { //validar que ambas matrices estén correctas para relizar operación
			MessageBox::Show("Matrices no son válidas\nIngrese matriz nuevamente.");
			return;
		}

		//Función que devuelve la resta de las matrices
		MatrixList C = C.subtraction(this->headMatrizA, this->headMatrizB, this->A_m, this->A_n, this->B_m, this->B_n);

		//Mostrar nueva matriz con el resultado en pantalla
		if (C.getM() == 0) {
			MessageBox::Show("Dimensiones de matrices\n no son válidas.");
			return;
		}

		this->labelGeneral->Text = "Restar Matrices";
		this->iconoOperacion->Text = L"-";
		this->iconoIgualdad->Text = L"=";

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;

		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;

		this->iconoDetA->Visible = false;

		this->gridViewB->Visible = true;
		this->labelMatrizResultante->Visible = true;
		this->textFileResultado->Visible = true;
		this->botonGuardarMatrizRes->Visible = true;

		llenarMatrizResultado(C); //si todo sale bien, llenar la matriz resultado con el resultado

		this->headResultado = C.getHead();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //BOTÓN PARA MULTIPLICAR MATRICES
	private: System::Void botonMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();
		this->textFileResultado->Clear();
		this->headResultado = nullptr;

		if (this->pathMatrixA == nullptr || this->pathMatrixB == nullptr) {
			MessageBox::Show("Asegurese de seleccionar matrices\npara realizar operaciones.");
			return;
		}

		if (this->A_m == 0 || this->B_n == 0) { //validar que ambas matrices estén correctas para relizar operación
			MessageBox::Show("Matrices no son válidas\nIngrese matriz nuevamente.");
			return;
		}

		//Función que devuelve la multiplicación de las matrices
		MatrixList C = C.multiplication(this->headMatrizA, this->headMatrizB, this->A_m, this->A_n, this->B_m, this->B_n);

		//Mostrar nueva matriz con el resultado en pantalla
		if (C.getM() == 0) {
			MessageBox::Show("Dimensiones de matrices\n no son válidas.");
			return;
		}

		this->labelGeneral->Text = "Multiplicar Matrices";
		this->iconoOperacion->Text = L"x";
		this->iconoIgualdad->Text = L"=";

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;

		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;

		this->iconoDetA->Visible = false;

		this->gridViewB->Visible = true;
		this->labelMatrizResultante->Visible = true;
		this->textFileResultado->Visible = true;
		this->botonGuardarMatrizRes->Visible = true;

		llenarMatrizResultado(C); //si todo sale bien, llenar la matriz resultado con el resultado

		this->headResultado = C.getHead();
	}
		   //BOTÓN DETERMINANTE DE MATRIZ A
	private: System::Void botonDeterminante_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();
		this->textFileResultado->Clear();
		this->headResultado = nullptr;

		if (this->pathMatrixA == nullptr) {
			MessageBox::Show("Asegurese de seleccionar matrices\npara realizar operaciones.");
			return;
		}

		if (this->A_m == 0) { //validar que ambas matrices estén correctas para relizar operación
			MessageBox::Show("Matriz no es válida\nIngrese matriz nuevamente.");
			return;
		}

		if (this->A_m != this->A_n) { //cuand
			MessageBox::Show("Matriz A no es cuadrada,\nno se puede calcular determinante.");
			return;
		}

		//Función que devuelve el determinante de la matriz A
		MatrixList C;
		double determinantA = C.determinant(this->headMatrizA, this->A_m, this->A_n);

		//Mostrar el resultado en pantalla
		this->labelGeneral->Text = "Determinante de Matriz";

		this->iconoOperacion->Text = L"det A";
		this->iconoIgualdad->Text = L"=";
		
		this->iconoDetA->Visible = true;
		std::string detString = std::to_string(determinantA);
		String^ det = gcnew String(detString.c_str());
		this->iconoDetA->Text = det;

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;

		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;
		this->gridViewB->Visible = false;

		this->labelMatrizResultante->Visible = false;
		this->textFileResultado->Visible = false;
		this->botonGuardarMatrizRes->Visible = false;

	}
		   //BOTÓN PARA SELECCIONAR ARCHIVO MATRIZ A
	private: System::Void botonAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		//Limpar matrices y texto con ubicación de archivo
		this->textPathnameA->Clear();
		this->gridViewA->Rows->Clear();
		this->gridViewA->Columns->Clear();

		this->pathMatrixA = nullptr;
		this->headMatrizA = nullptr;
		this->A_m = 0;
		this->A_n = 0;

		this->textFileResultado->Clear();

		this->fileMatriz->Filter = "dat-file (*.dat) | *.dat";

		if (fileMatriz->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //validar que se seleccionara archivo
			String^ pth = fileMatriz->FileName;

			std::string pathString;

			MarshalString(pth, pathString); //convertir la ubicación del archivo de String^ a string
			
			MatrixList A = MatrixList::loadFile(pathString.c_str()); //cargar archivo en la lista enlazada

			if (A.getM() == 0 && A.getN() == 0) { //Cuando la lista retorne 0x0 no es válido
				MessageBox::Show("Archivo no es válido.\nSeleccione otro.");
				return;
			}

			//Inicializar valor de Matriz A para todo el programa
			if (A.getM() > 0 && A.getN() > 0) {
				this->pathMatrixA = pth;
				this->headMatrizA = A.getHead();
				this->A_m = A.getM();
				this->A_n = A.getN();
			}

			this->textPathnameA->Text = pth;

			//inicializarColumnasA();

			//----Ingresar columnas-----
			for (int i = 0; i < A.getN(); i++) { //cargar en gridview la cantidad de columnas acorde a la matriz A
				System::Windows::Forms::DataGridViewTextBoxColumn^ columna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				columna->Name = "ColumnaA" + (i + 1);
				columna->Width = 50;

				//agregar columna al gridview A
				this->gridViewA->Columns->Add(columna);
			}

			array<Object^>^ rowsVals = gcnew array<Object^>(A.getN());

			//-----Ingresar valores y filas-----
			for (int i = 0; i < A.getM(); i++) {
			
				for (int j = 0; j < A.getN(); j++) {
					rowsVals[j] = A.findValue(i, j);
				}
				this->gridViewA->Rows->Add(rowsVals); //mostrar cada fila en la matriz con valores ingresados
			}


		}

	}
	
			//BOTÓN PARA SELECCIONAR ARCHIVO DE MATRIZ B
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		//Limpar matrices y texto con ubicación de archivo
		this->textPathnameB->Clear();
		this->gridViewB->Rows->Clear();
		this->gridViewB->Columns->Clear();

		this->pathMatrixB = nullptr;
		this->headMatrizB = nullptr;
		this->B_m = 0;
		this->B_n = 0;

		this->textFileResultado->Clear();

		this->fileMatriz->Filter = "dat-file (*.dat) | *.dat";

		if (fileMatriz->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //validar que se seleccionara archivo
			String^ pth = fileMatriz->FileName;

			std::string pathString;

			MarshalString(pth, pathString); //convertir la ubicación del archivo de String^ a string

			MatrixList B = MatrixList::loadFile(pathString.c_str()); //cargar archivo en la lista enlazada

			if (B.getM() == 0 && B.getN() == 0) { //Cuando la lista retorne 0x0 no es válido
				MessageBox::Show("Archivo no es válido.\nSeleccione otro.");
				return;
			}

			this->textPathnameB->Text = pth;

			//----Ingresar columnas-----
			for (int i = 0; i < B.getN(); i++) { //cargar en gridview la cantidad de columnas acorde a la matriz A
				System::Windows::Forms::DataGridViewTextBoxColumn^ columna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				columna->Name = "ColumnaB" + (i + 1);
				columna->Width = 50;

				//agregar columna al gridview A
				this->gridViewB->Columns->Add(columna);
			}

			array<Object^>^ rowsVals = gcnew array<Object^>(B.getN());

			//-----Ingresar valores y filas-----
			for (int i = 0; i < B.getM(); i++) {

				for (int j = 0; j < B.getN(); j++) {
					rowsVals[j] = B.findValue(i, j);
				}
				this->gridViewB->Rows->Add(rowsVals); //mostrar cada fila en la matriz con valores ingresados
			}

			//Inicializar objeto de Matriz B para todo el programa
			if (B.getM() > 0 && B.getN() > 0) {
				this->pathMatrixB = pth;
				this->headMatrizB = B.getHead();
				this->B_m = B.getM();
				this->B_n = B.getN();
			}

		}

	}
	private: System::Void botonGuardarMatrizRes_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ pathResultado = this->textFileResultado->Text;

		if (pathResultado != nullptr) {
			std::string pathString;

			MarshalString(pathResultado, pathString); //convertir la ubicación del archivo de String^ a string

			if (MatrixList::createFile(this->headResultado, pathString.c_str())) {
				MessageBox::Show("Archivo " + pathResultado + " creado exitosamente");
			}
			else
				MessageBox::Show("Error al crear archivo " + pathResultado);
		}
	}

	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	void llenarMatrizResultado(MatrixList C) {

		//----Ingresar columnas-----
		for (int i = 0; i < C.getN(); i++) { //cargar en gridview la cantidad de columnas acorde a la matriz A
			System::Windows::Forms::DataGridViewTextBoxColumn^ columna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			columna->Name = "ColumnaR" + (i + 1);
			columna->Width = 50;

			//agregar columna al gridview A
			this->gridViewResultado->Columns->Add(columna);
		}

		array<Object^>^ rowsVals = gcnew array<Object^>(C.getN());

		//-----Ingresar valores y filas-----
		for (int i = 0; i < C.getM(); i++) {

			for (int j = 0; j < C.getN(); j++) {
				rowsVals[j] = C.findValue(i, j);
			}
			this->gridViewResultado->Rows->Add(rowsVals); //mostrar cada fila en la matriz con valores ingresados
		}
	}

};
}
