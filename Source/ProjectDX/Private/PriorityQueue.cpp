// Fill out your copyright notice in the Description page of Project Settings.


#include "PriorityQueue.h"

void UPriorityQueue::Push(int priority, UObject* object) {
	priority_queue.push(priority, object);
}

void UPriorityQueue::Pop() {
	priority_queue.pop();
}

UObject* UPriorityQueue::Peek() {
	return priority_queue.peek();
}

bool UPriorityQueue::IsEmpty() const {
	return priority_queue.empty();
}

int UPriorityQueue::GetSize() const {
	return priority_queue.size();
}

void UPriorityQueue::Clear() {
	priority_queue.clear();
}