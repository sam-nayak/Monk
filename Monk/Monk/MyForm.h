#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>

#include "Game.h"

namespace Monk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Game game;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();

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



	protected:
		


	private: System::Media::SoundPlayer^ titleMusic;

	private: System::Windows::Forms::Panel^  panelScreenTitle;
	private: System::Windows::Forms::Button^  buttonSettings1;
	private: System::Windows::Forms::Button^  buttonNewGame;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Panel^  panelScreenGameSetup;

	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::Label^  labelDescription;
	private: System::Windows::Forms::Button^  buttonStartGame;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Panel^  panelScreenGame;
	private: System::Windows::Forms::Panel^  panelStats;
	private: System::Windows::Forms::TextBox^  textBoxHPMax;




	private: System::Windows::Forms::TextBox^  textBoxAPCurrent;
	private: System::Windows::Forms::TextBox^  textBoxHPCurrent;

	private: System::Windows::Forms::TextBox^  textBoxAP;
	private: System::Windows::Forms::TextBox^  textBoxHP;
	private: System::Windows::Forms::Button^  buttonSettings2;
	private: System::Windows::Forms::Panel^  panelBattleLog;
	private: System::Windows::Forms::RichTextBox^  textBoxBattleLog;
	private: System::Windows::Forms::Panel^  panelGraphics;
	private: System::Windows::Forms::TextBox^  textBoxDescription;
	private: System::Windows::Forms::TextBox^  textBoxGameName;
	private: System::Windows::Forms::TextBox^  textBoxGameNameCurrent;
	private: System::Windows::Forms::Label^  labelHPOutOf;




	
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->titleMusic = (gcnew System::Media::SoundPlayer());
			this->panelScreenTitle = (gcnew System::Windows::Forms::Panel());
			this->buttonSettings1 = (gcnew System::Windows::Forms::Button());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panelScreenGameSetup = (gcnew System::Windows::Forms::Panel());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->buttonStartGame = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->panelScreenGame = (gcnew System::Windows::Forms::Panel());
			this->panelStats = (gcnew System::Windows::Forms::Panel());
			this->textBoxGameNameCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGameName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHPMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAPCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHPCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHP = (gcnew System::Windows::Forms::TextBox());
			this->buttonSettings2 = (gcnew System::Windows::Forms::Button());
			this->panelBattleLog = (gcnew System::Windows::Forms::Panel());
			this->textBoxBattleLog = (gcnew System::Windows::Forms::RichTextBox());
			this->panelGraphics = (gcnew System::Windows::Forms::Panel());
			this->labelHPOutOf = (gcnew System::Windows::Forms::Label());
			this->panelScreenTitle->SuspendLayout();
			this->panelScreenGameSetup->SuspendLayout();
			this->panelScreenGame->SuspendLayout();
			this->panelStats->SuspendLayout();
			this->panelBattleLog->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMusic
			// 
			this->titleMusic->LoadTimeout = 10000;
			this->titleMusic->SoundLocation = L"Resources\\RPG_Title_1.wav";
			this->titleMusic->Stream = nullptr;
			this->titleMusic->Tag = nullptr;
			// 
			// panelScreenTitle
			// 
			this->panelScreenTitle->Controls->Add(this->buttonSettings1);
			this->panelScreenTitle->Controls->Add(this->buttonNewGame);
			this->panelScreenTitle->Controls->Add(this->labelTitle);
			this->panelScreenTitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelScreenTitle->Location = System::Drawing::Point(0, 0);
			this->panelScreenTitle->Name = L"panelScreenTitle";
			this->panelScreenTitle->Size = System::Drawing::Size(732, 435);
			this->panelScreenTitle->TabIndex = 0;
			// 
			// buttonSettings1
			// 
			this->buttonSettings1->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonSettings1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSettings1->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonSettings1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSettings1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSettings1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonSettings1->Location = System::Drawing::Point(413, 278);
			this->buttonSettings1->Name = L"buttonSettings1";
			this->buttonSettings1->Size = System::Drawing::Size(180, 73);
			this->buttonSettings1->TabIndex = 5;
			this->buttonSettings1->Text = L"Settings";
			this->buttonSettings1->UseVisualStyleBackColor = false;
			this->buttonSettings1->Click += gcnew System::EventHandler(this, &MyForm::buttonSettings1_Click);
			// 
			// buttonNewGame
			// 
			this->buttonNewGame->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonNewGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonNewGame->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonNewGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonNewGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNewGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonNewGame->Location = System::Drawing::Point(140, 278);
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->Size = System::Drawing::Size(180, 73);
			this->buttonNewGame->TabIndex = 4;
			this->buttonNewGame->Text = L"New Game";
			this->buttonNewGame->UseVisualStyleBackColor = false;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &MyForm::buttonNewGame_Click);
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->BackColor = System::Drawing::Color::Transparent;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->labelTitle->Location = System::Drawing::Point(191, 84);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(379, 114);
			this->labelTitle->TabIndex = 3;
			this->labelTitle->Text = L"MONK";
			// 
			// panelScreenGameSetup
			// 
			this->panelScreenGameSetup->Controls->Add(this->textBoxDescription);
			this->panelScreenGameSetup->Controls->Add(this->textBoxName);
			this->panelScreenGameSetup->Controls->Add(this->labelDescription);
			this->panelScreenGameSetup->Controls->Add(this->buttonStartGame);
			this->panelScreenGameSetup->Controls->Add(this->labelName);
			this->panelScreenGameSetup->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelScreenGameSetup->Location = System::Drawing::Point(0, 0);
			this->panelScreenGameSetup->Name = L"panelScreenGameSetup";
			this->panelScreenGameSetup->Size = System::Drawing::Size(732, 435);
			this->panelScreenGameSetup->TabIndex = 2;
			this->panelScreenGameSetup->Visible = false;
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxDescription->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxDescription->Location = System::Drawing::Point(358, 152);
			this->textBoxDescription->MaxLength = 10;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(181, 29);
			this->textBoxDescription->TabIndex = 11;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(358, 84);
			this->textBoxName->MaxLength = 10;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(181, 29);
			this->textBoxName->TabIndex = 7;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDescription->Location = System::Drawing::Point(205, 154);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(115, 24);
			this->labelDescription->TabIndex = 6;
			this->labelDescription->Text = L"Description";
			// 
			// buttonStartGame
			// 
			this->buttonStartGame->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonStartGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonStartGame->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonStartGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonStartGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonStartGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStartGame->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStartGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonStartGame->Location = System::Drawing::Point(326, 257);
			this->buttonStartGame->Name = L"buttonStartGame";
			this->buttonStartGame->Size = System::Drawing::Size(148, 48);
			this->buttonStartGame->TabIndex = 5;
			this->buttonStartGame->Text = L"Start Game";
			this->buttonStartGame->UseVisualStyleBackColor = false;
			this->buttonStartGame->Click += gcnew System::EventHandler(this, &MyForm::buttonStartGame_Click);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(255, 86);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(65, 24);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Name";
			// 
			// panelScreenGame
			// 
			this->panelScreenGame->Controls->Add(this->panelStats);
			this->panelScreenGame->Controls->Add(this->panelBattleLog);
			this->panelScreenGame->Controls->Add(this->panelGraphics);
			this->panelScreenGame->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelScreenGame->Location = System::Drawing::Point(0, 0);
			this->panelScreenGame->Name = L"panelScreenGame";
			this->panelScreenGame->Size = System::Drawing::Size(732, 435);
			this->panelScreenGame->TabIndex = 11;
			this->panelScreenGame->Visible = false;
			// 
			// panelStats
			// 
			this->panelStats->Controls->Add(this->labelHPOutOf);
			this->panelStats->Controls->Add(this->textBoxGameNameCurrent);
			this->panelStats->Controls->Add(this->textBoxGameName);
			this->panelStats->Controls->Add(this->textBoxHPMax);
			this->panelStats->Controls->Add(this->textBoxAPCurrent);
			this->panelStats->Controls->Add(this->textBoxHPCurrent);
			this->panelStats->Controls->Add(this->textBoxAP);
			this->panelStats->Controls->Add(this->textBoxHP);
			this->panelStats->Controls->Add(this->buttonSettings2);
			this->panelStats->Location = System::Drawing::Point(3, 290);
			this->panelStats->Name = L"panelStats";
			this->panelStats->Size = System::Drawing::Size(266, 142);
			this->panelStats->TabIndex = 2;
			// 
			// textBoxGameNameCurrent
			// 
			this->textBoxGameNameCurrent->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxGameNameCurrent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxGameNameCurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxGameNameCurrent->Location = System::Drawing::Point(67, 28);
			this->textBoxGameNameCurrent->Name = L"textBoxGameNameCurrent";
			this->textBoxGameNameCurrent->ReadOnly = true;
			this->textBoxGameNameCurrent->Size = System::Drawing::Size(100, 20);
			this->textBoxGameNameCurrent->TabIndex = 15;
			this->textBoxGameNameCurrent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxGameName
			// 
			this->textBoxGameName->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxGameName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxGameName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxGameName->Location = System::Drawing::Point(9, 28);
			this->textBoxGameName->Name = L"textBoxGameName";
			this->textBoxGameName->ReadOnly = true;
			this->textBoxGameName->Size = System::Drawing::Size(43, 20);
			this->textBoxGameName->TabIndex = 14;
			this->textBoxGameName->Text = L"Name";
			this->textBoxGameName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxHPMax
			// 
			this->textBoxHPMax->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxHPMax->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHPMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHPMax->Location = System::Drawing::Point(124, 54);
			this->textBoxHPMax->Name = L"textBoxHPMax";
			this->textBoxHPMax->ReadOnly = true;
			this->textBoxHPMax->Size = System::Drawing::Size(43, 20);
			this->textBoxHPMax->TabIndex = 13;
			this->textBoxHPMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxAPCurrent
			// 
			this->textBoxAPCurrent->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxAPCurrent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAPCurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxAPCurrent->Location = System::Drawing::Point(67, 80);
			this->textBoxAPCurrent->Name = L"textBoxAPCurrent";
			this->textBoxAPCurrent->ReadOnly = true;
			this->textBoxAPCurrent->Size = System::Drawing::Size(43, 20);
			this->textBoxAPCurrent->TabIndex = 11;
			this->textBoxAPCurrent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxHPCurrent
			// 
			this->textBoxHPCurrent->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxHPCurrent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHPCurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxHPCurrent->Location = System::Drawing::Point(67, 54);
			this->textBoxHPCurrent->Name = L"textBoxHPCurrent";
			this->textBoxHPCurrent->ReadOnly = true;
			this->textBoxHPCurrent->Size = System::Drawing::Size(43, 20);
			this->textBoxHPCurrent->TabIndex = 10;
			this->textBoxHPCurrent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxAP
			// 
			this->textBoxAP->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAP->Location = System::Drawing::Point(9, 80);
			this->textBoxAP->Name = L"textBoxAP";
			this->textBoxAP->ReadOnly = true;
			this->textBoxAP->Size = System::Drawing::Size(43, 20);
			this->textBoxAP->TabIndex = 8;
			this->textBoxAP->Text = L"AP";
			this->textBoxAP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxHP
			// 
			this->textBoxHP->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHP->Location = System::Drawing::Point(9, 54);
			this->textBoxHP->Name = L"textBoxHP";
			this->textBoxHP->ReadOnly = true;
			this->textBoxHP->Size = System::Drawing::Size(43, 20);
			this->textBoxHP->TabIndex = 7;
			this->textBoxHP->Text = L"HP";
			this->textBoxHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonSettings2
			// 
			this->buttonSettings2->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonSettings2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSettings2->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonSettings2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonSettings2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonSettings2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSettings2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSettings2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonSettings2->Location = System::Drawing::Point(9, 106);
			this->buttonSettings2->Name = L"buttonSettings2";
			this->buttonSettings2->Size = System::Drawing::Size(76, 30);
			this->buttonSettings2->TabIndex = 6;
			this->buttonSettings2->Text = L"Settings";
			this->buttonSettings2->UseVisualStyleBackColor = false;
			this->buttonSettings2->Click += gcnew System::EventHandler(this, &MyForm::buttonSettings2_Click);
			// 
			// panelBattleLog
			// 
			this->panelBattleLog->Controls->Add(this->textBoxBattleLog);
			this->panelBattleLog->Location = System::Drawing::Point(3, 3);
			this->panelBattleLog->Name = L"panelBattleLog";
			this->panelBattleLog->Size = System::Drawing::Size(266, 284);
			this->panelBattleLog->TabIndex = 1;
			// 
			// textBoxBattleLog
			// 
			this->textBoxBattleLog->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxBattleLog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxBattleLog->Location = System::Drawing::Point(3, 3);
			this->textBoxBattleLog->Name = L"textBoxBattleLog";
			this->textBoxBattleLog->ReadOnly = true;
			this->textBoxBattleLog->Size = System::Drawing::Size(260, 278);
			this->textBoxBattleLog->TabIndex = 0;
			this->textBoxBattleLog->Text = L"";
			// 
			// panelGraphics
			// 
			this->panelGraphics->Location = System::Drawing::Point(275, 3);
			this->panelGraphics->Name = L"panelGraphics";
			this->panelGraphics->Size = System::Drawing::Size(454, 429);
			this->panelGraphics->TabIndex = 0;
			// 
			// labelHPOutOf
			// 
			this->labelHPOutOf->AutoSize = true;
			this->labelHPOutOf->Location = System::Drawing::Point(111, 57);
			this->labelHPOutOf->Name = L"labelHPOutOf";
			this->labelHPOutOf->Size = System::Drawing::Size(12, 13);
			this->labelHPOutOf->TabIndex = 16;
			this->labelHPOutOf->Text = L"/";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(732, 435);
			this->Controls->Add(this->panelScreenGame);
			this->Controls->Add(this->panelScreenTitle);
			this->Controls->Add(this->panelScreenGameSetup);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(748, 473);
			this->MinimumSize = System::Drawing::Size(748, 473);
			this->Name = L"MyForm";
			this->Text = L"Monk";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelScreenTitle->ResumeLayout(false);
			this->panelScreenTitle->PerformLayout();
			this->panelScreenGameSetup->ResumeLayout(false);
			this->panelScreenGameSetup->PerformLayout();
			this->panelScreenGame->ResumeLayout(false);
			this->panelStats->ResumeLayout(false);
			this->panelStats->PerformLayout();
			this->panelBattleLog->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		void debugToConsole(std::string input) {
			OutputDebugStringA(input.c_str());
		}

		void initialise()
		{
			std::string name, description;

			System::String^ nameTextBox = textBoxName->Text;
			System::String^ descriptionTextBox = textBoxDescription->Text;
						
			name = msclr::interop::marshal_as<std::string>(nameTextBox);
			name[0] = toupper(name[0]);

			description = msclr::interop::marshal_as<std::string>(descriptionTextBox);

			if (name.size() != 0)
			{
				game.setDetails(name, description);
				stopTitleMusic();
				this->panelScreenGame->Show();
				this->panelScreenGame->BringToFront();
			}
		}

		void startGame()
		{
			textBoxHPCurrent->Text = Convert::ToString(game.getPlayer().getHealthPoints());
			textBoxHPMax->Text = Convert::ToString(game.getPlayer().getHealthPointsMax());

			textBoxAPCurrent->Text = Convert::ToString(game.getPlayer().getAttackPoints());
			
			textBoxGameNameCurrent->Text = gcnew String((game.getPlayer().getName()).c_str());
		}

		void startTitleMusic()
		{
			try
			{
				this->titleMusic->Load();
				this->titleMusic->PlayLooping();
			}
			catch (Win32Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		void stopTitleMusic()
		{
			try
			{
				this->titleMusic->Stop();
			}
			catch (Win32Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		

#pragma endregion


	private: System::Void buttonNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panelScreenTitle->Hide();
		this->panelScreenGameSetup->Show();
		this->panelScreenGameSetup->BringToFront();
	}

	private: System::Void buttonSettings1_Click(System::Object^  sender, System::EventArgs^  e) {
		stopTitleMusic();
	}

	private: System::Void buttonStartGame_Click(System::Object^  sender, System::EventArgs^  e) {
		initialise();

		startGame();

		//this->panelScreenGame->Visible = true;

		////this->panelScreenGameSetup->Hide();
		//this->panelScreenGame->Show();
		//this->panelScreenGameSetup->Hide();
		//this->panelScreenGame->BringToFront();
		
	}
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		startTitleMusic();
	}
	private: System::Void buttonSettings2_Click(System::Object^  sender, System::EventArgs^  e) {
		startTitleMusic();

		//this->panelScreenGame->Hide();
		this->panelScreenTitle->Show();
		//this->panelScreenGameSetup->Hide();
		this->panelScreenTitle->BringToFront();
	}
};
}