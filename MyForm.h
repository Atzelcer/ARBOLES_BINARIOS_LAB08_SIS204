#pragma once

namespace ARBOLES_BINARIOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ GUARDAR_R;
	private: System::Windows::Forms::Button^ ELEMINAR_B;


	private: System::Windows::Forms::TextBox^ MODELO_R;


	private: System::Windows::Forms::TextBox^ MARCA_R;
	private: System::Windows::Forms::TextBox^ ANIO_R;


	private: System::Windows::Forms::TextBox^ VEHICULO_R;
	private: System::Windows::Forms::TextBox^ PLACA_R;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ MOSTRAR_R;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ GUARDAR_B;

	private: System::Windows::Forms::TextBox^ LLAVE_B;
	private: System::Windows::Forms::TextBox^ VEHICULO_B;



	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ PLACA_B;
	private: System::Windows::Forms::TextBox^ MARCA_B;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ ANIO_B;

	private: System::Windows::Forms::TextBox^ MODELO_B;

	private: System::Windows::Forms::Label^ label16;


	//private: ARBOL_BINARIO_COD^ arbol;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GUARDAR_R = (gcnew System::Windows::Forms::Button());
			this->ELEMINAR_B = (gcnew System::Windows::Forms::Button());
			this->MODELO_R = (gcnew System::Windows::Forms::TextBox());
			this->MARCA_R = (gcnew System::Windows::Forms::TextBox());
			this->ANIO_R = (gcnew System::Windows::Forms::TextBox());
			this->VEHICULO_R = (gcnew System::Windows::Forms::TextBox());
			this->PLACA_R = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MOSTRAR_R = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->GUARDAR_B = (gcnew System::Windows::Forms::Button());
			this->LLAVE_B = (gcnew System::Windows::Forms::TextBox());
			this->VEHICULO_B = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PLACA_B = (gcnew System::Windows::Forms::TextBox());
			this->MARCA_B = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ANIO_B = (gcnew System::Windows::Forms::TextBox());
			this->MODELO_B = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(32, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE VEHICULOS";
			// 
			// GUARDAR_R
			// 
			this->GUARDAR_R->AccessibleRole = System::Windows::Forms::AccessibleRole::Document;
			this->GUARDAR_R->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GUARDAR_R->Location = System::Drawing::Point(227, 602);
			this->GUARDAR_R->Name = L"GUARDAR_R";
			this->GUARDAR_R->Size = System::Drawing::Size(154, 38);
			this->GUARDAR_R->TabIndex = 1;
			this->GUARDAR_R->Text = L"GUARDAR";
			this->GUARDAR_R->UseVisualStyleBackColor = true;
			// 
			// ELEMINAR_B
			// 
			this->ELEMINAR_B->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ELEMINAR_B->Location = System::Drawing::Point(1413, 639);
			this->ELEMINAR_B->Name = L"ELEMINAR_B";
			this->ELEMINAR_B->Size = System::Drawing::Size(154, 38);
			this->ELEMINAR_B->TabIndex = 3;
			this->ELEMINAR_B->Text = L"ELIMINAR";
			this->ELEMINAR_B->UseVisualStyleBackColor = true;
			this->ELEMINAR_B->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MODELO_R
			// 
			this->MODELO_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MODELO_R->Location = System::Drawing::Point(143, 499);
			this->MODELO_R->Multiline = true;
			this->MODELO_R->Name = L"MODELO_R";
			this->MODELO_R->Size = System::Drawing::Size(131, 41);
			this->MODELO_R->TabIndex = 5;
			this->MODELO_R->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MARCA_R
			// 
			this->MARCA_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MARCA_R->Location = System::Drawing::Point(227, 392);
			this->MARCA_R->Multiline = true;
			this->MARCA_R->Name = L"MARCA_R";
			this->MARCA_R->Size = System::Drawing::Size(237, 46);
			this->MARCA_R->TabIndex = 6;
			this->MARCA_R->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// ANIO_R
			// 
			this->ANIO_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ANIO_R->Location = System::Drawing::Point(313, 499);
			this->ANIO_R->Multiline = true;
			this->ANIO_R->Name = L"ANIO_R";
			this->ANIO_R->Size = System::Drawing::Size(131, 41);
			this->ANIO_R->TabIndex = 11;
			// 
			// VEHICULO_R
			// 
			this->VEHICULO_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VEHICULO_R->Location = System::Drawing::Point(227, 203);
			this->VEHICULO_R->Multiline = true;
			this->VEHICULO_R->Name = L"VEHICULO_R";
			this->VEHICULO_R->Size = System::Drawing::Size(237, 46);
			this->VEHICULO_R->TabIndex = 12;
			this->VEHICULO_R->TextChanged += gcnew System::EventHandler(this, &MyForm::VEHICULO_R_TextChanged);
			// 
			// PLACA_R
			// 
			this->PLACA_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLACA_R->Location = System::Drawing::Point(227, 297);
			this->PLACA_R->Multiline = true;
			this->PLACA_R->Name = L"PLACA_R";
			this->PLACA_R->Size = System::Drawing::Size(237, 46);
			this->PLACA_R->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(71, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"VEHICULO : ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(71, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Nro. PLACA : ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(99, 398);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"MARCA : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(139, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"MODELO : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(309, 458);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"AÑO  : ";
			// 
			// MOSTRAR_R
			// 
			this->MOSTRAR_R->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MOSTRAR_R->Location = System::Drawing::Point(617, 120);
			this->MOSTRAR_R->Multiline = true;
			this->MOSTRAR_R->Name = L"MOSTRAR_R";
			this->MOSTRAR_R->Size = System::Drawing::Size(490, 589);
			this->MOSTRAR_R->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(756, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(197, 24);
			this->label7->TabIndex = 20;
			this->label7->Text = L"|°| REGISTRO |°|";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(99, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(319, 24);
			this->label8->TabIndex = 21;
			this->label8->Text = L"|°| AGREGAR VEHICULO |°|";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1248, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(300, 24);
			this->label9->TabIndex = 22;
			this->label9->Text = L"|°| BUSCAR VEHICULO |°|";
			// 
			// GUARDAR_B
			// 
			this->GUARDAR_B->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GUARDAR_B->Location = System::Drawing::Point(1243, 639);
			this->GUARDAR_B->Name = L"GUARDAR_B";
			this->GUARDAR_B->Size = System::Drawing::Size(154, 38);
			this->GUARDAR_B->TabIndex = 23;
			this->GUARDAR_B->Text = L"GUARDAR";
			this->GUARDAR_B->UseVisualStyleBackColor = true;
			// 
			// LLAVE_B
			// 
			this->LLAVE_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLAVE_B->Location = System::Drawing::Point(1388, 79);
			this->LLAVE_B->Multiline = true;
			this->LLAVE_B->Name = L"LLAVE_B";
			this->LLAVE_B->Size = System::Drawing::Size(160, 41);
			this->LLAVE_B->TabIndex = 24;
			this->LLAVE_B->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// VEHICULO_B
			// 
			this->VEHICULO_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VEHICULO_B->Location = System::Drawing::Point(1385, 341);
			this->VEHICULO_B->Multiline = true;
			this->VEHICULO_B->Name = L"VEHICULO_B";
			this->VEHICULO_B->Size = System::Drawing::Size(203, 40);
			this->VEHICULO_B->TabIndex = 26;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(1223, 140);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(369, 154);
			this->textBox10->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(1232, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(134, 20);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Nro. PLACA : ";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// PLACA_B
			// 
			this->PLACA_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLACA_B->Location = System::Drawing::Point(1385, 401);
			this->PLACA_B->Multiline = true;
			this->PLACA_B->Name = L"PLACA_B";
			this->PLACA_B->Size = System::Drawing::Size(203, 40);
			this->PLACA_B->TabIndex = 29;
			// 
			// MARCA_B
			// 
			this->MARCA_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MARCA_B->Location = System::Drawing::Point(1385, 464);
			this->MARCA_B->Multiline = true;
			this->MARCA_B->Name = L"MARCA_B";
			this->MARCA_B->Size = System::Drawing::Size(203, 40);
			this->MARCA_B->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(1232, 347);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 20);
			this->label11->TabIndex = 31;
			this->label11->Text = L"VEHICULO : ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(1219, 407);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(134, 20);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Nro. PLACA : ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(1260, 474);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 20);
			this->label13->TabIndex = 33;
			this->label13->Text = L"MARCA : ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(1434, 520);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 20);
			this->label14->TabIndex = 37;
			this->label14->Text = L"AÑO  : ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Limelight", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(1262, 520);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(108, 20);
			this->label15->TabIndex = 36;
			this->label15->Text = L"MODELO : ";
			// 
			// ANIO_B
			// 
			this->ANIO_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ANIO_B->Location = System::Drawing::Point(1417, 561);
			this->ANIO_B->Multiline = true;
			this->ANIO_B->Name = L"ANIO_B";
			this->ANIO_B->Size = System::Drawing::Size(131, 41);
			this->ANIO_B->TabIndex = 35;
			// 
			// MODELO_B
			// 
			this->MODELO_B->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MODELO_B->Location = System::Drawing::Point(1252, 561);
			this->MODELO_B->Multiline = true;
			this->MODELO_B->Name = L"MODELO_B";
			this->MODELO_B->Size = System::Drawing::Size(131, 41);
			this->MODELO_B->TabIndex = 34;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(1262, 297);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(259, 24);
			this->label16->TabIndex = 38;
			this->label16->Text = L"|°| EDITAR DATOS  |°|";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(1658, 745);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->ANIO_B);
			this->Controls->Add(this->MODELO_B);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->MARCA_B);
			this->Controls->Add(this->PLACA_B);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->VEHICULO_B);
			this->Controls->Add(this->LLAVE_B);
			this->Controls->Add(this->GUARDAR_B);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->MOSTRAR_R);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PLACA_R);
			this->Controls->Add(this->VEHICULO_R);
			this->Controls->Add(this->ANIO_R);
			this->Controls->Add(this->MARCA_R);
			this->Controls->Add(this->MODELO_R);
			this->Controls->Add(this->ELEMINAR_B);
			this->Controls->Add(this->GUARDAR_R);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VEHICULO_R_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
