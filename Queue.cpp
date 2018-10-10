/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   Queue.cpp
 * Author: Ciara Hawkins
 * About: Queue Implementation 
 * COMP280 Programming Assignment 3 (Stack & Queue Linked Implementation)
 * Created on October 1, 2018, 9:00 PM
 */

#include <iostream>  
#include "Queue.h"

using namespace std;

Queue::Queue() {// creates a empty queue
    myfront = NULL;
    myback = NULL;

}

bool Queue::empty() {
return myfront== NULL;//if queue is empty 

}

void Queue::AddQ(QueueElement x) {//add new value to the back of the queue
    qnode * p = new qnode;
	p->data = x;
	p->next = NULL;
	if(empty())
		myfront = myback = p;//if queue is empty
	else
	{
	 	myback->next = p;
		myback = p;
	}


}

bool Queue::Front(QueueElement& x) { //retrieve value at the front of the queue
    if(this->empty()) {
		cout<<"Queue is empty!!";
	}
	 cout <<"Front number is " <<myfront->data<<endl;
}



void Queue::RemoveQ() { //removes value at the front of the queue
        qnode * temp = myfront;
	if(this->empty()) {
		cout<<"Queue is empty!!";//if queue is empty 
		return;
	}
	if(myfront == myback) {
		myfront = myback = NULL;
	}
	else {
		myfront = myfront->next;
	}
	free(temp);

}

void Queue::display() { //displays all values in the queue
    qnode * p = myfront;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << " "<<endl;

}