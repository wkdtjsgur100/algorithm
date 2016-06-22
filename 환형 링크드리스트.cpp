#include<iostream>

using namespace std;

template<typename T>
class node
{
public:
	T value;
	node<T>* prev_node;
	node<T>* next_node;

	node(const T& value)
	{
		this->value = value;
		prev_node = nullptr;
		next_node = nullptr;
	}
};

template<typename T>
class circlelist
{
	node<T>* head;
	int cnt;
public:
	circlelist() : 
		head(nullptr),
		cnt(0)
	{
	}

	void push_back(const T& value)
	{
		auto newNode = new (nothrow)node<T>(value);
		if (head == nullptr)
		{
			head = newNode;
			head->next_node = head;
			head->prev_node = head;
			return;
		}

		auto tail = head->prev_node;
		head->prev_node = newNode;

		newNode->next_node = head;
		newNode->prev_node = prev;

	}
};
int main()
{

	return 0;
}