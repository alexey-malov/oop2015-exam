#include <memory>
#include <iostream>

using namespace std;

struct Node
{
	// �������� ����������� ���
private:
	int m_value;
	unique_ptr<Node> m_next;
};

class List
{
public:
	class Iterator
	{
		// operator++ (���������� ������)
		// operator++ (����������� ������)
		// operator*
		// operator==
		// operator!=
	};

	List()
	{
	}

	// ����������� � ������������ ������������� �� ���������
	List(const List&) = delete;
	List& operator=(const List&) = delete;

	~List()
	{
		// ��� ���������� ������ �� ������ ��������� stack overflow
	}

	void PushFront(int value)
	{
		// �������� ����������� ���
	}

	Iterator begin()
	{
		// �������� ����������� ���
	}

	// ��������, ����������� �� �������, ��������� �� ��������� ��������� ������.
	Iterator end()
	{
		// �������� ����������� ���
	}
private:
	unique_ptr<Node> m_firstNode;
};

int main()
{
	List lst;
	lst.PushFront(3);
	lst.PushFront(2);
	lst.PushFront(4);

	for (int x : lst)
	{
		cout << x << ",";
	}

	// ������ ���� �������� "4,2,3,"

	return 0;
}
