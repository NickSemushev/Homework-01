/*1. Создайте класс Дата (Date), куда входят день, месяц, год. Поля сделайте приватными. Создайте публичные гет-, сет- методы и перегруженные конструкторы: без аргументов, с аргументами. Создайте функцию «распечатать дату».

Проверьте, что класс работает. Создайте и распечатайте дату.*/

/*2. Создайте класс Урок (Lesson). В состав урока входят:

• Дата проведения урока (используйте класс Date)
• Тема урока (строка)
• Название группы (строка)

Создайте конструктор. Создайте функцию «распечатать урок».

Проверьте, что класс работает. Создайте и распечатайте 3 урока.*/

#include <iostream>
#include <string>

using namespace std;

class Date
{
	int day;
	int mounth;
	int year;

public:

	Date()
	{
		day = 0;
		mounth = 0;
		year = 0;
	}

	Date(int day, int mounth, int year)
	{
		this->day = day;
		this->mounth = mounth;
		this->year = year;
	}

	int GetDay() { return day; }
	void SetDay(int day) { this->day = day; }

	int GetMounth() { return mounth; }
	void SetMounth(int mounth) { this->mounth = mounth; }

	int GetYear() { return year; }
	void SetYear(int year) { this->year = year; }

	void printDate()
	{
		cout << day << "." << mounth << "." << year << endl;
	}
};

class Lesson
{
	string groupName;
	string lessonTopic;


public:

	Lesson()
	{
		groupName = "Отсутствует";
		lessonTopic = "Отсутствует";
	}

	Lesson(string groupName, string lessonTopic)
	{
		this->groupName = groupName;
		this->lessonTopic = lessonTopic;
	}

	string GetGroupName() { return groupName; }
	void SetGroupName(string groupName) { this->groupName = groupName; }

	string GetLessonTopic() { return lessonTopic; }
	void SetLessonTopic(string lessonTopic) { this->lessonTopic = lessonTopic; }

	void printLesson()
	{
		cout << "Название группы: " << groupName << endl << "Тема урока: " << lessonTopic << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Дата урока отсутствует: ";

	Date NoDate;
	Lesson NoLesson;
	NoDate.printDate();
	NoLesson.printLesson();

	cout << "Дата первого урока: ";

	Date NewDate1(20, 1, 2022);
	Lesson NewLesson1("СТД 227", "История чего-то");
	NewDate1.printDate();
	NewLesson1.printLesson();

	cout << "Дата второго урока: ";

	Date NewDate2(1, 2, 2022);
	Lesson NewLesson2("СТД 227", "История ещё чего-то");
	NewDate2.printDate();
	NewLesson2.printLesson();

	cout << "Дата третьего урока: ";

	Date NewDate3(8, 2, 2022);
	Lesson NewLesson3("СТД 227", "История ещё чего-то ещё раз");
	NewDate3.printDate();
	NewLesson3.printLesson();

	system("pause");
}
