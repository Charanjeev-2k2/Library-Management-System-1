#include <iostream>
using namespace std;
//BOOK NODE
struct b_node
{
    char b_name[70];
    char b_id[5];
    char b_genre[30];
    char b_author[60];
    double price;
    int edition;
    int total_qty;
    int qty_left;
    int times;

    b_node * next;
};

//BOOK CLASS
class book
{
    b_node * head;
    b_node * tail;
    public:
        book()
        {
            head=NULL;
            tail=NULL;
        }

        void add_book();
        void update_b_details();
        void remove_book();
        void display();
        void times_initialize();
        void edit_details();
        void reissue();
        void b_return();
        void issue();

        //void  recommend_book(head);
}b;

//DISPLAY ALL BOOKS
void book::display()
{
    struct b_node *newnode = head;
    while(newnode!=NULL)
{
    cout<<" book name :"<<newnode->b_name<<endl;
    cout<<" book ID :"<<newnode->b_id<<endl;
    cout<<"book genre :"<<newnode->b_genre<<endl;
    cout<<"book author :"<<newnode->b_author<<endl;
    cout<<"price of the book :"<<newnode->price<<endl;
    cout<<"book edition :"<<newnode->edition<<endl;
    cout<<"quantity of the book :"<<newnode-> total_qty<<endl;
    newnode=newnode->next;
}
}
//ADD BOOK
void book::add_book()
{  
    struct b_node *newnode;
    newnode= new b_node ;
    cout<<"Enter book name\n";
    cin>>newnode->b_name;
    cout<<"Enter book ID\n";
    cin>>newnode->b_id;
    cout<<"Enter book genre";
    cin>>newnode->b_genre;
    cout<<"Enter book author\n";
    cin>> newnode->b_author;
    cout<<"Enter price of the book\n";
    cin>> newnode->price;
    cout<<"Enter book edition\n";
    cin>>newnode->edition;
    cout<<"Enter quantity of the book\n";
    cin>>newnode-> total_qty;
    //printf(“Number of books left”);
    // to be or not to be taken by the user!
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {   
        tail->next=newnode;
        tail=newnode;
    }

}
//REMOVE BOOK---TO BE REVIEWED
void book::remove_book()
{
    int b;
    cout<<"enter element to be deleted ";
    cin>>b;
    int i=1;
    struct b_node *temp;
    struct b_node *nextnode;
    temp=head;
    while(i<b-1)
        {
            temp=temp->next;
            i++;
        }
     nextnode=temp->next;
     temp->next=nextnode->next;
     delete nextnode;


}//review this

void times_initialize()
{
    times = 0;
}

void book :: reissue()     
{
    char book_id[5];
    cout<<"Enter book ID";
    cin>>book_id;
    b_node * ptr = srch(book_id);
    if(ptr->times < 3)
         ptr->times++;
    else
         cout<<"Book cannot be reissued!"; 
}


void edit_detail()// A lot of mistakes--to be checked
{
 printf("Enter book_id to edit details");
 scanf(&str,book_id);
 
 struct b_node*ptr;
 ptr=(struct b_node*)mallloc(size of (struct b_node))
 ptr= srch(book_id);
  int choice;
  printf("Enter choice what needs to be changed");
  Details that will edit :
  1.book_name
  2.book_id
  3.book_genre
  4.book_author
  5.price
  6.edition
  7.total_qty
  8. qty_left

  scanf("%d",&choice);
  
  Switch(choice)
  {
  Case 1:
        printf("Enter the book_name");
        scanf(&str,book_name);
        break;
        
  Case 2:
        printf("Enter the book_id");
        scanf(&str,book_id);
        break;
  
  Case 3:
        printf("Enter the book_genre");
        scanf(&str,book_genre);
        break;
        
  Case 4:
        printf("Enter the book_author");
        scanf(&str,book_author);
        break;
        
  Case 5:
        printf("Enter the price of book");
        scanf(&double,price);
        break;
        
  Case 6:
        printf("Enter the book_edition");
        scanf(&int,book_edition);
        break;
        
  Case 7:
        printf("Enter the total quantity");
        scanf(&int,total_qty);
        break;
        
  Case 8:
        printf("Enter the remaining quantity");
        scanf(&int,qty_left);
        break;
        }
}





//SEARCHING
b_node * book:: srch()
{
    char bid[5];
            cout<<"enter book id to be deleted ";
            cin>>bid;
    b_node * temp = head;
    while (temp != NULL)
    {
        if ( temp->b_id == bid)
        {
            return temp;
        }
        temp = temp->next;
    }
   return NULL;
}




/*
//VISITOR STRUCTURE
struct v_node
{
    char v_name[70];
    char mem_no[5];
    char email[30];
    char mem_type[40];
    char exp_date[12];//Input date as : "Enter date (DD/MM/YY):";
    int no_of_books;
    int reissue_times;//DO NOT take this as input from user
    double money_due;
    char m_b_id[5];//id of book issued to member, only one book can be issued at a time

    v_node * next;
};
//VISITOR CLASS
class visitor
{
    v_node * head;
    public:
        visitor()
        {
            head=NULL;
        }

        void add_member();
        void remove_member();
        void add_details();
        void remove_details();
        void update_details();

        //Issue
        //Re-issue
        //Return
}v;



//ADDING MEMBER 
void visitor::add_member()
{ 
    struct v_node *newnode;
    newnode= new v_node;
    cout<<"Enter member name\n";
    cin>>newnode->v_name;
    cout<<"Enter membership number";
    cin>>newnode->mem_no;
    cout<<"Enter email\n";
    cin>>newnode->email;
    cout<<"Enter membership type\n";
    cin>>newnode->mem_type;
    cout<<"Enter expiry date\n";
    cin>>newnode->exp_date;
    cout<<"Enter no. of books\n";
    cin>> newnode->no_of_books;
    cout<<"Enter money due\n";
    cin>> newnode-> money_due;
    cout<<"Enter book id issued\n";
    cin>> newnode->m_b_id;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}
*/


int main()
{
    cout << "Hello world!" << endl;
    b.add_book();
    b.display();

    return 0;
}
