#include<iostream>
#include<string>
#include<set>
#include<map>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n---------------------------------\n"

//#define STL_SET
#define STL_MAP

//map, set, multimap, multiset

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_SET

	/*std::set<int> set = { 50, 25,75,16,32,64,80 };
for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
{
	cout << *it << tab;
}
cout << endl;*/
	int n;
	cout << "Введите количество элементов: "; cin >> n;
	std::multiset<int> set;
	for (int i = 0; i < n; i++)
	{
		set.insert(rand() % 100);
	}
	for (int i : set)
	{
		cout << i << tab;
	}
	cout << endl;
	cout << "size: " << set.size() << endl;
	int value;
	/*cout << "Введите значение удаляемого элемента: "; cin >> value;
	set.erase(value);*/
	int start_value;
	int stop_value;
	cout << "Введите начальное значение удаляемого элемента: "; cin >> start_value;
	cout << "Введите конечное значение удаляемого элемента: "; cin >> stop_value;
	//set.erase(set.find(start_value), set.find(stop_value));
	set.erase(set.lower_bound(start_value), set.upper_bound(stop_value));
	for (int i : set)cout << i << tab; cout << endl;
#endif // STL_SET

#ifdef STL_MAP

	std::map<int, std::string> week =
	{
		std::pair<int, std::string>(0, "Sunday"),
		std::pair<int, std::string>(1, "Monday"),
		std::pair<int, std::string>(2, "Tuesday"),
		std::pair<int, std::string>(3, "Wenesday"),
		std::pair<int, std::string>(3, "Wenesday"),
		std::pair<int, std::string>(3, "Wenesday"),
		std::pair<int, std::string>(3, "Wenesday"),
		std::pair<int, std::string>(3, "Wenesday"),
		{4, "Thursday"},
		{5, "Friday"},
		{6, "Saturday"},
		{7, "Sunday"},
	};
	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
	cout << delimiter << endl;
	for (std::pair<int, std::string> i : week)
	{
		cout << i.first << tab << i.second << endl;
	}
#endif // STL_MAP

}
