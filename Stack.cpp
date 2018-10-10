/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   Stack.cpp
 * Author: Ciara Hawkins
 * About: Stack Implementation 
 * COMP280 Programming Assignment 3 (Stack & Queue Linked Implementation)
 * Created on October 1, 2018, 9:00 PM
 */

#include <iostream>  
#include "Stack.h"

using namespace std;

Stack::Stack(){
    mytop = NULL; // Creates empty stack
}
bool Stack::empty(){
    return mytop== NULL; // Check if stack is empty
}
bool Stack::Top(StackElement& x){
    if (mytop == NULL) {
        cout <<"The stack if empty"<<endl; //If stack is empty
        return false;
        
        
    } else {
        x= mytop->data;
        cout <<"Top number is " <<mytop->data<<endl; //Retrieves data at the top of the stack 
        return true;
    }
    
}
void Stack::push(StackElement x){ // Adds a new value to the top of the stack

        node*mynode=new node;
	mynode->data=x;
	mynode->next=mytop;
	mytop=mynode;

}

void Stack::pop(){ //Removes the value at the top of the stack 
    if(this->empty()){//Checks if data of first node is null
        cout<<"Stack is empty!!";
    }
     else{
        cout<<"Deleted element is "<<mytop->data<<endl;
        node * p =mytop;
        mytop=mytop->next;
        delete(p);
     }
       
   }
void Stack::display(){//displays data in the stack
    node *q;
    q=mytop;
 
    if(mytop==NULL){
        cout<<"Stack is empty!!"<<endl;// if stack is empty
    }
    else{
        while(q!=NULL)
        {
            cout<<q->data<<" ";
            q=q->next;
        }  
        cout << ""<<endl;
    }
}
       
   
       
