#include <iostream>
#include <memory>

using namespace std;

struct Node
{
    int value;
    Node* next;
};

class List
{
public:
    List() : head(nullptr), tail(nullptr)
    {

    }

    ~List()
    {
        Node* current = head;
        while(nullptr != current)
        {
            Node* tmp = current;
            current = current->next;
            cout <<"Delete: " <<tmp->value <<endl;
            delete tmp;
        }
    }

    void add(int value)
    {
        if(nullptr == head)
        {
            head = new Node();
            head->value = value;
            head->next = nullptr;
            tail = head;
        }
        else
        {
            Node* tmp = new Node();
            tmp->value = value;
            tmp->next = nullptr;
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void print()
    {
        Node* current = head;
        while(nullptr != current)
        {
            cout << current->value <<", ";
            current = current->next;
        }
    }




/*
Anyway, the algorithm uses two pointers, fast and slow.
The slow pointer starts when the fast pointer is reached to the Nth or Kth node.
For example, in order to find the 3rd element from the last,
the second pointer should start when the first pointer has reached the third element.

After that, both pointers will keep moving one step at a time until the first pointer points to null,
which signals the end of the linked list.
At this time, the second pointer is pointing to the 3rd or Nth node from the last.
*/
    int findNthFromEnd(int n)
    {
        Node* current = head;
        Node* fast = head;
        int start = 1;
        while (fast->next != nullptr)
        {
            fast = fast->next;
            ++start;
            if(start > n)
            {
                current = current->next;
            }
        }
        return current->value;
    }

    int middle()
    {
        Node* fast = head;
        Node* slow = head;
        while(fast != nullptr and fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->value;
    }

    void removeDuplicates()
    {
        Node* first = head;
        Node* second = head;
        while(second->next != nullptr)
        {
            second = second->next;
            if(second->value == first->value)
            {
                Node* tmp = second;
                first->next = tmp->next;
                delete second;
                second = first;
            }
            else
            {
                first = first->next;
                second = first;
            }
        }
    }

private:
    Node* head;
    Node* tail;
};

int main()
{
    List myList;

    myList.add(3);
    myList.add(2);
    myList.add(5);
    myList.add(1);
    myList.add(7);

    myList.print();
    cout <<endl;
    cout <<myList.findNthFromEnd(2) <<endl;

    cout <<"Middle element: "<<myList.middle() <<endl;

    List myList2;
    myList2.add(1);
    myList2.add(3);

    cout <<"Middle element: " <<myList2.middle() <<endl;


    List myList3;
    myList3.add(1);
    cout <<"Middle element: " <<myList3.middle() <<endl;


    List myList4;
    myList4.add(1);
    myList4.add(1);
    myList4.add(1);
    myList4.add(2);
    myList4.add(2);
    myList4.add(13);
    myList4.removeDuplicates();
    myList4.print();


    return 0;
}