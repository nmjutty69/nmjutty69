#include<iostream>
using namespace std;

int main()
{
	const int Size = 100;
	int Choice = 0, temp = 0, temp3 = 0, CurrentSize = 50, RollNumber = 0, i = 0;
	float temp1 = 0, temp2 = 0, X_Number = 0;
	char temp4 = 0, X_Grade = 0;
	bool NewEntry = true, DeleteEntry = true, Unique = true;
	int RollNum[Size] = { 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180 };
	float MidMarks[Size] = { 44.5, 12.5, 31, 26, 15.5, 46, 4.5, 5, 3, 8.5, 37, 23, 36, 35, 0, 6, 49.5, 38, 30, 48.5, 50, 19, 47, 1.5, 50, 25, 45.5, 7, 32, 29, 41.5, 20.5, 18, 24, 33.5, 21, 2, 28.5, 9, 34, 42, 11, 10.5, 39, 8, 16, 13.5, 17, 27, 40.5 };
	float FinalMarks[Size] = { 65.5, 6, 9, 27.5, 46, 36.5, 93.5, 23, 59, 98.5, 35, 24.5, 3, 82, 83, 80, 90.5, 60, 47, 61.5, 19, 44.5, 43, 74.5, 92, 86.5, 70, 18.5, 33, 2, 68.5, 72, 11, 67.5, 76.5, 22, 62.5, 89, 64, 37.5, 32, 30, 85, 49.5, 55, 63, 12.5, 73, 8, 20.5 };
	int Class[Size] = { 8, 1, 7, 7, 2, 8, 1, 5, 9, 1, 3, 7, 1, 3, 7, 6, 3, 3, 1, 9, 9, 6, 1, 2, 1, 8, 3, 5, 1, 3, 5, 2, 9, 6, 2, 1, 2, 8, 1, 2, 4, 6, 9, 6, 7, 1, 7, 8, 9, 8 };
	char Grades[Size] = { '\0' };
	while (true)
	{
		cout << endl << endl;
		cout << "1.\tSort and Display All the Records w.r.t Roll Number(Ascending order).\n2.\tSort and Display All the Records w.r.t Roll Number(Descending order).\n3.\tSort and Display All Records w.r.t Marks in MidTerm(Ascending order).\n4.\tSort and Display All Records w.r.t Marks in MidTerm(Descending order).\n5.\tSort and Display All Records w.r.t Marks in Final Exam(Ascending order).\n6.\tSort and Display All Records w.r.t Marks in Final Exam(Descending order).\n7.\tSort and Display All Records (Ascending Order w.r.t Grade).\n8.\tSort and Display All Records (Descending Order w.r.t Grade).\n9.\tAdd a New Entry of a Student.\n10.\tDelete a Student Record based on his/her Roll Number.\n11.\tDisplay Record of All the Students Greater Than X Marks in Final Exam (Descending Order w.r.t Marks in Final Exam).\n12.\tDisplay Record of All the Students Greater Than X Marks in Final Exam (Ascending Order w.r.t Marks in Final Exam).\n13.\tDisplay Record of All the Students Less Than or Equal to X Marks in Final Exam (Descending Order w.r.t Marks in Final Exam).\n14.\tDisplay Record of All the Students Less Than or Equal to X Marks in Final Exam (Ascending Order w.r.t Marks in Final Exam).\n15.\tDisplay Record of All the Students Greater Than X grade (Descending Order w.r.t Grade).\n16.\tDisplay Record of All the Students Greater Than X grade (Ascending Order w.r.t Grade).\n17.\tDisplay Record of All the Students Less Than or Equal to X grade (Descending Order wr.rt Grade).\n18.\tDisplay Record of All the Students Less Than or Equal to X grade (Ascending Order w.r.t Grade).\n0.\tExit.\n\n";
		for (int GradeLoop = 0; GradeLoop < CurrentSize; GradeLoop++)
		{
			if (FinalMarks[GradeLoop] >= 86.0)
				Grades[GradeLoop] = 'A';
			else if (FinalMarks[GradeLoop] >= 73.0 && FinalMarks[GradeLoop] <= 85.9)
				Grades[GradeLoop] = 'B';
			else if (FinalMarks[GradeLoop] >= 60.0 && FinalMarks[GradeLoop] <= 72.9)
				Grades[GradeLoop] = 'C';
			else if (FinalMarks[GradeLoop] >= 50.0 && FinalMarks[GradeLoop] <= 59.9)
				Grades[GradeLoop] = 'D';
			else if (FinalMarks[GradeLoop] >= 0.0)
				Grades[GradeLoop] = 'F';
		}
		cout << "Enter a Valid Choice: ";
		cin >> Choice;
		if (Choice == 1)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (RollNum[j] > RollNum[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 2)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (RollNum[j] > RollNum[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 3)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (MidMarks[j] > MidMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 4)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (MidMarks[j] > MidMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 5)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 6)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 7)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (Grades[j] > Grades[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 8)
		{
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (Grades[j] > Grades[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 9)
		{
			if (CurrentSize == Size)
			{
				cout << "\nThere is no space for New Entry\n\n";
			}
			else
			{
				NewEntry = true;
				while (NewEntry)
				{
					Unique = true;
					cout << "Enter Roll Number, Marks in Midterm, Marks in Final Exams and Class of the Student You want to Add: \n";
					cout << "Roll Number: "; cin >> RollNumber;
					for (int i = 0; i < CurrentSize; i++)
					{
						if (RollNum[i] == RollNumber || RollNumber == 0)
						{
							Unique = false;
						}
					}
					if (!Unique)
						cout << "\nEnter a Unique Roll Number.\n\n";
					else
					{
						RollNum[CurrentSize] = RollNumber;
						while (NewEntry)
						{
							cout << "Marks in MidTerm: "; cin >> MidMarks[CurrentSize];
							if (MidMarks[CurrentSize] >= 0 && MidMarks[CurrentSize] <= 50)
								while (NewEntry)
								{
									cout << "Marks in Final Exams: "; cin >> FinalMarks[CurrentSize];
									if (FinalMarks[CurrentSize] >= 0 && FinalMarks[CurrentSize] <= 100)
										while (NewEntry)
										{
											cout << "Class: "; cin >> Class[CurrentSize];
											if (Class[CurrentSize] > 0)
											{
												cout << "Acacdemic Record of the Student of Roll Number: " << RollNumber << " has been added successfully.\n\n";
												CurrentSize++;
												NewEntry = false;
											}
											else
												cout << "\nEnter a Valid Class.\n\n";
										}
									else
										cout << "\nEnter Final Exam Marks from 0 to 100 (Marks) Only.\n\n";
								}
							else
								cout << "\nEnter MidTerm Marks from 0 to 50 (Marks) Only.\n\n";
						}
					}
				}
			}
		}
		else if (Choice == 10)
		{
			if (CurrentSize == 0)
				cout << "\nThere is no Student Record stored yet\n\n";
			else
			{
				cout << "Enter the RollNumber of the Student whose Record you want to Delete: ";
				cin >> RollNumber;
				DeleteEntry = false;
				for (int i = 0; i < CurrentSize; i++)
				{

					if (RollNum[i] == RollNumber)
					{
						for (int j = i; j < CurrentSize - 1; j++)
						{
							RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						}
						CurrentSize--;
						DeleteEntry = true;
						cout << "Acacdemic Record of the Student of Roll Number: " << RollNumber << " has been added successfully.\n\n";
						break;
					}
				}
				if (!DeleteEntry)
					cout << "\nRoll Number Doesn't exist.\n" << endl;
			}
		}
		else if (Choice == 11)
		{
			cout << "Enter the Number: ";
			cin >> X_Number;
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				if (FinalMarks[i]>X_Number)
					cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 12)
		{
			cout << "Enter the Number: ";
			cin >> X_Number;
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				if (FinalMarks[i]>X_Number)
					cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 13)
		{
			cout << "Enter the Number: ";
			cin >> X_Number;
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = CurrentSize - 1; i >= 0; i--)
			{
				if (i == CurrentSize - 1)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				if (FinalMarks[i] <= X_Number)
					cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 14)
		{
			cout << "Enter the Number: ";
			cin >> X_Number;
			for (int Loop = 0; Loop < CurrentSize; Loop++)
				for (int j = 0; j < CurrentSize - 1; j++)
					if (FinalMarks[j] > FinalMarks[j + 1])
					{
						temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
						RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
						RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
					}
			for (int i = 0; i < CurrentSize; i++)
			{
				if (i == 0)
					cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
				if (FinalMarks[i] <= X_Number)
					cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
			}
		}
		else if (Choice == 15)
		{
			cout << "Enter the Grade: ";
			cin >> X_Grade;
			if (X_Grade >= 'A'&&X_Grade <= 'F'&&X_Grade != 'E')
			{
				for (int Loop = 0; Loop < CurrentSize; Loop++)
					for (int j = 0; j < CurrentSize - 1; j++)
						if (Grades[j] > Grades[j + 1])
						{
							temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
							RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
							RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
						}
				for (int i = 0; i < CurrentSize; i++)
				{
					if (i == 0)
						cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
					if (Grades[i] < X_Grade)
						cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
				}
			}
			else
				cout << "\nError: Enter a Valid Grade.\n\n";
		}
		else if (Choice == 16)
		{
			cout << "Enter the Grade: ";
			cin >> X_Grade;
			if (X_Grade >= 'A'&&X_Grade <= 'F'&&X_Grade != 'E')
			{
				for (int Loop = 0; Loop < CurrentSize; Loop++)
					for (int j = 0; j < CurrentSize - 1; j++)
						if (Grades[j] > Grades[j + 1])
						{
							temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
							RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
							RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
						}
				for (int i = CurrentSize - 1; i >= 0; i--)
				{
					if (i == CurrentSize - 1)
						cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
					if (Grades[i] < X_Grade)
						cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
				}
			}
			else
				cout << "\nError: Enter a Valid Grade.\n\n";
		}

		else if (Choice == 17)
		{
			cout << "Enter the Grade: ";
			cin >> X_Grade;
			if (X_Grade >= 'A'&&X_Grade <= 'F'&&X_Grade != 'E')
			{
				for (int Loop = 0; Loop < CurrentSize; Loop++)
					for (int j = 0; j < CurrentSize - 1; j++)
						if (Grades[j] > Grades[j + 1])
						{
							temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
							RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
							RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
						}
				for (int i = 0; i < CurrentSize; i++)
				{
					if (i == 0)
						cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
					if (Grades[i] >= X_Grade)
						cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
				}
			}
			else
				cout << "\nError: Enter a Valid Grade.\n\n";
		}
		else if (Choice == 18)
		{
			cout << "Enter the Grade: ";
			cin >> X_Grade;
			if (X_Grade >= 'A'&&X_Grade <= 'F'&&X_Grade != 'E')
			{
				for (int Loop = 0; Loop < CurrentSize; Loop++)
					for (int j = 0; j < CurrentSize - 1; j++)
						if (Grades[j] > Grades[j + 1])
						{
							temp = RollNum[j]; temp1 = MidMarks[j]; temp2 = FinalMarks[j]; temp3 = Class[j]; temp4 = Grades[j];
							RollNum[j] = RollNum[j + 1]; MidMarks[j] = MidMarks[j + 1]; FinalMarks[j] = FinalMarks[j + 1]; Class[j] = Class[j + 1]; Grades[j] = Grades[j + 1];
							RollNum[j + 1] = temp; MidMarks[j + 1] = temp1; FinalMarks[j + 1] = temp2; Class[j + 1] = temp3; Grades[j + 1] = temp4;
						}
				for (int i = CurrentSize - 1; i >= 0; i--)
				{
					if (i == CurrentSize - 1)
						cout << "Roll Number\tMidTerm(50 Marks)\tFinal(100 Marks)\tClass\t\tGrades\n";
					if (Grades[i] >= X_Grade)
						cout << RollNum[i] << "\t\t" << MidMarks[i] << "\t\t\t" << FinalMarks[i] << "\t\t\t" << Class[i] << "\t\t" << Grades[i] << endl;
				}
			}
			else
				cout << "\nError: Enter a Valid Grade.\n\n";
		}

		else if (Choice == 0)
		{
			cout << "\nGood-Bye!\n\n";
			break;
		}
		else
			cout << "\nError: Read the Menu Carefully and Choose a Correct Option\nThank You!\n\n";
	}
	return 0;
}
