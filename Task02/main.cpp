#include <string>
#include <cassert>
#include <iostream>

using namespace std;

// *Односвязный* список строк
class CStringList
{
public:
	CStringList()
	{
		// Написать недостающий код
	}

	CStringList(const CStringList & list)
	{
		// написать недостающий код
	}

	~CStringList()
	{
		// Написать недостающий код (деструктор не должен приводить к переполнению стека)
	}

	CStringList& operator=(const CStringList &list)
	{
		// написать недостающий код
	}

	// Добавляет строку в начало списка. Время выполнения: O(1)
	void AddToBegin(const string& value)
	{
		// Написать недостающий код
	}

	// Возвращает размер списка. Время выполнения: O(1)
	size_t GetSize()const
	{
		// Написать недостающий код
	}

	// Возвращает первый элемент списка. Бросает logic_error, если список пуст
	// Время выполнения: O(1)
	const string& GetFront()const
	{
		// Написать недостающий код
	}

	// Выводит элементы списка в out (по одному в каждой строке)
	void PrintList(ostream & out)const
	{
		// Написать недостающий код
	}

	// Очищает список
	void Clear()
	{
		// Написать недостающий код
	}

private:
	// Написать недостающий код
};



int main()
{
	CStringList lst;
	lst.AddToBegin("one");
	lst.AddToBegin("two");
	lst.AddToBegin("three");
	assert(lst.GetSize() == 3);
	assert(lst.GetFront() == "three");

	CStringList lst1(lst);
	lst1.PrintElements(cout); // Должно быть выведено: three two one (по одному слову в каждой строке)

	lst1.AddToBegin("four");
	lst.PrintElements(cout); // Должно быть выведено: three two one (по одному слову в каждой строке)

	CStringList lst2;
	lst2 = lst1;
	lst2.PrintElements(cout); // Должно быть выведено: four three two one (по одному слову в каждой строке)

	return 0;
}