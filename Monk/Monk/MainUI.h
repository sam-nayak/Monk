#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

#include "Battle.h"
#include "Monster.h"
#include "Constants.h"
#include "Functions.h"
#include "Player.h"
#include "Monster.h"
#include "MonsterRoom.h"
#include "TreasureRoom.h"
#include "BattleUI.h"
#include "SettingsUI.h"

namespace Monk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Player player;
	std::vector<std::vector<Room*>> rooms;

	Room* startRoom;
	Room* currentRoom;

	bool isFinished = false;

	int currentX;
	int currentY;


	/// <summary>
	/// Summary for MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{

	public:
		MainUI(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainUI()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:



	public: System::Media::SoundPlayer^ titleMusic;
	private: SettingsUI^ settings = gcnew SettingsUI(this, titleMusic);

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
	private: System::Windows::Forms::Button^  buttonMenu;




	private: System::Windows::Forms::RichTextBox^  textBoxBattleLog;

	private: System::Windows::Forms::TextBox^  textBoxDescription;
	private: System::Windows::Forms::TextBox^  textBoxGameName;
	private: System::Windows::Forms::TextBox^  textBoxGameNameCurrent;
	private: System::Windows::Forms::Label^  labelHPOutOf;
	private: System::Windows::Forms::Panel^  panelControls;
	private: System::Windows::Forms::Button^  buttonWest;
	private: System::Windows::Forms::Button^  buttonEast;
	private: System::Windows::Forms::Button^  buttonNorth;
	private: System::Windows::Forms::Button^  buttonSouth;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainUI::typeid));
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
			this->textBoxBattleLog = (gcnew System::Windows::Forms::RichTextBox());
			this->panelStats = (gcnew System::Windows::Forms::Panel());
			this->labelHPOutOf = (gcnew System::Windows::Forms::Label());
			this->textBoxGameNameCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGameName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHPMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAPCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHPCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHP = (gcnew System::Windows::Forms::TextBox());
			this->buttonMenu = (gcnew System::Windows::Forms::Button());
			this->buttonSouth = (gcnew System::Windows::Forms::Button());
			this->buttonNorth = (gcnew System::Windows::Forms::Button());
			this->buttonEast = (gcnew System::Windows::Forms::Button());
			this->buttonWest = (gcnew System::Windows::Forms::Button());
			this->panelControls = (gcnew System::Windows::Forms::Panel());
			this->panelScreenTitle->SuspendLayout();
			this->panelScreenGameSetup->SuspendLayout();
			this->panelScreenGame->SuspendLayout();
			this->panelStats->SuspendLayout();
			this->panelControls->SuspendLayout();
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
			this->buttonSettings1->Click += gcnew System::EventHandler(this, &MainUI::buttonSettings1_Click);
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
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &MainUI::buttonNewGame_Click);
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
			this->buttonStartGame->Click += gcnew System::EventHandler(this, &MainUI::buttonStartGame_Click);
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
			this->panelScreenGame->Controls->Add(this->textBoxBattleLog);
			this->panelScreenGame->Controls->Add(this->panelStats);
			this->panelScreenGame->Controls->Add(this->panelControls);
			this->panelScreenGame->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelScreenGame->Location = System::Drawing::Point(0, 0);
			this->panelScreenGame->Name = L"panelScreenGame";
			this->panelScreenGame->Size = System::Drawing::Size(732, 435);
			this->panelScreenGame->TabIndex = 11;
			this->panelScreenGame->Visible = false;
			// 
			// textBoxBattleLog
			// 
			this->textBoxBattleLog->BackColor = System::Drawing::Color::DarkOrchid;
			this->textBoxBattleLog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxBattleLog->Location = System::Drawing::Point(279, 9);
			this->textBoxBattleLog->Name = L"textBoxBattleLog";
			this->textBoxBattleLog->ReadOnly = true;
			this->textBoxBattleLog->Size = System::Drawing::Size(441, 414);
			this->textBoxBattleLog->TabIndex = 0;
			this->textBoxBattleLog->Text = L"";
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
			this->panelStats->Controls->Add(this->buttonMenu);
			this->panelStats->Location = System::Drawing::Point(3, 290);
			this->panelStats->Name = L"panelStats";
			this->panelStats->Size = System::Drawing::Size(266, 142);
			this->panelStats->TabIndex = 2;
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
			// buttonMenu
			// 
			this->buttonMenu->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonMenu->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMenu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonMenu->Location = System::Drawing::Point(9, 106);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Size = System::Drawing::Size(69, 30);
			this->buttonMenu->TabIndex = 6;
			this->buttonMenu->Text = L"Menu";
			this->buttonMenu->UseVisualStyleBackColor = false;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &MainUI::buttonSettings2_Click);
			// 
			// buttonSouth
			// 
			this->buttonSouth->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonSouth->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSouth->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonSouth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonSouth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonSouth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSouth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSouth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonSouth->Location = System::Drawing::Point(84, 145);
			this->buttonSouth->Name = L"buttonSouth";
			this->buttonSouth->Size = System::Drawing::Size(83, 30);
			this->buttonSouth->TabIndex = 7;
			this->buttonSouth->Text = L"South";
			this->buttonSouth->UseVisualStyleBackColor = false;
			this->buttonSouth->Click += gcnew System::EventHandler(this, &MainUI::buttonSouth_Click);
			// 
			// buttonNorth
			// 
			this->buttonNorth->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonNorth->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonNorth->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonNorth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonNorth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonNorth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNorth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNorth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonNorth->Location = System::Drawing::Point(84, 66);
			this->buttonNorth->Name = L"buttonNorth";
			this->buttonNorth->Size = System::Drawing::Size(83, 30);
			this->buttonNorth->TabIndex = 8;
			this->buttonNorth->Text = L"North";
			this->buttonNorth->UseVisualStyleBackColor = false;
			this->buttonNorth->Click += gcnew System::EventHandler(this, &MainUI::buttonNorth_Click);
			// 
			// buttonEast
			// 
			this->buttonEast->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonEast->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonEast->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonEast->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonEast->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonEast->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEast->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonEast->Location = System::Drawing::Point(163, 104);
			this->buttonEast->Name = L"buttonEast";
			this->buttonEast->Size = System::Drawing::Size(83, 30);
			this->buttonEast->TabIndex = 9;
			this->buttonEast->Text = L"East";
			this->buttonEast->UseVisualStyleBackColor = false;
			this->buttonEast->Click += gcnew System::EventHandler(this, &MainUI::buttonEast_Click);
			// 
			// buttonWest
			// 
			this->buttonWest->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonWest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonWest->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonWest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonWest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonWest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonWest->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonWest->Location = System::Drawing::Point(3, 105);
			this->buttonWest->Name = L"buttonWest";
			this->buttonWest->Size = System::Drawing::Size(83, 30);
			this->buttonWest->TabIndex = 10;
			this->buttonWest->Text = L"West";
			this->buttonWest->UseVisualStyleBackColor = false;
			this->buttonWest->Click += gcnew System::EventHandler(this, &MainUI::buttonWest_Click);
			// 
			// panelControls
			// 
			this->panelControls->Controls->Add(this->buttonWest);
			this->panelControls->Controls->Add(this->buttonEast);
			this->panelControls->Controls->Add(this->buttonNorth);
			this->panelControls->Controls->Add(this->buttonSouth);
			this->panelControls->Location = System::Drawing::Point(3, 3);
			this->panelControls->Name = L"panelControls";
			this->panelControls->Size = System::Drawing::Size(266, 284);
			this->panelControls->TabIndex = 1;
			// 
			// MainUI
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
			this->Name = L"MainUI";
			this->Text = L"Monk";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->Load += gcnew System::EventHandler(this, &MainUI::MainUI_Load);
			this->panelScreenTitle->ResumeLayout(false);
			this->panelScreenTitle->PerformLayout();
			this->panelScreenGameSetup->ResumeLayout(false);
			this->panelScreenGameSetup->PerformLayout();
			this->panelScreenGame->ResumeLayout(false);
			this->panelStats->ResumeLayout(false);
			this->panelStats->PerformLayout();
			this->panelControls->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		void debugToConsole(std::string input) {
			OutputDebugStringA(input.c_str());
		}

		void checkDetails()
		{
			std::string name, description;

			System::String^ nameTextBox = textBoxName->Text;
			System::String^ descriptionTextBox = textBoxDescription->Text;

			name = msclr::interop::marshal_as<std::string>(nameTextBox);
			name[0] = toupper(name[0]);

			description = msclr::interop::marshal_as<std::string>(descriptionTextBox);

			if (name.size() != 0)
			{
				setDetails(name, description);
				this->panelScreenGame->Show();
				this->panelScreenGame->BringToFront();

				setDetails();
				startGame();
			}
		}

		void setDetails()
		{
			textBoxHPCurrent->Text = Convert::ToString(player.getHealthPoints());
			textBoxHPMax->Text = Convert::ToString(player.getHealthPointsMax());

			textBoxAPCurrent->Text = Convert::ToString(player.getAttackPoints());

			textBoxGameNameCurrent->Text = gcnew String((player.getName()).c_str());
		}

		Room* generateRandomRoom()
		{
			int roomType = generateRandomNumber(0, 1);

			switch (roomType)
			{
			case 0:
				return new MonsterRoom();
			case 1:
				return new Room();
			default:
				return NULL;
			}
		}

		void generateRooms()
		{
			for (int i = 0; i < ROOMS_SIZE_X; i++)
			{
				std::vector<Room*> inner;

				for (int i = 0; i < ROOMS_SIZE_Y; i++)
				{
					inner.push_back(generateRandomRoom());
				}
				rooms.push_back(inner);
			}
			rooms[generateRandomNumber(0, ROOMS_SIZE_X - 1)][generateRandomNumber(0, ROOMS_SIZE_Y - 1)] = new TreasureRoom();
		}

		void setDetails(std::string name, std::string description)
		{
			player.setName(name);
			player.setDescription(description);
		}

		void loseEnding()
		{
			print("\n\n============================================\n");
			print("You Lose!\n");
			print("============================================\n");
		}

		void winEnding()
		{
			print("\n\n============================================\n");
			print("You Win!\n");
			print("============================================\n");
		}

		void play()
		{
			createLogs();

			currentX = generateRandomNumber(0, ROOMS_SIZE_X - 1);
			currentY = generateRandomNumber(0, ROOMS_SIZE_Y - 1);

			while (rooms[currentX][currentY]->getName() != DEFAULT_EMPTYROOM_NAME)
			{
				currentX = generateRandomNumber(0, ROOMS_SIZE_X - 1);
				currentY = generateRandomNumber(0, ROOMS_SIZE_Y - 1);
			}

			startRoom = rooms[currentX][currentY];
			currentRoom = startRoom;

			startRoom->setHasVisited();

			printDungeon();
		}

		void createLogs()
		{
			std::ofstream file(LOGS_PATHWAY, std::ios_base::out);   //std::ios_base::app

			file << player.getName() << " "
				<< player.getHealthPoints() << "/" << player.getHealthPointsMax()
				<< " " << player.getAttackPoints() << std::endl;

			file.close();
		}

		void printDungeon()
		{
			for (size_t i = 0; i < rooms.size(); i++)
			{
				print("[\t");

				for (size_t j = 0; j < rooms[i].size(); j++)
				{
					Room *room = rooms[i][j];

					char letter = room == startRoom ? 'O'
						: room == currentRoom ? 'X'
						: room->hasVisited()
						? room->getName()[0] : '-';

					print(letter);
					print("\t");

					if (j != rooms.size() - 1)
						print(" ");
				}

				print("]\n");
			}

			print("\n");
		}

		void print(char input)
		{
			std::string temp = std::string(1, input);
			print(temp);
		}

		void print(std::string input)
		{
			System::String^ text = gcnew String(input.c_str());
			this->textBoxBattleLog->AppendText(text);
			this->textBoxBattleLog->ScrollToCaret();
		}

		void moveCharacter(std::string direction)
		{
			int nextX = currentX,
				nextY = currentY;

			try
			{
				if (direction == "w")
				{
					nextX--;
					direction = "north";
				}
				else if (direction == "a")
				{
					nextY--;
					direction = "west";
				}
				else if (direction == "s")
				{
					nextX++;
					direction = "south";
				}
				else if (direction == "d")
				{
					nextY++;
					direction = "east";
				}
				else
				{
					return;
				}

				currentRoom = rooms.at(nextX).at(nextY);
			}
			catch (const std::out_of_range)
			{
				print("You hit a wall\n\n");
				return;
			}

			print("You head " + direction + "\n");

			currentX = nextX;
			currentY = nextY;

			std::ofstream file(LOGS_PATHWAY, std::ios_base::app);
			file << "\n" << currentRoom->getName() << std::endl;
			file.close();

			currentRoom->enter(player);

			if (currentRoom->getName() == DEFAULT_MONSTERROOM_NAME)
			{
				Monster m("gay", 1, 2);

				BattleUI^ battle = gcnew BattleUI(this, player, m);
				this->Hide();
				battle->ShowDialog();
			}

			printDungeon();

			if (currentRoom->getName() == DEFAULT_TREASUREROOM_NAME)
			{
				winEnding();
				return;
			}

			if (!player.isAlive())
			{
				loseEnding();
				return;
			}
		}

		void startGame()
		{
			generateRooms();
			play();
		}

		int generateRandomNumber1(int min, int max)
		{
			return min + rand() % (max + 1);
		}

		Monster generateRandomMonster1()
		{
			std::string species = MONSTER_RACES[generateRandomNumber1(0, 6)];
			std::string class_ = CLASSES[generateRandomNumber1(0, 11)];

			int health = generateRandomNumber1(1, 2 * DEFAULT_MONSTER_HEALTH);
			int attack = generateRandomNumber1(1, 2 * DEFAULT_MONSTER_ATTACK);

			return Monster(species, health, attack);
		}




#pragma endregion
		public: void startTitleMusic()
		{
			try
			{
				stopTitleMusic();
				this->titleMusic->Load();
				this->titleMusic->PlayLooping();
			}
			catch (Win32Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		public: void stopTitleMusic()
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

	private: System::Void buttonNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panelScreenTitle->Hide();
		this->panelScreenGameSetup->Show();
		this->panelScreenGameSetup->BringToFront();
	}

	private: System::Void buttonSettings1_Click(System::Object^  sender, System::EventArgs^  e) {
		settings->Show();
	}

	private: System::Void buttonStartGame_Click(System::Object^  sender, System::EventArgs^  e) {
		checkDetails();
	}

	private: System::Void MainUI_Load(System::Object^  sender, System::EventArgs^  e) {
		startTitleMusic();
	}
	private: System::Void buttonSettings2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panelScreenTitle->Show();
		this->panelScreenTitle->BringToFront();
	}
	private: System::Void buttonNorth_Click(System::Object^  sender, System::EventArgs^  e) {
		moveCharacter("w");
	}
private: System::Void buttonEast_Click(System::Object^  sender, System::EventArgs^  e) {
	moveCharacter("d");
}
private: System::Void buttonSouth_Click(System::Object^  sender, System::EventArgs^  e) {
	moveCharacter("s");
}
private: System::Void buttonWest_Click(System::Object^  sender, System::EventArgs^  e) {
	moveCharacter("a");
}
};
}