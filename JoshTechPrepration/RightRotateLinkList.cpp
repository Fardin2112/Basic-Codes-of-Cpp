#include<bits/stdc++.h>
using namespace std;

struct ListNode {

    int data;
    ListNode* next;

    ListNode(int val) : data(val), next(NULL) {} // curly bracket is initializer
};

// Rotating singly link list by k times
ListNode* rotateRight(ListNode* head, int k){

    if (!head || !head -> next || k == 0){
        return head;
    }

    // step 1 compute length and find tail
    int length = 1;
    ListNode* tail = head;
    while ( tail -> next){
        tail = tail -> next;
        length++;
    }

    // step 2 connect tail to head (make it circular)
    tail -> next = head;

    // step 3 find new tail position
    k = k % length;
    int stepsToTail = length - k;
    ListNode* newTail = head;
    for (int i=1; i<stepsToTail; i++){
        newTail = newTail -> next;
    }
    // step 4 set new head and break the loop
    ListNode* newHead = newTail -> next;
    newTail -> next = NULL;

    return newHead;
}

// helper
void printList(ListNode* head){
    while (head){
        cout<< head-> data <<" ";
        head = head -> next;
    }
    cout <<endl;
}

int main(){

    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);

    printList(head);

    cout<<"After k times rotation"<<endl;
    int k = 2;
    ListNode* rotated = rotateRight(head,k);
    printList(rotated);


    return 0;
}