#include<iostream>
using namespace std;
struct node
{
int info;
node*ptr;
};

node*insert(node *rear)
{
node*temp=NULL;
temp=new node;
cout<<"Enter the information\n";
cin>>temp->info;
temp->ptr=NULL;
if(rear==NULL)
{rear=temp;
}
else
{rear->ptr=temp;
rear=temp;
}
return rear;
}

node*del (node *front)
{
node*temp=NULL;
temp=front;
if(front!=NULL)
{front=front->ptr;
delete temp;
}
else
cout<<"Queue underflow\n";
return front;;
}
void disp(node *front)
{
node*temp=front;
if(temp==NULL)
{cout<<"empty stack\n";
}
while(temp!=NULL)
{
cout<<temp->info;
temp=temp->ptr;
cout<<"\n";
}
}


main()
{
int s[25];
int n=25;
node *front=NULL;
node *rear=NULL;
int x=0;
char ans='y';
while(ans=='y')
{
do
{
cout<<"1 to insert elements\n";
cout<<"2 to delete elements\n";
cout<<"3 to display stack\n";
cin>>x;
}
while(x>3 && x<0);
switch(x)
{
case 1:rear=insert(rear);
		 if(front==NULL)
		 front=rear;break;
case 2:front=del(front);
		 if(front==NULL)
		 rear=front;break;
case 3:disp(front);break;
}
cout<<"Do you want to run again (Enter y to continue)\n";
cin>>ans;
}
}
