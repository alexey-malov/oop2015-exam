// sub_words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <chrono>
#include <fstream>
#include <iostream>
#include <set>
#include <vector>
#include <string>


using namespace std;

vector<string> ReadDictionary(const string& file_name) {
	ifstream in{ file_name };
	string word;
	set<string> dictionary;
	while (getline(in, word)) {
		if (!word.empty()) {
			dictionary.emplace_hint(dictionary.end(), word);
		}
	}
	return { dictionary.begin(), dictionary.end() };
}

/*
* Возвращает множество слов из dictionary, которые можно составить из букв слова word.
* !!!!Каждый символ строки word можно использовать только один раз!!!!!
*
* Например, из букв слова "машина" можно составить слово "шина" и "маша", но нельзя слово "мама", так как
* недостаточно букв "м".
*
* Гарантируется, что word и строки в dictionary непустые и состоят только из строчных символов английского алфавита.
* Размер dictionary - порядка нескольких сотен тысяч элементов
* 
* Вы можете построить дополнительные структуры данных, делающие построение набора слов лучше линейного
* и вместо dictionary использовать их.
* Вместо set можно возращать unordered_set, если это ускорит работу.
*/
set<string> GetSubWords(const string& word, const vector<string>& dictionary) {
	return {};
}

int main()
{
	using namespace std::chrono;

#if 0
	auto dictionary = ReadDictionary("dict.txt");
#else
	vector<string> dictionary = {
		"telega"s, "lemma"s, "gramm"s, "tema"s, "telo"s, "gamma"s
};
#endif

	const auto start_time = steady_clock::now();
	const auto sub_words = GetSubWords("trustfulness"s, dictionary);
	const auto dur = steady_clock::now() - start_time;


	for (const auto& sub_word : sub_words) {
		std::cout << sub_word << std::endl;
	}

	std::cout << sub_words.size() << " words have been found in "sv
		<< duration<double>(dur).count() << " seconds" << std::endl;

}
