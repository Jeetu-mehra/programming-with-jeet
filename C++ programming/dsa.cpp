// // //stack using array!!
// #include<iostream>
// using namespace std;

// class stack{
//     public:
//     int array[10];
//     int idx=-1;

//     void push(int num){
//         idx++;
//         array[idx]=num;
//     }
//     void pop(){
//         idx--;
//     }
//     int top(){
//         return array[idx];
//     }
//     int size(){
//         return idx+1;
//     }
//     void display(){
//         for(int i=0;i<=idx;i++){
//             cout<<array[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.display();
//     st.pop();
//     st.display();
//     st.top();
//     st.size();
// }







// //stack using linked List!!
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node (int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class stack{
//     public:
//     Node* head;
//     int size=0;

//     stack(){
//         head=NULL;
//     }

//     void push(int val){
//         Node* temp=new Node(val);
//         temp->next=head;
//         head=temp;
//         size++;
//     }
//     void pop(){
//         Node* temp=head;
//         temp=temp->next;
//         head=temp;
//         size--;
//     }

//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.display();
//     st.pop();
//     st.display();
// }





// //Queue using array!!
// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//     int arr[10];
//     int f=0;
//     int b=0;

//     void push(int val){
//         arr[b]=val;
//         b++;
//     }
//     void pop(){
//         f++;
//     }
//     int front(){
//         cout<<arr[f]<<endl;
//     }
//     int back(){
//         cout<<arr[b-1]<<endl;
//     }
//     void display(){
//         for(int i=f;i<b;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Queue Qu;
//     Qu.push(1);
//     Qu.push(2);
//     Qu.push(3);
//     Qu.push(4);
//     Qu.push(5);
//     Qu.display();
//     Qu.front();
//     Qu.back();
//     Qu.pop();
//     Qu.display();
//     Qu.front();
//     Qu.back();
// }  







// //Linked List
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;   
//     }
// };

// class LinkedList{
//     public:
//     Node *head;
//     LinkedList(){
//         head=NULL;
//     }
//     void insertAtTail(int val){
//         Node *temp=new Node(val);
//         if(head==NULL){
//             head=temp;
//             return;
//         } 
//         Node *a=head;
//         while (a->next!=NULL){
//             a=a->next;
//         }
//         a->next=temp;
//     }

//     void InsertAtHead(int val){
//         Node *temp=new Node(val);
//             temp->next=head;
//             head=temp;
//         return;
//     }

//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//     }
// };

// int main(){
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     int n,value;
//     while(n!=3){
//         cout<<"Enter your choice: "<<endl;
//         cout<<"1: Insert at head"<<endl<<"2: Insert at tail"<<endl<<"3: terminate"<<endl;
//         cin>>n;
//         if(n==1){
//             cout<<"Enter the value: ";
//             cin>>value;
//             ll.InsertAtHead(value);
//             ll.display();
//         }
//         else if(n==2){
//             cout<<"Enter the value: ";
//             cin>>value;
//             ll.insertAtTail(value);
//             ll.display();
//         }
        
//     }
// }







// //Addition of polynomial(linked list application)
// #include <iostream>
// using namespace std;
 
// class term{
//     public:
//     int c;
//     int p;
//     term* next;
//     term(int c,int p){
//         this->c=c;
//         this->p=p;
//         this->next=NULL;
//     }
// };

// class polynomial{
//     public:
//     term* head;

//     polynomial(){
//         head=NULL;
//     }

//     void insert(int c,int p){
//         term* newterm= new term(c,p);
//         if(head==NULL || head->p<p){
//             newterm->next=head;
//             head=newterm;
//         }
//         else{
//             term* temp=head;
//             while(temp->next!=NULL && temp->p>p){
//                 temp=temp->next;
//             }
//             newterm->next=temp->next;
//             temp->next=newterm;
//         }
//     }

//     polynomial add(term* head1,term* head2){
//         polynomial result;
//         term* h1=head1;
//         term* h2=head2;
//         while(h1 && h2){
//             if(h1->p > h2->p){
//                 result.insert(h1->c,h1->p);
//                 h1=h1->next;
//             }
//             else if(h1->p < h2->p){
//                 result.insert(h2->c,h2->p);
//                 h2=h2->next;
//             }
//             else{
//                 result.insert(h1->c+h2->c,h2->p);
//                 h1=h1->next;
//                 h2=h2->next;
//             }
//         }
//         while (h1){
//             result.insert(h1->c,h1->p);
//             h1=h1->next;
//         }
//         while (h2){
//             result.insert(h2->c,h2->p);
//             h2=h2->next;
//         }   
//         return result;
//     }

//     void display(){
//         if(head==NULL) cout<<"0";
//         else{
//             term* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->c<<"x^"<<temp->p<<" ";
//                 if(temp->next!=NULL) cout<<"+"<<" ";
//                 temp=temp->next;
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     polynomial poly1,poly2,result;
//     poly1.insert(5,3);
//     poly1.insert(4,2);
//     poly1.insert(2,0);
//     poly2.insert(5,2);
//     poly2.insert(5,1);
//     poly2.insert(5,0);

//     cout << "First Polynomial: ";
//     poly1.display();
//     cout << "Second Polynomial: ";
//     poly2.display();

//     result = result.add(poly1.head, poly2.head);

//     cout << "Sum: ";
//     result.display();
// }





// //Multiplication of polynomial(linked list application)
// #include <iostream>
// using namespace std;
 
// class term{
//     public:
//     int c;
//     int p;
//     term* next;
//     term(int c,int p){
//         this->c=c;
//         this->p=p;
//         this->next=NULL;
//     }
// };

// class polynomial{
//     public:
//     term* head;

//     polynomial(){
//         head=NULL;
//     }

//     void insert(int c,int p){
//         term* newterm= new term(c,p);
//         if(head==NULL || head->p<p){
//             newterm->next=head;
//             head=newterm;
//         }
//         else{
//             term* temp=head;
//             while(temp->next!=NULL && temp->p>p){
//                 temp=temp->next;
//             }
//             newterm->next=temp->next;
//             temp->next=newterm;
//         }
//     }

//     polynomial multi(term* head1,term* head2){
//         polynomial result;
//         term* h1=head1;
//         term* h2=head2;
//         while(h1!=NULL){
//             h2=head2;
//             while(h2!=NULL){
//                 int c=h1->c*h2->c;
//                 int p=h1->p+h2->p;
//                 result.insert(c,p);
//                 h2=h2->next;
//             }
//             h1=h1->next;
//         }
//         return result;
//     }

//     void display(){
//         if(head==NULL) cout<<"0";
//         else{
//             term* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->c<<"x^"<<temp->p<<" ";
//                 if(temp->next!=NULL) cout<<"+"<<" ";
//                 temp=temp->next;
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     polynomial poly1,poly2,result;
//     poly1.insert(5,3);
//     poly1.insert(4,2);
//     poly1.insert(2,0);
//     poly2.insert(5,2);
//     poly2.insert(5,1);
//     poly2.insert(5,0);

//     cout << "First Polynomial: ";
//     poly1.display();
//     cout << "Second Polynomial: ";
//     poly2.display();

//     result = result.multi(poly1.head, poly2.head);

//     cout << "multi: ";
//     result.display();
// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> req(n);
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            req[i] = {a, b};
        }

        int prev_time = 0;
        int low = 0, high = 0; // range of possible positions Farmer John can be at
        bool impossible = false;

        for(int i = 0; i < n; i++) {
            int curr_time = req[i].first;
            int curr_side = req[i].second;

            int dt = curr_time - prev_time;

            // Expand the interval by time difference
            low -= dt;
            high += dt;

            // Now Farmer John must be at curr_side at this time
            if(curr_side < low || curr_side > high) {
                // Impossible to reach
                impossible = true;
                break;
            }

            // Shrink the interval to curr_side
            low = curr_side;
            high = curr_side;

            prev_time = curr_time;
        }

        if(impossible) {
            cout << -1 << endl;
            continue;
        }

        // Final segment from last checkpoint to minute m
        int dt = m - prev_time;

        // Expand the interval by the remaining time
        low -= dt;
        high += dt;

        // The maximum possible distance from side 0 Farmer John can reach
        int ans = max(abs(low), abs(high));
        cout << ans << endl;
    }
    return 0;
}
