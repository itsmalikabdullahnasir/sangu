#pragma once
#include "Header.h"
#include <sstream>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 247);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"View";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(21, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"View";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(21, 330);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 41);
			this->button6->TabIndex = 5;
			this->button6->Text = L"View";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 377);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 33);
			this->button7->TabIndex = 6;
			this->button7->Text = L"View";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(21, 416);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 31);
			this->button8->TabIndex = 7;
			this->button8->Text = L"View";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 28);
			this->label1->TabIndex = 8;
			this->label1->Text = L"University TimeTable ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(239, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Teacher Wise Time Table";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(239, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Section Wise Time Table";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(239, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Student Wise Time Table";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(239, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Room Wise Time Table";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(239, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Lab Wise Time Table";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(239, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Query Courses for a specific time";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(239, 385);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(200, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Query Courses for a specific day";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(239, 423);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Exit";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(453, 465);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Call the printTeacherWiseTimeTable function and capture its output into a string
		std::ostringstream output;

		


		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Teacher Wise Time Table");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Call the printSectionWiseTimeTable function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Section Wise Time Table");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Call the printStudentWiseTimeTable function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Student Wise Time Table");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Call the printRoomWiseTimeTable function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Room Wise Time Table");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Call the printLabWiseTimeTable function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Lab Wise Time Table");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the time from the user
		

		// Call the printCoursesForSpecificTime function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Courses for a specific time");
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the day from the user
		

		// Call the printCoursesForSpecificDay function and capture its output into a string
		std::ostringstream output;

		// Display the output in a message box
		MessageBox::Show(gcnew String(output.str().c_str()), "Courses for a specific day");
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
