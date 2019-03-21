#pragma once

#include <string>
#include <fstream>
#include <iostream>

#include "Constants.h"
#include "Room.h"
#include "Monster.h"
#include "Player.h"

namespace Monk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Monster monster;
	std::ofstream file(LOGS_PATHWAY, std::ios_base::app);

	/// <summary>
	/// Summary for BattleUI
	/// </summary>
	public ref class BattleUI : public System::Windows::Forms::Form
	{

	public:
		BattleUI(System::Windows::Forms::Form^ menu, Player &p, Monster &m)
		{
			otherform = menu;
			player = player;
			monster = m;
			InitializeComponent();

			if (monster.isAlive() && player.isAlive())
				start();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BattleUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonDefend;
	protected:
	private: System::Windows::Forms::Button^  buttonAttack;
	private: System::Windows::Forms::Label^  labelPlayerHP;

	private: System::Windows::Forms::TextBox^  txt_EnemyHP;
	private: System::Windows::Forms::TextBox^  txt_PlayerHP;
	private: System::Windows::Forms::Label^  labelBattleLog;


	private: System::Windows::Forms::Form ^ otherform;
	private: System::Windows::Forms::Label^  labelMonsterHP;
	private: System::Windows::Forms::RichTextBox^  richTextBoxBattleLog;





	protected:
		
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BattleUI::typeid));
			this->buttonDefend = (gcnew System::Windows::Forms::Button());
			this->buttonAttack = (gcnew System::Windows::Forms::Button());
			this->labelPlayerHP = (gcnew System::Windows::Forms::Label());
			this->txt_EnemyHP = (gcnew System::Windows::Forms::TextBox());
			this->txt_PlayerHP = (gcnew System::Windows::Forms::TextBox());
			this->labelBattleLog = (gcnew System::Windows::Forms::Label());
			this->labelMonsterHP = (gcnew System::Windows::Forms::Label());
			this->richTextBoxBattleLog = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
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
			this->buttonDefend->Location = System::Drawing::Point(298, 101);
			this->buttonDefend->Name = L"buttonDefend";
			this->buttonDefend->Size = System::Drawing::Size(111, 42);
			this->buttonDefend->TabIndex = 23;
			this->buttonDefend->Text = L"Defend";
			this->buttonDefend->UseVisualStyleBackColor = false;
			this->buttonDefend->Click += gcnew System::EventHandler(this, &BattleUI::buttonDefend_Click);
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
			this->buttonAttack->Location = System::Drawing::Point(298, 49);
			this->buttonAttack->Name = L"buttonAttack";
			this->buttonAttack->Size = System::Drawing::Size(111, 42);
			this->buttonAttack->TabIndex = 22;
			this->buttonAttack->Text = L"Attack";
			this->buttonAttack->UseVisualStyleBackColor = false;
			this->buttonAttack->Click += gcnew System::EventHandler(this, &BattleUI::buttonAttack_Click);
			// 
			// labelPlayerHP
			// 
			this->labelPlayerHP->AutoSize = true;
			this->labelPlayerHP->Location = System::Drawing::Point(506, 49);
			this->labelPlayerHP->Name = L"labelPlayerHP";
			this->labelPlayerHP->Size = System::Drawing::Size(47, 13);
			this->labelPlayerHP->TabIndex = 21;
			this->labelPlayerHP->Text = L"Your HP";
			// 
			// txt_EnemyHP
			// 
			this->txt_EnemyHP->BackColor = System::Drawing::Color::Red;
			this->txt_EnemyHP->Location = System::Drawing::Point(104, 71);
			this->txt_EnemyHP->Name = L"txt_EnemyHP";
			this->txt_EnemyHP->ReadOnly = true;
			this->txt_EnemyHP->Size = System::Drawing::Size(100, 20);
			this->txt_EnemyHP->TabIndex = 20;
			// 
			// txt_PlayerHP
			// 
			this->txt_PlayerHP->BackColor = System::Drawing::Color::Lime;
			this->txt_PlayerHP->Location = System::Drawing::Point(509, 71);
			this->txt_PlayerHP->Name = L"txt_PlayerHP";
			this->txt_PlayerHP->ReadOnly = true;
			this->txt_PlayerHP->Size = System::Drawing::Size(100, 20);
			this->txt_PlayerHP->TabIndex = 19;
			// 
			// labelBattleLog
			// 
			this->labelBattleLog->AutoSize = true;
			this->labelBattleLog->BackColor = System::Drawing::Color::DarkGray;
			this->labelBattleLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBattleLog->Location = System::Drawing::Point(22, 154);
			this->labelBattleLog->Name = L"labelBattleLog";
			this->labelBattleLog->Size = System::Drawing::Size(82, 20);
			this->labelBattleLog->TabIndex = 18;
			this->labelBattleLog->Text = L"Battle Log";
			// 
			// labelMonsterHP
			// 
			this->labelMonsterHP->AutoSize = true;
			this->labelMonsterHP->Location = System::Drawing::Point(157, 55);
			this->labelMonsterHP->Name = L"labelMonsterHP";
			this->labelMonsterHP->Size = System::Drawing::Size(49, 13);
			this->labelMonsterHP->TabIndex = 24;
			this->labelMonsterHP->Text = L"Their HP";
			// 
			// richTextBoxBattleLog
			// 
			this->richTextBoxBattleLog->BackColor = System::Drawing::Color::Black;
			this->richTextBoxBattleLog->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBoxBattleLog->ForeColor = System::Drawing::Color::Red;
			this->richTextBoxBattleLog->Location = System::Drawing::Point(16, 177);
			this->richTextBoxBattleLog->Name = L"richTextBoxBattleLog";
			this->richTextBoxBattleLog->Size = System::Drawing::Size(256, 246);
			this->richTextBoxBattleLog->TabIndex = 25;
			this->richTextBoxBattleLog->Text = L"";
			// 
			// BattleUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(732, 435);
			this->Controls->Add(this->richTextBoxBattleLog);
			this->Controls->Add(this->labelMonsterHP);
			this->Controls->Add(this->buttonDefend);
			this->Controls->Add(this->buttonAttack);
			this->Controls->Add(this->labelPlayerHP);
			this->Controls->Add(this->txt_EnemyHP);
			this->Controls->Add(this->txt_PlayerHP);
			this->Controls->Add(this->labelBattleLog);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(748, 473);
			this->MinimumSize = System::Drawing::Size(748, 473);
			this->Name = L"BattleUI";
			this->Text = L"Battle";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		void start()
		{
			print("============================================\n");
			print(monster.getSpecies() + " wants to battle!\n\n");

			//while (monster.isAlive() && player.isAlive())
			//{
			//	printFight();

			//	//std::cout << "\nWhat will " << player.getName() << " do? \n1.) Attack \n2.) Defend" << std::endl;
			//	//std::cin >> choice;

			//	/*if (choice == "1")
			//		turn(1);
			//	else if (choice == "2")
			//		turn(2);*/

			//	std::cout << "--------------------------------------------" << std::endl;
			//}

			std::cout << "--------------------------------------------" << std::endl;
			printFight();
			end();
		}

		void turn(int choice)
		{
			if (choice == 1)
				fight(player, monster);
			else if (choice == 2)
				defend(player);

			if (!monster.isAlive())
			{
				print("\n" + monster.getSpecies() + " died.\n");
				return;
			}

			enemyTurn();

			if (!player.isAlive())
			{
				print("\n" + player.getName() + " died." + "\n");
				return;
			}
		}

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

		void fight(Character &attacking, Character &defending)
		{
			int moveAccuracy = generateRandomNumber(0, ATTACK_ACCURACY);

			print("\n" + attacking.getSpecies() + " attacked " + defending.getSpecies() + "\n");

			if (moveAccuracy == 0)
			{
				file << attacking.getSpecies() << " missed!" << std::endl;
				print(attacking.getSpecies() + " missed!\n");
			}
			else
			{
				int oldHealth, newHealth, damage, percentage;

				oldHealth = defending.getHealthPoints();
				defending.setHealthPoints(oldHealth - attacking.getAttackPoints());

				newHealth = defending.getHealthPoints();
				damage = oldHealth - newHealth,
					percentage = static_cast<int>(((float)damage / (float)defending.getHealthPointsMax()) * 100);

				print(attacking.getSpecies() + " hit "
					+ defending.getSpecies() + " for " + std::to_string(damage)
					+ "hp (" + std::to_string(percentage) + "%)!\n");

				file << attacking.getSpecies() << " hit "
					<< defending.getSpecies() << " for " << damage
					<< "hp (" << percentage << "%) "
					<< "[" << newHealth << "/" << defending.getHealthPointsMax() << "]"
					<< std::endl;
			}

			//file.close();
		}

		void defend(Character &defender)
		{
			int moveAccuracy = generateRandomNumber(0, DEFENCE_ACCURACY);

			std::cout << "\n" << defender.getSpecies() << " defended" << std::endl;

			if (moveAccuracy == 0) {
				print("Move failed!\n");

				file << defender.getSpecies() << " failed to defend" << std::endl;
			}
			else
			{
				int oldHealth, newHealth;

				oldHealth = defender.getHealthPoints();
				defender.setHealthPoints(oldHealth + HEALTH_RECOVERY);
				newHealth = defender.getHealthPoints();

				print(defender.getSpecies() + " recovered " + std::to_string(newHealth - oldHealth) + " HP\n");

				file << defender.getSpecies() << " defended [" << newHealth
					<< "/" << defender.getHealthPointsMax() << "]" << std::endl;
			}
		}

		void printFight()
		{
			player.printStats();
			std::cout << "\n" << std::endl;
			monster.printStats();
		}

		void end()
		{
			std::cout << "============================================" << std::endl;
		}

		void print(std::string input)
		{
			System::String^ text = gcnew String(input.c_str());
			this->richTextBoxBattleLog->AppendText(text);
			this->richTextBoxBattleLog->ScrollToCaret();
		}

		int generateRandomNumber(int min, int max)
		{
			return min + rand() % (max + 1);
		}

		Monster generateRandomMonster()
		{
			std::string species = MONSTER_RACES[generateRandomNumber(0, 6)];
			std::string class_ = CLASSES[generateRandomNumber(0, 11)];

			int health = generateRandomNumber(1, 2 * DEFAULT_MONSTER_HEALTH);
			int attack = generateRandomNumber(1, 2 * DEFAULT_MONSTER_ATTACK);

			return Monster(species, health, attack);
		}

#pragma endregion


private: 
	System::Void buttonAttack_Click(System::Object^  sender, System::EventArgs^  e) {
		turn(1);
		//this->Close();
		//otherform->Show();
	}
private: System::Void buttonDefend_Click(System::Object^  sender, System::EventArgs^  e) {
	turn(2);
}
};
}