#include<iostream>

namespace jang {
	using namespace std;

	template<typename T>
	class Node
	{
	public:
		T value;
		Node* next;
	
		Node(T value)
		{
			this->value = value;
			next = nullptr;
		}
		~Node()
		{
			next = nullptr;
		}
	};

	template<typename T>
	class list
	{
		Node<T>* head;
		int cnt;
	public:
		list() : head(nullptr),cnt(0)
		{
		}
		~list()
		{
			clear();
		}
		void clear()
		{
			while (cnt--)
				pop_front();
		}

		int size()
		{
			return cnt;
		}
		void pop_front()
		{
			Node<T>* t = head;

			head = head->next;
			delete t;
			cnt--;
		}
		void show_all()
		{
			Node<T>* loop = head;
			
			while (loop != nullptr)
			{
				cout << loop->value << endl;
				loop = loop->next;
			}
		}
		void push_back(const T& value)
		{
			cnt++;
			if (head == nullptr)
			{
				head = new Node<T>(value);
				return;
			}
			Node<T>* loop = head;
			
			while (loop->next != nullptr)
				loop = loop->next;

			loop->next = new Node<T>(value);
		}
	};
}

int main()
{
	jang::list<int> l;

	l.push_back(3);
	l.push_back(3);
	l.push_back(3);
	l.push_back(3);
	l.push_back(3);

	l.show_all();
	l.pop_front();
	std::cout << "******" << std::endl;
	l.show_all();
	std::cout << "******" << std::endl;
	l.clear();
	l.show_all();

	return 0;
}
