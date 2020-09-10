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
	private: System::Windows::Forms::Label^ iconoIgualdad;
	private: System::Windows::Forms::DataGridView^ gridViewResultado;

	private: System::Windows::Forms::Label^ iconoOperacion;
		 

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
	private: System::Windows::Forms::OpenFileDialog^ fileMatriz;


	private: System::Windows::Forms::DataGridView^ gridViewA;

	private: System::Windows::Forms::TextBox^ textPathnameA;
	private: System::Windows::Forms::Label^ labelMatrizA;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
		   //MATRIZ A
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
		   //MATRIZ B
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13B;
		   //MATRIZ RESULTADO
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13R;

	private: System::Windows::Forms::TextBox^ textPathnameB;
	private: System::Windows::Forms::Label^ labelMatrizB;


	private: System::Windows::Forms::Button^ botonAbrirMatrizB;
	private: System::Windows::Forms::DataGridView^ gridViewB;
	private: System::Windows::Forms::Button^ botonIngresar;


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
			this->botonIngresar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->botonDeterminante = (gcnew System::Windows::Forms::Button());
			this->botonMultiplicar = (gcnew System::Windows::Forms::Button());
			this->botonRestar = (gcnew System::Windows::Forms::Button());
			this->botonSumar = (gcnew System::Windows::Forms::Button());
			this->panelContainer = (gcnew System::Windows::Forms::Panel());
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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->panelGeneral->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelGeneral->Controls->Add(this->botonIngresar);
			this->panelGeneral->Controls->Add(this->label3);
			this->panelGeneral->Controls->Add(this->botonDeterminante);
			this->panelGeneral->Controls->Add(this->botonMultiplicar);
			this->panelGeneral->Controls->Add(this->botonRestar);
			this->panelGeneral->Controls->Add(this->botonSumar);
			this->panelGeneral->Location = System::Drawing::Point(0, 117);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(4);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(241, 690);
			this->panelGeneral->TabIndex = 0;
			this->panelGeneral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// botonIngresar
			// 
			this->botonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonIngresar->Location = System::Drawing::Point(49, 59);
			this->botonIngresar->Margin = System::Windows::Forms::Padding(4);
			this->botonIngresar->Name = L"botonIngresar";
			this->botonIngresar->Size = System::Drawing::Size(133, 52);
			this->botonIngresar->TabIndex = 5;
			this->botonIngresar->Text = L"Ingresar Matrices";
			this->botonIngresar->UseVisualStyleBackColor = true;
			this->botonIngresar->Click += gcnew System::EventHandler(this, &Form1::botonIngresar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 140);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 27);
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
			// botonSumar
			// 
			this->botonSumar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSumar->Location = System::Drawing::Point(49, 221);
			this->botonSumar->Margin = System::Windows::Forms::Padding(4);
			this->botonSumar->Name = L"botonSumar";
			this->botonSumar->Size = System::Drawing::Size(133, 52);
			this->botonSumar->TabIndex = 0;
			this->botonSumar->Text = L"A + B";
			this->botonSumar->UseVisualStyleBackColor = true;
			this->botonSumar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panelContainer
			// 
			this->panelContainer->BackColor = System::Drawing::SystemColors::ActiveBorder;
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
			// gridViewResultado
			// 
			this->gridViewResultado->AllowUserToAddRows = false;
			this->gridViewResultado->AllowUserToDeleteRows = false;
			this->gridViewResultado->AllowUserToResizeColumns = false;
			this->gridViewResultado->AllowUserToResizeRows = false;
			this->gridViewResultado->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridViewResultado->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->gridViewResultado->ColumnHeadersHeight = 29;
			this->gridViewResultado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gridViewResultado->ColumnHeadersVisible = false;
			this->gridViewResultado->Cursor = System::Windows::Forms::Cursors::Default;
			this->gridViewResultado->Location = System::Drawing::Point(487, 276);
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
			this->gridViewResultado->Size = System::Drawing::Size(251, 177);
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
			this->iconoIgualdad->Size = System::Drawing::Size(0, 46);
			this->iconoIgualdad->TabIndex = 10;
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
			this->gridViewB->Size = System::Drawing::Size(251, 177);
			this->gridViewB->TabIndex = 8;
			// 
			// textPathnameB
			// 
			this->textPathnameB->Location = System::Drawing::Point(442, 530);
			this->textPathnameB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textPathnameB->Name = L"textPathnameB";
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
			this->gridViewA->Size = System::Drawing::Size(251, 177);
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
			this->labelGeneral->Location = System::Drawing::Point(29, 18);
			this->labelGeneral->Name = L"labelGeneral";
			this->labelGeneral->Size = System::Drawing::Size(280, 45);
			this->labelGeneral->TabIndex = 0;
			this->labelGeneral->Text = L"Ingresar matrices";
			this->labelGeneral->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGeneral->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// fileMatriz
			// 
			this->fileMatriz->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
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
			//Inicializar Columnas Matrices
			inicializarColumnasA();
			inicializarColumnasB();
			inicializarColumnasResultado();
		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Sumar Matrices";
		this->iconoOperacion->Text = L"+";
		this->iconoIgualdad->Text = L"=";
		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();
		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;
		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;

		if (this->pathMatrixA == nullptr || this->pathMatrixB == nullptr) {
			MessageBox::Show("Asegurese de seleccionar matrices\npara realizar operaciones");
			return;
		}

		MatrixList A = obtenerMatriz(this->pathMatrixA);
		MatrixList B = obtenerMatriz(this->pathMatrixB);

		if (A.getM()== 0 || B.getM() == 0) { //validar que ambas matrices estén correctas para relizar operación
			MessageBox::Show("Matrices no son válidas\nIngrese matriz nuevamente.");
			return;
		}

		//Función que devuelve la suma de las matrices
		MatrixList C = C.addition(A.getHead(), B.getHead(), A.getM(), A.getN(), B.getM(), B.getN());

		//Mostrar nueva matriz con el resultado en pantalla
		if (C.getM() == 0) {
			MessageBox::Show("Dimensiones de matrices\n no son válidas.");
			return;
		}

		llenarMatrizResultado(C); //si todo sale bien, llenar la matriz resultado con el resultado

	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void botonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
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

	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Restar Matrices";

		this->iconoOperacion->Text = L"-";
		this->iconoIgualdad->Text = L"=";

		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;
		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void botonMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Multiplicar Matrices";

		this->iconoOperacion->Text = L"x";
		this->iconoIgualdad->Text = L"=";

		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;
		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;
	}
	private: System::Void botonDeterminante_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelGeneral->Text = "Determinante de Matriz";

		this->iconoOperacion->Text = L"det A";
		this->iconoIgualdad->Text = L"=";

		this->gridViewResultado->Rows->Clear();
		this->gridViewResultado->Columns->Clear();

		this->labelMatrizA->Visible = false;
		this->textPathnameA->Visible = false;
		this->botonAbrirMatrizA->Visible = false;
		this->labelMatrizB->Visible = false;
		this->textPathnameB->Visible = false;
		this->botonAbrirMatrizB->Visible = false;

	}
	private: System::Void botonAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		//Limpar matrices y texto con ubicación de archivo
		this->textPathnameA->Clear();
		this->gridViewA->Rows->Clear();
		this->gridViewA->Columns->Clear();
		this->pathMatrixA = nullptr;

		this->fileMatriz->Filter = "Txt Files (*.txt)|*.txt";

		if (fileMatriz->ShowDialog() == System::Windows::Forms::DialogResult::OK) { //validar que se seleccionara archivo
			String^ pth = fileMatriz->FileName;

			std::string pathString;

			MarshalString(pth, pathString); //convertir la ubicación del archivo de String^ a string
			
			MatrixList A = MatrixList::loadFile(pathString.c_str()); //cargar archivo en la lista enlazada

			if (A.getM() == 0 && A.getN() == 0) { //Cuando la lista retorne 0x0 no es válido
				MessageBox::Show("Archivo no es válido.\nSeleccione otro.");
				return;
			}

			this->textPathnameA->Text = pth;

			//----Ingresar columnas-----
			for (int i = 0; i < A.getN(); i++) { //cargar en gridview la cantidad de columnas acorde a la matriz A
				if (i == 0)
					this->gridViewA->Columns->Add(this->Column1);
				if (i == 1)
					this->gridViewA->Columns->Add(this->Column2);
				if (i == 2)
					this->gridViewA->Columns->Add(this->Column3);
				if (i == 3)
					this->gridViewA->Columns->Add(this->Column4);
				if (i == 4)
					this->gridViewA->Columns->Add(this->Column5);
				if (i == 5)
					this->gridViewA->Columns->Add(this->Column6);
				if (i == 6)
					this->gridViewA->Columns->Add(this->Column7);
				if (i == 7)
					this->gridViewA->Columns->Add(this->Column8);
				if (i == 8)
					this->gridViewA->Columns->Add(this->Column9);
				if (i == 9)
					this->gridViewA->Columns->Add(this->Column10);
				if (i == 10)
					this->gridViewA->Columns->Add(this->Column11);
				if (i == 11)
					this->gridViewA->Columns->Add(this->Column12);
				if (i == 12)
					this->gridViewA->Columns->Add(this->Column13);
			}

			array<Object^>^ rowsVals = gcnew array<Object^>(A.getN());

			//-----Ingresar valores y filas-----
			for (int i = 0; i < A.getM(); i++) {
			
				for (int j = 0; j < A.getN(); j++) {
					rowsVals[j] = A.findValue(i, j);
				}
				this->gridViewA->Rows->Add(rowsVals); //mostrar cada fila en la matriz con valores ingresados
			}

			//Inicializar valor de Matriz A para todo el programa
			if (A.getM() > 0 && A.getN() > 0) {
				this->pathMatrixA = pth;
			}

		}

	}
	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		//Limpar matrices y texto con ubicación de archivo
		this->textPathnameB->Clear();
		this->gridViewB->Rows->Clear();
		this->gridViewB->Columns->Clear();
		this->pathMatrixB = nullptr;

		this->fileMatriz->Filter = "Txt Files (*.txt)|*.txt";

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
				if (i == 0)
					this->gridViewB->Columns->Add(this->Column1B);
				if (i == 1)
					this->gridViewB->Columns->Add(this->Column2B);
				if (i == 2)
					this->gridViewB->Columns->Add(this->Column3B);
				if (i == 3)
					this->gridViewB->Columns->Add(this->Column4B);
				if (i == 4)
					this->gridViewB->Columns->Add(this->Column5B);
				if (i == 5)
					this->gridViewB->Columns->Add(this->Column6B);
				if (i == 6)
					this->gridViewB->Columns->Add(this->Column7B);
				if (i == 7)
					this->gridViewB->Columns->Add(this->Column8B);
				if (i == 8)
					this->gridViewB->Columns->Add(this->Column9B);
				if (i == 9)
					this->gridViewB->Columns->Add(this->Column10B);
				if (i == 10)
					this->gridViewB->Columns->Add(this->Column11B);
				if (i == 11)
					this->gridViewB->Columns->Add(this->Column12B);
				if (i == 12)
					this->gridViewB->Columns->Add(this->Column13B);
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
			}

		}

	}

	MatrixList obtenerMatriz(String^ path) {
		std::string pathString;

		MarshalString(path, pathString); //convertir la ubicación del archivo de String^ a string
		MatrixList matrix = MatrixList::loadFile(pathString.c_str()); //cargar archivo en la lista enlazada

		return matrix;
	}

	void llenarMatrizResultado(MatrixList C) {
		//----Ingresar columnas-----
		for (int i = 0; i < C.getN(); i++) { //cargar en gridview la cantidad de columnas acorde a la matriz A
			if (i == 0)
				this->gridViewResultado->Columns->Add(this->Column1R);
			if (i == 1)
				this->gridViewResultado->Columns->Add(this->Column2R);
			if (i == 2)
				this->gridViewResultado->Columns->Add(this->Column3R);
			if (i == 3)
				this->gridViewResultado->Columns->Add(this->Column4R);
			if (i == 4)
				this->gridViewResultado->Columns->Add(this->Column5R);
			if (i == 5)
				this->gridViewResultado->Columns->Add(this->Column6R);
			if (i == 6)
				this->gridViewResultado->Columns->Add(this->Column7R);
			if (i == 7)
				this->gridViewResultado->Columns->Add(this->Column8R);
			if (i == 8)
				this->gridViewResultado->Columns->Add(this->Column9R);
			if (i == 9)
				this->gridViewResultado->Columns->Add(this->Column10R);
			if (i == 10)
				this->gridViewResultado->Columns->Add(this->Column11R);
			if (i == 11)
				this->gridViewResultado->Columns->Add(this->Column12R);
			if (i == 12)
				this->gridViewResultado->Columns->Add(this->Column13R);
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

    void inicializarColumnasA() {
		// Column1
			// 
		this->Column1->FillWeight = 50;
		this->Column1->HeaderText = L"";
		this->Column1->MinimumWidth = 6;
		this->Column1->Name = L"Column1";
		this->Column1->ReadOnly = true;
		this->Column1->Width = 30;
		// 
		// Column4
		// 
		this->Column4->HeaderText = L"";
		this->Column4->MinimumWidth = 6;
		this->Column4->Name = L"Column4";
		this->Column4->ReadOnly = true;
		this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->Column4->Width = 30;
		// 
		// Column5
		// 
		this->Column5->HeaderText = L"";
		this->Column5->MinimumWidth = 6;
		this->Column5->Name = L"Column5";
		this->Column5->ReadOnly = true;
		this->Column5->Width = 30;
		// 
		// Column6
		// 
		this->Column6->HeaderText = L"";
		this->Column6->MinimumWidth = 6;
		this->Column6->Name = L"Column6";
		this->Column6->ReadOnly = true;
		this->Column6->Width = 30;
		// 
		// Column2
		// 
		this->Column2->FillWeight = 50;
		this->Column2->HeaderText = L"";
		this->Column2->MinimumWidth = 6;
		this->Column2->Name = L"Column2";
		this->Column2->ReadOnly = true;
		this->Column2->Width = 30;
		// 
		// Column3
		// 
		this->Column3->FillWeight = 50;
		this->Column3->HeaderText = L"";
		this->Column3->MinimumWidth = 6;
		this->Column3->Name = L"Column3";
		this->Column3->ReadOnly = true;
		this->Column3->Width = 30;
		// 
		// Column7
		// 
		this->Column7->FillWeight = 50;
		this->Column7->HeaderText = L"";
		this->Column7->MinimumWidth = 6;
		this->Column7->Name = L"Column7";
		this->Column7->ReadOnly = true;
		this->Column7->Width = 30;
		// 
		// Column8
		// 
		this->Column8->FillWeight = 50;
		this->Column8->HeaderText = L"";
		this->Column8->MinimumWidth = 6;
		this->Column8->Name = L"Column8";
		this->Column8->ReadOnly = true;
		this->Column8->Width = 30;
		// 
		// Column9
		// 
		this->Column9->FillWeight = 50;
		this->Column9->HeaderText = L"";
		this->Column9->MinimumWidth = 6;
		this->Column9->Name = L"Column9";
		this->Column9->ReadOnly = true;
		this->Column9->Width = 30;
		// 
		// Column10
		// 
		this->Column10->FillWeight = 50;
		this->Column10->HeaderText = L"";
		this->Column10->MinimumWidth = 6;
		this->Column10->Name = L"Column10";
		this->Column10->ReadOnly = true;
		this->Column10->Width = 30;
		// 
		// Column11
		// 
		this->Column11->FillWeight = 50;
		this->Column11->HeaderText = L"";
		this->Column11->MinimumWidth = 6;
		this->Column11->Name = L"Column11";
		this->Column11->ReadOnly = true;
		this->Column11->Width = 30;
		// 
		// Column12
		// 
		this->Column12->FillWeight = 50;
		this->Column12->HeaderText = L"";
		this->Column12->MinimumWidth = 6;
		this->Column12->Name = L"Column12";
		this->Column12->ReadOnly = true;
		this->Column12->Width = 30;
		// 
		// Column13
		// 
		this->Column13->FillWeight = 50;
		this->Column13->HeaderText = L"";
		this->Column13->MinimumWidth = 6;
		this->Column13->Name = L"Column13";
		this->Column13->ReadOnly = true;
		this->Column13->Width = 30;
	}

	void inicializarColumnasB() {
		// Column1
			// 
		this->Column1B->FillWeight = 50;
		this->Column1B->HeaderText = L"";
		this->Column1B->MinimumWidth = 6;
		this->Column1B->Name = L"Column1B";
		this->Column1B->ReadOnly = true;
		this->Column1B->Width = 30;
		// 
		// Column4
		// 
		this->Column4B->HeaderText = L"";
		this->Column4B->MinimumWidth = 6;
		this->Column4B->Name = L"Column4B";
		this->Column4B->ReadOnly = true;
		this->Column4B->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->Column4B->Width = 30;
		// 
		// Column5
		// 
		this->Column5B->HeaderText = L"";
		this->Column5B->MinimumWidth = 6;
		this->Column5B->Name = L"Column5B";
		this->Column5B->ReadOnly = true;
		this->Column5B->Width = 30;
		// 
		// Column6
		// 
		this->Column6B->HeaderText = L"";
		this->Column6B->MinimumWidth = 6;
		this->Column6B->Name = L"Column6B";
		this->Column6B->ReadOnly = true;
		this->Column6B->Width = 30;
		// 
		// Column2
		// 
		this->Column2B->FillWeight = 50;
		this->Column2B->HeaderText = L"";
		this->Column2B->MinimumWidth = 6;
		this->Column2B->Name = L"Column2B";
		this->Column2B->ReadOnly = true;
		this->Column2B->Width = 30;
		// 
		// Column3
		// 
		this->Column3B->FillWeight = 50;
		this->Column3B->HeaderText = L"";
		this->Column3B->MinimumWidth = 6;
		this->Column3B->Name = L"Column3B";
		this->Column3B->ReadOnly = true;
		this->Column3B->Width = 30;
		// 
		// Column7
		// 
		this->Column7B->FillWeight = 50;
		this->Column7B->HeaderText = L"";
		this->Column7B->MinimumWidth = 6;
		this->Column7B->Name = L"Column7B";
		this->Column7B->ReadOnly = true;
		this->Column7B->Width = 30;
		// 
		// Column8
		// 
		this->Column8B->FillWeight = 50;
		this->Column8B->HeaderText = L"";
		this->Column8B->MinimumWidth = 6;
		this->Column8B->Name = L"Column8B";
		this->Column8B->ReadOnly = true;
		this->Column8B->Width = 30;
		// 
		// Column9
		// 
		this->Column9B->FillWeight = 50;
		this->Column9B->HeaderText = L"";
		this->Column9B->MinimumWidth = 6;
		this->Column9B->Name = L"Column9B";
		this->Column9B->ReadOnly = true;
		this->Column9B->Width = 30;
		// 
		// Column10
		// 
		this->Column10B->FillWeight = 50;
		this->Column10B->HeaderText = L"";
		this->Column10B->MinimumWidth = 6;
		this->Column10B->Name = L"Column10B";
		this->Column10B->ReadOnly = true;
		this->Column10B->Width = 30;
		// 
		// Column11
		// 
		this->Column11B->FillWeight = 50;
		this->Column11B->HeaderText = L"";
		this->Column11B->MinimumWidth = 6;
		this->Column11B->Name = L"Column11B";
		this->Column11B->ReadOnly = true;
		this->Column11B->Width = 30;
		// 
		// Column12
		// 
		this->Column12B->FillWeight = 50;
		this->Column12B->HeaderText = L"";
		this->Column12B->MinimumWidth = 6;
		this->Column12B->Name = L"Column12B";
		this->Column12B->ReadOnly = true;
		this->Column12B->Width = 30;
		// 
		// Column13
		// 
		this->Column13B->FillWeight = 50;
		this->Column13B->HeaderText = L"";
		this->Column13B->MinimumWidth = 6;
		this->Column13B->Name = L"Column13B";
		this->Column13B->ReadOnly = true;
		this->Column13B->Width = 30;
	}

	void inicializarColumnasResultado() {
		// 
		// Column1
		// 
		this->Column1R->MinimumWidth = 6;
		this->Column1R->Name = L"Column1R";
		this->Column1R->Width = 30;
		// 
		// Column2
		// 
		this->Column2R->MinimumWidth = 6;
		this->Column2R->Name = L"Column2R";
		this->Column2R->Width = 30;
		// 
		// Column3
		// 
		this->Column3R->MinimumWidth = 6;
		this->Column3R->Name = L"Column3R";
		this->Column3R->Width = 30;
		// 
		// Column4
		// 
		this->Column4R->MinimumWidth = 6;
		this->Column4R->Name = L"Column4R";
		this->Column4R->Width = 30;
		// 
		// Column5
		// 
		this->Column5R->MinimumWidth = 6;
		this->Column5R->Name = L"Column5R";
		this->Column5R->Width = 30;
		// 
		// Column6
		// 
		this->Column6R->MinimumWidth = 6;
		this->Column6R->Name = L"Column6R";
		this->Column6R->Width = 30;
		// 
		// Column7
		// 
		this->Column7R->MinimumWidth = 6;
		this->Column7R->Name = L"Column7R";
		this->Column7R->Width = 30;
		// 
		// Column8
		// 
		this->Column8R->MinimumWidth = 6;
		this->Column8R->Name = L"Column8R";
		this->Column8R->Width = 30;
		// 
		// Column9
		// 
		this->Column9R->MinimumWidth = 6;
		this->Column9R->Name = L"Column9R";
		this->Column9R->Width = 30;
		// 
		// Column10
		// 
		this->Column10R->MinimumWidth = 6;
		this->Column10R->Name = L"Column10R";
		this->Column10R->Width = 30;
		// 
		// Column11
		// 
		this->Column11R->MinimumWidth = 6;
		this->Column11R->Name = L"Column11R";
		this->Column11R->Width = 30;
		// 
		// Column12
		// 
		this->Column12R->MinimumWidth = 6;
		this->Column12R->Name = L"Column12R";
		this->Column12R->Width = 30;
		// 
		// Column13
		// 
		this->Column13R->MinimumWidth = 6;
		this->Column13R->Name = L"Column13R";
		this->Column13R->Width = 30;
	}
};
}
