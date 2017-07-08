#include <string>
#include <vector>


// ��������� ������ ��������� � ���������, �������� ����������� [first, last),
// ��� ������� ������� ������� predicate ���������� true �� newValue
template < ? ? ? >
void ReplaceIf(first, last, predicate, newValue)
{
	? ? ?
}

int main()
{
	int items[] = { 1, 2, 3,-4, 5, 2, 3 };
	// �������� ��� ��������, ������� 0 �� 0
	ReplaceIf(std::begin(items), std::end(items), [](const int& x) { return x < 0; }, 0);
	/* ������� items � stdout */

	std::vector<std::string> strings = { "One", "Two", "Three", "Four", "Five", "", "Seven" };
	// �������� ��� ������ ������ �� "Empty"
	ReplaceIf(strings.begin(), strings.end(), [](const std::string& str) { return str.empty(); }, "Empty");
	/* ������� items � stdout */

	return 0;
}
