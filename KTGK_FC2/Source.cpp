#include <iostream>
#include <fstream>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node(int _data) {
		data = _data;
		next = NULL;
	}
};

class LinkedList
{
private:
	Node* head;
	Node* tail;
public:
	void addNode(int _data) {
		Node* node = new Node(_data);
		if (head == NULL) {
			head == node;
			tail = node;
			return;
		}
		tail->next = node;
		tail = node;
	}

	void printList() {
		for (Node* p = head; p != NULL; p = p->next) {
			cout << p->data << " ";
		}
	}
};

int main() {
	const string fileName = "dulieu.txt";
	ifstream file(fileName);
	if (!file) {
		cout << " Error!!!";
		return 1;
	}
	cout << " mo dc!";
}