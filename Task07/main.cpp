#include <string>
#include <vector>


// Выполняет замену элементов в диапазоне, заданном итераторами [first, last),
// для которых унарная функция predicate возвращает true на newValue
template < ? ? ? >
void ReplaceIf(first, last, predicate, newValue)
{
	? ? ?
}

int main()
{
	int items[] = { 1, 2, 3,-4, 5, 2, 3 };
	// Заменяет все элементы, меньшие 0 на 0
	ReplaceIf(std::begin(items), std::end(items), [](const int& x) { return x < 0; }, 0);
	/* Вывести items в stdout */

	std::vector<std::string> strings = { "One", "Two", "Three", "Four", "Five", "", "Seven" };
	// Заменяет все пустые строки на "Empty"
	ReplaceIf(strings.begin(), strings.end(), [](const std::string& str) { return str.empty(); }, "Empty");
	/* Вывести items в stdout */

	return 0;
}
