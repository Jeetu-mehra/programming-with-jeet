// #include<iostream>
// using namespace std;
// int main(){
//     int $c;
//     $c=5;
//     $c/=2;
//     cout<<$c;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     char x;
//     cout<<"Enter any character: ";
//     cin>>x;
//     if((int)x>=97 && (int)x<=122)
//     {
//         cout<<"The Alphabet is Small";
//     }
//     else
//     {
//         cout<<"The given alphabet is Capital";
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     char x;
//     cout<<"Enter any character: ";
//     cin>>x;
//     if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
//     {
//         cout<<"The Alphabet is vowel";
//     }
//     else
//     {
//         cout<<"The given alphabet is Consonent";
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     float a,b,c;
//     cout<<"Enter first side: ";
//     cin>>a;
//     cout<<"Enter second side: ";
//     cin>>b;
//     cout<<"Enter third side: ";
//     cin>>c;
//     if(a<b+c && b<a+c && c<a+b)
//         cout<<"The Sides of triangle are valid"<<endl;
//         cout<<"hello";
//     if(0)
//     {
//         cout<<"The sides of triangle are not valid";
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     char x;
//     int a,b;
//     cout<<"Enter ANy two numbers: ";
//     cin>>a>>b;
//     cout<<"Enter operation symbol doyou want to perform: ";
//     cin>>x;//+,-,*,/
//     switch(x)
//     {
//         case '+':
//             cout<<a+b;
//             break; 
//         case '-':
//             cout<<a-b;
//             break;
//         case '*':
//             cout<<a*b;
//             break;
//         case '/':
//             cout<<a/b;
//             break;
//     }
// }




//Pattrn printing.
// * * * * * 
// * * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             cout<<"* ";
//         }
//             cout<<endl;
//     }
//     return 0;
// }




//Pattrn printing.
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cout<<j+1<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// *  
// *  *
// *  *  *
// *  *  *  *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             cout<<"* "<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// * * * * 
// * * *   
// * *
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4-i;j++)
//         {
//             cout<<"* " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Pattrn printing.
// 1 
// 1 2
// 1 2 3
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             cout<<j+1<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// 1 
// 1 3
// 1 3 5
// 1 3 5 7

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             cout<<j*2+1<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



 
//Pattrn printing.
// A B C D 
// A B C D
// A B C D
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cout<<char(65+j)<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
//     *     
//     *
// * * * * *
//     *
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(j==2)
//             {
//                 cout<<"* ";
//             }
//             else if(i==2)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// *       * 
//   *   *
//     *
//   *   *
// *       *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j==i || i+j==6)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int k=1;
//     for(i=1;i<=4;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             cout<<k<<" " ;
//             k+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
// 1 
// 0 1
// 1 0 1
// 0 1 0 1

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             cout<<(j+i)%2<<" " ;

//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
//       * 
//     * *
//   * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4-i-1;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=0;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if(i+j>=3)
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Pattrn printing.
//       1 
//     1 2
//   1 2 3
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4-i-1;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=0;j<=i;j++)
//         {
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//Pattrn printing.
//         * * * * 
//       * * * *
//     * * * *
//   * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=0;j<4;j++)
//         {
//             cout<<"* ";
//         }
//             cout<<endl;
//     }
//     return 0;
// }




//Pattrn printing.
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=0;j<=i*2;j++)
//         {
//             cout<<"* ";
//         }
//             cout<<endl;
//     }
//     return 0;
// }



//Pattrn printing.
//       1   
//     1 2 1 
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=4-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         for(j=1;j<i;j++)
//         {
//             cout<<i-j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






//Pattrn printing.
//       * 
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       * 

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     n=4;
//     for(i=1;i<=2*n-1;i++)
//     {
//         for(j=1;j<=n-i && i<n;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=i*2-1 && i<=n;j++)
//         {
//             cout<<"* ";
//         }
//         if(i>n)
//         {
//             for(j=1;j<=i-n;j++)
//             {
//                 cout<<"  ";
//             }
//             for(j=1;j<4*n-2*i;j++)
//             {
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     n=4;
//     int nsp=n-1;
//     int nst=1;
//     for(i=1;i<=2*n-1;i++)
//     {
//         for(j=1;j<=nsp;j++)
//         {
//             cout<<"  ";
//         }    
//         if(i<=n) nsp-=1;
//         else nsp+=1;
//         for(j=1;j<=nst;j++)
//         {
//             cout<<"* ";
//         }
//         if(i<n) nst+=2;
//         else nsp-=2;      
//         cout<<endl;  
//     }
// }




// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main()
// {
//     float a;
//     a = srand( );
//     cout<<srand();

// }


// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     int i,factorial=1;
//     for(i=1;i<=n;i++)
//     {
//         factorial*=i;
//     }
//     return factorial;
// }


// int main()
// {
//     int n,r;
//     float c;
//     cin>>n>>r;
//     c=fact(n)/(fact(r)*fact(n-r));
//     cout<< c;
// }



// #include<iostream>
// using namespace std;
// int fact(int x)
// {
//     int i,f=1;
//     for(i=1;i<=x;i++)
//     {
//         f*=i;
//     }
//     return f;
// }
// float ncr(int n,int r)
// {
//     float ncr = fact(n)/(fact(r)*fact(n-r));   
//     return ncr; 
// }
// int main()
// {
//     int i,j,n;
//     cout<<"enter the size of triangle";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(j=0;j<=i;j++)
//         {
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,sum;
//     int *num1, *num2;
//     num1=&a;
//     num2=&b;
//     cin>>*num1>>*num2;
//     sum = *num1 + *num2;
//     cout<<sum;
// }




// #include<iostream>
// using namespace std;
// void find(int a, int *b, int *c)
// {
//    *b = a % 10;
//    while(a>9)
//    {
//         a = a / 10;
//    }
//    *c = a; 
// }

// int main()
// {
//     int n,fd,ld;
//     cout<<"Enter the Number: ";
//     cin>>n;
//     int *pfd,*pld;
//     pfd = &fd;
//     pld = &ld;
//     find(n,pfd,pld);
//     cout<<*pfd<<endl;
//     cout<<*pld;
// }






//..............................................Linked list.............................................................
// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class LinkedList{
//     Node *head;
//     Node *tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;tail=NULL;size=0;
//     }
//     void insertAtEnd(int val){
//         Node *temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }

//     void display(){
//         Node *temp=head;
//         while(head!=NULL){
//             cout<<head->val<<" ";
//             head=head->next;
//         }
//     }
// };

// int main(){
//     LinkedList ll;
//     int n,value;
//     cout<<"Enter the no of elements in LinkedList: ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         ll.insertAtEnd(value);
//     }
//     cout << "The created linked list is: ";
//     ll.display();
// }





// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class LinkedList{
//     Node *head;
//     Node *tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;tail=NULL;size=0;
//     }
//     void insertAtEnd(int val){
//         Node *temp=new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }

//     void display(){
//         Node *temp=head;
//         while(head!=NULL){
//             cout<<head->val<<" ";
//             head=head->next;
//         }
//     }
// };

// int main(){
//     LinkedList ll;
//     int n,value,num;
//     cout<<"Enter the no of elements in LinkedList: ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         ll.insertAtEnd(value);
//     }
//     cout << "The created linked list is: ";
//     ll.display();

//     cout<<"\n Enter the new elemnt: ";
//     cin>>num;
//     ll.insertAtEnd(num);

//     cout << "The New created linked list is: ";
//     ll.display();
// }



// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class Linkedlist{
//     private:
//     Node* head;
//     public:
//     Linkedlist(){
//         head=NULL;
//     }

//     void insertathead(int val){
//         Node* temp= new Node(val);
//         if(head==NULL){
//             head=temp;
//             head->next=NULL;

//         }
//         else{
//             temp->next=head;
//             head=temp;
//         }

//         return ;
//     }

//     void display(){
//         Node*temp;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"None";
//         cout<<endl;
//         return;
//     }

// };


// int main(){
//     Linkedlist ll;
//     int n;
//     int temp;
//     cout<<"Enter thr no. of values you want to inserr: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         ll.insertathead(temp);
//     }
//     ll.display();
//     ll.insertathead(10);
//     ll.display();

// }





// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class Linkedlist{
//     private:
//     Node* head;
//     public:
//     Linkedlist(){
//         head=NULL;
//     }

//     void insertathead(int val){
//         Node* temp= new Node(val);
//         if(head==NULL){
//             head=temp;
//             head->next=NULL;

//         }
//         else{
//             temp->next=head;
//             head=temp;
//         }

//         return ;
//     }
//     void insertatend(int val){
//         Node* n1=new Node(val);
//         Node* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=n1;

//         return;
//     }

//     void display(){
//         Node*temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"None";
//         cout<<endl;
//         return;
//     }

// };


// int main(){
//     // Linkedlist ll;
//     // cout<<"the array is;";
//     // //int arr[]={2,4,6};
//     // vector<int> v;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // int n=v.size();
//     // for(int i=0;i<n;i++){
//     //     ll.insertatend(v[i]);
//     // }


//     Linkedlist ll;
    
//     cout << "The array is: ";
//     vector<int> v = {1, 2, 3};
//     for (int i=0;i<v.size();i++) {
//         //cout << num << " ";
//         ll.insertatend(v[i]);
//     }
//     cout << endl;

//     ll.display();
//     ll.insertathead(10);
//     ll.display();
//     ll.insertatend(10);
//     ll.display();

// }



// #include<iostream>
// using namespace std;
//  class Node{
//     int val;
//     Node* next;
//     Node* prev;
//     Node(int val){
//         this->val=val;
//         this->next=next;
//         this->prev=prev;
//     }
// };

// class DoubleLinkedList{
//     private:
//     Node* head;
//     public:
//     DoubleLinkedList(){
//         head=NULL;
//     }

//     void insertathead(int val){
//         Node* temp=new Node(val);
        
//     }

// }



//------------------------------------------------------midsem------------------------------------------------------
// //Linkedlist
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class linkelist{
//     public:
//     Node* head;
//     linkelist(){
//         head=NULL;
//     }
//     void insertatfront(int val){
//         Node* temp=new Node(val);
//         temp->next=head;
//         head=temp;
//     }

//     void insertatend(int val){
//         Node* temp=new Node(val);
//         Node* a=head;
//         if(head==NULL){
//             temp->next=NULL;
//             head=temp;
//         }
//         else{
//             while(a->next!=NULL){
//                 a=a->next;
//             }
//             a->next=temp;
//         }
//     }
    
//     void display(){
//         Node* a=head;
//         while(a!=NULL){
//             cout<<a->val<<"->";
//             a=a->next;
//         }
//         cout<<"NULL";

//     }
// };

// int main(){
//     linkelist Ll;
//     cout<<"\n 1: insert in front.";
//     cout<<"\n 2: insert in end.";
//     cout<<"\n 3: display.";
//     cout<<"\n 4: end the program.";
//     int choice=0;
//     while(choice!=4){
//         cout<<"\n Enter Choice: ";
//         cin>>choice;
//         if(choice==1){
//             cout<<"Enter the value: ";
//             int value;
//             cin>> value;
//             Ll.insertatfront(value);
//         }
//         else if(choice==2){
//             cout<<"Enter the value: ";
//             int value;
//             cin>> value;
//             Ll.insertatend(value);
//         }
//         else if(choice==3){

//             Ll.display();
//         }

//     }
// }




// //stack using array
// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//     int arr[5];
//     int idx=-1;
//     void push(int val){
//         idx++;
//         arr[idx]=val;
//     }
//     void pop(){
//         idx--;
//     }
//     int top(){
//         cout<< arr[idx];
//     }
//     int size(){
//         cout<< idx+1;
//     }
// };

// int main(){
//     Stack st;
//     cout<<"\n 1: push the element";
//     cout<<"\n 2: pop the elemnet.";
//     cout<<"\n 3: display top element.";
//     cout<<"\n 4: dispaly the size.";
//     cout<<"\n 5: end the program.";
//     int choice=0;
//     while(choice!=5){
//         cout<<"\n Enter Choice: ";
//         cin>>choice;
//         if(choice==1){
//             cout<<"Enter the value: ";
//             int value;
//             cin>> value;
//             st.push(value);
//         }
//         else if(choice==2){
//             cout<<"Enter the value: ";
//             int value;
//             cin>> value;
//             st.pop();
//         }
//         else if(choice==3){
//             st.top();
//         }
//         else if(choice==4){
//             st.size();
//         }

//     }
// }



//recursion
// int fact(int n){
//     if(n==1) return 1;
//     return n * fact(n-1);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<fact(0);
// }




// int pow(int p,int q){
//     if(q==1) return p;
//     return pow(p,q/2)*pow(p,q/2);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<pow(3,8);
// }



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// void display(Node* root){
//     if(root==NULL)return ;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }

// int sum(Node* root){
//     if(root==NULL) return 0;
//     return root->val + sum(root->left) + sum(root->right);
// }
// int size(Node* root){
//     if(root==NULL) return 0;
//     return 1 + size(root->left) + size(root->right);
// }
// int highest(Node* root){
//     if(root==NULL) return 0;
//     return max(root->val ,max (highest(root->left) , highest(root->right)));
// }
// int levels(Node* root){
//     if(root==NULL) return 0;
//     return (1 + max (levels(root->left) , levels(root->right)));
// }

// int main(){
//     Node *a=new Node(1);
//     Node* b=new Node(2);
//     Node *c=new Node(-1);
//     Node* d=new Node(12);
//     Node *e=new Node(5);
//     Node* f=new Node(6);
//     Node* g=new Node(7);
//     Node* h=new Node(8);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;
//     g->left=h;
//     display(a);
//     cout<<sum(a)<<endl;
//     cout<<size(a)<<endl;
//     cout<<highest(a)<<endl;
//     cout<<levels(a)<<endl;
// }




// //bubble sort.
// #include<iostream>
// using namespace std;
// #include<vector>

// void bubblesort(vector<int>ele){
//     int n=ele.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(ele[j]>ele[j+1]) swap(ele[j],ele[j+1]);
//         }
//     }
//     for(int i=0;i<ele.size();i++){
//         cout<<ele[i]<<" ";
//     }
// }
// int main(){
//     int n,temp;
//     cout<<"Enter the no of elements: ";
//     vector<int> v;
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         v.push_back(temp);
//     }

//     bubblesort(v);
// }





// //selection sort.
// #include<iostream>
// using namespace std;
// #include<vector>
// #include<climits>

// void selectionsort(vector<int>ele){
//     int n=ele.size();
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX;
//         int idx=-1;
//         for(int j=i;j<n;j++){
//             if(ele[j]<min) {
//                 min=ele[j];
//                 idx=j;
//             }
//         }
//         swap(ele[i],ele[idx]);
//     }
//     for(int i=0;i<ele.size();i++){
//         cout<<ele[i]<<" ";
//     }
// }
// int main(){
//     int n,temp;
//     cout<<"Enter the no of elements: ";
//     vector<int> v;
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         v.push_back(temp);
//     }

//     selectionsort(v);
// }




// //insertion sort.
// #include<iostream>
// using namespace std;
// #include<vector>

// void insertionsort(vector<int>ele){
//     int n=ele.size();
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>=1){
//             if(ele[j]>ele[j-1]) break;
//             else swap(ele[j],ele[j-1]);
//             j--;
//         }
//     }
//     for(int i=0;i<ele.size();i++){
//         cout<<ele[i]<<" ";
//     }
// }
// int main(){
//     int n,temp;
//     cout<<"Enter the no of elements: ";
//     vector<int> v;
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         v.push_back(temp);
//     }

//     insertionsort(v);
// }



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



// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class LinkedList{
//     public:
//     Node* head;
//     LinkedList(){
//         head=NULL;
//     }
//     void InsertAtHead(int val){
//         Node* temp=new Node(val);
//         temp->next=head;
//         head=temp;
//     }

//     void InsertAtTail(int val){
//         Node* temp=new Node(val);
//         Node* a=head;
//         if(head==NULL) head=temp;
//         else{
//             while(a->next!=NULL){
//                 a=a->next;
//             }
//             a->next=temp;
//         }
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
//     ll.InsertAtHead(1);
//     ll.InsertAtHead(2);
//     ll.InsertAtTail(3);
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
//             ll.InsertAtTail(value);
//             ll.display();
//         }
        
//     }
// }





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






// #include<iostream>>
// using namespace std;

// class Node{
//     public:
//     int c;
//     int p;
//     Node* next;
//     Node(int c,int p){
//         this->c=c;
//         this->p=p;
//         this->next=NULL;
//     }   
// };

// class polynomial{
//     public:
//     Node* head;

//     polynomial(){
//         Node* head=NULL;
//     }

//     void insert_term(int c,int p){
//         Node* newterm= new Node(c,p);
//         if(head==NULL || head->p<newterm->p){
//             newterm->next=head;
//             head=newterm;
//         }
//         else{
//             Node* temp=head;
//             while(head->next!=NULL && temp->p>p){
//                 temp=temp->next;
//             }
//             newterm->next=temp->next;
//             temp->next=newterm;
//         }
//     }

//     void sum()

// };




//bubble sort

// #include<iostream>
// using namespace std;
// #include<vector>

// void bubblesort(vector<int> v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n-1-i;j++){
//             if(v[j]>v[j+1]) swap(v[j],v[j+1]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no. of elments: ";
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     bubblesort(vec);
// }




// //selection sort
// #include<iostream>
// using namespace std;
// #include<vector>
// #include<climits>

// void selectionsort(vector<int> v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX,idx=-1;
//         for(int j=i;j<n;j++){
//             if(min>v[j]){
//                 min=v[j];
//                 idx=j;
//             }
//         }
//         swap(v[i],v[idx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no. of elments: ";
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     selectionsort(vec);
// }





// //insertion sort
// #include<iostream>
// using namespace std;
// #include<vector>
// #include<climits>

// void insertionsort(vector<int> v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>=1){
//             if(v[j]<v[j-1]) swap(v[j],v[j-1]);
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no. of elments: ";
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     insertionsort(vec);
// }







// //merge sort
// #include<iostream>
// using namespace std;
// #include<vector>

// void merge(vector<int>&a,vector<int>&b,vector<int>&res){
//     int i=0,j=0,k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]) res[k++]=a[i++];
//         else res[k++]=b[j++];
//     }
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }

// void mergesort(vector<int>&v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2,n2=n-n1;
//     vector<int>a,b;
//     for(int i=0;i<n1;i++){
//         a.push_back(v[i]);
//     }
//     for(int i=0;i<n2;i++){
//         b.push_back(v[n1+i]);
//     }
//     mergesort(a);
//     mergesort(b);
//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }


// int main(){
//     int n;
//     cout<<"Enter the no. of elments: ";
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     mergesort(vec);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }






// //Quick sort
// #include<iostream>
// using namespace std;
// #include<vector>

// int partition(vector<int>&v,int low, int high){
//     int pivot=v[high];
//     int i=low-1;

//     for(int j=low;j<high;j++){
//         if(v[j]<pivot){
//             i++;
//             swap(v[i],v[j]);
//         }
//     }
//     swap(v[i+1],v[high]);
//     return i+1;
// }

// void quicksort(vector<int> &v, int low, int high){
//     if(low>=high) return;
//     int pi=partition(v,low,high);
//     quicksort(v,low,pi-1);
//     quicksort(v,pi+1,high);
// }

// int main(){
//     int n;
//     cout<<"Enter the no. of elments: ";
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     quicksort(vec,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }




// //stack using array!!
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



// Application of stack (Infix Evaluation)
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;


// int pr(char ch){
//     if(ch=='+' || ch=='-') return 1;
//     else if(ch=='*'||ch=='/') return 2;
//     return 0;
// }

// int solve(int v1,int v2,char ch){
//     if(ch=='+') return v1+v2;
//     else if(ch=='-') return v1-v2;
//     else if(ch=='*') return v1*v2;
//     else if(ch=='/') return v1/v2;
//     return 0;
// }


// int main(){
//     stack<int> val;
//     stack<char> op;
//     string s="2+6*4/8-3";
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='0' && s[i]<='9'){
//         val.push(s[i]-48);
//         }
//         else{
//             if(op.size()==0) op.push(s[i]);
//             else if(pr(s[i])>=pr(op.top())) op.push(s[i]);
//             else{
//                 while(op.size()>0 && pr(op.top())>=pr(s[i])){
//                     char ch=op.top();
//                     op.pop();
//                     int v2=val.top();
//                     val.pop();
//                     int v1=val.top();
//                     val.pop();
//                     int ans=solve(v1,v2,ch);
//                     val.push(ans);
//                 }
//             }
//         }
//     }
//     while(op.size()>0){
//         char ch=op.top();
//         op.pop();
//         int v2=val.top();
//         val.pop();
//         int v1=val.top();
//         val.pop();
//         int ans=solve(v1,v2,ch);
//         val.push(ans);
//     }
//     cout<<val.top();
// }




// #include<iostream>
// using namespace std;

// bool check(int n){
//     int a=n%10;n/=10;
//     int b=n%10;n/=10;
//     int c=n%10;
//     int d=n/10;
//     if((a != b && a != c && a != d && b != c && b != d && c != d)) return true;
//     else return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n+1;i<=9999;i++){
//         if(check(i)) {
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<3;j++){
//             int temp;
//             cin>>temp;
//             if(temp==1)count++;
//         }
//         if(count>=2) ans++;
//     }
//     cout<<ans;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         string temp;
//         cin>>temp;
//         bool flag=false;
//         if(temp[0]=='y' || temp[0]=='Y'){
//             if(temp[1]=='e' || temp[1]=='E'){
//                 if(temp[2]=='s' || temp[2]=='S') cout<<"YES";
//                 else cout<<"NO";
//             }
//             else cout<<"NO";
//         }
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> v;
//         for(int i=0;i<n;i++){
//             int num;
//             cin>>num;
//             v.push_back(num);
//         }
//         sort(v.begin(),v.end());
//         bool flag=true;
//         for(int i=1;i<n;i++){
//             if(abs(v[i]-v[i-1])>1) {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true)cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if((a+b==c) || (b+c==a) || (a+c==b)) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int w;
//     cin>>w;
//     if(w%2==0) cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,m;
//         string a,b,c;
//         cin>>n;
//         cin>>a;
//         cin>>m;
//         cin>>b;
//         cin>>c;
//         // string ans="";
//         for(int i=0;i<m;i++){
//             if(c[i]=='D') a=a+b[i];
//             else a=b[i]+a;
//         }
//         cout<<a;
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long k;
//         cin>>k;
//         long long ans=0;
//         int i=1;
//         int count=0;
//         while(count!=k){
//             int temp=i;
//             while(temp!=0 && count!=k){
//                 ans+=temp%10;
//                 temp/=10;
//                 count++;
//             }
//             i++;
//         }
//         cout<<ans;        
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long k;
//         cin>>k;
//         long long cost=0;
//         vector<long long> m,c;
//         m.push_back(1);
//         c.push_back(3);
//         m.push_back(3);
//         c.push_back(10);

//         cout<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             int ele;
//             cin>>ele;
//             v.push_back(ele);
//         }   
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long k,x;
//         cin>>k>>x;
//         while(k--){
//             if(x%3==1){
//                 x=(x-1)/3;
//             }
//             else x=2*x;
//         }
//         cout<<x<<endl;        
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
    //         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
    //             cin>>v[i];
    //         }
    //         for(int i=0;i<n;i++){
        //             cout<<n-v[i]+1<<" ";
        //         }
        //         cout<<endl;
        
        //     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long a,b;
//         cin>>a>>b;
//         long long ans=-1;
//         for(long long i=1;i*i<=b;i++){
//             if(b%i==0){
//                 long long j=b/i;
//                 long long x=a*i,y=b/i;
//                 // y=y/i;
//                 // x=x*i;
//                 if((x+y)%2==0) ans=max(ans,x+y);

//                 if(i!=j){
//                     long long x2=a*j,y2=b/j;
//                     if((x2+y2)%2==0) {
//                         ans=max(ans,x2+y2);
//                     }
//                 }
//             }
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long a,b;
//         cin>>a>>b;
//         long long ans=-1;
//         long long temp=b;
//         while(true){
//                 long long k=b/temp;
//                 long long x=a*k,y=b/k;
//                 // y=y/i;
//                 // x=x*i;
//                 if((x+y)%2==0) ans=max(ans,x+y);

//                 if(temp%2!=0) break;
//                 temp/=2;
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         vector<int> a(n);
//         unordered_map<int, vector<int>> mp;
//         for(int i=0;i<n;i++){
//             mp[b[i]].push_back(i);
//         }
//         int curr=1;
//         bool possible=true;
//         for(auto& g : mp){
//             int freq = g.first;
//             vector<int>& indices = g.second;
//             if(indices.size() % freq!=0) {
//                 possible = false;
//                 break;
//             }
//             for(int i=0;i<indices.size();i++){
//                 a[indices[i]] = curr;
//                 if((i+1) % freq == 0) {
//                     curr++;
//                 }
//             }
//         }
//         if(!possible) cout<<"-1"<<endl;
//         else {
//             for(int x : a) {
//                 cout << x << " ";
//             }
//             cout<<endl;
//         }
        
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int x,n;
//         cin>>x>>n;
//         if(n%2==0)cout<<0;
//         else cout<<x;
//         cout<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,m,x,y;
//         cin>> n>>m>>x>>y;
//         vector<int> a,b;
//         for(int i=0;i<n;i++){
//             int temp;
//             cin>>temp;
//             a.push_back(temp);
//         }
//         for(int i=0;i<m;i++){
//             int temp;
//             cin>>temp;
//             b.push_back(temp);
//         }
//         cout<<n+m;
//         cout<<endl;
        
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,m;
//         cin>>n>>m;
//         vector<pair<int,int>> req(n+2);
//         req[0]={0,0};
//         for(int i=1;i<=n;i++){
//             int a,b;
//             cin >>a>>b;
//             req[i]={a,b};
//         }
//         req[n+1]={m,-1};

//         int count=0;

//         for(int i=0;i<n+1;i++){
//             int prev_time=req[i-1].first;
//             int prev_side=req[i-1].second;
//             int curr_time=req[i].first;
//             int curr_side=req[i].second;

//             int dt=curr_time-prev_time;
//             int dist=abs(curr_side-prev_side);

//             if(dist>dt) continue;

//             int max_run=(dt-dist)/2+dist;
//             count+=max_run;
//         }

//         cout<<count<<endl;

        
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a;
//         long long ans=0;
//         for(int i=0;i<n;i++){  
//             int temp;
//             cin>>temp;
//             a.push_back(temp);
//         }
//         sort(a.begin(),a.end());
//         reverse(a.begin(),a.end());
//         for(int i=0;i<n;i++){
//             if(a[i]%2!=0) {
//                 ans+=a[i];
//                 a[i]=0;
//                 break;
//             }
//         }
//         if(ans!=0){
//             for(int i=0;i<n;i++){
//                 if(a[i]%2==0) {
//                     ans+=a[i];
//                 }
//             }
//             vector<int>v;
//             for(int i=0;i<n;i++){
//                 if(a[i]%2!=0) v.push_back(a[i]);
//             }
//             for(int i=0;i<v.size()/2;i++){
//                 ans+=v[i];
//             }
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,k;
//         cin>>n>>k;
//         vector<int> a;
//         for(int i=0;i<n;i++){
//             int temp;
//             cin>>temp;
//             a.push_back(temp);
//         }

//     }
//     return 0;
// }






// int countsubarray(vector<int> &a, vector<int> &b){
//     int n=a.size();
//     int m=b.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             bool flag=true;
//             if(a[i]==b[j]) {
//                 while(j<m){
//                     i++;
//                     j++;
//                     if(a[i]!=b[j]){
//                         flag=false;
//                         break;
//                     }
//                 }
//                 if(flag) {
//                     count++;
//                 }
//             }
//             else break;
//         }
//     }
//     return count;
// }







// #include<bits/stdc++.h>
// using namespace std;

// int countsubarray(vector<int> &a, vector<int> &b){
//     int n = a.size();
//     int m = b.size();
//     int count = 0;

//     for(int i = 0; i + n <= m; i++){   // slide over b
//         bool flag = true;
//         for(int j = 0; j < n; j++){
//             if(a[j] != b[i+j]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag) count++;
//     }
//     return count;
// }


// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,m;
//         cin>>n>>m;
//         vector<int> a(m);
//         for(int i=0;i<m;i++){
//             cin>>a[i];
//         }
//         vector<int> b;
//         for(int i=1;i<=n;i++){
//             int j=1;
//             while(j<=i){
//                 b.push_back(j);
//                 j++;
//             }
//         }
//         int ans=countsubarray(a,b);
//         cout<<ans<<endl;        
//     }
//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         int czero=0,cneg=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             if(a[i]==0) czero++;
//             else if(a[i]<0) cneg++;
//         }
//         cout<<czero+(cneg%2==0?0:2)<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int x,y;
//         cin>>x>>y;
        
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// struct Job {
//     int id;
//     int deadline;
//     int profit;
// };

// int main() {
//     vector<Job> jobs = {
//         {1, 2, 100},
//         {2, 1, 19},
//         {3, 2, 27},
//         {4, 1, 25},
//         {5, 3, 15}
//     };

//     // sort by profit desc
//     sort(jobs.begin(), jobs.end(), [](const Job &a, const Job &b){
//         return a.profit > b.profit;
//     });

//     int maxd = 0;
//     for (auto &j : jobs) maxd = max(maxd, j.deadline);

//     vector<int> slot(maxd + 1, -1); // 1..maxd
//     int totalProfit = 0;

//     for (auto &j : jobs) {
//         // find a free slot <= deadline j.deadline
//         for (int t = min(maxd, j.deadline); t >= 1; --t) {
//             if (slot[t] == -1) {
//                 slot[t] = j.id;         // schedule job id at time t
//                 totalProfit += j.profit;
//                 break;
//             }
//         }
//     }

//     cout << "Scheduled job ids by slot:\n";
//     for (int t = 1; t <= maxd; ++t) {
//         if (slot[t] == -1) cout << t << ": free\n";
//         else cout << t << ": Job " << slot[t] << '\n';
//     }
//     cout << "Total profit = " << totalProfit << '\n';
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         c=c-a;
//         d=d-b;
//         if((a<=2*(b+1) && b<=2*(a+1) )&& (c<=2*(d+1) && d<=2*(c+1))) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int>v(n,0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         int ans=0;
//         for(int i=1;i<n;i+=2){
//             ans=max(ans,abs(v[i]-v[i-1]));
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         if(n%3==0) cout<<0;
//         else cout<<3-n%3;        
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int count0=0,count1=0,count2=0;
//         for(int i=0;i<k;i++){
//             if(s[i]=='0') count0++;
//             else if(s[i]=='1') count1++;
//             else count2++;
//         }
//         string ans(n,'+');
//         for(int i=0;i<n;i++){
//             if(count0>i || n-count1<=i) ans[i]='-';
//             else if(n-count0-count1>count2 && (count0+count2>i || n-count1-count2<=i)) ans[i]='?';
//             else if(n-count0-count1<=count2 && (count0+count2>i || n-count1-count2<=i)) ans[i]='-';
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int counta=0,countb=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='a') counta++;
//             else countb++;
//         }
//         if(abs(counta-countb)==n) cout<<-1;

        
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[a[i]]++;
//         }
//         vector<int> freq;
//         for(auto it:mp){
//             freq.push_back(it.second);
//         }
//         sort(freq.begin(),freq.end());
//         int ans=0;
//         for(int i=0;i<freq.size();i++){
//             ans=max(ans,freq[i]*(int)(freq.size()-i));
//         }
//         cout<<ans<<endl;        
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         if(n%2!=0) cout<<0;
//         else cout<<n/4 +1;
//         cout<<endl;        
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         if(a[0]==-1 && a[n-1]==-1) a[0]=0,a[n-1]=0;
//         else if(a[0]==-1) a[0]=a[n-1];
//         else if(a[n-1]==-1) a[n-1]=a[0];
//         int sum=0;
//         for(int i=0;i<n-1;i++){
//             sum+=a[i+1]-a[i];
//         }
//         for(int i=1;i<n-1;i++){
//             if(a[i]==-1)a[i]=0;
//         }
//         cout<<abs(sum)<<endl;
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;        
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     int mx=max(x,max(y,z));
//     int mn=min(x,min(y,z));
//     int md=x+y+z-mx-mn;
//     if((mx-mn)>=10) cout<<"check again";
//     else cout<<"final "<<md;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int x,y,a,b;
//         cin>>x>>y>>a>>b;
//         if(x==y && y==a && a==b) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;        
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         while(n!=0){
//             cout<<n;
//             n--;
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         int mx=-1;
//         for(int i=0;i<n;i++){
//             mx=max(mx,a[i]);
//         }
//         cout<<mx*n<<endl;
        
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a,b(n);
//         set<int> s;
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         for(int i=0;i<n;i++){
//             // cin>>a[i];
//             s.insert(b[i]);
//         }
//         for(auto e : s){
//             a.push_back(e);
//         }
//         sort(a.begin(),a.end());
//         int ans=1,temp=1;
//         for(int i=0;i<a.size()-1;i++){
//             if(a[i]==a[i+1]-1){
//                 temp++;
//             }
//             else temp=1;
//             ans=max(ans,temp);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,m,h;
//         cin>>n>>m>>h;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         vector<int> b(a.begin(),a.end());
//         while(m--){
//             int u,v;
//             cin>>u>>v;
//             a[u-1]+=v;
//             if(a[u-1]>h) a=b;
//         }
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }   
//         cout<<endl;        
//     }
//     return 0;
// }



//contest
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,s,x;
//         cin>>n>>s>>x;
//         vector<int> a(n);
//         int sum=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             sum+=a[i];
//         }
//         if(s>=sum && (s-sum)%x==0) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){   
//             cin>>a[i];
//         }
//         int l=0,r=n-1;
//         int n2=n;
//         while(l<n){
//             if(a[l]==n2){
//                 l++;
//                 n2--;
//             }
//             else break;
//         }
//         while(r>=0){
//             if(a[r]!=n2){
//                 r--;
//                 // n2--;
//             }
//             else break;
//         }
//         reverse(a.begin()+l,a.begin()+r+1);
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;        
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,q;
//         cin>>n>>q;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){   
//             cin>>a[i];
//         }
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         a[n-1]=max(a[n-1],b[n-1]);
//         for(int i=n-2;i>=0;i--){
//             a[i]=max(a[i],max(a[i+1],b[i]));
//         }
//         int pre=0;
//         for(int i=0;i<n;i++){
//             pre+=a[i];
//             a[i]=pre;            
//         }
//         while(q--){
//             int l,r;
//             cin>>l>>r;
//             cout<<a[r-1]-((l-2)>=0?a[l-2]:0)<<endl;
//         }
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> a(n);   
//         for(int i=0;i<n;i++){   
//             cin>>a[i];
//         }
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=b[i];
//             b[i]=sum;
//         }
//         int diff=0;
//         for(int i=0;i<n;i++){
//             diff+=a[i]-b[i];
//         }
        
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int w;cin>>w;
//     if(w%2==0)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return ;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int ans=0;
//         // sort(v.begin(),v.end());
//         map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[v[i]]++;
//         }
//         for(auto it:mp){
//             if(it.second>1)ans++;
//         }
//         cout<<ans;
//         cout<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long s,n,k;
//         cin>>s>>n>>k;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         reverse(v.begin(),v.end());
//         int ans=0;
//         for(int i=0;i<n;i++){
//             if(v[i]>=k){
//                 ans++;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(v[i]<k && s>=(k-v[i])){
//                 s-=(k-v[i]);
//                 ans++;
//             }
//         }
//         cout<<ans<<endl;
        
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,x;
//         cin>>n>>x;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         vector<int> copy(a.begin(),a.end());
//         int ans=0;
//         while(x!=0){
//             ans++;
//             for(int i=0;i<n;i++){
//                 a[i]--;
//                 if(a[i]==0){
//                     a[i]=copy[i];
//                     x--;
//                 }
//             }              

//         }
//         cout<<ans<<endl;
        
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// #include <bits/stdc++.h>
// using namespace std;

// int longestGoodPrefix(vector<int>& arr, int k) {
//     unordered_map<int,int> total;
//     for(int x : arr)
//         total[x]++;

//     unordered_map<int,int> freq;
//     int maxFreq = 0;
//     int ans = 0;

//     for(int i = 0; i < arr.size(); i++) {
//         freq[arr[i]]++;
//         maxFreq = max(maxFreq, freq[arr[i]]);

//         int minFreq = INT_MAX;

//         for(auto &p : total) {
//             int value = p.first;
//             int f = freq[value];   // 0 if not yet appeared
//             minFreq = min(minFreq, f);
//         }

//         if(maxFreq - minFreq > k)
//             break;

//         ans = i + 1;
//     }

//     return ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 2, 1, 3};
//     int k = 1;

//     cout << longestGoodPrefix(arr, k);
// }






// #include <bits/stdc++.h>
// using namespace std;

// int longestGoodPrefix(vector<int>& arr, int k) {
//     set<int> values(arr.begin(), arr.end());
//     unordered_map<int,int> freq;
//     int ans = 0;

//     for(int i = 0; i < arr.size(); i++) {
//         freq[arr[i]]++;

//         int minFreq = INT_MAX;
//         int maxFreq = INT_MIN;

//         for(int val : values) {
//             int currentFreq = freq[val];
//             minFreq = min(minFreq, currentFreq);
//             maxFreq = max(maxFreq, currentFreq);
//         }

//         if(maxFreq - minFreq > k)
//             break;

//         ans = i + 1;
//     }

//     return ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 2, 1, 3};
//     // vector<int> arr = {1, -2, -1, 2};
//     int k = 1;

//     cout << longestGoodPrefix(arr, k) << endl;
// }






// #include <bits/stdc++.h>
// using namespace std;

// struct Trie {
//     Trie* left = NULL;   // bit 0
//     Trie* right = NULL;  // bit 1
//     int count = 0;
// };

// class Solution {
// public:
    
//     void insert(Trie* root, int num) {
//         Trie* node = root;
//         for(int i = 15; i >= 0; i--) {
//             int bit = (num >> i) & 1;
//             if(bit == 0) {
//                 if(!node->left)
//                     node->left = new Trie();
//                 node = node->left;
//             } else {
//                 if(!node->right)
//                     node->right = new Trie();
//                 node = node->right;
//             }
//             node->count++;
//         }
//     }
    
//     int query(Trie* root, int num, int k) {
//         Trie* node = root;
//         int ans = 0;
        
//         for(int i = 15; i >= 0; i--) {
//             if(!node) break;
            
//             int bitNum = (num >> i) & 1;
//             int bitK   = (k >> i) & 1;
            
//             if(bitK == 1) {
//                 if(bitNum == 1) {
//                     if(node->right)
//                         ans += node->right->count;
//                     node = node->left;
//                 } else {
//                     if(node->left)
//                         ans += node->left->count;
//                     node = node->right;
//                 }
//             } else {
//                 if(bitNum == 1)
//                     node = node->right;
//                 else
//                     node = node->left;
//             }
//         }
//         return ans;
//     }
    
//     long long countSubarrays(vector<int>& arr, int k) {
//         Trie* root = new Trie();
//         insert(root, 0);
        
//         long long count = 0;
//         int px = 0;
        
//         for(int num : arr) {
//             px ^= num;
//             count += query(root, px, k);
//             insert(root, px);
//         }
//         return count;
//     }
    
//     int minimumK(vector<int>& arr, int x) {
//         int low = 0, high = 20000;
//         int ans = -1;
        
//         while(low <= high) {
//             int mid = (low + high) / 2;
            
//             if(countSubarrays(arr, mid) >= x) {
//                 ans = mid;
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };




#include <bits/stdc++.h>
using namespace std;

struct Trie {
    Trie* child[2];
    int count;
    
    Trie() {
        child[0] = child[1] = NULL;
        count = 0;
    }
};

void insert(Trie* root, int num) {
    Trie* node = root;
    for(int i = 15; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if(!node->child[bit])
            node->child[bit] = new Trie();
        node = node->child[bit];
        node->count++;
    }
}

long long query(Trie* root, int num, int k) {
    Trie* node = root;
    long long ans = 0;
    
    for(int i = 15; i >= 0; i--) {
        if(!node) break;
        
        int bitNum = (num >> i) & 1;
        int bitK   = (k >> i) & 1;
        
        if(bitK == 1) {
            if(node->child[bitNum])
                ans += node->child[bitNum]->count;
            node = node->child[1 - bitNum];
        } else {
            node = node->child[bitNum];
        }
    }
    
    return ans;
}

long long countSubarrays(vector<int>& arr, int k) {
    Trie* root = new Trie();
    insert(root, 0);
    
    long long count = 0;
    int prefixXor = 0;
    
    for(int num : arr) {
        prefixXor ^= num;
        count += query(root, prefixXor, k + 1);  // IMPORTANT FIX
        insert(root, prefixXor);
    }
    
    return count;
}

int minimumK(vector<int>& arr, int x) {
    int low = 0, high = 20000;
    int ans = -1;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        
        if(countSubarrays(arr, mid) >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << minimumK(arr, x) << endl;
    
    return 0;
}