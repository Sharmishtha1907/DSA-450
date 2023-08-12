#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL||head->next==NULL) return head;

    LinkedListNode <int> *prev=head;
    LinkedListNode <int> *cur=head->next;
    while (cur != NULL) {
      LinkedListNode<int> *nextt = cur->next;
      cur->next=prev;
      if(prev==head)
      {
          prev->next=NULL;
      }
      prev=cur;
      cur=nextt;
    }
    return prev;
}
