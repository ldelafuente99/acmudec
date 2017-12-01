#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>

using namespace std;

int main(){

std::vector<int> bag;
std::stack<int> bagstack;
std::queue<int> bagqueue;
std::priority_queue<int> bagpriority;
std::vector<int> taken;
std::vector<int> stacktaken;
std::vector<int> queuetaken;
std::vector<int> priortaken;

int n, comp=0;
bool stack=false, queue=false, priority=false;
int command, value;



 while(true){

    cin >> n;
    

    for(int i=0; i<n; i++){
      cin >> command >> value;

      if(command==1){
        bag.push_back(value);
        bagstack.push(value);
        bagqueue.push(value);
        bagpriority.push(value);
      } else{
        taken.push_back(value);
        //if(bagstack.empty()==false){
          stacktaken.push_back(bagstack.top());
          bagstack.pop();
        //}
        //if(bagqueue.empty()==false){
          queuetaken.push_back(bagqueue.front());
          bagqueue.pop();
        //}
        //if(bagpriority.empty()==false){
          priortaken.push_back(bagpriority.top());
          bagpriority.pop();
        //}        

      }

      

    }
  
    if(taken==stacktaken){
      comp++;
      stack=true;
    }
    if(taken==queuetaken){
      comp++;
      queue = true;
    }
    if(taken==priortaken){
      comp++;
      priority = true;
    }

    printf("bag:\n");
    for(int i=0; i<bag.size();i++){
    	cout << bag[i]<<endl;
    }
    printf("taken:\n");
    for(int i=0; i<taken.size();i++){
    	cout << taken[i]<<endl;
    }
    printf("stacktaken:\n");
    for(int i=0; i<stacktaken.size();i++){
    	cout << stacktaken[i]<<endl;
    }
    printf("queuetaken:\n");
    for(int i=0; i<queuetaken.size();i++){
    	cout << queuetaken[i]<<endl;
    }
    printf("priortaken:\n");
    for(int i=0; i<priortaken.size();i++){
    	cout << priortaken[i]<<endl;
    }
  
    if(comp==0){
      printf("impossible\n");
      
    } else if(comp>1){
      printf("not sure\n");
    } else{
      if(stack==true){
        printf("stack\n");
      } else if(queue==true){
        printf("queue\n");
      } else if(priority==true){
        printf("priority queue\n");
      }
    }
   
   bag.clear();
   taken.clear();
   stacktaken.clear();
   queuetaken.clear();
   priortaken.clear();
   comp = 0;
   stack = false;
   queue = false;
   priority = false;

   if(cin.eof()){
    	break;
    }
    
 }
  
  return 0;
}