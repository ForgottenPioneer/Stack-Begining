#include <iostream>

using namespace std;

// Класс Node для представления элемента стека
class Node {
public:
    int data; // значение элемента
    Node* next; // ссылка на следующий элемент

    Node(int value) {
        data = value;
        next = nullptr; // инициализируем ссылку на следующий элемент как nullptr
    }
};

// Класс Stack для представления стека
class Stack {
private:
    Node* top; // указатель на вершину стека

public:
    Stack() {
        top = nullptr; // инициализируем вершину стека как nullptr
    }

    // Метод для добавления элемента в стек
    void push(int value) {
        Node* newNode = new Node(value); // создаем новый узел с заданным значением
        newNode->next = top;
        top = newNode; // обновляем вершину стека
    }

    // Метод для получения адреса вершины стека
    Node* getTopAddress() {
        return top; // возвращаем адрес вершины стека
    }
};

int main() {
    Stack stack; // создаем стек
    int D;
    cout << "Введите значение D: ";
    cin >> D;

    // Добавляем элемент в стек
    stack.push(D);

    // Получаем адрес новой вершины стека
    Node* p2 = stack.getTopAddress();

    // Выводим адрес новой вершины стека
    cout << "Адрес новой вершины стека p2: " << p2 << endl;

    return 0;
}