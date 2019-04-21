// Copyright 2019 Konnov Sergey

#ifndef MODULES_TREE_INCLUDE_TREE_H_
#define MODULES_TREE_INCLUDE_TREE_H_

class Tree {
 private:
    struct Node {
        int data;
        int count;
        Node* left, * right;
        Node();
    };  // ��������� ������� ������
    Node* root;  // ������ ������
    Node* AddNode(Node* node, int data, int count = 1);
    Node* DelNode(Node* node, int data);
    Node* CopyNode(Node* node, Node* copyroot);
    int SearchNode(Node* node, int data);
    void DelAll(Node* node);
 public:
    Tree();  // ����������� �� ���������
    Tree(const Tree& t);  // ����������� �����������
    bool IsEmpty() const;  // ��������, ���� �� �������� � ������
    ~Tree();
    void Add(int data);  // �������� �������
    void Del(int data);  // ������ �������
    int Search(int data);  // ����� ��������
    Tree& operator=(const Tree& t); // �������� ������������
    void Clear();  // �������� ������
};


#endif  // MODULES_TREE_INCLUDE_TREE_H_
