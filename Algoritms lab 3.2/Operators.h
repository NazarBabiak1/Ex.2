#pragma once

const int maxlength = 1000;

typedef char elementtype;

struct QUEUE
{
    int front;
    int rear;
    elementtype elements[maxlength];
};

int addone(int i) {
    return i % maxlength + 1;
}

void MAKENULL(QUEUE& Q) {
    Q.front = 1;
    Q.rear = maxlength;
}

bool EMPTY(QUEUE& Q) {
    if (addone(Q.rear) == Q.front)return true;
    return false;
}

elementtype FRONT(QUEUE& Q) {
    if (EMPTY(Q))throw "queue empty";
    return Q.elements[Q.front];
}

void ENQUEUE(elementtype x, QUEUE& Q) {
    if (addone(addone(Q.rear)) == Q.front)throw "queue full";
    Q.rear = addone(Q.rear);
    Q.elements[Q.rear] = x;
}

void DEQUEUE(QUEUE& Q) {
    if (EMPTY(Q))throw "queue empty";
    Q.front = addone(Q.front);
}
