#include<iostream>
using namespace std;

class queuee {
    int queue[10];
    int front;
    int rear;

public:
    queuee() {
        front = -1;
        rear = -1;
    }

    void push(int item) {
        if (rear == 9) {
            cout << "stack is full " << endl;
            return;
        }
        else if (front == -1) {
            front = rear = 0;
            queue[rear] = item;
        }
        else {
            rear++;
            queue[rear] = item;
            int val = queue[rear];
            for (int i = rear - 1; i >= front; i--) {
                queue[i + 1] = queue[i];
            }
            queue[front] = val;
        }
        cout << "element inserted!!!" << endl;
    }

    void pop() {
        if (front == -1 || front > rear) {
            cout << "stack is empty " << endl;
            return;
        }
        front++;
        cout << "element removed!!!" << endl;

        if (front > rear) { // Reset when stack becomes empty
            front = rear = -1;
        }
    }

    void size() {
        if (front == -1 || front > rear) {
            cout << "Size is 0" << endl;
            return;
        }
        cout << "size is : " << (rear - front + 1) << endl;
    }

    void top() {
        if (front == -1 || front > rear) {
            cout << "stack is empty " << endl;
            return;
        }
        cout << "top element is : " << queue[front] << endl;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "stack is empty " << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << endl;
        }
    }
};

int main() {
    queuee obj;
    obj.push(10);
    obj.push(1);
    obj.push(8);
    obj.pop();
    obj.push(6);
    obj.pop();
    obj.pop();
    obj.top();
    obj.size();
    obj.push(2);
    obj.display();
}
