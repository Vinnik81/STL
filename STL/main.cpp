#include <iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------\n"

//#define STL_ARRAY
//#define STL_VECTOR
//#define STL_DEQUE
#define STL_LIST

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY

	const int N = 5;
	/*int arr[N] = { 3,5,8 };
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/

	std::array<int, N> arr = { 3,5,8 };
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
#endif // STL_ARRAY

#ifdef STL_VECTOR

	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	vec.reserve(25);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << tab;
	}
	cout << endl;
	cout << "Size:    " << vec.size() << endl;
	cout << "Max size: " << vec.max_size() << endl;
	cout << "Capacity:  " << vec.capacity() << endl;
	cout << delimiter;
	vec.push_back(55);
	
	cout << "Size:    " << vec.size() << endl;
	cout << "Max size: " << vec.max_size() << endl;
	cout << "Capacity:  " << vec.capacity() << endl;

	try
	{
		for (int i = 0; i < vec.capacity(); i++)
		{
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}

	/*int index;
	int count;
	int value;
	cout << "Введите индекс добовляемого элемента: "; cin >> index;
	cout << "Введите количество добовляемого элемента: "; cin >> count;
	cout << "Введите значение добовляемого элемента: "; cin >> value;
	vec.insert(vec.begin() + index, count, value);*/
	vec.insert(vec.begin() + 3, { 1024,2048,3072 });
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
#endif // STL_VECTOR

#ifdef STL_DEQUE

	std::deque<int> deque = { 3,5,8,13,21 };
	deque.push_back(34);
	deque.push_back(55);
	deque.push_back(89);

	deque.push_front(2);
	deque.push_front(1);
	deque.push_front(1);
	deque.push_front(0);
	for (int i : deque)
	{
		cout << i << tab;
	}

#endif // STL_DEQUE

#ifdef STL_LIST
	std::list<int>::iterator it;
	std::list<int> list = { 3,5,8,13,21 };
	int index;
	int value;
	for (it = list.begin(); it != list.end(); ++it)
		cout << *it << tab; cout << endl;
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	cout << "Введите значение добавляемого элемента: "; cin >> value;
	it = list.begin();
	for (int i = 0; i < index; i++)++it;
		list.insert(it, value);
	for (it = list.begin(); it != list.end(); ++it)
		cout << *it << tab; cout << endl;
#endif // STL_LIST


}