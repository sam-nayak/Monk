#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

#include "Monster.h"
#include "Constants.h"
#include "Functions.h"
#include "Player.h"
#include "MonsterRoom.h"
#include "TreasureRoom.h"
#include "EmptyRoom.h"
#include "SettingsUI.h"
#include "Room.h"

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

	Monster monster;

	enum Direction 
	{ 
		North,
		East, 
		South, 
		West 
	};

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
	private: SettingsUI^ settings;

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
	private: System::Windows::Forms::Panel^  panelScreenBattle;

	private: System::Windows::Forms::RichTextBox^  richTextBoxBattleLog;
	private: System::Windows::Forms::Label^  labelMonsterHP;
	private: System::Windows::Forms::Button^  buttonDefend;
	private: System::Windows::Forms::Button^  buttonAttack;
	private: System::Windows::Forms::Label^  labelPlayerHP;
	private: System::Windows::Forms::TextBox^  txt_EnemyHP;
	private: System::Windows::Forms::TextBox^  txt_PlayerHP;
	private: System::Windows::Forms::Label^  labelBattleLog;




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
			this->panelScreenBattle = (gcnew System::Windows::Forms::Panel());
			this->richTextBoxBattleLog = (gcnew System::Windows::Forms::RichTextBox());
			this->labelMonsterHP = (gcnew System::Windows::Forms::Label());
			this->buttonDefend = (gcnew System::Windows::Forms::Button());
			this->buttonAttack = (gcnew System::Windows::Forms::Button());
			this->labelPlayerHP = (gcnew System::Windows::Forms::Label());
			this->txt_EnemyHP = (gcnew System::Windows::Forms::TextBox());
			this->txt_PlayerHP = (gcnew System::Windows::Forms::TextBox());
			this->labelBattleLog = (gcnew System::Windows::Forms::Label());
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
			this->panelControls = (gcnew System::Windows::Forms::Panel());
			this->buttonWest = (gcnew System::Windows::Forms::Button());
			this->buttonEast = (gcnew System::Windows::Forms::Button());
			this->buttonNorth = (gcnew System::Windows::Forms::Button());
			this->buttonSouth = (gcnew System::Windows::Forms::Button());
			this->panelScreenTitle->SuspendLayout();
			this->panelScreenGameSetup->SuspendLayout();
			this->panelScreenGame->SuspendLayout();
			this->panelScreenBattle->SuspendLayout();
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
			this->panelScreenGame->Controls->Add(this->panelScreenBattle);
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
			// panelScreenBattle
			// 
			this->panelScreenBattle->Controls->Add(this->richTextBoxBattleLog);
			this->panelScreenBattle->Controls->Add(this->labelMonsterHP);
			this->panelScreenBattle->Controls->Add(this->buttonDefend);
			this->panelScreenBattle->Controls->Add(this->buttonAttack);
			this->panelScreenBattle->Controls->Add(this->labelPlayerHP);
			this->panelScreenBattle->Controls->Add(this->txt_EnemyHP);
			this->panelScreenBattle->Controls->Add(this->txt_PlayerHP);
			this->panelScreenBattle->Controls->Add(this->labelBattleLog);
			this->panelScreenBattle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelScreenBattle->Location = System::Drawing::Point(0, 0);
			this->panelScreenBattle->Name = L"panelScreenBattle";
			this->panelScreenBattle->Size = System::Drawing::Size(732, 435);
			this->panelScreenBattle->TabIndex = 3;
			this->panelScreenBattle->Visible = false;
			// 
			// richTextBoxBattleLog
			// 
			this->richTextBoxBattleLog->BackColor = System::Drawing::Color::Black;
			this->richTextBoxBattleLog->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBoxBattleLog->ForeColor = System::Drawing::Color::Red;
			this->richTextBoxBattleLog->Location = System::Drawing::Point(33, 158);
			this->richTextBoxBattleLog->Name = L"richTextBoxBattleLog";
			this->richTextBoxBattleLog->ReadOnly = true;
			this->richTextBoxBattleLog->Size = System::Drawing::Size(319, 271);
			this->richTextBoxBattleLog->TabIndex = 33;
			this->richTextBoxBattleLog->Text = L"";
			// 
			// labelMonsterHP
			// 
			this->labelMonsterHP->AutoSize = true;
			this->labelMonsterHP->Location = System::Drawing::Point(211, 36);
			this->labelMonsterHP->Name = L"labelMonsterHP";
			this->labelMonsterHP->Size = System::Drawing::Size(49, 13);
			this->labelMonsterHP->TabIndex = 32;
			this->labelMonsterHP->Text = L"Their HP";
			// 
			// buttonDefend
			// 
			this->buttonDefend->BackColor = System::Drawing::Color::Black;
			this->buttonDefend->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonDefend->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonDefend->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonDefend->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonDefend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDefend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDefend->ForeColor = System::Drawing::Color::Orchid;
			this->buttonDefend->Location = System::Drawing::Point(352, 82);
			this->buttonDefend->Name = L"buttonDefend";
			this->buttonDefend->Size = System::Drawing::Size(111, 42);
			this->buttonDefend->TabIndex = 31;
			this->buttonDefend->Text = L"Defend";
			this->buttonDefend->UseVisualStyleBackColor = false;
			this->buttonDefend->Click += gcnew System::EventHandler(this, &MainUI::buttonDefend_Click);
			// 
			// buttonAttack
			// 
			this->buttonAttack->BackColor = System::Drawing::Color::Black;
			this->buttonAttack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonAttack->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonAttack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonAttack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAttack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAttack->ForeColor = System::Drawing::Color::Orchid;
			this->buttonAttack->Location = System::Drawing::Point(352, 30);
			this->buttonAttack->Name = L"buttonAttack";
			this->buttonAttack->Size = System::Drawing::Size(111, 42);
			this->buttonAttack->TabIndex = 30;
			this->buttonAttack->Text = L"Attack";
			this->buttonAttack->UseVisualStyleBackColor = false;
			this->buttonAttack->Click += gcnew System::EventHandler(this, &MainUI::buttonAttack_Click);
			// 
			// labelPlayerHP
			// 
			this->labelPlayerHP->AutoSize = true;
			this->labelPlayerHP->Location = System::Drawing::Point(560, 30);
			this->labelPlayerHP->Name = L"labelPlayerHP";
			this->labelPlayerHP->Size = System::Drawing::Size(47, 13);
			this->labelPlayerHP->TabIndex = 29;
			this->labelPlayerHP->Text = L"Your HP";
			// 
			// txt_EnemyHP
			// 
			this->txt_EnemyHP->BackColor = System::Drawing::Color::Red;
			this->txt_EnemyHP->Location = System::Drawing::Point(158, 52);
			this->txt_EnemyHP->Name = L"txt_EnemyHP";
			this->txt_EnemyHP->ReadOnly = true;
			this->txt_EnemyHP->Size = System::Drawing::Size(100, 20);
			this->txt_EnemyHP->TabIndex = 28;
			// 
			// txt_PlayerHP
			// 
			this->txt_PlayerHP->BackColor = System::Drawing::Color::Lime;
			this->txt_PlayerHP->Location = System::Drawing::Point(563, 52);
			this->txt_PlayerHP->Name = L"txt_PlayerHP";
			this->txt_PlayerHP->ReadOnly = true;
			this->txt_PlayerHP->Size = System::Drawing::Size(100, 20);
			this->txt_PlayerHP->TabIndex = 27;
			// 
			// labelBattleLog
			// 
			this->labelBattleLog->AutoSize = true;
			this->labelBattleLog->BackColor = System::Drawing::Color::DarkGray;
			this->labelBattleLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBattleLog->Location = System::Drawing::Point(44, 135);
			this->labelBattleLog->Name = L"labelBattleLog";
			this->labelBattleLog->Size = System::Drawing::Size(82, 20);
			this->labelBattleLog->TabIndex = 26;
			this->labelBattleLog->Text = L"Battle Log";
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
			this->panelScreenBattle->ResumeLayout(false);
			this->panelScreenBattle->PerformLayout();
			this->panelStats->ResumeLayout(false);
			this->panelStats->PerformLayout();
			this->panelControls->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		//+++++++++++++++++++++++++++ Setup Page +++++++++++++++++++++++++++++++//

		// Loads and plays title screen music on loadup
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

		// Displays the title screen
		void showTitleScreen()
		{
			this->panelScreenTitle->Show();
			this->panelScreenTitle->BringToFront();
		}
	
		//+++++++++++++++++++++++++++ Setup Page +++++++++++++++++++++++++++++++//

		// Displays the setup screen
		void showSetupScreen()
		{
			this->panelScreenTitle->Hide();
			this->panelScreenGameSetup->Show();
			this->panelScreenGameSetup->BringToFront();
		}

		// Validates user details and allows the user to continue
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
				startGame();
			}
		}

		// Sets the Player object's name and description to the user's input
		void setDetails(std::string name, std::string description)
		{
			player.setName(name);
			player.setDescription(description);
		}

		//+++++++++++++++++++++++++++ Game Page +++++++++++++++++++++++++++++++//

		// Displays the game screen
		void startGameScreen()
		{
			this->textBoxBattleLog->Clear();
			this->panelScreenGameSetup->Hide();
			this->panelScreenGame->Show();
			this->panelScreenGame->BringToFront();
			updateGameScreen();
		}

		// Updates the player's HP to the game screen
		void updateGameScreen()
		{
			textBoxHPCurrent->Text = Convert::ToString(player.getHealthPoints());
			textBoxHPMax->Text = Convert::ToString(player.getHealthPointsMax());
			textBoxAPCurrent->Text = Convert::ToString(player.getAttackPoints());
			textBoxGameNameCurrent->Text = gcnew String((player.getName()).c_str());
		}

		// Setup and initialisation of game
		void startGame()
		{
			generateRooms();
			player.setHealthPoints();
			startGameScreen();
			play();
		}

		// Creates the logs file
		void createLogs()
		{
			std::ofstream file(Constants::LOGS_PATHWAY, std::ios_base::app);

			file << "---------------------------------------------------------" << std::endl;

			file << player.getName() << " ["
				<< player.getHealthPoints() << " /" << player.getHealthPointsMax()
				<< "] {" << player.getAttackPoints() << "}" << std::endl;

			file << player.getDescription() << std::endl;

			file.close();
		}

		// Generates a MonsterRoom or EmptyRoom based on random number
		Room* generateRandomRoom()
		{
			int roomType = generateRandomNumber(0, 1);

			switch (roomType)
			{
			case 0:
				return new MonsterRoom();
			case 1:
				return new EmptyRoom();
			default:
				return NULL;
			}
		}

		// Dungeon generation by generating rooms and adding to vector
		void generateRooms()
		{
			rooms.clear();

			for (int i = 0; i < Constants::ROOMS_SIZE_X; i++)
			{
				std::vector<Room*> inner;

				for (int i = 0; i < Constants::ROOMS_SIZE_Y; i++)
				{
					inner.push_back(generateRandomRoom());
				}
				rooms.push_back(inner);
			}
			rooms[generateRandomNumber(0, Constants::ROOMS_SIZE_X - 1)]
				[generateRandomNumber(0, Constants::ROOMS_SIZE_Y - 1)] = new TreasureRoom();
		}

		// Sets up state of current game i.e. start room
		void play()
		{
			createLogs();

			currentX = generateRandomNumber(0, Constants::ROOMS_SIZE_X - 1);
			currentY = generateRandomNumber(0, Constants::ROOMS_SIZE_Y - 1);

			while (rooms[currentX][currentY]->getName() != Constants::DEFAULT_EMPTYROOM_NAME)
			{
				currentX = generateRandomNumber(0, Constants::ROOMS_SIZE_X - 1);
				currentY = generateRandomNumber(0, Constants::ROOMS_SIZE_Y - 1);
			}

			startRoom = rooms[currentX][currentY];
			currentRoom = startRoom;

			startRoom->setHasVisited();

			printDungeon();
		}

		// Outputs the dungeon to the textbox on the game screen
		// - 'O' indicates start room
		// - 'X' indicates current room
		// - 'E' indicates discovered empty room
		// - 'M' indicates discovered monster room
		// - '-' indicates undiscovered room
		void printDungeon()
		{
			for (size_t i = 0; i < rooms.size(); i++)
			{
				printLog("[\t");

				for (size_t j = 0; j < rooms[i].size(); j++)
				{
					Room *room = rooms[i][j];

					char letter = room == startRoom ? 'O'
						: room == currentRoom ? 'X'
						: room->hasVisited()
						? room->getName()[0] : '-';

					printLog(letter);
					printLog("\t");

					if (j != rooms.size() - 1)
						printLog(" ");
				}
				printLog("]\n");
			}
			printLog("\n");
		}

		// Outputs the log of information to the game textbox (char only)
		void printLog(char input)
		{
			std::string temp = std::string(1, input);
			printLog(temp);
		}

		// Outputs the log of information to the game textbox (string only)
		void printLog(std::string input)
		{
			System::String^ text = gcnew String(input.c_str());
			this->textBoxBattleLog->AppendText(text);
			this->textBoxBattleLog->ScrollToCaret();
		}

		// Moves the position of character in the dungeon by one space
		void moveCharacter(Direction direction)
		{
			std::string directionStr;
			int nextX = currentX,
				nextY = currentY;
			
			try
			{
				switch (direction)
				{
					case Direction::North:
					{
						nextX--;
						directionStr = "north";
						break;
					}
					case Direction::West:
					{
						nextY--;
						directionStr = "west";
						break;
					}
					case Direction::South:
					{
						nextX++;
						directionStr = "south";
						break;
					}
					case Direction::East:
					{
						nextY++;
						directionStr = "east";
						break;
					}
					default:
					{
						return;
					}
				}
				currentRoom = rooms.at(nextX).at(nextY);
			}
			catch (const std::out_of_range)
			{
				printLog("You hit a wall\n\n");
				return;
			}

			printLog("You head " + directionStr + "\n");
			printDungeon();

			currentX = nextX;
			currentY = nextY;

			std::ofstream file(Constants::LOGS_PATHWAY, std::ios_base::app);
			file << "\n" << currentRoom->getName() << std::endl;
			file.close();

			currentRoom->enter(player);

			if (currentRoom->getName() == Constants::DEFAULT_MONSTERROOM_NAME)
			{
				monster = generateRandomMonster();

				if (monster.isAlive() && player.isAlive())
				{
					showBattleScreen();
					printBattle(monster.getSpecies() + " wants to battle!\n\n");
				}
			}

			if (currentRoom->getName() == Constants::DEFAULT_EMPTYROOM_NAME)
			{
				if (!player.hasMaxHealthPoints())
				{
					if (MessageBox::Show("Do you want to pray to restore health?",
						"Empty Room", MessageBoxButtons::YesNo,
						MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						player.setHealthPoints();
						updateGameScreen();

						std::ofstream file(Constants::LOGS_PATHWAY, std::ios_base::app);
						file << player.getName() <<
							" [" << player.getHealthPoints() << "/" << player.getHealthPointsMax()
							<< "]" << std::endl;
						file.close();
					}
				}
			}

			if (currentRoom->getName() == Constants::DEFAULT_TREASUREROOM_NAME)
			{
				winEnding();
				return;
			}
		}

		// Displays a messagebox indicating that the user lost due to non-positive health
		void loseEnding()
		{
			MessageBox::Show("You Lose!");
			showTitleScreen();
		}

		// Displays a messagebox indicating that the user won due to finding treasure room
		void winEnding()
		{
			MessageBox::Show("You Won!");
			showTitleScreen();
		}

		//+++++++++++++++++++++++++++ Battle Page +++++++++++++++++++++++++++++++//

		// Displays the battle screen
		void showBattleScreen()
		{
			this->richTextBoxBattleLog->Clear();
			this->txt_PlayerHP->Clear();
			this->txt_EnemyHP->Clear();

			updateBattleScreen();

			this->panelScreenBattle->Show();
			this->panelScreenBattle->BringToFront();
		}

		// Updates the textboxes that show HP of the Player and the Monster in battle screen
		void updateBattleScreen()
		{
			this->txt_PlayerHP->Text = Convert::ToString(player.getHealthPoints());
			this->txt_EnemyHP->Text = Convert::ToString(monster.getHealthPoints());
		}

		// Dictates Player battle choice (attack, defend) based on user input
		void turn(int choice)
		{
			if (choice == 1)
				fight(player, monster);
			else if (choice == 2)
				defend(player);

			updateBattleScreen();

			if (!monster.isAlive())
			{
				printBattle("\n" + monster.getSpecies() + " died.\n");
				endBattleScreen();
				printLog("Monster has been defeated\n\n");
				return;
			}

			enemyTurn();
			updateBattleScreen();

			if (!player.isAlive())
			{
				printBattle("\n" + player.getName() + " died.\n");
				endBattleScreen();
				printLog("You have been defeated\n\n");
				loseEnding();
			}
		}

		// Monster AI for battle turn (attack, defend) based on random chance
		void enemyTurn()
		{
			double defendChance;
			double percent = double(monster.getHealthPoints()) / double(monster.getHealthPointsMax());
			double random = rand() / double(RAND_MAX);

			if (percent < 0.35)
				defendChance = 0.25;
			else if (percent > 0.9)
				defendChance = 0.05;
			else
				defendChance = 0.15;

			if (random < defendChance)
				defend(monster);
			else
				fight(monster, player);
		}

		// Attacking character will damage the the defending character (lose health)
		void fight(Character &attacking, Character &defending)
		{
			std::ofstream file(Constants::LOGS_PATHWAY, std::ios_base::app);

			int moveAccuracy = generateRandomNumber(0, Constants::ATTACK_ACCURACY);

			printBattle("\n" + attacking.getSpecies() + " attacked " + defending.getSpecies() + "\n");

			if (moveAccuracy == 0)
			{
				file << attacking.getSpecies() << " missed!" << std::endl;
				printBattle(attacking.getSpecies() + " missed!\n");
			}
			else
			{
				int oldHealth, newHealth, damage, percentage;

				oldHealth = defending.getHealthPoints();
				defending.setHealthPoints(oldHealth - attacking.getAttackPoints());

				newHealth = defending.getHealthPoints();
				damage = oldHealth - newHealth,
					percentage = static_cast<int>(((float)damage / (float)defending.getHealthPointsMax()) * 100);

				printBattle(attacking.getSpecies() + " hit "
					+ defending.getSpecies() + " for " + std::to_string(damage)
					+ "hp (" + std::to_string(percentage) + "%)!\n");

				file << attacking.getSpecies() << " hit "
					<< defending.getSpecies() << " for " << damage
					<< "hp (" << percentage << "%) "
					<< "[" << newHealth << "/" << defending.getHealthPointsMax() << "]"
					<< std::endl;
			}

			file.close();
		}

		// Character will restore health by X amount
		void defend(Character &defender)
		{
			std::ofstream file(Constants::LOGS_PATHWAY, std::ios_base::app);

			int moveAccuracy = generateRandomNumber(0, Constants::DEFENCE_ACCURACY);

			printBattle("\n" + defender.getSpecies() + " defended\n");

			if (moveAccuracy == 0) {
				printBattle("Move failed!\n");

				file << defender.getSpecies() << " failed to defend" << std::endl;
			}
			else
			{
				int oldHealth, newHealth;

				oldHealth = defender.getHealthPoints();
				defender.setHealthPoints(oldHealth + Constants::HEALTH_RECOVERY);
				newHealth = defender.getHealthPoints();

				printBattle(defender.getSpecies() + " recovered " + std::to_string(newHealth - oldHealth) + " HP\n");

				file << defender.getSpecies() << " defended [" << newHealth
					<< "/" << defender.getHealthPointsMax() << "]" << std::endl;
			}

			file.close();
		}

		// Outputs the battle to the battle textbox
		void printBattle(std::string input)
		{
			System::String^ text = gcnew String(input.c_str());
			this->richTextBoxBattleLog->AppendText(text);
			this->richTextBoxBattleLog->ScrollToCaret();
		}

		// Displays the game screen
		void endBattleScreen()
		{
			this->panelScreenBattle->Hide();
			this->panelScreenGame->Show();
			this->panelScreenGame->BringToFront();

			updateGameScreen();
		}

		//+++++++++++++++++++++++++++ Global Functions +++++++++++++++++++++++++++++++//

		// Debugging only
		void debugToConsole(std::string input) {
			OutputDebugStringA(input.c_str());
		}

#pragma endregion
		
		
	//+++++++++++++++++++++++++++ Events +++++++++++++++++++++++++++++++//

	private: System::Void buttonNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		showSetupScreen();
	}

	private: System::Void buttonSettings1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->settings->Show();
	}

	private: System::Void buttonStartGame_Click(System::Object^  sender, System::EventArgs^  e) {
		checkDetails();
	}

	private: System::Void MainUI_Load(System::Object^  sender, System::EventArgs^  e) {
		this->settings = gcnew SettingsUI(titleMusic);
		startTitleMusic();
	}
	private: System::Void buttonSettings2_Click(System::Object^  sender, System::EventArgs^  e) {
		showTitleScreen();
	}
	
	private: System::Void buttonNorth_Click(System::Object^  sender, System::EventArgs^  e) {
		moveCharacter(Direction::North);
	}
	private: System::Void buttonEast_Click(System::Object^  sender, System::EventArgs^  e) {
		moveCharacter(Direction::East);
	}
	private: System::Void buttonSouth_Click(System::Object^  sender, System::EventArgs^  e) {
		moveCharacter(Direction::South);
	}
	private: System::Void buttonWest_Click(System::Object^  sender, System::EventArgs^  e) {
		moveCharacter(Direction::West);
	}
	private: System::Void buttonAttack_Click(System::Object^  sender, System::EventArgs^  e) {
		turn(1);
	}
	private: System::Void buttonDefend_Click(System::Object^  sender, System::EventArgs^  e) {
		turn(0);
	}
	};
}