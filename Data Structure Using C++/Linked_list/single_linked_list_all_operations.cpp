#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void menu()
{
    cout << "\n=====Choice Menu=====\n";
    cout << "1.Create Node" << endl;
    cout << "2.Insert A Node At Head" << endl;
    cout << "3.Insert A Node At Tail" << endl;
    cout << "4.Insert A Node At Nth Position" << endl;
    cout << "5.Delete A Node By Value" << endl;
    cout << "6.Delete A Node At Head" << endl;
    cout << "7.Delete A Node At Tail" << endl;
    cout << "8.Delete A Node At Nth Position" << endl;
    cout << "9.Is List Empty?" << endl;
    cout << "10.Find Nth Element" << endl;
    cout << "11.Number Of Nodes" << endl;
    cout << "12.Display List" << endl;
    cout << "13.Quit" << endl;
    cout << "Enter Your Choice: ";
}
void createNode(struct node **h, int data)
{
    struct node *cur, *ptr;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = data;
    cur->next = NULL;
    if (*h == NULL)
    {
        ptr = *h = cur;
    }
    else
    {
        ptr = *h;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = cur;
    }
}
void insertAtHead(struct node **h, int data)
{
    struct node *cur, *ptr;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = data;
    cur->next = NULL;
    ptr = *h;
    cur->next = *h;
    *h = cur;
}
void insertAtTail(struct node **h, int data)
{
    struct node *cur, *ptr;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = data;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        cur->next = ptr->next;
    }
}
void insertAtNthPosition(struct node **h, int data, int pos)
{
    struct node *cur, *ptr, *prev;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = data;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos == 0)
    {
        cur->next = *h;
        *h = cur;
    }
    else
    {
        ptr = prev = *h;
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr;
        prev->next = cur;
    }
}
void deleteByValue(struct node **h, int data)
{
    struct node *ptr, *prev;
    ptr = prev = *h;
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else if ((*h)->data == data)
    {
        *h = ptr->next;
        free(ptr);
    }
    else
    {
        while (ptr != NULL)
        {
            if (ptr->data == data)
            {
                break;
            }
            else
            {
                prev = ptr;
                ptr = ptr->next;
            }
        }
        prev->next = ptr->next;
        free(ptr);
    }
}
void deleteHead(struct node **h)
{
    struct node *ptr = *h;
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        *h = ptr->next;
        free(ptr);
    }
}
void deleteTail(struct node **h)
{
    struct node *ptr, *prev;
    ptr =*h;
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev=ptr;
            ptr = ptr->next;
        }
        prev->next = ptr;
        free(ptr);
    }
}
void deleteByPosition(struct node **h, int pos)
{
    struct node *ptr, *prev;
    ptr = *h;
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else if (pos == 0)
    {
        *h = ptr->next;
        free(ptr);
    }
    else
    {
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        prev->next = ptr->next;
        free(ptr);
    }
}
void isListEmpty(struct node **h)
{
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        cout << "List Is Not Empty." << endl;
    }
}
void findNthElement(struct node **h, int data)
{
    struct node *ptr=*h;
    int flag=0;
    if (*h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            if(ptr->data==data)
            {
                cout<<"Data Found At  "<<&(ptr->data)<<"."<<endl;
                flag=1;
                break;
            }
            else
            {
                ptr=ptr->next;
            }
        }
    }
    if(flag==0)
    {
        cout<<"Data Not Found."<<endl;
    }
}
void countNodes(struct node *h)
{
    int count=0;
    while (h != NULL)
        {
         count++;
         h=h->next;
        }
        cout<<count<<" Nodes Present."<<endl;
 
}
void display(struct node *h)
{
    if (h == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        while (h != NULL)
        {
            cout << h->data << " -> ";
            h = h->next;
        }
    }
    cout << "NULL" << endl;
}
int main()
{
    // created node locally
    struct node *head = NULL;
    int no, data, choice, x = 1, pos;
    cout << "Enter No.Of Nodes Want To Create Previously: ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << "Enter Data For " << i + 1 << "Node." << endl;
        cin >> data;
        createNode(&head, data);
    }
    while (x == 1)
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Data For Node: ";
            cin >> data;
            createNode(&head, data);
            break;
        case 2:
            cout << "Enter Data For Node: ";
            cin >> data;
            insertAtHead(&head, data);
            break;
        case 3:
            cout << "Enter Data For Node: ";
            cin >> data;
            insertAtTail(&head, data);
            break;
        case 4:
            cout << "Enter Data For Node: ";
            cin >> data;
            cout << "Enter Position For the Node: ";
            cin >> pos;
            insertAtNthPosition(&head, data, pos);
            break;
        case 5:
            cout << "Enter Element To Be Deleted: ";
            cin >> data;
            deleteByValue(&head, data);
            break;
        case 6:
            deleteHead(&head);
            break;
        case 7:
            deleteTail(&head);
            break;
        case 8:
            cout << "Enter Position To Be Deleted: ";
            cin >> pos;
            deleteByPosition(&head, pos);
            break;
        case 9:
            isListEmpty(&head);
            break;
        case 10:
            cout << "Enter Data To Be Found: ";
            cin >> data;
            findNthElement(&head, data);
            break;
        case 11:
            countNodes(head);
            break;
        case 12:
            display(head);
            break;
        default:
            break;
        }
        cout << "Do You Want To Continue(Y=1/N=0): ";
        cin >> x;
    }
    cout << "\n\t\t=====Thanks For Coming Here=====\t\t\n";
    
    return 0;
}