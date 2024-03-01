#include <iostream>
#include <vector>
#include <list>
using namespace std;





template <typename T>
void PrintList(const list<T>& lst) {

}






int main(){
    // vector
	
	vector<int> vecStandard = {34, 23, 32, 7, 9};
	vector<int> vec;
	vec.reserve(100); // capacity = 100
	vec.push_back(2);
	vec.push_back(23);
	vec.push_back(21);
	vec.push_back(5);
	vec.push_back(3);
	vector<int> newvec(55, 30);


	cout << vec.empty(); // true or false
	vec.shrink_to_fit(); // reducing capacity to fit size
	cout << vec.capacity();

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	// cout << vec.at(9);

	vec.clear();
	// vec.pop_back();  last element delete

	vec.resize(217); // 217 000000000..., (217,5) - 55555...

	// vec.insert();
	// vec.erase();
	cout << vec.capacity() << endl; // capacity - additional reserved memory for dynamic array
	cout << vecStandard.capacity();

	// auto

	auto a = 88;
	auto b = 7.888;
	auto c = "auto"; // const char array[]

	auto d = true;

	vector<int>::iterator it = vec.begin();
	auto it2 = vec.begin(); // auto easy

	// ITERATORS

	// iterators dla konteinerow iz stl - similar to smart pointers shared_ptr o tak dalee...

	std::string vec[] = { "aaa", "aa", "a", "aaa", "aaaa" };

	// Using a range-based for loop
	for (const auto& str : vec) {
		std::cout << str << std::endl;
	}

	// Alternatively, using iterators
	for (auto it = std::begin(vec); it != std::end(vec); ++it) {
		std::cout << *it << std::endl;
	}

	// int arr[] = {2,3,5};

	// cout << *(arr + 2);


	


	// operator [] ne перегружен в большинстве контейнеров stl, у вектора есть и итератор и []


	vector<int>::iterator it;

	it = vec.begin();

	cout << *it;
	*it = 6543;
	cout << *(it + 5 - 2);
	it++;
	cout << *it;
	it += 4;
	it -= 2;

	vec.insert(it, 9876); // advance(it, 5) 0 1 2 3 4 9876
	vec.erase(it, it+5); // удаляет елемент из коллекции, можно range например с 0 по 4
	advance(it, 5); // *it + 5 если не поддерживается такой синтаксис

	for (vector<int>::const_iterator i = vec.cbegin(); i != vec.cend(); i++) // для конст итер
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}
	for (vector<int>::reverse_iterator i = vec.rbegin(); i != vec.rend(); i++) // для конст итер
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}

	// list двухсвязный список

	list<int> myList;
	myList.push_back(59);
	myList.push_front(45);

	list<int>::iterator it = myList.begin();

















}
