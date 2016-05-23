#include <string>

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
		// Написать недостающий код
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
	string GetFront()const
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
	return 0;
}