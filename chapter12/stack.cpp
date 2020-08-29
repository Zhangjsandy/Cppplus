#include <iostream> 
#include "stack.h" 
using namespace std; 
Stack::Stack(int n) 
{ 
if(n>MAX) 
cout<<"Fail"<<endl; 
pitems=new Item[n]; 
size=n; 
top=0; 
} 
Stack::Stack(const Stack &st) 
{ 
for(int i=0;i<st.top;i++) 
pitems[i]=st.pitems[i]; 
size=st.size; 
top=st.top; 
} 
Stack::~Stack() 
{ 
delete []pitems; 
} 
bool Stack::isempty()const 
{ 
return top==0; 
} 
bool Stack::isfull()const 
{ 
return top==MAX; 
} 
bool Stack::push(const Item &item) 
{ 
if(top<MAX) 
{ 
pitems[top++]=item; 
return true; 
} 
else 
return false; 
} 
bool Stack::pop(Item &item) 
{ 
if(top>0) 
{ 
item=pitems[--top]; 
return true; 
} 
else 
return false; 
} 
Stack & Stack::operator=(const Stack &st) 
{ 
for(int i=0;i<st.top;i++) 
pitems[i]=st.pitems[i]; 
size=st.size; 
top=st.top; 
return *this; 
} 
